#include <fcntl.h>
#include <dirent.h>
#include <linux/input.h>
#include <sys/stat.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>

#include <mutex>

#include <chrono>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include "std_msgs/msg/string.hpp"

#include "std_msgs/msg/int32.hpp"
#include "geometry_msgs/msg/twist.h"
#include "tf2_ros/transform_broadcaster.h"
#include "nav_msgs/msg/odometry.hpp"
#include "ros2_drive_package_msg/msg/ctrl_cmd.hpp"
#include "ros2_drive_package_msg/msg/io_cmd.hpp"
#include "ros2_drive_package_msg/msg/ctrl_fb.hpp"
#include "ros2_drive_package_msg/msg/l_wheel_fb.hpp"
#include "ros2_drive_package_msg/msg/r_wheel_fb.hpp"
#include "ros2_drive_package_msg/msg/io_fb.hpp"
#include "ros2_drive_package_msg/msg/free_ctrl_cmd.hpp"
#include "ros2_drive_package_msg/msg/bms_fb.hpp"
#include "ros2_drive_package_msg/msg/bms_flag_fb.hpp"


#include <tf2/convert.h>
#include <tf2_ros/buffer_interface.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

#include "ros2_drive_package_can_ctrol/controlcan.h"

#include "sensor_msgs/msg/imu.h"

#include <tf2_ros/transform_broadcaster.h>

#include <net/if.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/types.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


#include <string>

#include <linux/can.h>
#include <linux/can/raw.h>

using namespace std::chrono_literals;

class ros2_drive_package_can_ctrol: public rclcpp::Node
{
		public:
				ros2_drive_package_can_ctrol()
						: Node("ros2_drive_package_can_ctrol")
				{


						RCLCPP_INFO(this->get_logger(), "Node inited:'");
						init_can();
						ctrl_cmd_sub_ = this->create_subscription<ros2_drive_package_msg::msg::CtrlCmd>("ctrl_cmd", 5, std::bind(&ros2_drive_package_can_ctrol::ctrl_cmdCallBack, this, std::placeholders::_1));
						io_cmd_sub_ = this->create_subscription<ros2_drive_package_msg::msg::IoCmd>("io_cmd", 5, std::bind(&ros2_drive_package_can_ctrol::io_cmdCallBack, this, std::placeholders::_1));
						free_ctrl_cmd_sub_ = this->create_subscription<ros2_drive_package_msg::msg::FreeCtrlCmd>("rear_free_ctrl_cmd", 5, std::bind(&ros2_drive_package_can_ctrol::free_ctrl_cmdCallBack, this, std::placeholders::_1));

						cmd_sub_ = this->create_subscription<geometry_msgs::msg::Twist>("cmd_vel", 5, std::bind(&ros2_drive_package_can_ctrol::cmdCallBack, this, std::placeholders::_1));

						ctrl_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::CtrlFb>("ctrl_fb",5);
						io_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::IoFb>("io_fb",5);
						r_wheel_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::RWheelFb>("r_wheel_fb",5);
						l_wheel_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::LWheelFb>("l_wheel_fb",5);
						bms_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::BmsFb>("bms_fb",5);
						bms_flag_fb_pub_ = this->create_publisher<ros2_drive_package_msg::msg::BmsFlagFb>("bms_flag_fb",5);


						odom_pub_ = this->create_publisher<nav_msgs::msg::Odometry>("odom", 5);


						timer_ = this->create_wall_timer(1ms, std::bind(&ros2_drive_package_can_ctrol::timer_callback, this));
						//						clock_ = this->get_clock();
						last_time = this->now();

						odom_broadcaster = std::make_shared<tf2_ros::TransformBroadcaster>(this);

						this->declare_parameter<std::string>("odom_frame", "odom");
						timer_odom_Frame_ = this->create_wall_timer(
								1000ms, std::bind(&ros2_drive_package_can_ctrol::respond_odom_frame, this));

						//this->declare_parameter<std::string>("base_link_frame", "base_link");
						this->declare_parameter<std::string>("base_link_frame", "base_footprint");
						timer_base_link_Frame_ = this->create_wall_timer(
								1000ms, std::bind(&ros2_drive_package_can_ctrol::respond_base_link_frame, this));

						this->declare_parameter<bool>("tfUsed", true);
						timer_tfUsed_ = this->create_wall_timer(
								1000ms, std::bind(&ros2_drive_package_can_ctrol::respond_tfUsed, this));

				}
						
