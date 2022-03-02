// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/StatusResponse.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_StatusResponse_message
{
public:
  explicit Init_StatusResponse_message(::cartographer_ros_msgs::msg::StatusResponse & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::StatusResponse message(::cartographer_ros_msgs::msg::StatusResponse::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::StatusResponse msg_;
};

class Init_StatusResponse_code
{
public:
  Init_StatusResponse_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StatusResponse_message code(::cartographer_ros_msgs::msg::StatusResponse::_code_type arg)
  {
    msg_.code = std::move(arg);
    return Init_StatusResponse_message(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::StatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::StatusResponse>()
{
  return cartographer_ros_msgs::msg::builder::Init_StatusResponse_code();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_RESPONSE__BUILDER_HPP_
