// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/Costmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_

#include "nav2_msgs/msg/detail/costmap__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'metadata'
#include "nav2_msgs/msg/detail/costmap_meta_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::msg::Costmap>()
{
  return "nav2_msgs::msg::Costmap";
}

template<>
inline const char * name<nav2_msgs::msg::Costmap>()
{
  return "nav2_msgs/msg/Costmap";
}

template<>
struct has_fixed_size<nav2_msgs::msg::Costmap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::Costmap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::Costmap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__COSTMAP__TRAITS_HPP_
