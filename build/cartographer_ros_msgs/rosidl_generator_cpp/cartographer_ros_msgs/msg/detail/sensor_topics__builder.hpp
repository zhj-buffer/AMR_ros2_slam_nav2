// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/sensor_topics__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorTopics_landmark_topic
{
public:
  explicit Init_SensorTopics_landmark_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::SensorTopics landmark_topic(::cartographer_ros_msgs::msg::SensorTopics::_landmark_topic_type arg)
  {
    msg_.landmark_topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_nav_sat_fix_topic
{
public:
  explicit Init_SensorTopics_nav_sat_fix_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  Init_SensorTopics_landmark_topic nav_sat_fix_topic(::cartographer_ros_msgs::msg::SensorTopics::_nav_sat_fix_topic_type arg)
  {
    msg_.nav_sat_fix_topic = std::move(arg);
    return Init_SensorTopics_landmark_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_odometry_topic
{
public:
  explicit Init_SensorTopics_odometry_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  Init_SensorTopics_nav_sat_fix_topic odometry_topic(::cartographer_ros_msgs::msg::SensorTopics::_odometry_topic_type arg)
  {
    msg_.odometry_topic = std::move(arg);
    return Init_SensorTopics_nav_sat_fix_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_imu_topic
{
public:
  explicit Init_SensorTopics_imu_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  Init_SensorTopics_odometry_topic imu_topic(::cartographer_ros_msgs::msg::SensorTopics::_imu_topic_type arg)
  {
    msg_.imu_topic = std::move(arg);
    return Init_SensorTopics_odometry_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_point_cloud2_topic
{
public:
  explicit Init_SensorTopics_point_cloud2_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  Init_SensorTopics_imu_topic point_cloud2_topic(::cartographer_ros_msgs::msg::SensorTopics::_point_cloud2_topic_type arg)
  {
    msg_.point_cloud2_topic = std::move(arg);
    return Init_SensorTopics_imu_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_multi_echo_laser_scan_topic
{
public:
  explicit Init_SensorTopics_multi_echo_laser_scan_topic(::cartographer_ros_msgs::msg::SensorTopics & msg)
  : msg_(msg)
  {}
  Init_SensorTopics_point_cloud2_topic multi_echo_laser_scan_topic(::cartographer_ros_msgs::msg::SensorTopics::_multi_echo_laser_scan_topic_type arg)
  {
    msg_.multi_echo_laser_scan_topic = std::move(arg);
    return Init_SensorTopics_point_cloud2_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

class Init_SensorTopics_laser_scan_topic
{
public:
  Init_SensorTopics_laser_scan_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorTopics_multi_echo_laser_scan_topic laser_scan_topic(::cartographer_ros_msgs::msg::SensorTopics::_laser_scan_topic_type arg)
  {
    msg_.laser_scan_topic = std::move(arg);
    return Init_SensorTopics_multi_echo_laser_scan_topic(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SensorTopics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::SensorTopics>()
{
  return cartographer_ros_msgs::msg::builder::Init_SensorTopics_laser_scan_topic();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SENSOR_TOPICS__BUILDER_HPP_
