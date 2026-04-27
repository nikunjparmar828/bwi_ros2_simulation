// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/ConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'gp_cmd'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ConfigCmd in the package segway_msgs.
typedef struct segway_msgs__msg__ConfigCmd
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__String gp_cmd;
  uint32_t gp_param;
} segway_msgs__msg__ConfigCmd;

// Struct for a sequence of segway_msgs__msg__ConfigCmd.
typedef struct segway_msgs__msg__ConfigCmd__Sequence
{
  segway_msgs__msg__ConfigCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__ConfigCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_H_
