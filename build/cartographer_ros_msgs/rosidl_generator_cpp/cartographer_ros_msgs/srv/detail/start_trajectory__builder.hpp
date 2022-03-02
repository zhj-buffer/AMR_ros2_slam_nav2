// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:srv/StartTrajectory.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__BUILDER_HPP_

#include "cartographer_ros_msgs/srv/detail/start_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTrajectory_Request_topics
{
public:
  explicit Init_StartTrajectory_Request_topics(::cartographer_ros_msgs::srv::StartTrajectory_Request & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::srv::StartTrajectory_Request topics(::cartographer_ros_msgs::srv::StartTrajectory_Request::_topics_type arg)
  {
    msg_.topics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::StartTrajectory_Request msg_;
};

class Init_StartTrajectory_Request_options
{
public:
  Init_StartTrajectory_Request_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartTrajectory_Request_topics options(::cartographer_ros_msgs::srv::StartTrajectory_Request::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_StartTrajectory_Request_topics(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::StartTrajectory_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::StartTrajectory_Request>()
{
  return cartographer_ros_msgs::srv::builder::Init_StartTrajectory_Request_options();
}

}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_StartTrajectory_Response_trajectory_id
{
public:
  explicit Init_StartTrajectory_Response_trajectory_id(::cartographer_ros_msgs::srv::StartTrajectory_Response & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::srv::StartTrajectory_Response trajectory_id(::cartographer_ros_msgs::srv::StartTrajectory_Response::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::StartTrajectory_Response msg_;
};

class Init_StartTrajectory_Response_status
{
public:
  Init_StartTrajectory_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartTrajectory_Response_trajectory_id status(::cartographer_ros_msgs::srv::StartTrajectory_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_StartTrajectory_Response_trajectory_id(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::StartTrajectory_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::StartTrajectory_Response>()
{
  return cartographer_ros_msgs::srv::builder::Init_StartTrajectory_Response_status();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__START_TRAJECTORY__BUILDER_HPP_
