#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <boost/thread/mutex.hpp>
#include "rclcpp/rclcpp.hpp"
#include "ros2_rada_msg/msg/rada.hpp"
#include "rada_uart.hpp"

using namespace std::chrono_literals;
using namespace std;

/* This example creates a subclass of Node and uses std::bind() to register a
* member function as a callback from the timer. */

class RadaPublisher : public rclcpp::Node
{
  public:
    RadaPublisher(const std::string &name, const std::string &output, const std::string &uart_path)
    : Node(name), fd(-1), rada(output)
    {

      unsigned char  w_buf[8] = {0x01, 0x06, 0x02, 0x02, 0x00, 0x01, 0xe8, 0x72};
      size_t w_len = sizeof(w_buf);
      unsigned char r_buf[10] = {0};
      int ret = -1;

	  
      fd = uart_open(uart_path.c_str());
      uart_setup(fd, B9600);
      ret = uart_write(fd,w_buf,w_len);
      if(ret == -1)
      {
	      fprintf(stderr,"uart write failed!\n");
	      exit(EXIT_FAILURE);
      }
      ret = uart_read(fd,r_buf,w_len);
      if(ret == -1)
      {
	      fprintf(stderr,"uart read failed!\n");
	      exit(EXIT_FAILURE);
      }

      publisher_ = this->create_publisher<ros2_rada_msg::msg::Rada>(output, 10);
      timer_ = this->create_wall_timer(
		      100ms, std::bind(&RadaPublisher::timer_callback, this));
    }

    ~RadaPublisher() {
	uart_close(fd);
    }


  private:
    void timer_callback()
    {

	    auto message = ros2_rada_msg::msg::Rada();

	    mutex.lock();
	    int ret = -1;
	    unsigned char r_buf[10]={0};
	    ret = uart_read(fd,r_buf,10);
	    if(ret == -1)
	    {
		    fprintf(stderr,"uart read failed!\n");
		    exit(EXIT_FAILURE);
	    }
	    message.r1 = (r_buf[1] << 8) + r_buf[2];
	    message.r2 = (r_buf[3] << 8) + r_buf[4];
	    message.r3 = (r_buf[5] << 8) + r_buf[6];
	    message.r4 = (r_buf[7] << 8) + r_buf[8];
	    message.crc = (r_buf[0] + r_buf[1] + r_buf[2] + r_buf[3] + r_buf[4] + r_buf[5] + r_buf[6] + r_buf[7] + r_buf[8]) & 0x00ff;

	    if (message.crc == r_buf[9]) {
		    //RCLCPP_INFO(this->get_logger()," %s: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x  n: %d ", rada.c_str(), r_buf[0], r_buf[1], r_buf[2], r_buf[3], r_buf[4], r_buf[5],r_buf[6], r_buf[7], r_buf[8], r_buf[9] ,ret);
		    //RCLCPP_INFO(this->get_logger(),"CRC: %04x\n", (r_buf[0] + r_buf[1] + r_buf[2] + r_buf[3] + r_buf[4] + r_buf[5] + r_buf[6] + r_buf[7] + r_buf[8]) & 0x00ff);
		    publisher_->publish(message);
	    }
	    else {
		    RCLCPP_INFO(this->get_logger()," %s: %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x  n: %d ",rada, r_buf[0], r_buf[1], r_buf[2], r_buf[3], r_buf[4], r_buf[5],r_buf[6], r_buf[7], r_buf[8], r_buf[9] ,ret);
		    RCLCPP_INFO(this->get_logger(),"CRC: %04x\n", (r_buf[0] + r_buf[1] + r_buf[2] + r_buf[3] + r_buf[4] + r_buf[5] + r_buf[6] + r_buf[7] + r_buf[8]) & 0x00ff);
		    RCLCPP_INFO(this->get_logger(), "%s CRC Wrong!\n", rada.c_str());
	    }
	    mutex.unlock();

    }


    int fd;
    boost::mutex mutex;
	std::string rada;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<ros2_rada_msg::msg::Rada>::SharedPtr publisher_;
};

int main(int argc, char * argv[])
{
		rclcpp::init(argc, argv);
		using SingleThreadedExecutor = rclcpp::executors::SingleThreadedExecutor;
		SingleThreadedExecutor executor;
		auto rada1 = std::make_shared<RadaPublisher>("RadaPublisher1", "rada1", "/dev/rada1");

		executor.add_node(rada1);
		std::thread executor_thread(std::bind(&SingleThreadedExecutor::spin, &executor));

		auto rada2 = std::make_shared<RadaPublisher>("RadaPublisher2", "rada2", "/dev/rada2");
		SingleThreadedExecutor executor1;
		executor1.add_node(rada2);

		std::thread executor_thread1(std::bind(&SingleThreadedExecutor::spin, &executor1));

		executor_thread1.join();
		executor_thread.join();

		rclcpp::shutdown();
  return 0;
}