				void respond_odom_frame()
				{
					this->get_parameter("odom_frame", odomFrame_);
					RCLCPP_INFO(this->get_logger(), "odom_frame: %s", odomFrame_.c_str());
				}
				void respond_base_link_frame()
				{
					this->get_parameter("base_link_frame", baseFrame_);
					RCLCPP_INFO(this->get_logger(), "base_link_frame: %s", baseFrame_.c_str());
				}
				void respond_tfUsed()
				{
					this->get_parameter("tfUsed", tfUsed_);
					RCLCPP_INFO(this->get_logger(), "tfUsed: %d", tfUsed_);
				}

				void io_cmdCallBack(const ros2_drive_package_msg::msg::IoCmd::SharedPtr msg);
				void ctrl_cmdCallBack(const ros2_drive_package_msg::msg::CtrlCmd::SharedPtr msg);
				void free_ctrl_cmdCallBack(const ros2_drive_package_msg::msg::FreeCtrlCmd::SharedPtr msg);
				void cmdCallBack(const geometry_msgs::msg::Twist::SharedPtr msg);
				void odomPub(float linear,float angular);
				void recvData();
				void sendData();
				void init_can();

				~ros2_drive_package_can_ctrol() {
					close(dev_handler_);
				}
		private:
				rclcpp::Publisher<ros2_drive_package_msg::msg::CtrlFb>::SharedPtr ctrl_fb_pub_;
				rclcpp::Publisher<ros2_drive_package_msg::msg::LWheelFb>::SharedPtr l_wheel_fb_pub_;
				rclcpp::Publisher<ros2_drive_package_msg::msg::RWheelFb>::SharedPtr r_wheel_fb_pub_;
				rclcpp::Publisher<ros2_drive_package_msg::msg::IoFb>::SharedPtr io_fb_pub_;
				rclcpp::Publisher<ros2_drive_package_msg::msg::BmsFb>::SharedPtr bms_fb_pub_;
				rclcpp::Publisher<ros2_drive_package_msg::msg::BmsFlagFb>::SharedPtr bms_flag_fb_pub_;

				rclcpp::Publisher<nav_msgs::msg::Odometry>::SharedPtr odom_pub_;

				rclcpp::Subscription<ros2_drive_package_msg::msg::CtrlCmd>::SharedPtr ctrl_cmd_sub_;
				rclcpp::Subscription<ros2_drive_package_msg::msg::IoCmd>::SharedPtr io_cmd_sub_;
				rclcpp::Subscription<ros2_drive_package_msg::msg::FreeCtrlCmd>::SharedPtr free_ctrl_cmd_sub_;


				rclcpp::Subscription<geometry_msgs::msg::Twist>::SharedPtr cmd_sub_;


				std::string odomFrame_, baseFrame_;
				bool tfUsed_;


				rclcpp::TimerBase::SharedPtr timer_;
				void timer_callback()
				{
					recvData();
				}

				std::mutex cmd_mutex_;

				unsigned char sendData_u_io_[8] = {0};
				unsigned char sendData_u_vel_[8] = {0};

				int dev_handler_;
				can_frame send_frames_[2];
				can_frame recv_frames_[1];


				rclcpp::Clock::SharedPtr clock_;
				rclcpp::Time last_time;
				rclcpp::Time current_time;

				std::shared_ptr<tf2_ros::TransformBroadcaster> odom_broadcaster;

				rclcpp::TimerBase::SharedPtr timer_odom_Frame_;
				rclcpp::TimerBase::SharedPtr timer_base_link_Frame_;
				rclcpp::TimerBase::SharedPtr timer_tfUsed_;
				//VCI_CAN_OBJ send[1];

};

