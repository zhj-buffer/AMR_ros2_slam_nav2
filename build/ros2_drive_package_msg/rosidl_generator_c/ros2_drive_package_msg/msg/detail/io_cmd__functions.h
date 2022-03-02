// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_drive_package_msg:msg/IoCmd.idl
// generated code does not contain a copyright notice

#ifndef ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__FUNCTIONS_H_
#define ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_drive_package_msg/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_drive_package_msg/msg/detail/io_cmd__struct.h"

/// Initialize msg/IoCmd message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_drive_package_msg__msg__IoCmd
 * )) before or use
 * ros2_drive_package_msg__msg__IoCmd__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
bool
ros2_drive_package_msg__msg__IoCmd__init(ros2_drive_package_msg__msg__IoCmd * msg);

/// Finalize msg/IoCmd message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
void
ros2_drive_package_msg__msg__IoCmd__fini(ros2_drive_package_msg__msg__IoCmd * msg);

/// Create msg/IoCmd message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_drive_package_msg__msg__IoCmd__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
ros2_drive_package_msg__msg__IoCmd *
ros2_drive_package_msg__msg__IoCmd__create();

/// Destroy msg/IoCmd message.
/**
 * It calls
 * ros2_drive_package_msg__msg__IoCmd__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
void
ros2_drive_package_msg__msg__IoCmd__destroy(ros2_drive_package_msg__msg__IoCmd * msg);


/// Initialize array of msg/IoCmd messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_drive_package_msg__msg__IoCmd__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
bool
ros2_drive_package_msg__msg__IoCmd__Sequence__init(ros2_drive_package_msg__msg__IoCmd__Sequence * array, size_t size);

/// Finalize array of msg/IoCmd messages.
/**
 * It calls
 * ros2_drive_package_msg__msg__IoCmd__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
void
ros2_drive_package_msg__msg__IoCmd__Sequence__fini(ros2_drive_package_msg__msg__IoCmd__Sequence * array);

/// Create array of msg/IoCmd messages.
/**
 * It allocates the memory for the array and calls
 * ros2_drive_package_msg__msg__IoCmd__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
ros2_drive_package_msg__msg__IoCmd__Sequence *
ros2_drive_package_msg__msg__IoCmd__Sequence__create(size_t size);

/// Destroy array of msg/IoCmd messages.
/**
 * It calls
 * ros2_drive_package_msg__msg__IoCmd__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_drive_package_msg
void
ros2_drive_package_msg__msg__IoCmd__Sequence__destroy(ros2_drive_package_msg__msg__IoCmd__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_DRIVE_PACKAGE_MSG__MSG__DETAIL__IO_CMD__FUNCTIONS_H_