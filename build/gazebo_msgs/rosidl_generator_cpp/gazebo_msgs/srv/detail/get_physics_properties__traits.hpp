// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetPhysicsProperties.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/get_physics_properties__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties_Request>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties_Request>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'gravity'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'ode_config'
#include "gazebo_msgs/msg/detail/ode_physics__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties_Response>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties_Response>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetPhysicsProperties>()
{
  return "gazebo_msgs::srv::GetPhysicsProperties";
}

template<>
inline const char * name<gazebo_msgs::srv::GetPhysicsProperties>()
{
  return "gazebo_msgs/srv/GetPhysicsProperties";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetPhysicsProperties_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetPhysicsProperties_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetPhysicsProperties>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetPhysicsProperties_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetPhysicsProperties_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_PHYSICS_PROPERTIES__TRAITS_HPP_
