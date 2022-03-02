// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/CtrlFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/ctrl_fb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_CtrlFb_ctrl_fb_angular
{
public:
  explicit Init_CtrlFb_ctrl_fb_angular(::ros2_drive_package_msg::msg::CtrlFb & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::CtrlFb ctrl_fb_angular(::ros2_drive_package_msg::msg::CtrlFb::_ctrl_fb_angular_type arg)
  {
    msg_.ctrl_fb_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlFb msg_;
};

class Init_CtrlFb_ctrl_fb_linear
{
public:
  explicit Init_CtrlFb_ctrl_fb_linear(::ros2_drive_package_msg::msg::CtrlFb & msg)
  : msg_(msg)
  {}
  Init_CtrlFb_ctrl_fb_angular ctrl_fb_linear(::ros2_drive_package_msg::msg::CtrlFb::_ctrl_fb_linear_type arg)
  {
    msg_.ctrl_fb_linear = std::move(arg);
    return Init_CtrlFb_ctrl_fb_angular(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlFb msg_;
};

class Init_CtrlFb_ctrl_fb_target_gear
{
public:
  Init_CtrlFb_ctrl_fb_target_gear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CtrlFb_ctrl_fb_linear ctrl_fb_target_gear(::ros2_drive_package_msg::msg::CtrlFb::_ctrl_fb_target_gear_type arg)
  {
    msg_.ctrl_fb_target_gear = std::move(arg);
    return Init_CtrlFb_ctrl_fb_linear(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::CtrlFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::CtrlFb>()
{
  return ros2_drive_package_msg::msg::builder::Init_CtrlFb_ctrl_fb_target_gear();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__BUILDER_HPP_
