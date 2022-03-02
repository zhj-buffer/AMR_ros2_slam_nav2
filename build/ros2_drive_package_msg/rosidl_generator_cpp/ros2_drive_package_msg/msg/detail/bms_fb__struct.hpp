// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_drive_package_msg:msg/BmsFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__STRUCT_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_drive_package_msg__msg__BmsFb __attribute__((deprecated))
#else
# define DEPRECATED__ros2_drive_package_msg__msg__BmsFb __declspec(deprecated)
#endif

namespace ros2_drive_package_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsFb_
{
  using Type = BmsFb_<ContainerAllocator>;

  explicit BmsFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_fb_voltage = 0.0f;
      this->bms_fb_current = 0.0f;
      this->bms_fb_remaining_capacity = 0.0f;
    }
  }

  explicit BmsFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_fb_voltage = 0.0f;
      this->bms_fb_current = 0.0f;
      this->bms_fb_remaining_capacity = 0.0f;
    }
  }

  // field types and members
  using _bms_fb_voltage_type =
    float;
  _bms_fb_voltage_type bms_fb_voltage;
  using _bms_fb_current_type =
    float;
  _bms_fb_current_type bms_fb_current;
  using _bms_fb_remaining_capacity_type =
    float;
  _bms_fb_remaining_capacity_type bms_fb_remaining_capacity;

  // setters for named parameter idiom
  Type & set__bms_fb_voltage(
    const float & _arg)
  {
    this->bms_fb_voltage = _arg;
    return *this;
  }
  Type & set__bms_fb_current(
    const float & _arg)
  {
    this->bms_fb_current = _arg;
    return *this;
  }
  Type & set__bms_fb_remaining_capacity(
    const float & _arg)
  {
    this->bms_fb_remaining_capacity = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_drive_package_msg__msg__BmsFb
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_drive_package_msg__msg__BmsFb
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsFb_ & other) const
  {
    if (this->bms_fb_voltage != other.bms_fb_voltage) {
      return false;
    }
    if (this->bms_fb_current != other.bms_fb_current) {
      return false;
    }
    if (this->bms_fb_remaining_capacity != other.bms_fb_remaining_capacity) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsFb_

// alias to use template instance with default allocator
using BmsFb =
  ros2_drive_package_msg::msg::BmsFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FB__STRUCT_HPP_
