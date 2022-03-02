// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from cartographer_ros_msgs:msg/SensorTopics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "cartographer_ros_msgs/msg/detail/sensor_topics__rosidl_typesupport_introspection_c.h"
#include "cartographer_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "cartographer_ros_msgs/msg/detail/sensor_topics__functions.h"
#include "cartographer_ros_msgs/msg/detail/sensor_topics__struct.h"


// Include directives for member types
// Member `laser_scan_topic`
// Member `multi_echo_laser_scan_topic`
// Member `point_cloud2_topic`
// Member `imu_topic`
// Member `odometry_topic`
// Member `nav_sat_fix_topic`
// Member `landmark_topic`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  cartographer_ros_msgs__msg__SensorTopics__init(message_memory);
}

void SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_fini_function(void * message_memory)
{
  cartographer_ros_msgs__msg__SensorTopics__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_member_array[7] = {
  {
    "laser_scan_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, laser_scan_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "multi_echo_laser_scan_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, multi_echo_laser_scan_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "point_cloud2_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, point_cloud2_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "imu_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, imu_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odometry_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, odometry_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nav_sat_fix_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, nav_sat_fix_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "landmark_topic",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(cartographer_ros_msgs__msg__SensorTopics, landmark_topic),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_members = {
  "cartographer_ros_msgs__msg",  // message namespace
  "SensorTopics",  // message name
  7,  // number of fields
  sizeof(cartographer_ros_msgs__msg__SensorTopics),
  SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_member_array,  // message members
  SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_type_support_handle = {
  0,
  &SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, cartographer_ros_msgs, msg, SensorTopics)() {
  if (!SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_type_support_handle.typesupport_identifier) {
    SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorTopics__rosidl_typesupport_introspection_c__SensorTopics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
