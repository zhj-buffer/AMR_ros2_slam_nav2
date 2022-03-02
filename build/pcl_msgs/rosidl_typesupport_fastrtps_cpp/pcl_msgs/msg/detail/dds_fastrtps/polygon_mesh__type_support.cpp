// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from pcl_msgs:msg/PolygonMesh.idl
// generated code does not contain a copyright notice
#include "pcl_msgs/msg/detail/polygon_mesh__rosidl_typesupport_fastrtps_cpp.hpp"
#include "pcl_msgs/msg/detail/polygon_mesh__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

namespace pcl_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const pcl_msgs::msg::Vertices &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  pcl_msgs::msg::Vertices &);
size_t get_serialized_size(
  const pcl_msgs::msg::Vertices &,
  size_t current_alignment);
size_t
max_serialized_size_Vertices(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace pcl_msgs


namespace pcl_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_serialize(
  const pcl_msgs::msg::PolygonMesh & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: cloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud,
    cdr);
  // Member: polygons
  {
    size_t size = ros_message.polygons.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.polygons[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  pcl_msgs::msg::PolygonMesh & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: cloud
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud);

  // Member: polygons
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.polygons.resize(size);
    for (size_t i = 0; i < size; i++) {
      pcl_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.polygons[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
get_serialized_size(
  const pcl_msgs::msg::PolygonMesh & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: cloud

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud, current_alignment);
  // Member: polygons
  {
    size_t array_size = ros_message.polygons.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        pcl_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.polygons[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_pcl_msgs
max_serialized_size_PolygonMesh(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: cloud
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        full_bounded, current_alignment);
    }
  }

  // Member: polygons
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        pcl_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vertices(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PolygonMesh__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const pcl_msgs::msg::PolygonMesh *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PolygonMesh__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<pcl_msgs::msg::PolygonMesh *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PolygonMesh__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const pcl_msgs::msg::PolygonMesh *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PolygonMesh__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PolygonMesh(full_bounded, 0);
}

static message_type_support_callbacks_t _PolygonMesh__callbacks = {
  "pcl_msgs::msg",
  "PolygonMesh",
  _PolygonMesh__cdr_serialize,
  _PolygonMesh__cdr_deserialize,
  _PolygonMesh__get_serialized_size,
  _PolygonMesh__max_serialized_size
};

static rosidl_message_type_support_t _PolygonMesh__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PolygonMesh__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace pcl_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<pcl_msgs::msg::PolygonMesh>()
{
  return &pcl_msgs::msg::typesupport_fastrtps_cpp::_PolygonMesh__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, pcl_msgs, msg, PolygonMesh)() {
  return &pcl_msgs::msg::typesupport_fastrtps_cpp::_PolygonMesh__handle;
}

#ifdef __cplusplus
}
#endif
