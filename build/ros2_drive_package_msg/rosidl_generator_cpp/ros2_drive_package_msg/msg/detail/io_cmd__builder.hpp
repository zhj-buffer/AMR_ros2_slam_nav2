// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/io_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_IoCmd_io_cmd_speaker
{
public:
  explicit Init_IoCmd_io_cmd_speaker(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::IoCmd io_cmd_speaker(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_speaker_type arg)
  {
    msg_.io_cmd_speaker = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_fog_lamp
{
public:
  explicit Init_IoCmd_io_cmd_fog_lamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_speaker io_cmd_fog_lamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_fog_lamp_type arg)
  {
    msg_.io_cmd_fog_lamp = std::move(arg);
    return Init_IoCmd_io_cmd_speaker(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_clearance_lamp
{
public:
  explicit Init_IoCmd_io_cmd_clearance_lamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_fog_lamp io_cmd_clearance_lamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_clearance_lamp_type arg)
  {
    msg_.io_cmd_clearance_lamp = std::move(arg);
    return Init_IoCmd_io_cmd_fog_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_braking_lamp
{
public:
  explicit Init_IoCmd_io_cmd_braking_lamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_clearance_lamp io_cmd_braking_lamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_braking_lamp_type arg)
  {
    msg_.io_cmd_braking_lamp = std::move(arg);
    return Init_IoCmd_io_cmd_clearance_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_turn_lamp
{
public:
  explicit Init_IoCmd_io_cmd_turn_lamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_braking_lamp io_cmd_turn_lamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_turn_lamp_type arg)
  {
    msg_.io_cmd_turn_lamp = std::move(arg);
    return Init_IoCmd_io_cmd_braking_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_upper_beam_headlamp
{
public:
  explicit Init_IoCmd_io_cmd_upper_beam_headlamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_turn_lamp io_cmd_upper_beam_headlamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_upper_beam_headlamp_type arg)
  {
    msg_.io_cmd_upper_beam_headlamp = std::move(arg);
    return Init_IoCmd_io_cmd_turn_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_lower_beam_headlamp
{
public:
  explicit Init_IoCmd_io_cmd_lower_beam_headlamp(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_upper_beam_headlamp io_cmd_lower_beam_headlamp(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_lower_beam_headlamp_type arg)
  {
    msg_.io_cmd_lower_beam_headlamp = std::move(arg);
    return Init_IoCmd_io_cmd_upper_beam_headlamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_unlock
{
public:
  explicit Init_IoCmd_io_cmd_unlock(::ros2_drive_package_msg::msg::IoCmd & msg)
  : msg_(msg)
  {}
  Init_IoCmd_io_cmd_lower_beam_headlamp io_cmd_unlock(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_unlock_type arg)
  {
    msg_.io_cmd_unlock = std::move(arg);
    return Init_IoCmd_io_cmd_lower_beam_headlamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

class Init_IoCmd_io_cmd_lamp_ctrl
{
public:
  Init_IoCmd_io_cmd_lamp_ctrl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoCmd_io_cmd_unlock io_cmd_lamp_ctrl(::ros2_drive_package_msg::msg::IoCmd::_io_cmd_lamp_ctrl_type arg)
  {
    msg_.io_cmd_lamp_ctrl = std::move(arg);
    return Init_IoCmd_io_cmd_unlock(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::IoCmd>()
{
  return ros2_drive_package_msg::msg::builder::Init_IoCmd_io_cmd_lamp_ctrl();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__BUILDER_HPP_