//
//void CanControl::cmdCallBack(const geometry_msgs::Twist msg)
void ros2_drive_package_can_ctrol::cmdCallBack(const geometry_msgs::msg::Twist::SharedPtr msg)
{
	short linear = msg->linear.x * 1000;
	short angular = msg->angular.z / 3.14 * 180 * 100;
	int gear = 3;
	static unsigned char count6 = 0;

	cmd_mutex_.lock();

	memset(sendData_u_vel_,0,8);

	sendData_u_vel_[0] = sendData_u_vel_[0] | (0x0f & gear);

	sendData_u_vel_[0] = sendData_u_vel_[0] | (0xf0 & ((linear & 0x0f) << 4));

	sendData_u_vel_[1] = (linear >> 4) & 0xff;

	sendData_u_vel_[2] = sendData_u_vel_[2] | (0x0f & (linear >> 12));


	sendData_u_vel_[2] = sendData_u_vel_[2] | (0xf0 & ((angular & 0x0f) << 4));

	sendData_u_vel_[3] = (angular >> 4) & 0xff;

	sendData_u_vel_[4] = sendData_u_vel_[4] | (0x0f & (angular >> 12));


	count6 ++;

	if(count6 == 16)	count6 = 0;

	sendData_u_vel_[6] =  count6 << 4;


	sendData_u_vel_[7] = sendData_u_vel_[0] ^ sendData_u_vel_[1] ^ sendData_u_vel_[2] ^ sendData_u_vel_[3] ^ sendData_u_vel_[4] ^ sendData_u_vel_[5] ^ sendData_u_vel_[6];

	send_frames_[1].can_id = 0x98C4D1D0;
	send_frames_[1].can_dlc = 8;

	memcpy(send_frames_[1].data, sendData_u_vel_, 8);

	int ret = write(dev_handler_, &send_frames_[1], sizeof(send_frames_[1]));
	if (ret <= 0) 
	{
		RCLCPP_ERROR(this->get_logger(),"send message failed, error code: %d",ret);
	}


	//	odomPub(msg.linear.x,msg.angular.z);

	cmd_mutex_.unlock();
}

void ros2_drive_package_can_ctrol::io_cmdCallBack(const ros2_drive_package_msg::msg::IoCmd::SharedPtr msg)
{

		static unsigned char count_1 = 0;

		cmd_mutex_.lock();

		memset(sendData_u_io_,0,8);

		sendData_u_io_[0] = 0xff;
		if(msg->io_cmd_lamp_ctrl)
			sendData_u_io_[0] &= 0xff;
		else sendData_u_io_[0] &= 0xfe;
		if(msg->io_cmd_unlock)
			sendData_u_io_[0] &= 0xff;
		else sendData_u_io_[0] &= 0xfd;

		sendData_u_io_[1] = 0xff;
		if(msg->io_cmd_lower_beam_headlamp)
			sendData_u_io_[1] &= 0xff;
		else sendData_u_io_[1] &= 0xfe;
		if(msg->io_cmd_upper_beam_headlamp)
			sendData_u_io_[1] &= 0xff;
		else sendData_u_io_[1] &= 0xfd;

		if(msg->io_cmd_turn_lamp == 0)
			sendData_u_io_[1] &= 0xf3;
		if(msg->io_cmd_turn_lamp == 1)
			sendData_u_io_[1] &= 0xf7;
		if(msg->io_cmd_turn_lamp == 2)
			sendData_u_io_[1] &= 0xfb;

		if(msg->io_cmd_braking_lamp)
			sendData_u_io_[1] &= 0xff;
		else sendData_u_io_[1] &= 0xef;
		if(msg->io_cmd_clearance_lamp)
			sendData_u_io_[1] &= 0xff;
		else sendData_u_io_[1] &= 0xdf;
		if(msg->io_cmd_fog_lamp)
			sendData_u_io_[1] &= 0xff;
		else sendData_u_io_[1] &= 0xbf;

		sendData_u_io_[2] = msg->io_cmd_speaker;

		sendData_u_io_[3] = 0;
		sendData_u_io_[4] = 0;
		sendData_u_io_[5] = 0;

		count_1 ++;
		if(count_1 == 16)	count_1 = 0;

		sendData_u_io_[6] =  count_1 << 4;

		sendData_u_io_[7] = sendData_u_io_[0] ^ sendData_u_io_[1] ^ sendData_u_io_[2] ^ sendData_u_io_[3] ^ sendData_u_io_[4] ^ sendData_u_io_[5] ^ sendData_u_io_[6];

		send_frames_[0].can_id = 0x98C4D7D0;
		send_frames_[0].can_dlc = 8;

		memcpy(send_frames_[0].data, sendData_u_io_, 8);

		int ret = write(dev_handler_, &send_frames_[0], sizeof(send_frames_[0]));
		if (ret <= 0) 
		{
			RCLCPP_ERROR(this->get_logger(),"send message failed, error code: %d",ret);
		}
}

