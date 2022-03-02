// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav_2d_msgs:msg/Twist2DStamped.idl
// generated code does not contain a copyright notice

#ifndef NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__TRAITS_HPP_
#define NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__TRAITS_HPP_

#include "nav_2d_msgs/msg/detail/twist2_d_stamped__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav_2d_msgs::msg::Twist2DStamped>()
{
  return "nav_2d_msgs::msg::Twist2DStamped";
}

template<>
inline const char * name<nav_2d_msgs::msg::Twist2DStamped>()
{
  return "nav_2d_msgs/msg/Twist2DStamped";
}

template<>
struct has_fixed_size<nav_2d_msgs::msg::Twist2DStamped>
  : std::integral_constant<bool, has_fixed_size<nav_2d_msgs::msg::Twist2D>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<nav_2d_msgs::msg::Twist2DStamped>
  : std::integral_constant<bool, has_bounded_size<nav_2d_msgs::msg::Twist2D>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<nav_2d_msgs::msg::Twist2DStamped>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV_2D_MSGS__MSG__DETAIL__TWIST2_D_STAMPED__TRAITS_HPP_
