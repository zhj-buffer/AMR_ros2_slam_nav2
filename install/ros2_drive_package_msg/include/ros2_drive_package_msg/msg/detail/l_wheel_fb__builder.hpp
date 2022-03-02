// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/LWheelFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/l_wheel_fb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_LWheelFb_l_wheel_fb_pulse
{
public:
  explicit Init_LWheelFb_l_wheel_fb_pulse(::ros2_drive_package_msg::msg::LWheelFb & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::LWheelFb l_wheel_fb_pulse(::ros2_drive_package_msg::msg::LWheelFb::_l_wheel_fb_pulse_type arg)
  {
    msg_.l_wheel_fb_pulse = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::LWheelFb msg_;
};

class Init_LWheelFb_l_wheel_fb_velocity
{
public:
  Init_LWheelFb_l_wheel_fb_velocity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LWheelFb_l_wheel_fb_pulse l_wheel_fb_velocity(::ros2_drive_package_msg::msg::LWheelFb::_l_wheel_fb_velocity_type arg)
  {
    msg_.l_wheel_fb_velocity = std::move(arg);
    return Init_LWheelFb_l_wheel_fb_pulse(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::LWheelFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::LWheelFb>()
{
  return ros2_drive_package_msg::msg::builder::Init_LWheelFb_l_wheel_fb_velocity();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__BUILDER_HPP_
