// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__BUILDER_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__BUILDER_HPP_

#include "cartographer_ros_msgs/msg/detail/submap_texture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace cartographer_ros_msgs
{

namespace msg
{

namespace builder
{

class Init_SubmapTexture_slice_pose
{
public:
  explicit Init_SubmapTexture_slice_pose(::cartographer_ros_msgs::msg::SubmapTexture & msg)
  : msg_(msg)
  {}
  ::cartographer_ros_msgs::msg::SubmapTexture slice_pose(::cartographer_ros_msgs::msg::SubmapTexture::_slice_pose_type arg)
  {
    msg_.slice_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapTexture msg_;
};

class Init_SubmapTexture_resolution
{
public:
  explicit Init_SubmapTexture_resolution(::cartographer_ros_msgs::msg::SubmapTexture & msg)
  : msg_(msg)
  {}
  Init_SubmapTexture_slice_pose resolution(::cartographer_ros_msgs::msg::SubmapTexture::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_SubmapTexture_slice_pose(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapTexture msg_;
};

class Init_SubmapTexture_height
{
public:
  explicit Init_SubmapTexture_height(::cartographer_ros_msgs::msg::SubmapTexture & msg)
  : msg_(msg)
  {}
  Init_SubmapTexture_resolution height(::cartographer_ros_msgs::msg::SubmapTexture::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_SubmapTexture_resolution(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapTexture msg_;
};

class Init_SubmapTexture_width
{
public:
  explicit Init_SubmapTexture_width(::cartographer_ros_msgs::msg::SubmapTexture & msg)
  : msg_(msg)
  {}
  Init_SubmapTexture_height width(::cartographer_ros_msgs::msg::SubmapTexture::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_SubmapTexture_height(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapTexture msg_;
};

class Init_SubmapTexture_cells
{
public:
  Init_SubmapTexture_cells()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmapTexture_width cells(::cartographer_ros_msgs::msg::SubmapTexture::_cells_type arg)
  {
    msg_.cells = std::move(arg);
    return Init_SubmapTexture_width(msg_);
  }

private:
  ::cartographer_ros_msgs::msg::SubmapTexture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::cartographer_ros_msgs::msg::SubmapTexture>()
{
  return cartographer_ros_msgs::msg::builder::Init_SubmapTexture_cells();
}

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__BUILDER_HPP_
