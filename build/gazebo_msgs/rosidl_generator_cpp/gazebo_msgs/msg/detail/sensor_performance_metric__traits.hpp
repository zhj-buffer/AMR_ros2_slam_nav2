// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_

#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return "gazebo_msgs::msg::SensorPerformanceMetric";
}

template<>
inline const char * name<gazebo_msgs::msg::SensorPerformanceMetric>()
{
  return "gazebo_msgs/msg/SensorPerformanceMetric";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::SensorPerformanceMetric>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__TRAITS_HPP_
