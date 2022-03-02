// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/WorldState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_

#include "gazebo_msgs/msg/detail/world_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::msg::WorldState>()
{
  return "gazebo_msgs::msg::WorldState";
}

template<>
inline const char * name<gazebo_msgs::msg::WorldState>()
{
  return "gazebo_msgs/msg/WorldState";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::WorldState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::WorldState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__WORLD_STATE__TRAITS_HPP_
