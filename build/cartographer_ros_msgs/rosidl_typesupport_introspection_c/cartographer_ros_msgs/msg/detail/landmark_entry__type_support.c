// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/LandmarkEntry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/landmark_entry__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/landmark_entry__functions.h"
#include "cartographer_ros_msgs/msg/detail/landmark_entry__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `tracking_from_landmark_transform`
#include "geometry_msgs/msg/pose.h"
// Member `tracking_from_landmark_transform`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__LandmarkEntry__init(message_memory);
}

void LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__LandmarkEntry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_member_array[4] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__LandmarkEntry, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tracking_from_landmark_transform",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__LandmarkEntry, tracking_from_landmark_transform),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__LandmarkEntry, translation_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_weight",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__LandmarkEntry, rotation_weight),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "LandmarkEntry",  // message name
  4,  // number of fields
  sizeof(cartographer_ros_msgs__msg__LandmarkEntry),
  LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_member_array,  // message members
  LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_init_function,  // function to initialize message memory (memory has to be allocated)
  LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_type_support_handle = {
  0,
  &LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, LandmarkEntry)() {
  LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_type_support_handle.typesupport_identifier) {
    LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LandmarkEntry__rosidl_typesupport_introspection_c__LandmarkEntry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
