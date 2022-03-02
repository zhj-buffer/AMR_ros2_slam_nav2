// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/ManageLifecycleNodes.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_

#include "nav2_msgs/srv/detail/manage_lifecycle_nodes__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes_Request";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes_Request>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes_Response";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes_Response>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::ManageLifecycleNodes>()
{
  return "nav2_msgs::srv::ManageLifecycleNodes";
}

template<>
inline const char * name<nav2_msgs::srv::ManageLifecycleNodes>()
{
  return "nav2_msgs/srv/ManageLifecycleNodes";
}

template<>
struct has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_fixed_size<nav2_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Request>::value &&
    has_bounded_size<nav2_msgs::srv::ManageLifecycleNodes_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::ManageLifecycleNodes>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::ManageLifecycleNodes_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::ManageLifecycleNodes_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__MANAGE_LIFECYCLE_NODES__TRAITS_HPP_
