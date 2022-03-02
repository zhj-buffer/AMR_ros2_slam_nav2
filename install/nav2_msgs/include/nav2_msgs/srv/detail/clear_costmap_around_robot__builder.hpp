// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from nav2_msgs:srv/ClearCostmapAroundRobot.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__BUILDER_HPP_
#define NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__BUILDER_HPP_

#include "nav2_msgs/srv/detail/clear_costmap_around_robot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearCostmapAroundRobot_Request_window_size_y
{
public:
  explicit Init_ClearCostmapAroundRobot_Request_window_size_y(::nav2_msgs::srv::ClearCostmapAroundRobot_Request & msg)
  : msg_(msg)
  {}
  ::nav2_msgs::srv::ClearCostmapAroundRobot_Request window_size_y(::nav2_msgs::srv::ClearCostmapAroundRobot_Request::_window_size_y_type arg)
  {
    msg_.window_size_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapAroundRobot_Request msg_;
};

class Init_ClearCostmapAroundRobot_Request_window_size_x
{
public:
  Init_ClearCostmapAroundRobot_Request_window_size_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearCostmapAroundRobot_Request_window_size_y window_size_x(::nav2_msgs::srv::ClearCostmapAroundRobot_Request::_window_size_x_type arg)
  {
    msg_.window_size_x = std::move(arg);
    return Init_ClearCostmapAroundRobot_Request_window_size_y(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapAroundRobot_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearCostmapAroundRobot_Request>()
{
  return nav2_msgs::srv::builder::Init_ClearCostmapAroundRobot_Request_window_size_x();
}

}  // namespace nav2_msgs


namespace nav2_msgs
{

namespace srv
{

namespace builder
{

class Init_ClearCostmapAroundRobot_Response_response
{
public:
  Init_ClearCostmapAroundRobot_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::nav2_msgs::srv::ClearCostmapAroundRobot_Response response(::nav2_msgs::srv::ClearCostmapAroundRobot_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::nav2_msgs::srv::ClearCostmapAroundRobot_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::nav2_msgs::srv::ClearCostmapAroundRobot_Response>()
{
  return nav2_msgs::srv::builder::Init_ClearCostmapAroundRobot_Response_response();
}

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__SRV__DETAIL__CLEAR_COSTMAP_AROUND_ROBOT__BUILDER_HPP_
