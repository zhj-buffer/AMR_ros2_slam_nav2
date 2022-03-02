// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:msg/StatusCode.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__msg__StatusCode __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__msg__StatusCode __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StatusCode_
{
  using Type = StatusCode_<ContainerAllocator>;

  explicit StatusCode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit StatusCode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr uint8_t OK =
    0u;
  static constexpr uint8_t CANCELLED =
    1u;
  static constexpr uint8_t UNKNOWN =
    2u;
  static constexpr uint8_t INVALID_ARGUMENT =
    3u;
  static constexpr uint8_t DEADLINE_EXCEEDED =
    4u;
  static constexpr uint8_t NOT_FOUND =
    5u;
  static constexpr uint8_t ALREADY_EXISTS =
    6u;
  static constexpr uint8_t PERMISSION_DENIED =
    7u;
  static constexpr uint8_t RESOURCE_EXHAUSTED =
    8u;
  static constexpr uint8_t FAILED_PRECONDITION =
    9u;
  static constexpr uint8_t ABORTED =
    10u;
  static constexpr uint8_t OUT_OF_RANGE =
    11u;
  static constexpr uint8_t UNIMPLEMENTED =
    12u;
  static constexpr uint8_t INTERNAL =
    13u;
  static constexpr uint8_t UNAVAILABLE =
    14u;
  static constexpr uint8_t DATA_LOSS =
    15u;

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__msg__StatusCode
    std::shared_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__msg__StatusCode
    std::shared_ptr<cartographer_ros_msgs::msg::StatusCode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StatusCode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const StatusCode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StatusCode_

// alias to use template instance with default allocator
using StatusCode =
  cartographer_ros_msgs::msg::StatusCode_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::OK;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::CANCELLED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::INVALID_ARGUMENT;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::DEADLINE_EXCEEDED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::NOT_FOUND;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::ALREADY_EXISTS;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::PERMISSION_DENIED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::RESOURCE_EXHAUSTED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::FAILED_PRECONDITION;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::ABORTED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::OUT_OF_RANGE;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::UNIMPLEMENTED;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::INTERNAL;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::UNAVAILABLE;
template<typename ContainerAllocator>
constexpr uint8_t StatusCode_<ContainerAllocator>::DATA_LOSS;

}  // namespace msg

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__STRUCT_HPP_
