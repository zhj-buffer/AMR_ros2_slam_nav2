// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/BodyRequest.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/body_request__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::BodyRequest_Request>()
{
  return "gazebo_msgs::srv::BodyRequest_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::BodyRequest_Request>()
{
  return "gazebo_msgs/srv/BodyRequest_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::BodyRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::BodyRequest_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::BodyRequest_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::BodyRequest_Response>()
{
  return "gazebo_msgs::srv::BodyRequest_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::BodyRequest_Response>()
{
  return "gazebo_msgs/srv/BodyRequest_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::BodyRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::BodyRequest_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::BodyRequest_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::BodyRequest>()
{
  return "gazebo_msgs::srv::BodyRequest";
}

template<>
inline const char * name<gazebo_msgs::srv::BodyRequest>()
{
  return "gazebo_msgs/srv/BodyRequest";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::BodyRequest>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::BodyRequest_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::BodyRequest_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::BodyRequest>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::BodyRequest_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::BodyRequest_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::BodyRequest>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::BodyRequest_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::BodyRequest_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__BODY_REQUEST__TRAITS_HPP_
