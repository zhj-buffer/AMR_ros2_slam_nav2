// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_drive_package_msg:msg/LWheelFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_drive_package_msg__msg__LWheelFb __attribute__((deprecated))
#else
# define DEPRECATED__ros2_drive_package_msg__msg__LWheelFb __declspec(deprecated)
#endif

namespace ros2_drive_package_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LWheelFb_
{
  using Type = LWheelFb_<ContainerAllocator>;

  explicit LWheelFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_wheel_fb_velocity = 0.0f;
      this->l_wheel_fb_pulse = 0l;
    }
  }

  explicit LWheelFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_wheel_fb_velocity = 0.0f;
      this->l_wheel_fb_pulse = 0l;
    }
  }

  // field types and members
  using _l_wheel_fb_velocity_type =
    float;
  _l_wheel_fb_velocity_type l_wheel_fb_velocity;
  using _l_wheel_fb_pulse_type =
    int32_t;
  _l_wheel_fb_pulse_type l_wheel_fb_pulse;

  // setters for named parameter idiom
  Type & set__l_wheel_fb_velocity(
    const float & _arg)
  {
    this->l_wheel_fb_velocity = _arg;
    return *this;
  }
  Type & set__l_wheel_fb_pulse(
    const int32_t & _arg)
  {
    this->l_wheel_fb_pulse = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_drive_package_msg__msg__LWheelFb
    std::shared_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_drive_package_msg__msg__LWheelFb
    std::shared_ptr<ros2_drive_package_msg::msg::LWheelFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LWheelFb_ & other) const
  {
    if (this->l_wheel_fb_velocity != other.l_wheel_fb_velocity) {
      return false;
    }
    if (this->l_wheel_fb_pulse != other.l_wheel_fb_pulse) {
      return false;
    }
    return true;
  }
  bool operator!=(const LWheelFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LWheelFb_

// alias to use template instance with default allocator
using LWheelFb =
  ros2_drive_package_msg::msg::LWheelFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__L_WHEEL_FB__STRUCT_HPP_
