// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/TrajectoryOptions.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/trajectory_options__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryOptions_trajectory_builder_options_proto
{
public:
  explicit Init_TrajectoryOptions_trajectory_builder_options_proto(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::TrajectoryOptions trajectory_builder_options_proto(::cartographer_ros_msgs::msg::TrajectoryOptions::_trajectory_builder_options_proto_type arg)
  {
    msg_.trajectory_builder_options_proto = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_landmarks_sampling_ratio
{
public:
  explicit Init_TrajectoryOptions_landmarks_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_trajectory_builder_options_proto landmarks_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions::_landmarks_sampling_ratio_type arg)
  {
    msg_.landmarks_sampling_ratio = std::move(arg);
    return Init_TrajectoryOptions_trajectory_builder_options_proto(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_imu_sampling_ratio
{
public:
  explicit Init_TrajectoryOptions_imu_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_landmarks_sampling_ratio imu_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions::_imu_sampling_ratio_type arg)
  {
    msg_.imu_sampling_ratio = std::move(arg);
    return Init_TrajectoryOptions_landmarks_sampling_ratio(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_fixed_frame_pose_sampling_ratio
{
public:
  explicit Init_TrajectoryOptions_fixed_frame_pose_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_imu_sampling_ratio fixed_frame_pose_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions::_fixed_frame_pose_sampling_ratio_type arg)
  {
    msg_.fixed_frame_pose_sampling_ratio = std::move(arg);
    return Init_TrajectoryOptions_imu_sampling_ratio(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_odometry_sampling_ratio
{
public:
  explicit Init_TrajectoryOptions_odometry_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_fixed_frame_pose_sampling_ratio odometry_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions::_odometry_sampling_ratio_type arg)
  {
    msg_.odometry_sampling_ratio = std::move(arg);
    return Init_TrajectoryOptions_fixed_frame_pose_sampling_ratio(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_rangefinder_sampling_ratio
{
public:
  explicit Init_TrajectoryOptions_rangefinder_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_odometry_sampling_ratio rangefinder_sampling_ratio(::cartographer_ros_msgs::msg::TrajectoryOptions::_rangefinder_sampling_ratio_type arg)
  {
    msg_.rangefinder_sampling_ratio = std::move(arg);
    return Init_TrajectoryOptions_odometry_sampling_ratio(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_num_point_clouds
{
public:
  explicit Init_TrajectoryOptions_num_point_clouds(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_rangefinder_sampling_ratio num_point_clouds(::cartographer_ros_msgs::msg::TrajectoryOptions::_num_point_clouds_type arg)
  {
    msg_.num_point_clouds = std::move(arg);
    return Init_TrajectoryOptions_rangefinder_sampling_ratio(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_num_subdivisions_per_laser_scan
{
public:
  explicit Init_TrajectoryOptions_num_subdivisions_per_laser_scan(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_num_point_clouds num_subdivisions_per_laser_scan(::cartographer_ros_msgs::msg::TrajectoryOptions::_num_subdivisions_per_laser_scan_type arg)
  {
    msg_.num_subdivisions_per_laser_scan = std::move(arg);
    return Init_TrajectoryOptions_num_point_clouds(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_num_multi_echo_laser_scans
{
public:
  explicit Init_TrajectoryOptions_num_multi_echo_laser_scans(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_num_subdivisions_per_laser_scan num_multi_echo_laser_scans(::cartographer_ros_msgs::msg::TrajectoryOptions::_num_multi_echo_laser_scans_type arg)
  {
    msg_.num_multi_echo_laser_scans = std::move(arg);
    return Init_TrajectoryOptions_num_subdivisions_per_laser_scan(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_num_laser_scans
{
public:
  explicit Init_TrajectoryOptions_num_laser_scans(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_num_multi_echo_laser_scans num_laser_scans(::cartographer_ros_msgs::msg::TrajectoryOptions::_num_laser_scans_type arg)
  {
    msg_.num_laser_scans = std::move(arg);
    return Init_TrajectoryOptions_num_multi_echo_laser_scans(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_publish_frame_projected_to_2d
{
public:
  explicit Init_TrajectoryOptions_publish_frame_projected_to_2d(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_num_laser_scans publish_frame_projected_to_2d(::cartographer_ros_msgs::msg::TrajectoryOptions::_publish_frame_projected_to_2d_type arg)
  {
    msg_.publish_frame_projected_to_2d = std::move(arg);
    return Init_TrajectoryOptions_num_laser_scans(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_use_landmarks
{
public:
  explicit Init_TrajectoryOptions_use_landmarks(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_publish_frame_projected_to_2d use_landmarks(::cartographer_ros_msgs::msg::TrajectoryOptions::_use_landmarks_type arg)
  {
    msg_.use_landmarks = std::move(arg);
    return Init_TrajectoryOptions_publish_frame_projected_to_2d(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_use_nav_sat
{
public:
  explicit Init_TrajectoryOptions_use_nav_sat(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_use_landmarks use_nav_sat(::cartographer_ros_msgs::msg::TrajectoryOptions::_use_nav_sat_type arg)
  {
    msg_.use_nav_sat = std::move(arg);
    return Init_TrajectoryOptions_use_landmarks(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_use_odometry
{
public:
  explicit Init_TrajectoryOptions_use_odometry(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_use_nav_sat use_odometry(::cartographer_ros_msgs::msg::TrajectoryOptions::_use_odometry_type arg)
  {
    msg_.use_odometry = std::move(arg);
    return Init_TrajectoryOptions_use_nav_sat(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_provide_odom_frame
{
public:
  explicit Init_TrajectoryOptions_provide_odom_frame(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_use_odometry provide_odom_frame(::cartographer_ros_msgs::msg::TrajectoryOptions::_provide_odom_frame_type arg)
  {
    msg_.provide_odom_frame = std::move(arg);
    return Init_TrajectoryOptions_use_odometry(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_odom_frame
{
public:
  explicit Init_TrajectoryOptions_odom_frame(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_provide_odom_frame odom_frame(::cartographer_ros_msgs::msg::TrajectoryOptions::_odom_frame_type arg)
  {
    msg_.odom_frame = std::move(arg);
    return Init_TrajectoryOptions_provide_odom_frame(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_published_frame
{
public:
  explicit Init_TrajectoryOptions_published_frame(::cartographer_ros_msgs::msg::TrajectoryOptions & msg)
  : msg_(msg)
  {}
  Init_TrajectoryOptions_odom_frame published_frame(::cartographer_ros_msgs::msg::TrajectoryOptions::_published_frame_type arg)
  {
    msg_.published_frame = std::move(arg);
    return Init_TrajectoryOptions_odom_frame(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

class Init_TrajectoryOptions_tracking_frame
{
public:
  Init_TrajectoryOptions_tracking_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryOptions_published_frame tracking_frame(::cartographer_ros_msgs::msg::TrajectoryOptions::_tracking_frame_type arg)
  {
    msg_.tracking_frame = std::move(arg);
    return Init_TrajectoryOptions_published_frame(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::TrajectoryOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::TrajectoryOptions>()
{
  return cartographer_ros_msgs::msg::builder::Init_TrajectoryOptions_tracking_frame();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__TRAJECTORY_OPTIONS__BUILDER_HPP_
