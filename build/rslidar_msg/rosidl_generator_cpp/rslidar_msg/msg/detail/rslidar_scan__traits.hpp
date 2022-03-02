// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__TRAITS_HPP_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__TRAITS_HPP_

#include "rslidar_msg/msg/detail/rslidar_scan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rslidar_msg::msg::RslidarScan>()
{
  return "rslidar_msg::msg::RslidarScan";
}

template<>
inline const char * name<rslidar_msg::msg::RslidarScan>()
{
  return "rslidar_msg/msg/RslidarScan";
}

template<>
struct has_fixed_size<rslidar_msg::msg::RslidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rslidar_msg::msg::RslidarScan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rslidar_msg::msg::RslidarScan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__TRAITS_HPP_
