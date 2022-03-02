// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Pose2D32.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__POSE2_D32__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__POSE2_D32__TRAITS_HPP_

#include "nav_2d_msgs/msg/detail/pose2_d32__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_2d_msgs::msg::Pose2D32>()
{
  return "nav_2d_msgs::msg::Pose2D32";
}

template<>
inline const char * name<nav_2d_msgs::msg::Pose2D32>()
{
  return "nav_2d_msgs/msg/Pose2D32";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Pose2D32>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Pose2D32>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav_2d_msgs::msg::Pose2D32>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__POSE2_D32__TRAITS_HPP_
