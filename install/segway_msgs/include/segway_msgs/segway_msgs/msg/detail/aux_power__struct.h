// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_H_

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
// Member 'aux_soc'
// Member 'aux_voltage'
// Member 'aux_current'
// Member 'aux_temp_deg'
// Member 'aux_sys_status'
// Member 'aux_bcu_status'
// Member 'aux_bcu_faults'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/AuxPower in the package segway_msgs.
typedef struct segway_msgs__msg__AuxPower
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence aux_soc;
  rosidl_runtime_c__float__Sequence aux_voltage;
  rosidl_runtime_c__float__Sequence aux_current;
  rosidl_runtime_c__float__Sequence aux_temp_deg;
  rosidl_runtime_c__uint32__Sequence aux_sys_status;
  rosidl_runtime_c__uint32__Sequence aux_bcu_status;
  rosidl_runtime_c__uint32__Sequence aux_bcu_faults;
  float startup_7p2v_batt_voltage;
} segway_msgs__msg__AuxPower;

// Struct for a sequence of segway_msgs__msg__AuxPower.
typedef struct segway_msgs__msg__AuxPower__Sequence
{
  segway_msgs__msg__AuxPower * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__AuxPower__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_H_
