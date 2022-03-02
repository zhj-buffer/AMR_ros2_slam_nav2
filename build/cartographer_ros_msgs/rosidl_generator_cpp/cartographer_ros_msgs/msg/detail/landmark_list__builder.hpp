// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/landmark_list__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_LandmarkList_landmark
{
public:
  explicit Init_LandmarkList_landmark(::cartographer_ros_msgs::msg::LandmarkList & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::LandmarkList landmark(::cartographer_ros_msgs::msg::LandmarkList::_landmark_type arg)
  {
    msg_.landmark = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkList msg_;
};

class Init_LandmarkList_header
{
public:
  Init_LandmarkList_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LandmarkList_landmark header(::cartographer_ros_msgs::msg::LandmarkList::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LandmarkList_landmark(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::LandmarkList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::LandmarkList>()
{
  return cartographer_ros_msgs::msg::builder::Init_LandmarkList_header();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_LIST__BUILDER_HPP_
