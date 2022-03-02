// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/BmsFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/bms_fb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_BmsFb_bms_fb_remaining_capacity
{
public:
  explicit Init_BmsFb_bms_fb_remaining_capacity(::ros2_drive_package_msg::msg::BmsFb & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::BmsFb bms_fb_remaining_capacity(::ros2_drive_package_msg::msg::BmsFb::_bms_fb_remaining_capacity_type arg)
  {
    msg_.bms_fb_remaining_capacity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFb msg_;
};

class Init_BmsFb_bms_fb_current
{
public:
  explicit Init_BmsFb_bms_fb_current(::ros2_drive_package_msg::msg::BmsFb & msg)
  : msg_(msg)
  {}
  Init_BmsFb_bms_fb_remaining_capacity bms_fb_current(::ros2_drive_package_msg::msg::BmsFb::_bms_fb_current_type arg)
  {
    msg_.bms_fb_current = std::move(arg);
    return Init_BmsFb_bms_fb_remaining_capacity(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFb msg_;
};

class Init_BmsFb_bms_fb_voltage
{
public:
  Init_BmsFb_bms_fb_voltage()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsFb_bms_fb_current bms_fb_voltage(::ros2_drive_package_msg::msg::BmsFb::_bms_fb_voltage_type arg)
  {
    msg_.bms_fb_voltage = std::move(arg);
    return Init_BmsFb_bms_fb_current(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::BmsFb>()
{
  return ros2_drive_package_msg::msg::builder::Init_BmsFb_bms_fb_voltage();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__BUILDER_HPP_
