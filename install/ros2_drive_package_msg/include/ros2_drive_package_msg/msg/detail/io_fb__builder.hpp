// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/IoFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/io_fb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_IoFb_io_fb_charge_state
{
public:
  explicit Init_IoFb_io_fb_charge_state(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::IoFb io_fb_charge_state(::ros2_drive_package_msg::msg::IoFb::_io_fb_charge_state_type arg)
  {
    msg_.io_fb_charge_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_joypad_ctrl
{
public:
  explicit Init_IoFb_io_fb_joypad_ctrl(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_charge_state io_fb_joypad_ctrl(::ros2_drive_package_msg::msg::IoFb::_io_fb_joypad_ctrl_type arg)
  {
    msg_.io_fb_joypad_ctrl = std::move(arg);
    return Init_IoFb_io_fb_charge_state(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_estop
{
public:
  explicit Init_IoFb_io_fb_estop(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_joypad_ctrl io_fb_estop(::ros2_drive_package_msg::msg::IoFb::_io_fb_estop_type arg)
  {
    msg_.io_fb_estop = std::move(arg);
    return Init_IoFb_io_fb_joypad_ctrl(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rr_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rr_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_estop io_fb_rr_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rr_drop_sensor_type arg)
  {
    msg_.io_fb_rr_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_estop(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rm_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rm_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rr_drop_sensor io_fb_rm_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rm_drop_sensor_type arg)
  {
    msg_.io_fb_rm_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rr_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rl_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_rl_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rm_drop_sensor io_fb_rl_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rl_drop_sensor_type arg)
  {
    msg_.io_fb_rl_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rm_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fr_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fr_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rl_drop_sensor io_fb_fr_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fr_drop_sensor_type arg)
  {
    msg_.io_fb_fr_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_rl_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fm_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fm_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fr_drop_sensor io_fb_fm_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fm_drop_sensor_type arg)
  {
    msg_.io_fb_fm_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_fr_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fl_drop_sensor
{
public:
  explicit Init_IoFb_io_fb_fl_drop_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fm_drop_sensor io_fb_fl_drop_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fl_drop_sensor_type arg)
  {
    msg_.io_fb_fl_drop_sensor = std::move(arg);
    return Init_IoFb_io_fb_fm_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rr_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rr_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fl_drop_sensor io_fb_rr_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rr_impact_sensor_type arg)
  {
    msg_.io_fb_rr_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fl_drop_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rm_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rm_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rr_impact_sensor io_fb_rm_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rm_impact_sensor_type arg)
  {
    msg_.io_fb_rm_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rr_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_rl_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_rl_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rm_impact_sensor io_fb_rl_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_rl_impact_sensor_type arg)
  {
    msg_.io_fb_rl_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rm_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fr_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fr_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_rl_impact_sensor io_fb_fr_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fr_impact_sensor_type arg)
  {
    msg_.io_fb_fr_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_rl_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fm_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fm_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fr_impact_sensor io_fb_fm_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fm_impact_sensor_type arg)
  {
    msg_.io_fb_fm_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fr_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fl_impact_sensor
{
public:
  explicit Init_IoFb_io_fb_fl_impact_sensor(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fm_impact_sensor io_fb_fl_impact_sensor(::ros2_drive_package_msg::msg::IoFb::_io_fb_fl_impact_sensor_type arg)
  {
    msg_.io_fb_fl_impact_sensor = std::move(arg);
    return Init_IoFb_io_fb_fm_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_speaker
{
public:
  explicit Init_IoFb_io_fb_speaker(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fl_impact_sensor io_fb_speaker(::ros2_drive_package_msg::msg::IoFb::_io_fb_speaker_type arg)
  {
    msg_.io_fb_speaker = std::move(arg);
    return Init_IoFb_io_fb_fl_impact_sensor(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_fog_lamp
{
public:
  explicit Init_IoFb_io_fb_fog_lamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_speaker io_fb_fog_lamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_fog_lamp_type arg)
  {
    msg_.io_fb_fog_lamp = std::move(arg);
    return Init_IoFb_io_fb_speaker(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_clearance_lamp
{
public:
  explicit Init_IoFb_io_fb_clearance_lamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_fog_lamp io_fb_clearance_lamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_clearance_lamp_type arg)
  {
    msg_.io_fb_clearance_lamp = std::move(arg);
    return Init_IoFb_io_fb_fog_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_braking_lamp
{
public:
  explicit Init_IoFb_io_fb_braking_lamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_clearance_lamp io_fb_braking_lamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_braking_lamp_type arg)
  {
    msg_.io_fb_braking_lamp = std::move(arg);
    return Init_IoFb_io_fb_clearance_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_turn_lamp
{
public:
  explicit Init_IoFb_io_fb_turn_lamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_braking_lamp io_fb_turn_lamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_turn_lamp_type arg)
  {
    msg_.io_fb_turn_lamp = std::move(arg);
    return Init_IoFb_io_fb_braking_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_upper_beam_headlamp
{
public:
  explicit Init_IoFb_io_fb_upper_beam_headlamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_turn_lamp io_fb_upper_beam_headlamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_upper_beam_headlamp_type arg)
  {
    msg_.io_fb_upper_beam_headlamp = std::move(arg);
    return Init_IoFb_io_fb_turn_lamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_lower_beam_headlamp
{
public:
  explicit Init_IoFb_io_fb_lower_beam_headlamp(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_upper_beam_headlamp io_fb_lower_beam_headlamp(::ros2_drive_package_msg::msg::IoFb::_io_fb_lower_beam_headlamp_type arg)
  {
    msg_.io_fb_lower_beam_headlamp = std::move(arg);
    return Init_IoFb_io_fb_upper_beam_headlamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_unlock
{
public:
  explicit Init_IoFb_io_fb_unlock(::ros2_drive_package_msg::msg::IoFb & msg)
  : msg_(msg)
  {}
  Init_IoFb_io_fb_lower_beam_headlamp io_fb_unlock(::ros2_drive_package_msg::msg::IoFb::_io_fb_unlock_type arg)
  {
    msg_.io_fb_unlock = std::move(arg);
    return Init_IoFb_io_fb_lower_beam_headlamp(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

class Init_IoFb_io_fb_lamp_ctrl
{
public:
  Init_IoFb_io_fb_lamp_ctrl()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IoFb_io_fb_unlock io_fb_lamp_ctrl(::ros2_drive_package_msg::msg::IoFb::_io_fb_lamp_ctrl_type arg)
  {
    msg_.io_fb_lamp_ctrl = std::move(arg);
    return Init_IoFb_io_fb_unlock(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::IoFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::IoFb>()
{
  return ros2_drive_package_msg::msg::builder::Init_IoFb_io_fb_lamp_ctrl();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_FB__BUILDER_HPP_
