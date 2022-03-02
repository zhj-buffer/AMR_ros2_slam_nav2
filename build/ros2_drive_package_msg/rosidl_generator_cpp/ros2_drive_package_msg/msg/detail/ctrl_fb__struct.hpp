// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_drive_package_msg:msg/CtrlFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_drive_package_msg__msg__CtrlFb __attribute__((deprecated))
#else
# define DEPRECATED__ros2_drive_package_msg__msg__CtrlFb __declspec(deprecated)
#endif

namespace ros2_drive_package_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CtrlFb_
{
  using Type = CtrlFb_<ContainerAllocator>;

  explicit CtrlFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_fb_target_gear = 0;
      this->ctrl_fb_linear = 0.0f;
      this->ctrl_fb_angular = 0.0f;
    }
  }

  explicit CtrlFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->ctrl_fb_target_gear = 0;
      this->ctrl_fb_linear = 0.0f;
      this->ctrl_fb_angular = 0.0f;
    }
  }

  // field types and members
  using _ctrl_fb_target_gear_type =
    uint8_t;
  _ctrl_fb_target_gear_type ctrl_fb_target_gear;
  using _ctrl_fb_linear_type =
    float;
  _ctrl_fb_linear_type ctrl_fb_linear;
  using _ctrl_fb_angular_type =
    float;
  _ctrl_fb_angular_type ctrl_fb_angular;

  // setters for named parameter idiom
  Type & set__ctrl_fb_target_gear(
    const uint8_t & _arg)
  {
    this->ctrl_fb_target_gear = _arg;
    return *this;
  }
  Type & set__ctrl_fb_linear(
    const float & _arg)
  {
    this->ctrl_fb_linear = _arg;
    return *this;
  }
  Type & set__ctrl_fb_angular(
    const float & _arg)
  {
    this->ctrl_fb_angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_drive_package_msg__msg__CtrlFb
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_drive_package_msg__msg__CtrlFb
    std::shared_ptr<ros2_drive_package_msg::msg::CtrlFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CtrlFb_ & other) const
  {
    if (this->ctrl_fb_target_gear != other.ctrl_fb_target_gear) {
      return false;
    }
    if (this->ctrl_fb_linear != other.ctrl_fb_linear) {
      return false;
    }
    if (this->ctrl_fb_angular != other.ctrl_fb_angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const CtrlFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CtrlFb_

// alias to use template instance with default allocator
using CtrlFb =
  ros2_drive_package_msg::msg::CtrlFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__CTRL_FB__STRUCT_HPP_
