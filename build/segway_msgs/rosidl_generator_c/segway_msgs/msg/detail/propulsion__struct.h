// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_H_
#define SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_H_

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
// Member 'mcu_battery_soc'
// Member 'mcu_battery_temp_deg'
// Member 'mcu_inst_power'
// Member 'mcu_total_energy'
// Member 'motor_current'
// Member 'motor_current_limit'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Propulsion in the package segway_msgs.
typedef struct segway_msgs__msg__Propulsion
{
  std_msgs__msg__Header header;
  float min_propulsion_battery_soc;
  rosidl_runtime_c__float__Sequence mcu_battery_soc;
  rosidl_runtime_c__float__Sequence mcu_battery_temp_deg;
  rosidl_runtime_c__float__Sequence mcu_inst_power;
  rosidl_runtime_c__float__Sequence mcu_total_energy;
  rosidl_runtime_c__float__Sequence motor_current;
  float max_motor_current;
  rosidl_runtime_c__float__Sequence motor_current_limit;
  float min_motor_current_limit;
} segway_msgs__msg__Propulsion;

// Struct for a sequence of segway_msgs__msg__Propulsion.
typedef struct segway_msgs__msg__Propulsion__Sequence
{
  segway_msgs__msg__Propulsion * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} segway_msgs__msg__Propulsion__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_H_
