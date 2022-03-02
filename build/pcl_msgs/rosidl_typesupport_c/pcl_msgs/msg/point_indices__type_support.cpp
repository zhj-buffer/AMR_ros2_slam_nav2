// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from pcl_msgs:msg/PointIndices.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "pcl_msgs/msg/rosidl_typesupport_c__visibility_control.h"
#include "pcl_msgs/msg/detail/point_indices__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace pcl_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _PointIndices_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _PointIndices_type_support_ids_t;

static const _PointIndices_type_support_ids_t _PointIndices_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _PointIndices_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _PointIndices_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _PointIndices_type_support_symbol_names_t _PointIndices_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, pcl_msgs, msg, PointIndices)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, pcl_msgs, msg, PointIndices)),
  }
};

typedef struct _PointIndices_type_support_data_t
{
  void * data[2];
} _PointIndices_type_support_data_t;

static _PointIndices_type_support_data_t _PointIndices_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _PointIndices_message_typesupport_map = {
  2,
  "pcl_msgs",
  &_PointIndices_message_typesupport_ids.typesupport_identifier[0],
  &_PointIndices_message_typesupport_symbol_names.symbol_name[0],
  &_PointIndices_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t PointIndices_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_PointIndices_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace pcl_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_pcl_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, pcl_msgs, msg, PointIndices)() {
  return &::pcl_msgs::msg::rosidl_typesupport_c::PointIndices_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
