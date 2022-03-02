// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__TrajectoryOptions __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__TrajectoryOptions __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryOptions_
{
  using Type = TrajectoryOptions_<ContainerAllocator>;

  explicit TrajectoryOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_frame = "";
      this->published_frame = "";
      this->odom_frame = "";
      this->provide_odom_frame = false;
      this->use_odometry = false;
      this->use_nav_sat = false;
      this->use_landmarks = false;
      this->publish_frame_projected_to_2d = false;
      this->num_laser_scans = 0l;
      this->num_multi_echo_laser_scans = 0l;
      this->num_subdivisions_per_laser_scan = 0l;
      this->num_point_clouds = 0l;
      this->rangefinder_sampling_ratio = 0.0;
      this->odometry_sampling_ratio = 0.0;
      this->fixed_frame_pose_sampling_ratio = 0.0;
      this->imu_sampling_ratio = 0.0;
      this->landmarks_sampling_ratio = 0.0;
      this->trajectory_builder_options_proto = "";
    }
  }

  explicit TrajectoryOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracking_frame(_alloc),
    published_frame(_alloc),
    odom_frame(_alloc),
    trajectory_builder_options_proto(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->tracking_frame = "";
      this->published_frame = "";
      this->odom_frame = "";
      this->provide_odom_frame = false;
      this->use_odometry = false;
      this->use_nav_sat = false;
      this->use_landmarks = false;
      this->publish_frame_projected_to_2d = false;
      this->num_laser_scans = 0l;
      this->num_multi_echo_laser_scans = 0l;
      this->num_subdivisions_per_laser_scan = 0l;
      this->num_point_clouds = 0l;
      this->rangefinder_sampling_ratio = 0.0;
      this->odometry_sampling_ratio = 0.0;
      this->fixed_frame_pose_sampling_ratio = 0.0;
      this->imu_sampling_ratio = 0.0;
      this->landmarks_sampling_ratio = 0.0;
      this->trajectory_builder_options_proto = "";
    }
  }

  // field types and members
  using _tracking_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _tracking_frame_type tracking_frame;
  using _published_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _published_frame_type published_frame;
  using _odom_frame_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _odom_frame_type odom_frame;
  using _provide_odom_frame_type =
    bool;
  _provide_odom_frame_type provide_odom_frame;
  using _use_odometry_type =
    bool;
  _use_odometry_type use_odometry;
  using _use_nav_sat_type =
    bool;
  _use_nav_sat_type use_nav_sat;
  using _use_landmarks_type =
    bool;
  _use_landmarks_type use_landmarks;
  using _publish_frame_projected_to_2d_type =
    bool;
  _publish_frame_projected_to_2d_type publish_frame_projected_to_2d;
  using _num_laser_scans_type =
    int32_t;
  _num_laser_scans_type num_laser_scans;
  using _num_multi_echo_laser_scans_type =
    int32_t;
  _num_multi_echo_laser_scans_type num_multi_echo_laser_scans;
  using _num_subdivisions_per_laser_scan_type =
    int32_t;
  _num_subdivisions_per_laser_scan_type num_subdivisions_per_laser_scan;
  using _num_point_clouds_type =
    int32_t;
  _num_point_clouds_type num_point_clouds;
  using _rangefinder_sampling_ratio_type =
    double;
  _rangefinder_sampling_ratio_type rangefinder_sampling_ratio;
  using _odometry_sampling_ratio_type =
    double;
  _odometry_sampling_ratio_type odometry_sampling_ratio;
  using _fixed_frame_pose_sampling_ratio_type =
    double;
  _fixed_frame_pose_sampling_ratio_type fixed_frame_pose_sampling_ratio;
  using _imu_sampling_ratio_type =
    double;
  _imu_sampling_ratio_type imu_sampling_ratio;
  using _landmarks_sampling_ratio_type =
    double;
  _landmarks_sampling_ratio_type landmarks_sampling_ratio;
  using _trajectory_builder_options_proto_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _trajectory_builder_options_proto_type trajectory_builder_options_proto;

  // setters for named parameter idiom
  Type & set__tracking_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->tracking_frame = _arg;
    return *this;
  }
  Type & set__published_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->published_frame = _arg;
    return *this;
  }
  Type & set__odom_frame(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->odom_frame = _arg;
    return *this;
  }
  Type & set__provide_odom_frame(
    const bool & _arg)
  {
    this->provide_odom_frame = _arg;
    return *this;
  }
  Type & set__use_odometry(
    const bool & _arg)
  {
    this->use_odometry = _arg;
    return *this;
  }
  Type & set__use_nav_sat(
    const bool & _arg)
  {
    this->use_nav_sat = _arg;
    return *this;
  }
  Type & set__use_landmarks(
    const bool & _arg)
  {
    this->use_landmarks = _arg;
    return *this;
  }
  Type & set__publish_frame_projected_to_2d(
    const bool & _arg)
  {
    this->publish_frame_projected_to_2d = _arg;
    return *this;
  }
  Type & set__num_laser_scans(
    const int32_t & _arg)
  {
    this->num_laser_scans = _arg;
    return *this;
  }
  Type & set__num_multi_echo_laser_scans(
    const int32_t & _arg)
  {
    this->num_multi_echo_laser_scans = _arg;
    return *this;
  }
  Type & set__num_subdivisions_per_laser_scan(
    const int32_t & _arg)
  {
    this->num_subdivisions_per_laser_scan = _arg;
    return *this;
  }
  Type & set__num_point_clouds(
    const int32_t & _arg)
  {
    this->num_point_clouds = _arg;
    return *this;
  }
  Type & set__rangefinder_sampling_ratio(
    const double & _arg)
  {
    this->rangefinder_sampling_ratio = _arg;
    return *this;
  }
  Type & set__odometry_sampling_ratio(
    const double & _arg)
  {
    this->odometry_sampling_ratio = _arg;
    return *this;
  }
  Type & set__fixed_frame_pose_sampling_ratio(
    const double & _arg)
  {
    this->fixed_frame_pose_sampling_ratio = _arg;
    return *this;
  }
  Type & set__imu_sampling_ratio(
    const double & _arg)
  {
    this->imu_sampling_ratio = _arg;
    return *this;
  }
  Type & set__landmarks_sampling_ratio(
    const double & _arg)
  {
    this->landmarks_sampling_ratio = _arg;
    return *this;
  }
  Type & set__trajectory_builder_options_proto(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->trajectory_builder_options_proto = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__TrajectoryOptions
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__TrajectoryOptions
    std::shared_ptr<cartographer_ros_msgs::msg::TrajectoryOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryOptions_ & other) const
  {
    if (this->tracking_frame != other.tracking_frame) {
      return false;
    }
    if (this->published_frame != other.published_frame) {
      return false;
    }
    if (this->odom_frame != other.odom_frame) {
      return false;
    }
    if (this->provide_odom_frame != other.provide_odom_frame) {
      return false;
    }
    if (this->use_odometry != other.use_odometry) {
      return false;
    }
    if (this->use_nav_sat != other.use_nav_sat) {
      return false;
    }
    if (this->use_landmarks != other.use_landmarks) {
      return false;
    }
    if (this->publish_frame_projected_to_2d != other.publish_frame_projected_to_2d) {
      return false;
    }
    if (this->num_laser_scans != other.num_laser_scans) {
      return false;
    }
    if (this->num_multi_echo_laser_scans != other.num_multi_echo_laser_scans) {
      return false;
    }
    if (this->num_subdivisions_per_laser_scan != other.num_subdivisions_per_laser_scan) {
      return false;
    }
    if (this->num_point_clouds != other.num_point_clouds) {
      return false;
    }
    if (this->rangefinder_sampling_ratio != other.rangefinder_sampling_ratio) {
      return false;
    }
    if (this->odometry_sampling_ratio != other.odometry_sampling_ratio) {
      return false;
    }
    if (this->fixed_frame_pose_sampling_ratio != other.fixed_frame_pose_sampling_ratio) {
      return false;
    }
    if (this->imu_sampling_ratio != other.imu_sampling_ratio) {
      return false;
    }
    if (this->landmarks_sampling_ratio != other.landmarks_sampling_ratio) {
      return false;
    }
    if (this->trajectory_builder_options_proto != other.trajectory_builder_options_proto) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryOptions_

// alias to use template instance with default allocator
using TrajectoryOptions =
  cartographer_ros_msgs::msg::TrajectoryOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__STRUCT_HPP_
