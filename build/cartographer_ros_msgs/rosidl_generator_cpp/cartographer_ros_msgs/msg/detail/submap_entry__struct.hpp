// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapEntry __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapEntry __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmapEntry_
{
  using Type = SubmapEntry_<ContainerAllocator>;

  explicit SubmapEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = 0l;
      this->submap_index = 0l;
      this->submap_version = 0l;
    }
  }

  explicit SubmapEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : pose(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = 0l;
      this->submap_index = 0l;
      this->submap_version = 0l;
    }
  }

  // field types and members
  using _trajectory_id_type =
    int32_t;
  _trajectory_id_type trajectory_id;
  using _submap_index_type =
    int32_t;
  _submap_index_type submap_index;
  using _submap_version_type =
    int32_t;
  _submap_version_type submap_version;
  using _pose_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__trajectory_id(
    const int32_t & _arg)
  {
    this->trajectory_id = _arg;
    return *this;
  }
  Type & set__submap_index(
    const int32_t & _arg)
  {
    this->submap_index = _arg;
    return *this;
  }
  Type & set__submap_version(
    const int32_t & _arg)
  {
    this->submap_version = _arg;
    return *this;
  }
  Type & set__pose(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapEntry
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapEntry
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapEntry_ & other) const
  {
    if (this->trajectory_id != other.trajectory_id) {
      return false;
    }
    if (this->submap_index != other.submap_index) {
      return false;
    }
    if (this->submap_version != other.submap_version) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapEntry_

// alias to use template instance with default allocator
using SubmapEntry =
  cartographer_ros_msgs::msg::SubmapEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_ENTRY__STRUCT_HPP_