//
void ros2_drive_package_can_ctrol::ctrl_cmdCallBack(const ros2_drive_package_msg::msg::CtrlCmd::SharedPtr msg)
{

		short linear = msg->ctrl_cmd_linear * 1000;
		short angular = msg->ctrl_cmd_angular * 100;
		int gear = msg->ctrl_cmd_gear;
		static unsigned char count = 0;

		cmd_mutex_.lock();

		memset(sendData_u_vel_,0,8);

		sendData_u_vel_[0] = sendData_u_vel_[0] | (0x0f & msg->ctrl_cmd_gear);

		sendData_u_vel_[0] = sendData_u_vel_[0] | (0xf0 & ((linear & 0x0f) << 4));

		sendData_u_vel_[1] = (linear >> 4) & 0xff;

		sendData_u_vel_[2] = sendData_u_vel_[2] | (0x0f & (linear >> 12));


		sendData_u_vel_[2] = sendData_u_vel_[2] | (0xf0 & ((angular & 0x0f) << 4));

		sendData_u_vel_[3] = (angular >> 4) & 0xff;

		sendData_u_vel_[4] = sendData_u_vel_[4] | (0x0f & (angular >> 12));


		count ++;

		if(count == 16)	count = 0;

		sendData_u_vel_[6] =  count << 4;


		sendData_u_vel_[7] = sendData_u_vel_[0] ^ sendData_u_vel_[1] ^ sendData_u_vel_[2] ^ sendData_u_vel_[3] ^ sendData_u_vel_[4] ^ sendData_u_vel_[5] ^ sendData_u_vel_[6];

		send_frames_[1].can_id = 0x98C4D1D0;
		send_frames_[1].can_dlc = 8;

		memcpy(send_frames_[1].data, sendData_u_vel_, 8);

		int ret = write(dev_handler_, &send_frames_[1], sizeof(send_frames_[1]));
		if (ret <= 0) 
		{
			RCLCPP_ERROR(this->get_logger(), "send message failed, error code: %d",ret);
		}

		cmd_mutex_.unlock();
}

