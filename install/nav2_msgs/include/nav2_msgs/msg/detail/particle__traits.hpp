// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:msg/Particle.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
#define NAV2_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_

#include "nav2_msgs/msg/detail/particle__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::msg::Particle>()
{
  return "nav2_msgs::msg::Particle";
}

template<>
inline const char * name<nav2_msgs::msg::Particle>()
{
  return "nav2_msgs/msg/Particle";
}

template<>
struct has_fixed_size<nav2_msgs::msg::Particle>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<nav2_msgs::msg::Particle>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<nav2_msgs::msg::Particle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__MSG__DETAIL__PARTICLE__TRAITS_HPP_
