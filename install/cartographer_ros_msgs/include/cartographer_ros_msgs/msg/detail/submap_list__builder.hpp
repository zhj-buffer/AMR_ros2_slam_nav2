// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/submap_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SubmapList_submap
{
public:
  explicit Init_SubmapList_submap(::cartographer_ros_msgs::msg::SubmapList & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::SubmapList submap(::cartographer_ros_msgs::msg::SubmapList::_submap_type arg)
  {
    msg_.submap = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapList msg_;
};

class Init_SubmapList_header
{
public:
  Init_SubmapList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmapList_submap header(::cartographer_ros_msgs::msg::SubmapList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SubmapList_submap(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::SubmapList>()
{
  return cartographer_ros_msgs::msg::builder::Init_SubmapList_header();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__BUILDER_HPP_
