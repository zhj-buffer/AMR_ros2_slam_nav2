// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_

#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::msg::ODEJointProperties>()
{
  return "gazebo_msgs::msg::ODEJointProperties";
}

template<>
inline const char * name<gazebo_msgs::msg::ODEJointProperties>()
{
  return "gazebo_msgs/msg/ODEJointProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::ODEJointProperties>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::ODEJointProperties>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::ODEJointProperties>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__ODE_JOINT_PROPERTIES__TRAITS_HPP_
