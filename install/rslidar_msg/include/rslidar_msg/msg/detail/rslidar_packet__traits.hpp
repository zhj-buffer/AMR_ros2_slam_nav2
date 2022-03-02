// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rslidar_msg:msg/RslidarPacket.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__TRAITS_HPP_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__TRAITS_HPP_

#include "rslidar_msg/msg/detail/rslidar_packet__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rslidar_msg::msg::RslidarPacket>()
{
  return "rslidar_msg::msg::RslidarPacket";
}

template<>
inline const char * name<rslidar_msg::msg::RslidarPacket>()
{
  return "rslidar_msg/msg/RslidarPacket";
}

template<>
struct has_fixed_size<rslidar_msg::msg::RslidarPacket>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<rslidar_msg::msg::RslidarPacket>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<rslidar_msg::msg::RslidarPacket>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__TRAITS_HPP_
