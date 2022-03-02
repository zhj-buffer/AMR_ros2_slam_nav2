// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from nav_2d_msgs:msg/Path2D.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "nav_2d_msgs/msg/detail/path2_d__rosidl_typesupport_introspection_c.h"
#include "nav_2d_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "nav_2d_msgs/msg/detail/path2_d__functions.h"
#include "nav_2d_msgs/msg/detail/path2_d__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `poses`
#include "geometry_msgs/msg/pose2_d.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Path2D__rosidl_typesupport_introspection_c__Path2D_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  nav_2d_msgs__msg__Path2D__init(message_memory);
}

void Path2D__rosidl_typesupport_introspection_c__Path2D_fini_function(void * message_memory)
{
  nav_2d_msgs__msg__Path2D__fini(message_memory);
}

size_t Path2D__rosidl_typesupport_introspection_c__size_function__Pose2D__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return member->size;
}

const void * Path2D__rosidl_typesupport_introspection_c__get_const_function__Pose2D__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose2D__Sequence * member =
    (const geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

void * Path2D__rosidl_typesupport_introspection_c__get_function__Pose2D__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  return &member->data[index];
}

bool Path2D__rosidl_typesupport_introspection_c__resize_function__Pose2D__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose2D__Sequence * member =
    (geometry_msgs__msg__Pose2D__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose2D__Sequence__fini(member);
  return geometry_msgs__msg__Pose2D__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember Path2D__rosidl_typesupport_introspection_c__Path2D_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs__msg__Path2D, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(nav_2d_msgs__msg__Path2D, poses),  // bytes offset in struct
    NULL,  // default value
    Path2D__rosidl_typesupport_introspection_c__size_function__Pose2D__poses,  // size() function pointer
    Path2D__rosidl_typesupport_introspection_c__get_const_function__Pose2D__poses,  // get_const(index) function pointer
    Path2D__rosidl_typesupport_introspection_c__get_function__Pose2D__poses,  // get(index) function pointer
    Path2D__rosidl_typesupport_introspection_c__resize_function__Pose2D__poses  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Path2D__rosidl_typesupport_introspection_c__Path2D_message_members = {
  "nav_2d_msgs__msg",  // message namespace
  "Path2D",  // message name
  2,  // number of fields
  sizeof(nav_2d_msgs__msg__Path2D),
  Path2D__rosidl_typesupport_introspection_c__Path2D_message_member_array,  // message members
  Path2D__rosidl_typesupport_introspection_c__Path2D_init_function,  // function to initialize message memory (memory has to be allocated)
  Path2D__rosidl_typesupport_introspection_c__Path2D_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Path2D__rosidl_typesupport_introspection_c__Path2D_message_type_support_handle = {
  0,
  &Path2D__rosidl_typesupport_introspection_c__Path2D_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_nav_2d_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, nav_2d_msgs, msg, Path2D)() {
  Path2D__rosidl_typesupport_introspection_c__Path2D_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Path2D__rosidl_typesupport_introspection_c__Path2D_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose2D)();
  if (!Path2D__rosidl_typesupport_introspection_c__Path2D_message_type_support_handle.typesupport_identifier) {
    Path2D__rosidl_typesupport_introspection_c__Path2D_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Path2D__rosidl_typesupport_introspection_c__Path2D_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
