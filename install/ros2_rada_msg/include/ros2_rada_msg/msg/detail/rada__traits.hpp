// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#ifndef ROS2_RADA_MSG__MSG__DETAIL__RADA__TRAITS_HPP_
#define ROS2_RADA_MSG__MSG__DETAIL__RADA__TRAITS_HPP_

#include "ros2_rada_msg/msg/detail/rada__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros2_rada_msg::msg::Rada>()
{
  return "ros2_rada_msg::msg::Rada";
}

template<>
inline const char * name<ros2_rada_msg::msg::Rada>()
{
  return "ros2_rada_msg/msg/Rada";
}

template<>
struct has_fixed_size<ros2_rada_msg::msg::Rada>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ros2_rada_msg::msg::Rada>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ros2_rada_msg::msg::Rada>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS2_RADA_MSG__MSG__DETAIL__RADA__TRAITS_HPP_
