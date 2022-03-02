// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2_drive_package_msg:msg/BmsFlagFb.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_HPP_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__ros2_drive_package_msg__msg__BmsFlagFb __attribute__((deprecated))
#else
# define DEPRECATED__ros2_drive_package_msg__msg__BmsFlagFb __declspec(deprecated)
#endif

namespace ros2_drive_package_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BmsFlagFb_
{
  using Type = BmsFlagFb_<ContainerAllocator>;

  explicit BmsFlagFb_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_flag_fb_soc = 0;
      this->bms_flag_fb_single_ov = false;
      this->bms_flag_fb_single_uv = false;
      this->bms_flag_fb_ov = false;
      this->bms_flag_fb_uv = false;
      this->bms_flag_fb_charge_ot = false;
      this->bms_flag_fb_charge_ut = false;
      this->bms_flag_fb_discharge_ot = false;
      this->bms_flag_fb_discharge_ut = false;
      this->bms_flag_fb_charge_oc = false;
      this->bms_flag_fb_discharge_oc = false;
      this->bms_flag_fb_short = false;
      this->bms_flag_fb_ic_error = false;
      this->bms_flag_fb_lock_mos = false;
      this->bms_flag_fb_charge_flag = false;
      this->bms_flag_fb_hight_temperature = 0.0f;
      this->bms_flag_fb_low_temperature = 0.0f;
    }
  }

  explicit BmsFlagFb_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bms_flag_fb_soc = 0;
      this->bms_flag_fb_single_ov = false;
      this->bms_flag_fb_single_uv = false;
      this->bms_flag_fb_ov = false;
      this->bms_flag_fb_uv = false;
      this->bms_flag_fb_charge_ot = false;
      this->bms_flag_fb_charge_ut = false;
      this->bms_flag_fb_discharge_ot = false;
      this->bms_flag_fb_discharge_ut = false;
      this->bms_flag_fb_charge_oc = false;
      this->bms_flag_fb_discharge_oc = false;
      this->bms_flag_fb_short = false;
      this->bms_flag_fb_ic_error = false;
      this->bms_flag_fb_lock_mos = false;
      this->bms_flag_fb_charge_flag = false;
      this->bms_flag_fb_hight_temperature = 0.0f;
      this->bms_flag_fb_low_temperature = 0.0f;
    }
  }

  // field types and members
  using _bms_flag_fb_soc_type =
    uint8_t;
  _bms_flag_fb_soc_type bms_flag_fb_soc;
  using _bms_flag_fb_single_ov_type =
    bool;
  _bms_flag_fb_single_ov_type bms_flag_fb_single_ov;
  using _bms_flag_fb_single_uv_type =
    bool;
  _bms_flag_fb_single_uv_type bms_flag_fb_single_uv;
  using _bms_flag_fb_ov_type =
    bool;
  _bms_flag_fb_ov_type bms_flag_fb_ov;
  using _bms_flag_fb_uv_type =
    bool;
  _bms_flag_fb_uv_type bms_flag_fb_uv;
  using _bms_flag_fb_charge_ot_type =
    bool;
  _bms_flag_fb_charge_ot_type bms_flag_fb_charge_ot;
  using _bms_flag_fb_charge_ut_type =
    bool;
  _bms_flag_fb_charge_ut_type bms_flag_fb_charge_ut;
  using _bms_flag_fb_discharge_ot_type =
    bool;
  _bms_flag_fb_discharge_ot_type bms_flag_fb_discharge_ot;
  using _bms_flag_fb_discharge_ut_type =
    bool;
  _bms_flag_fb_discharge_ut_type bms_flag_fb_discharge_ut;
  using _bms_flag_fb_charge_oc_type =
    bool;
  _bms_flag_fb_charge_oc_type bms_flag_fb_charge_oc;
  using _bms_flag_fb_discharge_oc_type =
    bool;
  _bms_flag_fb_discharge_oc_type bms_flag_fb_discharge_oc;
  using _bms_flag_fb_short_type =
    bool;
  _bms_flag_fb_short_type bms_flag_fb_short;
  using _bms_flag_fb_ic_error_type =
    bool;
  _bms_flag_fb_ic_error_type bms_flag_fb_ic_error;
  using _bms_flag_fb_lock_mos_type =
    bool;
  _bms_flag_fb_lock_mos_type bms_flag_fb_lock_mos;
  using _bms_flag_fb_charge_flag_type =
    bool;
  _bms_flag_fb_charge_flag_type bms_flag_fb_charge_flag;
  using _bms_flag_fb_hight_temperature_type =
    float;
  _bms_flag_fb_hight_temperature_type bms_flag_fb_hight_temperature;
  using _bms_flag_fb_low_temperature_type =
    float;
  _bms_flag_fb_low_temperature_type bms_flag_fb_low_temperature;

  // setters for named parameter idiom
  Type & set__bms_flag_fb_soc(
    const uint8_t & _arg)
  {
    this->bms_flag_fb_soc = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_single_ov(
    const bool & _arg)
  {
    this->bms_flag_fb_single_ov = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_single_uv(
    const bool & _arg)
  {
    this->bms_flag_fb_single_uv = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_ov(
    const bool & _arg)
  {
    this->bms_flag_fb_ov = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_uv(
    const bool & _arg)
  {
    this->bms_flag_fb_uv = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_charge_ot(
    const bool & _arg)
  {
    this->bms_flag_fb_charge_ot = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_charge_ut(
    const bool & _arg)
  {
    this->bms_flag_fb_charge_ut = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_discharge_ot(
    const bool & _arg)
  {
    this->bms_flag_fb_discharge_ot = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_discharge_ut(
    const bool & _arg)
  {
    this->bms_flag_fb_discharge_ut = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_charge_oc(
    const bool & _arg)
  {
    this->bms_flag_fb_charge_oc = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_discharge_oc(
    const bool & _arg)
  {
    this->bms_flag_fb_discharge_oc = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_short(
    const bool & _arg)
  {
    this->bms_flag_fb_short = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_ic_error(
    const bool & _arg)
  {
    this->bms_flag_fb_ic_error = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_lock_mos(
    const bool & _arg)
  {
    this->bms_flag_fb_lock_mos = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_charge_flag(
    const bool & _arg)
  {
    this->bms_flag_fb_charge_flag = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_hight_temperature(
    const float & _arg)
  {
    this->bms_flag_fb_hight_temperature = _arg;
    return *this;
  }
  Type & set__bms_flag_fb_low_temperature(
    const float & _arg)
  {
    this->bms_flag_fb_low_temperature = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2_drive_package_msg__msg__BmsFlagFb
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2_drive_package_msg__msg__BmsFlagFb
    std::shared_ptr<ros2_drive_package_msg::msg::BmsFlagFb_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BmsFlagFb_ & other) const
  {
    if (this->bms_flag_fb_soc != other.bms_flag_fb_soc) {
      return false;
    }
    if (this->bms_flag_fb_single_ov != other.bms_flag_fb_single_ov) {
      return false;
    }
    if (this->bms_flag_fb_single_uv != other.bms_flag_fb_single_uv) {
      return false;
    }
    if (this->bms_flag_fb_ov != other.bms_flag_fb_ov) {
      return false;
    }
    if (this->bms_flag_fb_uv != other.bms_flag_fb_uv) {
      return false;
    }
    if (this->bms_flag_fb_charge_ot != other.bms_flag_fb_charge_ot) {
      return false;
    }
    if (this->bms_flag_fb_charge_ut != other.bms_flag_fb_charge_ut) {
      return false;
    }
    if (this->bms_flag_fb_discharge_ot != other.bms_flag_fb_discharge_ot) {
      return false;
    }
    if (this->bms_flag_fb_discharge_ut != other.bms_flag_fb_discharge_ut) {
      return false;
    }
    if (this->bms_flag_fb_charge_oc != other.bms_flag_fb_charge_oc) {
      return false;
    }
    if (this->bms_flag_fb_discharge_oc != other.bms_flag_fb_discharge_oc) {
      return false;
    }
    if (this->bms_flag_fb_short != other.bms_flag_fb_short) {
      return false;
    }
    if (this->bms_flag_fb_ic_error != other.bms_flag_fb_ic_error) {
      return false;
    }
    if (this->bms_flag_fb_lock_mos != other.bms_flag_fb_lock_mos) {
      return false;
    }
    if (this->bms_flag_fb_charge_flag != other.bms_flag_fb_charge_flag) {
      return false;
    }
    if (this->bms_flag_fb_hight_temperature != other.bms_flag_fb_hight_temperature) {
      return false;
    }
    if (this->bms_flag_fb_low_temperature != other.bms_flag_fb_low_temperature) {
      return false;
    }
    return true;
  }
  bool operator!=(const BmsFlagFb_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BmsFlagFb_

// alias to use template instance with default allocator
using BmsFlagFb =
  ros2_drive_package_msg::msg::BmsFlagFb_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2_drive_package_msg

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__BMS_FLAG_FB__STRUCT_HPP_
