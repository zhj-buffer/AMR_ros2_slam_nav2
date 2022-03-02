// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from nav2_msgs:srv/GetCostmap.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_
#define NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_

#include "nav2_msgs/srv/detail/get_costmap__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'specs'
#include "nav2_msgs/msg/detail/costmap_meta_data__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap_Request>()
{
  return "nav2_msgs::srv::GetCostmap_Request";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap_Request>()
{
  return "nav2_msgs/srv/GetCostmap_Request";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap_Request>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::msg::CostmapMetaData>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap_Request>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::msg::CostmapMetaData>::value> {};

template<>
struct is_message<nav2_msgs::srv::GetCostmap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'map'
#include "nav2_msgs/msg/detail/costmap__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap_Response>()
{
  return "nav2_msgs::srv::GetCostmap_Response";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap_Response>()
{
  return "nav2_msgs/srv/GetCostmap_Response";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap_Response>
  : std::integral_constant<bool, has_fixed_size<nav2_msgs::msg::Costmap>::value> {};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap_Response>
  : std::integral_constant<bool, has_bounded_size<nav2_msgs::msg::Costmap>::value> {};

template<>
struct is_message<nav2_msgs::srv::GetCostmap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<nav2_msgs::srv::GetCostmap>()
{
  return "nav2_msgs::srv::GetCostmap";
}

template<>
inline const char * name<nav2_msgs::srv::GetCostmap>()
{
  return "nav2_msgs/srv/GetCostmap";
}

template<>
struct has_fixed_size<nav2_msgs::srv::GetCostmap>
  : std::integral_constant<
    bool,
    has_fixed_size<nav2_msgs::srv::GetCostmap_Request>::value &&
    has_fixed_size<nav2_msgs::srv::GetCostmap_Response>::value
  >
{
};

template<>
struct has_bounded_size<nav2_msgs::srv::GetCostmap>
  : std::integral_constant<
    bool,
    has_bounded_size<nav2_msgs::srv::GetCostmap_Request>::value &&
    has_bounded_size<nav2_msgs::srv::GetCostmap_Response>::value
  >
{
};

template<>
struct is_service<nav2_msgs::srv::GetCostmap>
  : std::true_type
{
};

template<>
struct is_service_request<nav2_msgs::srv::GetCostmap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<nav2_msgs::srv::GetCostmap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // NAV2_MSGS__SRV__DETAIL__GET_COSTMAP__TRAITS_HPP_
