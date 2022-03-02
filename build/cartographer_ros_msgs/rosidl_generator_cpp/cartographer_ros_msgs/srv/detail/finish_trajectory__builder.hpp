// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:srv/FinishTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__BUILDER_HPP_

#include "cartographer_ros_msgs/srv/detail/finish_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_FinishTrajectory_Request_trajectory_id
{
public:
  Init_FinishTrajectory_Request_trajectory_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartographer_ros_msgs::srv::FinishTrajectory_Request trajectory_id(::cartographer_ros_msgs::srv::FinishTrajectory_Request::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::FinishTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::FinishTrajectory_Request>()
{
  return cartographer_ros_msgs::srv::builder::Init_FinishTrajectory_Request_trajectory_id();
}

}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_FinishTrajectory_Response_status
{
public:
  Init_FinishTrajectory_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::cartographer_ros_msgs::srv::FinishTrajectory_Response status(::cartographer_ros_msgs::srv::FinishTrajectory_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::FinishTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::FinishTrajectory_Response>()
{
  return cartographer_ros_msgs::srv::builder::Init_FinishTrajectory_Response_status();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__FINISH_TRAJECTORY__BUILDER_HPP_
