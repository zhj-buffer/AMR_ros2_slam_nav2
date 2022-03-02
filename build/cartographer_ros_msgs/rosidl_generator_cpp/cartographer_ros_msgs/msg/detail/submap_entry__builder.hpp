// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/submap_entry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SubmapEntry_pose
{
public:
  explicit Init_SubmapEntry_pose(::cartographer_ros_msgs::msg::SubmapEntry & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::SubmapEntry pose(::cartographer_ros_msgs::msg::SubmapEntry::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapEntry msg_;
};

class Init_SubmapEntry_submap_version
{
public:
  explicit Init_SubmapEntry_submap_version(::cartographer_ros_msgs::msg::SubmapEntry & msg)
  : msg_(msg)
  {}
  Init_SubmapEntry_pose submap_version(::cartographer_ros_msgs::msg::SubmapEntry::_submap_version_type arg)
  {
    msg_.submap_version = std::move(arg);
    return Init_SubmapEntry_pose(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapEntry msg_;
};

class Init_SubmapEntry_submap_index
{
public:
  explicit Init_SubmapEntry_submap_index(::cartographer_ros_msgs::msg::SubmapEntry & msg)
  : msg_(msg)
  {}
  Init_SubmapEntry_submap_version submap_index(::cartographer_ros_msgs::msg::SubmapEntry::_submap_index_type arg)
  {
    msg_.submap_index = std::move(arg);
    return Init_SubmapEntry_submap_version(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapEntry msg_;
};

class Init_SubmapEntry_trajectory_id
{
public:
  Init_SubmapEntry_trajectory_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmapEntry_submap_index trajectory_id(::cartographer_ros_msgs::msg::SubmapEntry::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return Init_SubmapEntry_submap_index(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapEntry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::SubmapEntry>()
{
  return cartographer_ros_msgs::msg::builder::Init_SubmapEntry_trajectory_id();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__BUILDER_HPP_
