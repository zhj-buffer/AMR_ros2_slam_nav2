// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__BUILDER_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__BUILDER_HPP_

#include "ros2_drive_package_msg/msg/detail/bms_flag_fb__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_drive_package_msg
{

namespace msg
{

namespace builder
{

class Init_BmsFlagFb_bms_flag_fb_low_temperature
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_low_temperature(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  ::ros2_drive_package_msg::msg::BmsFlagFb bms_flag_fb_low_temperature(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_low_temperature_type arg)
  {
    msg_.bms_flag_fb_low_temperature = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_hight_temperature
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_hight_temperature(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_low_temperature bms_flag_fb_hight_temperature(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_hight_temperature_type arg)
  {
    msg_.bms_flag_fb_hight_temperature = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_low_temperature(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_charge_flag
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_charge_flag(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_hight_temperature bms_flag_fb_charge_flag(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_charge_flag_type arg)
  {
    msg_.bms_flag_fb_charge_flag = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_hight_temperature(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_lock_mos
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_lock_mos(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_charge_flag bms_flag_fb_lock_mos(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_lock_mos_type arg)
  {
    msg_.bms_flag_fb_lock_mos = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_charge_flag(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_ic_error
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_ic_error(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_lock_mos bms_flag_fb_ic_error(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_ic_error_type arg)
  {
    msg_.bms_flag_fb_ic_error = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_lock_mos(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_short
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_short(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_ic_error bms_flag_fb_short(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_short_type arg)
  {
    msg_.bms_flag_fb_short = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_ic_error(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_discharge_oc
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_discharge_oc(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_short bms_flag_fb_discharge_oc(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_discharge_oc_type arg)
  {
    msg_.bms_flag_fb_discharge_oc = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_short(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_charge_oc
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_charge_oc(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_discharge_oc bms_flag_fb_charge_oc(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_charge_oc_type arg)
  {
    msg_.bms_flag_fb_charge_oc = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_discharge_oc(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_discharge_ut
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_discharge_ut(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_charge_oc bms_flag_fb_discharge_ut(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_discharge_ut_type arg)
  {
    msg_.bms_flag_fb_discharge_ut = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_charge_oc(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_discharge_ot
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_discharge_ot(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_discharge_ut bms_flag_fb_discharge_ot(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_discharge_ot_type arg)
  {
    msg_.bms_flag_fb_discharge_ot = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_discharge_ut(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_charge_ut
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_charge_ut(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_discharge_ot bms_flag_fb_charge_ut(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_charge_ut_type arg)
  {
    msg_.bms_flag_fb_charge_ut = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_discharge_ot(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_charge_ot
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_charge_ot(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_charge_ut bms_flag_fb_charge_ot(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_charge_ot_type arg)
  {
    msg_.bms_flag_fb_charge_ot = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_charge_ut(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_uv
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_uv(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_charge_ot bms_flag_fb_uv(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_uv_type arg)
  {
    msg_.bms_flag_fb_uv = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_charge_ot(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_ov
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_ov(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_uv bms_flag_fb_ov(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_ov_type arg)
  {
    msg_.bms_flag_fb_ov = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_uv(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_single_uv
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_single_uv(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_ov bms_flag_fb_single_uv(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_single_uv_type arg)
  {
    msg_.bms_flag_fb_single_uv = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_ov(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_single_ov
{
public:
  explicit Init_BmsFlagFb_bms_flag_fb_single_ov(::ros2_drive_package_msg::msg::BmsFlagFb & msg)
  : msg_(msg)
  {}
  Init_BmsFlagFb_bms_flag_fb_single_uv bms_flag_fb_single_ov(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_single_ov_type arg)
  {
    msg_.bms_flag_fb_single_ov = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_single_uv(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

class Init_BmsFlagFb_bms_flag_fb_soc
{
public:
  Init_BmsFlagFb_bms_flag_fb_soc()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BmsFlagFb_bms_flag_fb_single_ov bms_flag_fb_soc(::ros2_drive_package_msg::msg::BmsFlagFb::_bms_flag_fb_soc_type arg)
  {
    msg_.bms_flag_fb_soc = std::move(arg);
    return Init_BmsFlagFb_bms_flag_fb_single_ov(msg_);
  }

private:
  ::ros2_drive_package_msg::msg::BmsFlagFb msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_drive_package_msg::msg::BmsFlagFb>()
{
  return ros2_drive_package_msg::msg::builder::Init_BmsFlagFb_bms_flag_fb_soc();
}

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__BUILDER_HPP_
