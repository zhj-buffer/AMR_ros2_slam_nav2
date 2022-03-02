// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_

#include "nav2_msgs/srv/detail/load_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::LoadMap_Request>()
{
  return "nav2_msgs::srv::LoadMap_Request";
}

template<>
inline const char * name<nav2_msgs::srv::LoadMap_Request>()
{
  return "nav2_msgs/srv/LoadMap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<nav2_msgs::srv::LoadMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<nav2_msgs::srv::LoadMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav_msgs/msg/detail/occupancy_grid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::LoadMap_Response>()
{
  return "nav2_msgs::srv::LoadMap_Response";
}

template<>
inline const char * name<nav2_msgs::srv::LoadMap_Response>()
{
  return "nav2_msgs/srv/LoadMap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, has_fixed_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::LoadMap_Response>
  : std::integral_constant<bool, has_bounded_size<nav_msgs::msg::OccupancyGrid>::value> {};

template<>
struct is_message<nav2_msgs::srv::LoadMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::LoadMap>()
{
  return "nav2_msgs::srv::LoadMap";
}

template<>
inline const char * name<nav2_msgs::srv::LoadMap>()
{
  return "nav2_msgs/srv/LoadMap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::LoadMap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::LoadMap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::LoadMap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::LoadMap_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::LoadMap>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::LoadMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::LoadMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__LOAD_MAP__TRAITS_HPP_
