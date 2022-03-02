// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:msg/Trajectory2D.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_

#include "dwb_msgs/msg/detail/trajectory2_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::msg::Trajectory2D>()
{
  return "dwb_msgs::msg::Trajectory2D";
}

template<>
inline const char * name<dwb_msgs::msg::Trajectory2D>()
{
  return "dwb_msgs/msg/Trajectory2D";
}

template<>
struct has_fixed_size<dwb_msgs::msg::Trajectory2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::msg::Trajectory2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::msg::Trajectory2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY2_D__TRAITS_HPP_
