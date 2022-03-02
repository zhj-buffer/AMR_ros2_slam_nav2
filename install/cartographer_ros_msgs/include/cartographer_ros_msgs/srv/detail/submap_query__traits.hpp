// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_

#include "cartographer_ros_msgs/srv/detail/submap_query__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::SubmapQuery>()
{
  return "cartographer_ros_msgs::srv::SubmapQuery";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::SubmapQuery>()
{
  return "cartographer_ros_msgs/srv/SubmapQuery";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::SubmapQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::SubmapQuery_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::SubmapQuery>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::SubmapQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::SubmapQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__TRAITS_HPP_
