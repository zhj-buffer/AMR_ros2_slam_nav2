// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rslidar_msg:msg/RslidarScan.idl
// generated code does not contain a copyright notice

#ifndef RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_HPP_
#define RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'packets'
#include "rslidar_msg/msg/detail/rslidar_packet__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rslidar_msg__msg__RslidarScan __attribute__((deprecated))
#else
# define DEPRECATED__rslidar_msg__msg__RslidarScan __declspec(deprecated)
#endif

namespace rslidar_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RslidarScan_
{
  using Type = RslidarScan_<ContainerAllocator>;

  explicit RslidarScan_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit RslidarScan_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _packets_type =
    std::vector<rslidar_msg::msg::RslidarPacket_<ContainerAllocator>, typename ContainerAllocator::template rebind<rslidar_msg::msg::RslidarPacket_<ContainerAllocator>>::other>;
  _packets_type packets;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__packets(
    const std::vector<rslidar_msg::msg::RslidarPacket_<ContainerAllocator>, typename ContainerAllocator::template rebind<rslidar_msg::msg::RslidarPacket_<ContainerAllocator>>::other> & _arg)
  {
    this->packets = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rslidar_msg::msg::RslidarScan_<ContainerAllocator> *;
  using ConstRawPtr =
    const rslidar_msg::msg::RslidarScan_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rslidar_msg::msg::RslidarScan_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rslidar_msg::msg::RslidarScan_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rslidar_msg__msg__RslidarScan
    std::shared_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rslidar_msg__msg__RslidarScan
    std::shared_ptr<rslidar_msg::msg::RslidarScan_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RslidarScan_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->packets != other.packets) {
      return false;
    }
    return true;
  }
  bool operator!=(const RslidarScan_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RslidarScan_

// alias to use template instance with default allocator
using RslidarScan =
  rslidar_msg::msg::RslidarScan_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rslidar_msg

#endif  // RSLIDAR_MSG__MSG__DETAIL__RSLIDAR_SCAN__STRUCT_HPP_
