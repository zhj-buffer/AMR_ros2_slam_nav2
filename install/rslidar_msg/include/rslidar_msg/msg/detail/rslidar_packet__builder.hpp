// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rslidar_msg:msg/RslidarPacket.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__BUILDER_HPP_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__BUILDER_HPP_

#include "rslidar_msg/msg/detail/rslidar_packet__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rslidar_msg
{

namespace msg
{

namespace builder
{

class Init_RslidarPacket_data
{
public:
  explicit Init_RslidarPacket_data(::rslidar_msg::msg::RslidarPacket & msg)
  : msg_(msg)
  {}
  ::rslidar_msg::msg::RslidarPacket data(::rslidar_msg::msg::RslidarPacket::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rslidar_msg::msg::RslidarPacket msg_;
};

class Init_RslidarPacket_stamp
{
public:
  Init_RslidarPacket_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RslidarPacket_data stamp(::rslidar_msg::msg::RslidarPacket::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_RslidarPacket_data(msg_);
  }

private:
  ::rslidar_msg::msg::RslidarPacket msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rslidar_msg::msg::RslidarPacket>()
{
  return rslidar_msg::msg::builder::Init_RslidarPacket_stamp();
}

}  // namespace rslidar_msg

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_PACKET__BUILDER_HPP_
