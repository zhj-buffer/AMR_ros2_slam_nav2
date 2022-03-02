// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_drive_package_msg:msg/CtrlCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_drive_package_msg__msg__CtrlCmd __attribute__((deprecated))
#else
# define DEPRECATED__ros2_drive_package_msg__msg__CtrlCmd __declspec(deprecated)
#endif

namespace ros2_drive_package_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtrlCmd_
{
  using Type = CtrlCmd_<ContainerAllocator>;

  explicit CtrlCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_cmd_gear = 0;
      this->ctrl_cmd_linear = 0.0f;
      this->ctrl_cmd_angular = 0.0f;
    }
  }

  explicit CtrlCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_cmd_gear = 0;
      this->ctrl_cmd_linear = 0.0f;
      this->ctrl_cmd_angular = 0.0f;
    }
  }

  // field types and members
  using _ctrl_cmd_gear_type =
    uint8_t;
  _ctrl_cmd_gear_type ctrl_cmd_gear;
  using _ctrl_cmd_linear_type =
    float;
  _ctrl_cmd_linear_type ctrl_cmd_linear;
  using _ctrl_cmd_angular_type =
    float;
  _ctrl_cmd_angular_type ctrl_cmd_angular;

  // setters for named parameter idiom
  Type & set__ctrl_cmd_gear(
    const uint8_t & _arg)
  {
    this->ctrl_cmd_gear = _arg;
    return *this;
  }
  Type & set__ctrl_cmd_linear(
    const float & _arg)
  {
    this->ctrl_cmd_linear = _arg;
    return *this;
  }
  Type & set__ctrl_cmd_angular(
    const float & _arg)
  {
    this->ctrl_cmd_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_drive_package_msg__msg__CtrlCmd
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_drive_package_msg__msg__CtrlCmd
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtrlCmd_ & other) const
  {
    if (this->ctrl_cmd_gear != other.ctrl_cmd_gear) {
      return false;
    }
    if (this->ctrl_cmd_linear != other.ctrl_cmd_linear) {
      return false;
    }
    if (this->ctrl_cmd_angular != other.ctrl_cmd_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtrlCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtrlCmd_

// alias to use template instance with default allocator
using CtrlCmd =
  ros2_drive_package_msg::msg::CtrlCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_CMD__STRUCT_HPP_
