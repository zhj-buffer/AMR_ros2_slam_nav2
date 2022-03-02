// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetLightProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/set_light_properties__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'diffuse'
#include "std_msgs/msg/detail/color_rgba__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties_Request>()
{
  return "gazebo_msgs::srv::SetLightProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties_Request>()
{
  return "gazebo_msgs/srv/SetLightProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLightProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties_Response>()
{
  return "gazebo_msgs::srv::SetLightProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties_Response>()
{
  return "gazebo_msgs/srv/SetLightProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::SetLightProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetLightProperties>()
{
  return "gazebo_msgs::srv::SetLightProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::SetLightProperties>()
{
  return "gazebo_msgs/srv/SetLightProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetLightProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetLightProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetLightProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetLightProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetLightProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetLightProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetLightProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetLightProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetLightProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_LIGHT_PROPERTIES__TRAITS_HPP_