//
void ros2_drive_package_can_ctrol::free_ctrl_cmdCallBack(const ros2_drive_package_msg::msg::FreeCtrlCmd::SharedPtr msg)
{

		short linearl = msg->free_ctrl_cmd_velocity_l * 1000;
		short linearr = msg->free_ctrl_cmd_velocity_r * 1000;
		static unsigned char count_3 = 0;

		unsigned char sendData_u_tem_[8] = {0};

		cmd_mutex_.lock();

		sendData_u_tem_[0] = sendData_u_tem_[0] | (0x0f & msg->ctrl_cmd_gear);

		sendData_u_tem_[0] = sendData_u_tem_[0] | (0xf0 & ((linearl & 0x0f) << 4));

		sendData_u_tem_[1] = (linearl >> 4) & 0xff;

		sendData_u_tem_[2] = sendData_u_tem_[2] | (0x0f & (linearl >> 12));


		sendData_u_tem_[2] = sendData_u_tem_[2] | (0xf0 & ((linearr & 0x0f) << 4));

		sendData_u_tem_[3] = (linearr >> 4) & 0xff;

		sendData_u_tem_[4] = sendData_u_tem_[4] | (0x0f & (linearr >> 12));

		count_3 ++;

		if(count_3 == 16)	count_3 = 0;

		sendData_u_tem_[6] =  count_3 << 4;


		sendData_u_tem_[7] = sendData_u_tem_[0] ^ sendData_u_tem_[1] ^ sendData_u_tem_[2] ^ sendData_u_tem_[3] ^ sendData_u_tem_[4] ^ sendData_u_tem_[5] ^ sendData_u_tem_[6];

		send_frames_[1].can_id = 0x98C4D2D0;
		send_frames_[1].can_dlc = 8;

		memcpy(send_frames_[1].data, sendData_u_tem_, 8);

		int ret = write(dev_handler_, &send_frames_[1], sizeof(send_frames_[1]));
		if (ret <= 0) 
		{
			RCLCPP_INFO(this->get_logger(),"send message failed, error code: %d",ret);
		}

		cmd_mutex_.unlock();
}


