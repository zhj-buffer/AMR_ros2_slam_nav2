// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_drive_package_msg:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_

#include "ros2_drive_package_msg/msg/detail/ctrl_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_drive_package_msg::msg::CtrlCmd>()
{
  return "ros2_drive_package_msg::msg::CtrlCmd";
}

template<>
inline const char * name<ros2_drive_package_msg::msg::CtrlCmd>()
{
  return "ros2_drive_package_msg/msg/CtrlCmd";
}

template<>
struct has_fixed_size<ros2_drive_package_msg::msg::CtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_drive_package_msg::msg::CtrlCmd>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_drive_package_msg::msg::CtrlCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__TRAITS_HPP_
