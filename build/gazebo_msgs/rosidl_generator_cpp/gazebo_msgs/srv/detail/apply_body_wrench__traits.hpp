// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/ApplyBodyWrench.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/apply_body_wrench__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'reference_point'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'wrench'
#include "geometry_msgs/msg/detail/wrench__traits.hpp"
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::ApplyBodyWrench_Request>()
{
  return "gazebo_msgs::srv::ApplyBodyWrench_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::ApplyBodyWrench_Request>()
{
  return "gazebo_msgs/srv/ApplyBodyWrench_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::ApplyBodyWrench_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::ApplyBodyWrench_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::ApplyBodyWrench_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::ApplyBodyWrench_Response>()
{
  return "gazebo_msgs::srv::ApplyBodyWrench_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::ApplyBodyWrench_Response>()
{
  return "gazebo_msgs/srv/ApplyBodyWrench_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::ApplyBodyWrench_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::ApplyBodyWrench_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::ApplyBodyWrench_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::ApplyBodyWrench>()
{
  return "gazebo_msgs::srv::ApplyBodyWrench";
}

template<>
inline const char * name<gazebo_msgs::srv::ApplyBodyWrench>()
{
  return "gazebo_msgs/srv/ApplyBodyWrench";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::ApplyBodyWrench>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::ApplyBodyWrench_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::ApplyBodyWrench_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::ApplyBodyWrench>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::ApplyBodyWrench_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::ApplyBodyWrench_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::ApplyBodyWrench>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::ApplyBodyWrench_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::ApplyBodyWrench_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__APPLY_BODY_WRENCH__TRAITS_HPP_