//数据接收解析线程
void ros2_drive_package_can_ctrol::recvData()
{
//	RCLCPP_ERROR(this->get_logger(), "recvData()");
		if(read(dev_handler_, &recv_frames_[0], sizeof(recv_frames_[0])) >= 0)
		{
			for(int j=0;j<1;j++)
			{

	//RCLCPP_ERROR(this->get_logger(), "Frame ID: %x", recv_frames_[0].can_id);
				switch (recv_frames_[0].can_id)
				{
					//
					case 0x98C4D1EF:
						{
							ros2_drive_package_msg::msg::CtrlFb msg;
							msg.ctrl_fb_target_gear = 0x0f & recv_frames_[0].data[0];

							msg.ctrl_fb_linear = (float)((short)((recv_frames_[0].data[2] & 0x0f) << 12 | recv_frames_[0].data[1] << 4 | (recv_frames_[0].data[0] & 0xf0) >> 4)) / 1000;

							msg.ctrl_fb_angular = (float)((short)((recv_frames_[0].data[4] & 0x0f) << 12 | recv_frames_[0].data[3] << 4 | (recv_frames_[0].data[2] & 0xf0) >> 4)) / 100;

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								ctrl_fb_pub_->publish(msg);
								static int n = 0;
								odomPub(msg.ctrl_fb_linear,msg.ctrl_fb_angular/180*3.14 * 0.65);
							} else {
								RCLCPP_ERROR(this->get_logger(), "ODOM CRC error");
							}

							break;
						}


						//
					case 0x98C4D7EF:
						{
							ros2_drive_package_msg::msg::LWheelFb msg;
							msg.l_wheel_fb_velocity = (float)((short)(recv_frames_[0].data[1] << 8 | recv_frames_[0].data[0])) / 1000;

							msg.l_wheel_fb_pulse = (int)(recv_frames_[0].data[5] << 24 | recv_frames_[0].data[4] << 16 | recv_frames_[0].data[3] << 8 | recv_frames_[0].data[2]);

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								l_wheel_fb_pub_->publish(msg);
							}

							break;
						}

						//
					case 0x98C4D8EF:
						{
							ros2_drive_package_msg::msg::RWheelFb msg;
							msg.r_wheel_fb_velocity = (float)((short)(recv_frames_[0].data[1] << 8 | recv_frames_[0].data[0])) / 1000;

							msg.r_wheel_fb_pulse = (int)(recv_frames_[0].data[5] << 24 | recv_frames_[0].data[4] << 16 | recv_frames_[0].data[3] << 8 | recv_frames_[0].data[2]);

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								r_wheel_fb_pub_->publish(msg);
							}

							break;
						}

						//io反馈
					case 0x98C4DAEF:
						{
							ros2_drive_package_msg::msg::IoFb msg;
							if(0x01 & recv_frames_[0].data[0]) msg.io_fb_lamp_ctrl = true;	else msg.io_fb_lamp_ctrl = false;

							if(0x02 & recv_frames_[0].data[1]) msg.io_fb_unlock = true;	else msg.io_fb_unlock = false;

							if(0x01 & recv_frames_[0].data[1]) msg.io_fb_lower_beam_headlamp = true;	else msg.io_fb_lower_beam_headlamp = false;

							if(0x02 & recv_frames_[0].data[1]) msg.io_fb_upper_beam_headlamp = true;	else msg.io_fb_upper_beam_headlamp = false;

							msg.io_fb_turn_lamp = (0xc0 & recv_frames_[0].data[1]) >> 2;

							if(0x10 & recv_frames_[0].data[1]) msg.io_fb_braking_lamp = true;	else msg.io_fb_braking_lamp = false;

							if(0x20 & recv_frames_[0].data[1]) msg.io_fb_clearance_lamp = true;	else msg.io_fb_clearance_lamp = false;

							if(0x40 & recv_frames_[0].data[1]) msg.io_fb_fog_lamp = true;	else msg.io_fb_fog_lamp = false;

							if(0x01 & recv_frames_[0].data[2]) msg.io_fb_speaker = true;	else msg.io_fb_speaker = false;

							if(0x01 & recv_frames_[0].data[3]) msg.io_fb_fl_impact_sensor = true;	else msg.io_fb_fl_impact_sensor = false;

							if(0x02 & recv_frames_[0].data[3]) msg.io_fb_fm_impact_sensor = true;	else msg.io_fb_fm_impact_sensor = false;

							if(0x04 & recv_frames_[0].data[3]) msg.io_fb_fr_impact_sensor = true;	else msg.io_fb_fr_impact_sensor = false;

							if(0x08 & recv_frames_[0].data[3]) msg.io_fb_rl_impact_sensor = true;	else msg.io_fb_rl_impact_sensor = false;

							if(0x10 & recv_frames_[0].data[3]) msg.io_fb_rm_impact_sensor = true;	else msg.io_fb_rm_impact_sensor = false;

							if(0x20 & recv_frames_[0].data[3]) msg.io_fb_rr_impact_sensor = true;	else msg.io_fb_rr_impact_sensor = false;

							if(0x01 & recv_frames_[0].data[4]) msg.io_fb_fl_drop_sensor = true;	else msg.io_fb_fl_drop_sensor = false;

							if(0x02 & recv_frames_[0].data[4]) msg.io_fb_fm_drop_sensor = true;	else msg.io_fb_fm_drop_sensor = false;

							if(0x04 & recv_frames_[0].data[4]) msg.io_fb_fr_drop_sensor = true;	else msg.io_fb_fr_drop_sensor = false;

							if(0x08 & recv_frames_[0].data[4]) msg.io_fb_rl_drop_sensor = true;	else msg.io_fb_rl_drop_sensor = false;

							if(0x10 & recv_frames_[0].data[4]) msg.io_fb_rm_drop_sensor = true;	else msg.io_fb_rm_drop_sensor = false;

							if(0x20 & recv_frames_[0].data[4]) msg.io_fb_rr_drop_sensor = true;	else msg.io_fb_rr_drop_sensor = false;

							if(0x01 & recv_frames_[0].data[5]) msg.io_fb_estop = true;	else msg.io_fb_estop = false;

							if(0x02 & recv_frames_[0].data[5]) msg.io_fb_joypad_ctrl = true;	else msg.io_fb_joypad_ctrl = false;

							if(0x04 & recv_frames_[0].data[5]) msg.io_fb_charge_state = true;	else msg.io_fb_charge_state = false;

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								io_fb_pub_->publish(msg);
							}

							break;
						}


						//bms反馈
					case 0x98C4E1EF:
						{
							ros2_drive_package_msg::msg::BmsFb msg;
							msg.bms_fb_voltage = (float)((unsigned short)(recv_frames_[0].data[1] << 8 | recv_frames_[0].data[0])) / 100;

							msg.bms_fb_current = (float)((short)(recv_frames_[0].data[3] << 8 | recv_frames_[0].data[2])) / 100;

							msg.bms_fb_remaining_capacity = (float)((unsigned short)(recv_frames_[0].data[5] << 8 | recv_frames_[0].data[4])) / 100;

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								bms_fb_pub_->publish(msg);
							}

							break;
						}

						//bms_flag反馈
					case 0x98C4E2EF:
						{
							ros2_drive_package_msg::msg::BmsFlagFb msg;
							msg.bms_flag_fb_soc = recv_frames_[0].data[0];

							if(0x01 & recv_frames_[0].data[1]) msg.bms_flag_fb_single_ov = true;	else msg.bms_flag_fb_single_ov = false;

							if(0x02 & recv_frames_[0].data[1]) msg.bms_flag_fb_single_uv = true;	else msg.bms_flag_fb_single_uv = false;

							if(0x04 & recv_frames_[0].data[1]) msg.bms_flag_fb_ov = true;	else msg.bms_flag_fb_ov = false;

							if(0x08 & recv_frames_[0].data[1]) msg.bms_flag_fb_uv = true;	else msg.bms_flag_fb_uv = false;

							if(0x10 & recv_frames_[0].data[1]) msg.bms_flag_fb_charge_ot = true;	else msg.bms_flag_fb_charge_ot = false;

							if(0x20 & recv_frames_[0].data[1]) msg.bms_flag_fb_charge_ut = true;	else msg.bms_flag_fb_charge_ut = false;

							if(0x40 & recv_frames_[0].data[1]) msg.bms_flag_fb_discharge_ot = true;	else msg.bms_flag_fb_discharge_ot = false;

							if(0x80 & recv_frames_[0].data[1]) msg.bms_flag_fb_discharge_ut = true;	else msg.bms_flag_fb_discharge_ut = false;

							if(0x01 & recv_frames_[0].data[2]) msg.bms_flag_fb_charge_oc = true;	else msg.bms_flag_fb_charge_oc = false;

							if(0x02 & recv_frames_[0].data[2]) msg.bms_flag_fb_discharge_oc = true;	else msg.bms_flag_fb_discharge_oc = false;

							if(0x04 & recv_frames_[0].data[2]) msg.bms_flag_fb_short = true;	else msg.bms_flag_fb_short = false;

							if(0x08 & recv_frames_[0].data[2]) msg.bms_flag_fb_ic_error = true;	else msg.bms_flag_fb_ic_error = false;

							if(0x10 & recv_frames_[0].data[2]) msg.bms_flag_fb_lock_mos = true;	else msg.bms_flag_fb_lock_mos = false;

							if(0x20 & recv_frames_[0].data[2]) msg.bms_flag_fb_charge_flag = true;	else msg.bms_flag_fb_charge_flag = false;

							msg.bms_flag_fb_hight_temperature = (float)((short)(recv_frames_[0].data[4] << 4 | recv_frames_[0].data[3] >> 4)) / 10;

							msg.bms_flag_fb_low_temperature = (float)((short)((recv_frames_[0].data[6] & 0x0f) << 8 | recv_frames_[0].data[5])) / 10;

							unsigned char crc = recv_frames_[0].data[0] ^ recv_frames_[0].data[1] ^ recv_frames_[0].data[2] ^ recv_frames_[0].data[3] ^ recv_frames_[0].data[4] ^ recv_frames_[0].data[5] ^ recv_frames_[0].data[6];

							if(crc == recv_frames_[0].data[7])
							{

								bms_flag_fb_pub_->publish(msg);
							}

							break;
						}

					default:
						break;
				}

			}


		}

}

