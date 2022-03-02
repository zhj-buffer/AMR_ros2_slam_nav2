// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/GenerateTrajectory.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_

#include "dwb_msgs/srv/detail/generate_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'start_pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"
// Member 'start_vel'
// Member 'cmd_vel'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Request";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Request>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'traj'
#include "dwb_msgs/msg/detail/trajectory2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs::srv::GenerateTrajectory_Response";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory_Response>()
{
  return "dwb_msgs/srv/GenerateTrajectory_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::Trajectory2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs::srv::GenerateTrajectory";
}

template<>
inline const char * name<dwb_msgs::srv::GenerateTrajectory>()
{
  return "dwb_msgs/srv/GenerateTrajectory";
}

template<>
struct has_fixed_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_fixed_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::GenerateTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Request>::value &&
    has_bounded_size<dwb_msgs::srv::GenerateTrajectory_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::GenerateTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::GenerateTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::GenerateTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__GENERATE_TRAJECTORY__TRAITS_HPP_
