// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:msg/TrajectoryScore.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__TRAITS_HPP_
#define DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__TRAITS_HPP_

#include "dwb_msgs/msg/detail/trajectory_score__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::msg::TrajectoryScore>()
{
  return "dwb_msgs::msg::TrajectoryScore";
}

template<>
inline const char * name<dwb_msgs::msg::TrajectoryScore>()
{
  return "dwb_msgs/msg/TrajectoryScore";
}

template<>
struct has_fixed_size<dwb_msgs::msg::TrajectoryScore>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<dwb_msgs::msg::TrajectoryScore>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<dwb_msgs::msg::TrajectoryScore>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__MSG__DETAIL__TRAJECTORY_SCORE__TRAITS_HPP_
