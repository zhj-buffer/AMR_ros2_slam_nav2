// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__BUILDER_HPP_

#include "cartographer_ros_msgs/srv/detail/submap_query__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmapQuery_Request_submap_index
{
public:
  explicit Init_SubmapQuery_Request_submap_index(::cartographer_ros_msgs::srv::SubmapQuery_Request & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::srv::SubmapQuery_Request submap_index(::cartographer_ros_msgs::srv::SubmapQuery_Request::_submap_index_type arg)
  {
    msg_.submap_index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::SubmapQuery_Request msg_;
};

class Init_SubmapQuery_Request_trajectory_id
{
public:
  Init_SubmapQuery_Request_trajectory_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmapQuery_Request_submap_index trajectory_id(::cartographer_ros_msgs::srv::SubmapQuery_Request::_trajectory_id_type arg)
  {
    msg_.trajectory_id = std::move(arg);
    return Init_SubmapQuery_Request_submap_index(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::SubmapQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::SubmapQuery_Request>()
{
  return cartographer_ros_msgs::srv::builder::Init_SubmapQuery_Request_trajectory_id();
}

}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmapQuery_Response_textures
{
public:
  explicit Init_SubmapQuery_Response_textures(::cartographer_ros_msgs::srv::SubmapQuery_Response & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::srv::SubmapQuery_Response textures(::cartographer_ros_msgs::srv::SubmapQuery_Response::_textures_type arg)
  {
    msg_.textures = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::SubmapQuery_Response msg_;
};

class Init_SubmapQuery_Response_submap_version
{
public:
  explicit Init_SubmapQuery_Response_submap_version(::cartographer_ros_msgs::srv::SubmapQuery_Response & msg)
  : msg_(msg)
  {}
  Init_SubmapQuery_Response_textures submap_version(::cartographer_ros_msgs::srv::SubmapQuery_Response::_submap_version_type arg)
  {
    msg_.submap_version = std::move(arg);
    return Init_SubmapQuery_Response_textures(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::SubmapQuery_Response msg_;
};

class Init_SubmapQuery_Response_status
{
public:
  Init_SubmapQuery_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmapQuery_Response_submap_version status(::cartographer_ros_msgs::srv::SubmapQuery_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_SubmapQuery_Response_submap_version(msg_);
  }

private:
  ::cartographer_ros_msgs::srv::SubmapQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::srv::SubmapQuery_Response>()
{
  return cartographer_ros_msgs::srv::builder::Init_SubmapQuery_Response_status();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__BUILDER_HPP_
