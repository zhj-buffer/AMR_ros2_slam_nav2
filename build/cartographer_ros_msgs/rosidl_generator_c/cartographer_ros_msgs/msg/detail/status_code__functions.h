// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from cartographer_ros_msgs:msg/StatusCode.idl
// generated code does not contain a copyright notice

#ifndef CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__FUNCTIONS_H_
#define CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "cartographer_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "cartographer_ros_msgs/msg/detail/status_code__struct.h"

/// Initialize msg/StatusCode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * cartographer_ros_msgs__msg__StatusCode
 * )) before or use
 * cartographer_ros_msgs__msg__StatusCode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusCode__init(cartographer_ros_msgs__msg__StatusCode * msg);

/// Finalize msg/StatusCode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusCode__fini(cartographer_ros_msgs__msg__StatusCode * msg);

/// Create msg/StatusCode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * cartographer_ros_msgs__msg__StatusCode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__StatusCode *
cartographer_ros_msgs__msg__StatusCode__create();

/// Destroy msg/StatusCode message.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusCode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusCode__destroy(cartographer_ros_msgs__msg__StatusCode * msg);


/// Initialize array of msg/StatusCode messages.
/**
 * It allocates the memory for the number of elements and calls
 * cartographer_ros_msgs__msg__StatusCode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
bool
cartographer_ros_msgs__msg__StatusCode__Sequence__init(cartographer_ros_msgs__msg__StatusCode__Sequence * array, size_t size);

/// Finalize array of msg/StatusCode messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusCode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusCode__Sequence__fini(cartographer_ros_msgs__msg__StatusCode__Sequence * array);

/// Create array of msg/StatusCode messages.
/**
 * It allocates the memory for the array and calls
 * cartographer_ros_msgs__msg__StatusCode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
cartographer_ros_msgs__msg__StatusCode__Sequence *
cartographer_ros_msgs__msg__StatusCode__Sequence__create(size_t size);

/// Destroy array of msg/StatusCode messages.
/**
 * It calls
 * cartographer_ros_msgs__msg__StatusCode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_cartographer_ros_msgs
void
cartographer_ros_msgs__msg__StatusCode__Sequence__destroy(cartographer_ros_msgs__msg__StatusCode__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // CARTOGRAPHER_ROS_MSGS__MSG__DETAIL__STATUS_CODE__FUNCTIONS_H_
