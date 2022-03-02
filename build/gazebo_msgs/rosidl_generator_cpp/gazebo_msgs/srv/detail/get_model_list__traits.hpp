// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:srv/GetModelList.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__TRAITS_HPP_
#define GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__TRAITS_HPP_

#include "gazebo_msgs/srv/detail/get_model_list__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelList_Request>()
{
  return "gazebo_msgs::srv::GetModelList_Request";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelList_Request>()
{
  return "gazebo_msgs/srv/GetModelList_Request";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelList_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<gazebo_msgs::srv::GetModelList_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelList_Response>()
{
  return "gazebo_msgs::srv::GetModelList_Response";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelList_Response>()
{
  return "gazebo_msgs/srv/GetModelList_Response";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelList_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::srv::GetModelList_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gazebo_msgs::srv::GetModelList>()
{
  return "gazebo_msgs::srv::GetModelList";
}

template<>
inline const char * name<gazebo_msgs::srv::GetModelList>()
{
  return "gazebo_msgs/srv/GetModelList";
}

template<>
struct has_fixed_size<gazebo_msgs::srv::GetModelList>
  : std::integral_constant<
    bool,
    has_fixed_size<gazebo_msgs::srv::GetModelList_Request>::value &&
    has_fixed_size<gazebo_msgs::srv::GetModelList_Response>::value
  >
{
};

template<>
struct has_bounded_size<gazebo_msgs::srv::GetModelList>
  : std::integral_constant<
    bool,
    has_bounded_size<gazebo_msgs::srv::GetModelList_Request>::value &&
    has_bounded_size<gazebo_msgs::srv::GetModelList_Response>::value
  >
{
};

template<>
struct is_service<gazebo_msgs::srv::GetModelList>
  : std::true_type
{
};

template<>
struct is_service_request<gazebo_msgs::srv::GetModelList_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gazebo_msgs::srv::GetModelList_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__SRV__DETAIL__GET_MODEL_LIST__TRAITS_HPP_
