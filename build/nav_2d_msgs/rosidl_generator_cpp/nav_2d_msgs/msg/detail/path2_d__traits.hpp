// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_

#include "nav_2d_msgs/msg/detail/path2_d__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_2d_msgs::msg::Path2D>()
{
  return "nav_2d_msgs::msg::Path2D";
}

template<>
inline const char * name<nav_2d_msgs::msg::Path2D>()
{
  return "nav_2d_msgs/msg/Path2D";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Path2D>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Path2D>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav_2d_msgs::msg::Path2D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__PATH2_D__TRAITS_HPP_
