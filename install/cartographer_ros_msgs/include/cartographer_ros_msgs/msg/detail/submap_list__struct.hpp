// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/SubmapList.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_HPP_

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
// Member 'submap'
#include "cartographer_ros_msgs/msg/detail/submap_entry__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapList __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__SubmapList __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SubmapList_
{
  using Type = SubmapList_<ContainerAllocator>;

  explicit SubmapList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit SubmapList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _submap_type =
    std::vector<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>::other>;
  _submap_type submap;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__submap(
    const std::vector<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapEntry_<ContainerAllocator>>::other> & _arg)
  {
    this->submap = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__SubmapList
    std::shared_ptr<cartographer_ros_msgs::msg::SubmapList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapList_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->submap != other.submap) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapList_

// alias to use template instance with default allocator
using SubmapList =
  cartographer_ros_msgs::msg::SubmapList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__SUBMAP_LIST__STRUCT_HPP_
