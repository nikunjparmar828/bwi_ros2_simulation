// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

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
// Member 'fault_status_words'
// Member 'mcu_fault_status'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Status in the package segway_msgs.
typedef struct segway_msgs__msg__Status
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__uint32__Sequence fault_status_words;
  rosidl_runtime_c__uint32__Sequence mcu_fault_status;
  float operational_time;
  uint32_t operational_state;
  uint32_t dynamic_response;
  uint32_t machine_id;
} segway_msgs__msg__Status;

// Struct for a sequence of segway_msgs__msg__Status.
typedef struct segway_msgs__msg__Status__Sequence
{
  segway_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
