// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_LandmarkEntry_rotation_weight
{
public:
  explicit Init_LandmarkEntry_rotation_weight(::cartographer_ros_msgs::msg::LandmarkEntry & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::LandmarkEntry rotation_weight(::cartographer_ros_msgs::msg::LandmarkEntry::_rotation_weight_type arg)
  {
    msg_.rotation_weight = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkEntry msg_;
};

class Init_LandmarkEntry_translation_weight
{
public:
  explicit Init_LandmarkEntry_translation_weight(::cartographer_ros_msgs::msg::LandmarkEntry & msg)
  : msg_(msg)
  {}
  Init_LandmarkEntry_rotation_weight translation_weight(::cartographer_ros_msgs::msg::LandmarkEntry::_translation_weight_type arg)
  {
    msg_.translation_weight = std::move(arg);
    return Init_LandmarkEntry_rotation_weight(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkEntry msg_;
};

class Init_LandmarkEntry_tracking_from_landmark_transform
{
public:
  explicit Init_LandmarkEntry_tracking_from_landmark_transform(::cartographer_ros_msgs::msg::LandmarkEntry & msg)
  : msg_(msg)
  {}
  Init_LandmarkEntry_translation_weight tracking_from_landmark_transform(::cartographer_ros_msgs::msg::LandmarkEntry::_tracking_from_landmark_transform_type arg)
  {
    msg_.tracking_from_landmark_transform = std::move(arg);
    return Init_LandmarkEntry_translation_weight(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkEntry msg_;
};

class Init_LandmarkEntry_id
{
public:
  Init_LandmarkEntry_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkEntry_tracking_from_landmark_transform id(::cartographer_ros_msgs::msg::LandmarkEntry::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_LandmarkEntry_tracking_from_landmark_transform(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::LandmarkEntry>()
{
  return cartographer_ros_msgs::msg::builder::Init_LandmarkEntry_id();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__BUILDER_HPP_
