// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/ctrl_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_CtrlCmd_ctrl_cmd_angular
{
public:
  explicit Init_CtrlCmd_ctrl_cmd_angular(::ros2_drive_package_msg::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::CtrlCmd ctrl_cmd_angular(::ros2_drive_package_msg::msg::CtrlCmd::_ctrl_cmd_angular_type arg)
  {
    msg_.ctrl_cmd_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_ctrl_cmd_linear
{
public:
  explicit Init_CtrlCmd_ctrl_cmd_linear(::ros2_drive_package_msg::msg::CtrlCmd & msg)
  : msg_(msg)
  {}
  Init_CtrlCmd_ctrl_cmd_angular ctrl_cmd_linear(::ros2_drive_package_msg::msg::CtrlCmd::_ctrl_cmd_linear_type arg)
  {
    msg_.ctrl_cmd_linear = std::move(arg);
    return Init_CtrlCmd_ctrl_cmd_angular(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlCmd msg_;
};

class Init_CtrlCmd_ctrl_cmd_gear
{
public:
  Init_CtrlCmd_ctrl_cmd_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtrlCmd_ctrl_cmd_linear ctrl_cmd_gear(::ros2_drive_package_msg::msg::CtrlCmd::_ctrl_cmd_gear_type arg)
  {
    msg_.ctrl_cmd_gear = std::move(arg);
    return Init_CtrlCmd_ctrl_cmd_linear(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::CtrlCmd>()
{
  return ros2_drive_package_msg::msg::builder::Init_CtrlCmd_ctrl_cmd_gear();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__BUILDER_HPP_
