// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_

#include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'options'
#include "cartographer_ros_msgs/msg/detail/trajectory_options__traits.hpp"
// Member 'topics'
#include "cartographer_ros_msgs/msg/detail/sensor_topics__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory_Request>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory_Request";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory_Request>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory_Request";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::SensorTopics>::value && has_fixed_size<cartographer_ros_msgs::msg::TrajectoryOptions>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::integral_constant<bool, has_bounded_size<cartographer_ros_msgs::msg::SensorTopics>::value && has_bounded_size<cartographer_ros_msgs::msg::TrajectoryOptions>::value> {};

template<>
struct is_message<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory_Response>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory_Response";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory_Response>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory_Response";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::integral_constant<bool, has_fixed_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::integral_constant<bool, has_bounded_size<cartographer_ros_msgs::msg::StatusResponse>::value> {};

template<>
struct is_message<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<cartographer_ros_msgs::srv::StartTrajectory>()
{
  return "cartographer_ros_msgs::srv::StartTrajectory";
}

template<>
inline const char * name<cartographer_ros_msgs::srv::StartTrajectory>()
{
  return "cartographer_ros_msgs/srv/StartTrajectory";
}

template<>
struct has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory>
  : std::integral_constant<
    bool,
    has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Request>::value &&
    has_fixed_size<cartographer_ros_msgs::srv::StartTrajectory_Response>::value
  >
{
};

template<>
struct has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory>
  : std::integral_constant<
    bool,
    has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Request>::value &&
    has_bounded_size<cartographer_ros_msgs::srv::StartTrajectory_Response>::value
  >
{
};

template<>
struct is_service<cartographer_ros_msgs::srv::StartTrajectory>
  : std::true_type
{
};

template<>
struct is_service_request<cartographer_ros_msgs::srv::StartTrajectory_Request>
  : std::true_type
{
};

template<>
struct is_service_response<cartographer_ros_msgs::srv::StartTrajectory_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__TRAITS_HPP_
