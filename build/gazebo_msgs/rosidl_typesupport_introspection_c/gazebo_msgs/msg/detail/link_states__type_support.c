// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gazebo_msgs:msg/LinkStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gazebo_msgs/msg/detail/link_states__rosidl_typesupport_introspection_c.h"
#include "gazebo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gazebo_msgs/msg/detail/link_states__functions.h"
#include "gazebo_msgs/msg/detail/link_states__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `twist`
#include "geometry_msgs/msg/twist.h"
// Member `twist`
#include "geometry_msgs/msg/detail/twist__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void LinkStates__rosidl_typesupport_introspection_c__LinkStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gazebo_msgs__msg__LinkStates__init(message_memory);
}

void LinkStates__rosidl_typesupport_introspection_c__LinkStates_fini_function(void * message_memory)
{
  gazebo_msgs__msg__LinkStates__fini(message_memory);
}

size_t LinkStates__rosidl_typesupport_introspection_c__size_function__Pose__pose(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * LinkStates__rosidl_typesupport_introspection_c__get_const_function__Pose__pose(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LinkStates__rosidl_typesupport_introspection_c__get_function__Pose__pose(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LinkStates__rosidl_typesupport_introspection_c__resize_function__Pose__pose(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

size_t LinkStates__rosidl_typesupport_introspection_c__size_function__Twist__twist(
  const void * untyped_member)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return member->size;
}

const void * LinkStates__rosidl_typesupport_introspection_c__get_const_function__Twist__twist(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Twist__Sequence * member =
    (const geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

void * LinkStates__rosidl_typesupport_introspection_c__get_function__Twist__twist(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  return &member->data[index];
}

bool LinkStates__rosidl_typesupport_introspection_c__resize_function__Twist__twist(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Twist__Sequence * member =
    (geometry_msgs__msg__Twist__Sequence *)(untyped_member);
  geometry_msgs__msg__Twist__Sequence__fini(member);
  return geometry_msgs__msg__Twist__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_member_array[3] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__LinkStates, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__LinkStates, pose),  // bytes offset in struct
    NULL,  // default value
    LinkStates__rosidl_typesupport_introspection_c__size_function__Pose__pose,  // size() function pointer
    LinkStates__rosidl_typesupport_introspection_c__get_const_function__Pose__pose,  // get_const(index) function pointer
    LinkStates__rosidl_typesupport_introspection_c__get_function__Pose__pose,  // get(index) function pointer
    LinkStates__rosidl_typesupport_introspection_c__resize_function__Pose__pose  // resize(index) function pointer
  },
  {
    "twist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs__msg__LinkStates, twist),  // bytes offset in struct
    NULL,  // default value
    LinkStates__rosidl_typesupport_introspection_c__size_function__Twist__twist,  // size() function pointer
    LinkStates__rosidl_typesupport_introspection_c__get_const_function__Twist__twist,  // get_const(index) function pointer
    LinkStates__rosidl_typesupport_introspection_c__get_function__Twist__twist,  // get(index) function pointer
    LinkStates__rosidl_typesupport_introspection_c__resize_function__Twist__twist  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_members = {
  "gazebo_msgs__msg",  // message namespace
  "LinkStates",  // message name
  3,  // number of fields
  sizeof(gazebo_msgs__msg__LinkStates),
  LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_member_array,  // message members
  LinkStates__rosidl_typesupport_introspection_c__LinkStates_init_function,  // function to initialize message memory (memory has to be allocated)
  LinkStates__rosidl_typesupport_introspection_c__LinkStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_type_support_handle = {
  0,
  &LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gazebo_msgs, msg, LinkStates)() {
  LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Twist)();
  if (!LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_type_support_handle.typesupport_identifier) {
    LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &LinkStates__rosidl_typesupport_introspection_c__LinkStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