void ros2_drive_package_can_ctrol::odomPub(float linear,float angular)
{
	static double x = 0.0;
	static double y = 0.0;
	static double th = 0.0;

	double vx = linear;
	double vth = angular;

 	current_time = this->now();
	//compute odometry in a typical way given the velocities of the robot
	double dt = (current_time.seconds() - last_time.seconds());

	double delta_x = (vx * cos(th)) * dt;
	double delta_y = (vx * sin(th)) * dt;
	double delta_th = vth * dt;

	x += delta_x;
	y += delta_y;
	th += delta_th;

	//转换为四元素
	tf2::Quaternion tf2_quat;
	tf2_quat.setRPY(0.0, 0.0, th);
	//tf2::toMsg(tf2_quat);
	geometry_msgs::msg::Quaternion odom_quat = tf2::toMsg(tf2_quat);


	geometry_msgs::msg::TransformStamped odom_trans;
	odom_trans.header.stamp = current_time;
	odom_trans.header.frame_id = odomFrame_;
	odom_trans.child_frame_id = baseFrame_;

	odom_trans.transform.translation.x = x;
	odom_trans.transform.translation.y = y;
	odom_trans.transform.translation.z = 0.0;
	odom_trans.transform.rotation = odom_quat;

	//std::cout << odom_quat << std::endl;
	//是否发布tf转换
	if(tfUsed_)
		odom_broadcaster->sendTransform(odom_trans);

	//next, we'll publish the odometry message over ROS
	nav_msgs::msg::Odometry odom;
	odom.header.stamp = current_time;
	odom.header.frame_id = odomFrame_;

	//set the position
	odom.pose.pose.position.x = x;
	odom.pose.pose.position.y = y;
	odom.pose.pose.position.z = 0.0;
	odom.pose.pose.orientation = odom_quat;

	//set the velocity
	odom.child_frame_id = baseFrame_;
	odom.twist.twist.linear.x = vx;
	odom.twist.twist.linear.y = 0.0;
	odom.twist.twist.angular.z = vth;

	odom.pose.covariance[0]  = 0.1;   	// x的协方差 
	odom.pose.covariance[7]  = 0.1;		// y的协方差
	odom.pose.covariance[35] = 0.2;   	//theta的协方差

	odom.pose.covariance[14] = 1e10; 	// set a non-zero covariance on unused    theta x axis
	odom.pose.covariance[21] = 1e10; 	// dimensions (z, pitch and roll); this   theta y  axis
	odom.pose.covariance[28] = 1e10; 	// is a requirement of robot_pose_ekf     theta z axis

	//publish the message
	odom_pub_->publish(odom);

	last_time = current_time;

}
//数据发送线程
void ros2_drive_package_can_ctrol::sendData()
{
	//复位CAN1通道。
	VCI_ResetCAN(VCI_USBCAN2, 0, 0);
	usleep(100000);

	//关闭设备。
	VCI_CloseDevice(VCI_USBCAN2,0);	
	RCLCPP_INFO(this->get_logger(), "send Data'");
}

void ros2_drive_package_can_ctrol::init_can()
{

	//打开设备
	dev_handler_ = socket(PF_CAN, SOCK_RAW, CAN_RAW);
	if (dev_handler_ < 0) 
	{
		RCLCPP_ERROR(this->get_logger(),">>open can deivce error!");
		return;
	}
	else
	{
		RCLCPP_INFO(this->get_logger(),">>open can deivce success!");
	}


	struct ifreq ifr;

	std::string can_name("can0");

	strcpy(ifr.ifr_name,can_name.c_str());

	ioctl(dev_handler_,SIOCGIFINDEX, &ifr);


	// bind socket to network interface
	struct sockaddr_can addr;
	memset(&addr, 0, sizeof(addr));
	addr.can_family = AF_CAN;
	addr.can_ifindex = ifr.ifr_ifindex;
	int ret = ::bind(dev_handler_, reinterpret_cast<struct sockaddr *>(&addr),sizeof(addr));
	if (ret < 0) 
	{
		RCLCPP_ERROR(this->get_logger(),">>bind dev_handler error!\r\n");
		return;
	}
}


int main(int argc, char ** argv)
{

	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<ros2_drive_package_can_ctrol>());
	rclcpp::shutdown();

	return 0;
}
