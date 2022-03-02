// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__BUILDER_HPP_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__BUILDER_HPP_

#include "rslidar_msg/msg/detail/rslidar_scan__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace rslidar_msg
{

namespace msg
{

namespace builder
{

class Init_RslidarScan_packets
{
public:
  explicit Init_RslidarScan_packets(::rslidar_msg::msg::RslidarScan & msg)
  : msg_(msg)
  {}
  ::rslidar_msg::msg::RslidarScan packets(::rslidar_msg::msg::RslidarScan::_packets_type arg)
  {
    msg_.packets = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rslidar_msg::msg::RslidarScan msg_;
};

class Init_RslidarScan_header
{
public:
  Init_RslidarScan_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RslidarScan_packets header(::rslidar_msg::msg::RslidarScan::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RslidarScan_packets(msg_);
  }

private:
  ::rslidar_msg::msg::RslidarScan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rslidar_msg::msg::RslidarScan>()
{
  return rslidar_msg::msg::builder::Init_RslidarScan_header();
}

}  // namespace rslidar_msg

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__BUILDER_HPP_
