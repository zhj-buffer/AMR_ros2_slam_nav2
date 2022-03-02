// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#ifndef ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_HPP_
#define ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_rada_msg__msg__Rada __attribute__((deprecated))
#else
# define DEPRECATED__ros2_rada_msg__msg__Rada __declspec(deprecated)
#endif

namespace ros2_rada_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Rada_
{
  using Type = Rada_<ContainerAllocator>;

  explicit Rada_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r1 = 0ul;
      this->r2 = 0ul;
      this->r3 = 0ul;
      this->r4 = 0ul;
      this->crc = 0ul;
    }
  }

  explicit Rada_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->r1 = 0ul;
      this->r2 = 0ul;
      this->r3 = 0ul;
      this->r4 = 0ul;
      this->crc = 0ul;
    }
  }

  // field types and members
  using _r1_type =
    uint32_t;
  _r1_type r1;
  using _r2_type =
    uint32_t;
  _r2_type r2;
  using _r3_type =
    uint32_t;
  _r3_type r3;
  using _r4_type =
    uint32_t;
  _r4_type r4;
  using _crc_type =
    uint32_t;
  _crc_type crc;

  // setters for named parameter idiom
  Type & set__r1(
    const uint32_t & _arg)
  {
    this->r1 = _arg;
    return *this;
  }
  Type & set__r2(
    const uint32_t & _arg)
  {
    this->r2 = _arg;
    return *this;
  }
  Type & set__r3(
    const uint32_t & _arg)
  {
    this->r3 = _arg;
    return *this;
  }
  Type & set__r4(
    const uint32_t & _arg)
  {
    this->r4 = _arg;
    return *this;
  }
  Type & set__crc(
    const uint32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_rada_msg::msg::Rada_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_rada_msg::msg::Rada_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_rada_msg::msg::Rada_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_rada_msg::msg::Rada_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_rada_msg__msg__Rada
    std::shared_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_rada_msg__msg__Rada
    std::shared_ptr<ros2_rada_msg::msg::Rada_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Rada_ & other) const
  {
    if (this->r1 != other.r1) {
      return false;
    }
    if (this->r2 != other.r2) {
      return false;
    }
    if (this->r3 != other.r3) {
      return false;
    }
    if (this->r4 != other.r4) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    return true;
  }
  bool operator!=(const Rada_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Rada_

// alias to use template instance with default allocator
using Rada =
  ros2_rada_msg::msg::Rada_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_rada_msg

#endif  // ROS2_RADA_MSG__MSG__DETAIL__RADA__STRUCT_HPP_
