// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2_rada_msg:msg/Rada.idl
// generated code does not contain a copyright notice

#ifndef ROS2_RADA_MSG__MSG__DETAIL__RADA__FUNCTIONS_H_
#define ROS2_RADA_MSG__MSG__DETAIL__RADA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2_rada_msg/msg/rosidl_generator_c__visibility_control.h"

#include "ros2_rada_msg/msg/detail/rada__struct.h"

/// Initialize msg/Rada message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2_rada_msg__msg__Rada
 * )) before or use
 * ros2_rada_msg__msg__Rada__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
bool
ros2_rada_msg__msg__Rada__init(ros2_rada_msg__msg__Rada * msg);

/// Finalize msg/Rada message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
void
ros2_rada_msg__msg__Rada__fini(ros2_rada_msg__msg__Rada * msg);

/// Create msg/Rada message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2_rada_msg__msg__Rada__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
ros2_rada_msg__msg__Rada *
ros2_rada_msg__msg__Rada__create();

/// Destroy msg/Rada message.
/**
 * It calls
 * ros2_rada_msg__msg__Rada__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
void
ros2_rada_msg__msg__Rada__destroy(ros2_rada_msg__msg__Rada * msg);


/// Initialize array of msg/Rada messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2_rada_msg__msg__Rada__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
bool
ros2_rada_msg__msg__Rada__Sequence__init(ros2_rada_msg__msg__Rada__Sequence * array, size_t size);

/// Finalize array of msg/Rada messages.
/**
 * It calls
 * ros2_rada_msg__msg__Rada__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
void
ros2_rada_msg__msg__Rada__Sequence__fini(ros2_rada_msg__msg__Rada__Sequence * array);

/// Create array of msg/Rada messages.
/**
 * It allocates the memory for the array and calls
 * ros2_rada_msg__msg__Rada__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
ros2_rada_msg__msg__Rada__Sequence *
ros2_rada_msg__msg__Rada__Sequence__create(size_t size);

/// Destroy array of msg/Rada messages.
/**
 * It calls
 * ros2_rada_msg__msg__Rada__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2_rada_msg
void
ros2_rada_msg__msg__Rada__Sequence__destroy(ros2_rada_msg__msg__Rada__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // ROS2_RADA_MSG__MSG__DETAIL__RADA__FUNCTIONS_H_
