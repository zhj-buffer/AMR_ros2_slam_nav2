// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/BehaviorTreeStatusChange.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_

#include "nav2_msgs/msg/detail/behavior_tree_status_change__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::msg::BehaviorTreeStatusChange>()
{
  return "nav2_msgs::msg::BehaviorTreeStatusChange";
}

template<>
inline const char * name<nav2_msgs::msg::BehaviorTreeStatusChange>()
{
  return "nav2_msgs/msg/BehaviorTreeStatusChange";
}

template<>
struct has_fixed_size<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::msg::BehaviorTreeStatusChange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__BEHAVIOR_TREE_STATUS_CHANGE__TRAITS_HPP_
