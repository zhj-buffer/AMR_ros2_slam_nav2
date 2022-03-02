// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/SetEntityState.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/set_entity_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'state'
#include "gazebo_msgs/msg/detail/entity_state__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetEntityState_Request>()
{
  return "gazebo_msgs::srv::SetEntityState_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::SetEntityState_Request>()
{
  return "gazebo_msgs/srv/SetEntityState_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetEntityState_Request>
  : std::integral_constant<bool, has_fixed_size<gazebo_msgs::msg::EntityState>::value> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetEntityState_Request>
  : std::integral_constant<bool, has_bounded_size<gazebo_msgs::msg::EntityState>::value> {};

template<>
struct is_message<gazebo_msgs::srv::SetEntityState_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetEntityState_Response>()
{
  return "gazebo_msgs::srv::SetEntityState_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::SetEntityState_Response>()
{
  return "gazebo_msgs/srv/SetEntityState_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetEntityState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetEntityState_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::SetEntityState_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::SetEntityState>()
{
  return "gazebo_msgs::srv::SetEntityState";
}

template<>
inline const char * name<gazebo_msgs::srv::SetEntityState>()
{
  return "gazebo_msgs/srv/SetEntityState";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::SetEntityState_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::SetEntityState>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::SetEntityState_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::SetEntityState_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::SetEntityState>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::SetEntityState_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::SetEntityState_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__SET_ENTITY_STATE__TRAITS_HPP_
