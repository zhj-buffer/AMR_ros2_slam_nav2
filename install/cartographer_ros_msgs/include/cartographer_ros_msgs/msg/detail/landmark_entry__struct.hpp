// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'tracking_from_landmark_transform'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__LandmarkEntry __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__LandmarkEntry __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LandmarkEntry_
{
  using Type = LandmarkEntry_<ContainerAllocator>;

  explicit LandmarkEntry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : tracking_from_landmark_transform(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->translation_weight = 0.0;
      this->rotation_weight = 0.0;
    }
  }

  explicit LandmarkEntry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc),
    tracking_from_landmark_transform(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->id = "";
      this->translation_weight = 0.0;
      this->rotation_weight = 0.0;
    }
  }

  // field types and members
  using _id_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _id_type id;
  using _tracking_from_landmark_transform_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _tracking_from_landmark_transform_type tracking_from_landmark_transform;
  using _translation_weight_type =
    double;
  _translation_weight_type translation_weight;
  using _rotation_weight_type =
    double;
  _rotation_weight_type rotation_weight;

  // setters for named parameter idiom
  Type & set__id(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__tracking_from_landmark_transform(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->tracking_from_landmark_transform = _arg;
    return *this;
  }
  Type & set__translation_weight(
    const double & _arg)
  {
    this->translation_weight = _arg;
    return *this;
  }
  Type & set__rotation_weight(
    const double & _arg)
  {
    this->rotation_weight = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__LandmarkEntry
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__LandmarkEntry
    std::shared_ptr<cartographer_ros_msgs::msg::LandmarkEntry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LandmarkEntry_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->tracking_from_landmark_transform != other.tracking_from_landmark_transform) {
      return false;
    }
    if (this->translation_weight != other.translation_weight) {
      return false;
    }
    if (this->rotation_weight != other.rotation_weight) {
      return false;
    }
    return true;
  }
  bool operator!=(const LandmarkEntry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LandmarkEntry_

// alias to use template instance with default allocator
using LandmarkEntry =
  cartographer_ros_msgs::msg::LandmarkEntry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__LANDMARK_ENTRY__STRUCT_HPP_
