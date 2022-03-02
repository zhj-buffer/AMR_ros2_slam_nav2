// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#ifndef ROS2_RADA_MSG__MSG__DETAIL__RADA__BUILDER_HPP_
#define ROS2_RADA_MSG__MSG__DETAIL__RADA__BUILDER_HPP_

#include "ros2_rada_msg/msg/detail/rada__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros2_rada_msg
{

namespace msg
{

namespace builder
{

class Init_Rada_crc
{
public:
  explicit Init_Rada_crc(::ros2_rada_msg::msg::Rada & msg)
  : msg_(msg)
  {}
  ::ros2_rada_msg::msg::Rada crc(::ros2_rada_msg::msg::Rada::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2_rada_msg::msg::Rada msg_;
};

class Init_Rada_r4
{
public:
  explicit Init_Rada_r4(::ros2_rada_msg::msg::Rada & msg)
  : msg_(msg)
  {}
  Init_Rada_crc r4(::ros2_rada_msg::msg::Rada::_r4_type arg)
  {
    msg_.r4 = std::move(arg);
    return Init_Rada_crc(msg_);
  }

private:
  ::ros2_rada_msg::msg::Rada msg_;
};

class Init_Rada_r3
{
public:
  explicit Init_Rada_r3(::ros2_rada_msg::msg::Rada & msg)
  : msg_(msg)
  {}
  Init_Rada_r4 r3(::ros2_rada_msg::msg::Rada::_r3_type arg)
  {
    msg_.r3 = std::move(arg);
    return Init_Rada_r4(msg_);
  }

private:
  ::ros2_rada_msg::msg::Rada msg_;
};

class Init_Rada_r2
{
public:
  explicit Init_Rada_r2(::ros2_rada_msg::msg::Rada & msg)
  : msg_(msg)
  {}
  Init_Rada_r3 r2(::ros2_rada_msg::msg::Rada::_r2_type arg)
  {
    msg_.r2 = std::move(arg);
    return Init_Rada_r3(msg_);
  }

private:
  ::ros2_rada_msg::msg::Rada msg_;
};

class Init_Rada_r1
{
public:
  Init_Rada_r1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Rada_r2 r1(::ros2_rada_msg::msg::Rada::_r1_type arg)
  {
    msg_.r1 = std::move(arg);
    return Init_Rada_r2(msg_);
  }

private:
  ::ros2_rada_msg::msg::Rada msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2_rada_msg::msg::Rada>()
{
  return ros2_rada_msg::msg::builder::Init_Rada_r1();
}

}  // namespace ros2_rada_msg

#endif  // ROS2_RADA_MSG__MSG__DETAIL__RADA__BUILDER_HPP_
