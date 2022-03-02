// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from cartographer_ros_msgs:srv/SubmapQuery.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_HPP_
#define CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Request __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Request __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SubmapQuery_Request_
{
  using Type = SubmapQuery_Request_<ContainerAllocator>;

  explicit SubmapQuery_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = 0l;
      this->submap_index = 0l;
    }
  }

  explicit SubmapQuery_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->trajectory_id = 0l;
      this->submap_index = 0l;
    }
  }

  // field types and members
  using _trajectory_id_type =
    int32_t;
  _trajectory_id_type trajectory_id;
  using _submap_index_type =
    int32_t;
  _submap_index_type submap_index;

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

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Request
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Request
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapQuery_Request_ & other) const
  {
    if (this->trajectory_id != other.trajectory_id) {
      return false;
    }
    if (this->submap_index != other.submap_index) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapQuery_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapQuery_Request_

// alias to use template instance with default allocator
using SubmapQuery_Request =
  cartographer_ros_msgs::srv::SubmapQuery_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cartographer_ros_msgs


// Include directives for member types
// Member 'status'
#include "cartographer_ros_msgs/msg/detail/status_response__struct.hpp"
// Member 'textures'
#include "cartographer_ros_msgs/msg/detail/submap_texture__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Response __attribute__((deprecated))
#else
# define DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Response __declspec(deprecated)
#endif

namespace cartographer_ros_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SubmapQuery_Response_
{
  using Type = SubmapQuery_Response_<ContainerAllocator>;

  explicit SubmapQuery_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->submap_version = 0l;
    }
  }

  explicit SubmapQuery_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->submap_version = 0l;
    }
  }

  // field types and members
  using _status_type =
    cartographer_ros_msgs::msg::StatusResponse_<ContainerAllocator>;
  _status_type status;
  using _submap_version_type =
    int32_t;
  _submap_version_type submap_version;
  using _textures_type =
    std::vector<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>::other>;
  _textures_type textures;

  // setters for named parameter idiom
  Type & set__status(
    const cartographer_ros_msgs::msg::StatusResponse_<ContainerAllocator> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__submap_version(
    const int32_t & _arg)
  {
    this->submap_version = _arg;
    return *this;
  }
  Type & set__textures(
    const std::vector<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>, typename ContainerAllocator::template rebind<cartographer_ros_msgs::msg::SubmapTexture_<ContainerAllocator>>::other> & _arg)
  {
    this->textures = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Response
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__cartographer_ros_msgs__srv__SubmapQuery_Response
    std::shared_ptr<cartographer_ros_msgs::srv::SubmapQuery_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SubmapQuery_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->submap_version != other.submap_version) {
      return false;
    }
    if (this->textures != other.textures) {
      return false;
    }
    return true;
  }
  bool operator!=(const SubmapQuery_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SubmapQuery_Response_

// alias to use template instance with default allocator
using SubmapQuery_Response =
  cartographer_ros_msgs::srv::SubmapQuery_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace cartographer_ros_msgs

namespace cartographer_ros_msgs
{

namespace srv
{

struct SubmapQuery
{
  using Request = cartographer_ros_msgs::srv::SubmapQuery_Request;
  using Response = cartographer_ros_msgs::srv::SubmapQuery_Response;
};

}  // namespace srv

}  // namespace cartographer_ros_msgs

#endif  // CARTOGRAPHER_ROS_MSGS__SRV__DETAIL__SUBMAP_QUERY__STRUCT_HPP_
