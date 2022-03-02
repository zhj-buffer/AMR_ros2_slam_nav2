// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/FreeCtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/free_ctrl_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_FreeCtrlCmd_free_ctrl_cmd_velocity_r
{
public:
  explicit Init_FreeCtrlCmd_free_ctrl_cmd_velocity_r(::ros2_drive_package_msg::msg::FreeCtrlCmd & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::FreeCtrlCmd free_ctrl_cmd_velocity_r(::ros2_drive_package_msg::msg::FreeCtrlCmd::_free_ctrl_cmd_velocity_r_type arg)
  {
    msg_.free_ctrl_cmd_velocity_r = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::FreeCtrlCmd msg_;
};

class Init_FreeCtrlCmd_free_ctrl_cmd_velocity_l
{
public:
  explicit Init_FreeCtrlCmd_free_ctrl_cmd_velocity_l(::ros2_drive_package_msg::msg::FreeCtrlCmd & msg)
  : msg_(msg)
  {}
  Init_FreeCtrlCmd_free_ctrl_cmd_velocity_r free_ctrl_cmd_velocity_l(::ros2_drive_package_msg::msg::FreeCtrlCmd::_free_ctrl_cmd_velocity_l_type arg)
  {
    msg_.free_ctrl_cmd_velocity_l = std::move(arg);
    return Init_FreeCtrlCmd_free_ctrl_cmd_velocity_r(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::FreeCtrlCmd msg_;
};

class Init_FreeCtrlCmd_ctrl_cmd_gear
{
public:
  Init_FreeCtrlCmd_ctrl_cmd_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FreeCtrlCmd_free_ctrl_cmd_velocity_l ctrl_cmd_gear(::ros2_drive_package_msg::msg::FreeCtrlCmd::_ctrl_cmd_gear_type arg)
  {
    msg_.ctrl_cmd_gear = std::move(arg);
    return Init_FreeCtrlCmd_free_ctrl_cmd_velocity_l(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::FreeCtrlCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::FreeCtrlCmd>()
{
  return ros2_drive_package_msg::msg::builder::Init_FreeCtrlCmd_ctrl_cmd_gear();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__FREE_CTRL_CMD__BUILDER_HPP_
