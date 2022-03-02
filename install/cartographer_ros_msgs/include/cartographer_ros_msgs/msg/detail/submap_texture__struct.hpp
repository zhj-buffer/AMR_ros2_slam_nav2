// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapTexture.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'slice_pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapTexture __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapTexture __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmapTexture_
{
  using Type = SubmapTexture_<ContainerAllocator>;

  explicit SubmapTexture_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : slice_pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->resolution = 0.0;
    }
  }

  explicit SubmapTexture_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : slice_pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->resolution = 0.0;
    }
  }

  // field types and members
  using _cells_type =
    std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other>;
  _cells_type cells;
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _resolution_type =
    double;
  _resolution_type resolution;
  using _slice_pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _slice_pose_type slice_pose;

  // setters for named parameter idiom
  Type & set__cells(
    const std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other> & _arg)
  {
    this->cells = _arg;
    return *this;
  }
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__resolution(
    const double & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__slice_pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->slice_pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapTexture
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapTexture
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapTexture_ & other) const
  {
    if (this->cells != other.cells) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->slice_pose != other.slice_pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapTexture_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapTexture_

// alias to use template instance with default allocator
using SubmapTexture =
  cartographer_ros_msgs::msg::SubmapTexture_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_TEXTURE__STRUCT_HPP_
