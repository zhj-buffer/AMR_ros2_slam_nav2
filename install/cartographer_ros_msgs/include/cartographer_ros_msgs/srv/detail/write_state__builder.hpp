// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:srv/WriteState.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__BUILDER_HPP_

#include "cartographer_ros_msgs/srv/detail/write_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_WriteState_Request_filename
{
public:
  Init_WriteState_Request_filename()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartographer_ros_msgs::srv::WriteState_Request filename(::cartographer_ros_msgs::srv::WriteState_Request::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::WriteState_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::WriteState_Request>()
{
  return cartographer_ros_msgs::srv::builder::Init_WriteState_Request_filename();
}

}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_WriteState_Response_status
{
public:
  Init_WriteState_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartographer_ros_msgs::srv::WriteState_Response status(::cartographer_ros_msgs::srv::WriteState_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::WriteState_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::WriteState_Response>()
{
  return cartographer_ros_msgs::srv::builder::Init_WriteState_Response_status();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__WRITE_STATE__BUILDER_HPP_
