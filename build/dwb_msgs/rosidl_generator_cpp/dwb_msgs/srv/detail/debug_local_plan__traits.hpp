// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from dwb_msgs:srv/DebugLocalPlan.idl
// generated code does not contain a copyright notice

#ifndef DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__TRAITS_HPP_
#define DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__TRAITS_HPP_

#include "dwb_msgs/srv/detail/debug_local_plan__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'pose'
#include "nav_2d_msgs/msg/detail/pose2_d_stamped__traits.hpp"
// Member 'velocity'
#include "nav_2d_msgs/msg/detail/twist2_d__traits.hpp"
// Member 'global_plan'
#include "nav_2d_msgs/msg/detail/path2_d__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::DebugLocalPlan_Request>()
{
  return "dwb_msgs::srv::DebugLocalPlan_Request";
}

template<>
inline const char * name<dwb_msgs::srv::DebugLocalPlan_Request>()
{
  return "dwb_msgs/srv/DebugLocalPlan_Request";
}

template<>
struct has_fixed_size<dwb_msgs::srv::DebugLocalPlan_Request>
  : std::integral_constant<bool, has_fixed_size<nav_2d_msgs::msg::Path2D>::value && has_fixed_size<nav_2d_msgs::msg::Pose2DStamped>::value && has_fixed_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::DebugLocalPlan_Request>
  : std::integral_constant<bool, has_bounded_size<nav_2d_msgs::msg::Path2D>::value && has_bounded_size<nav_2d_msgs::msg::Pose2DStamped>::value && has_bounded_size<nav_2d_msgs::msg::Twist2D>::value> {};

template<>
struct is_message<dwb_msgs::srv::DebugLocalPlan_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'results'
#include "dwb_msgs/msg/detail/local_plan_evaluation__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::DebugLocalPlan_Response>()
{
  return "dwb_msgs::srv::DebugLocalPlan_Response";
}

template<>
inline const char * name<dwb_msgs::srv::DebugLocalPlan_Response>()
{
  return "dwb_msgs/srv/DebugLocalPlan_Response";
}

template<>
struct has_fixed_size<dwb_msgs::srv::DebugLocalPlan_Response>
  : std::integral_constant<bool, has_fixed_size<dwb_msgs::msg::LocalPlanEvaluation>::value> {};

template<>
struct has_bounded_size<dwb_msgs::srv::DebugLocalPlan_Response>
  : std::integral_constant<bool, has_bounded_size<dwb_msgs::msg::LocalPlanEvaluation>::value> {};

template<>
struct is_message<dwb_msgs::srv::DebugLocalPlan_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<dwb_msgs::srv::DebugLocalPlan>()
{
  return "dwb_msgs::srv::DebugLocalPlan";
}

template<>
inline const char * name<dwb_msgs::srv::DebugLocalPlan>()
{
  return "dwb_msgs/srv/DebugLocalPlan";
}

template<>
struct has_fixed_size<dwb_msgs::srv::DebugLocalPlan>
  : std::integral_constant<
    bool,
    has_fixed_size<dwb_msgs::srv::DebugLocalPlan_Request>::value &&
    has_fixed_size<dwb_msgs::srv::DebugLocalPlan_Response>::value
  >
{
};

template<>
struct has_bounded_size<dwb_msgs::srv::DebugLocalPlan>
  : std::integral_constant<
    bool,
    has_bounded_size<dwb_msgs::srv::DebugLocalPlan_Request>::value &&
    has_bounded_size<dwb_msgs::srv::DebugLocalPlan_Response>::value
  >
{
};

template<>
struct is_service<dwb_msgs::srv::DebugLocalPlan>
  : std::true_type
{
};

template<>
struct is_service_request<dwb_msgs::srv::DebugLocalPlan_Request>
  : std::true_type
{
};

template<>
struct is_service_response<dwb_msgs::srv::DebugLocalPlan_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // DWB_MSGS__SRV__DETAIL__DEBUG_LOCAL_PLAN__TRAITS_HPP_
