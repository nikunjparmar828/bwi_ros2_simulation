// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Faultlog.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Faultlog in the package segway_msgs.
typedef struct segway_msgs__msg__Faultlog
{
  rosidl_runtime_c__uint32__Sequence data;
} segway_msgs__msg__Faultlog;

// Struct for a sequence of segway_msgs__msg__Faultlog.
typedef struct segway_msgs__msg__Faultlog__Sequence
{
  segway_msgs__msg__Faultlog * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Faultlog__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__FAULTLOG__STRUCT_H_
