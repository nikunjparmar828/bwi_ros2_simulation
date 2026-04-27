// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/msg/detail/propulsion__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/msg/detail/propulsion__functions.h"
#include "segway_msgs/msg/detail/propulsion__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `mcu_battery_soc`
// Member `mcu_battery_temp_deg`
// Member `mcu_inst_power`
// Member `mcu_total_energy`
// Member `motor_current`
// Member `motor_current_limit`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__msg__Propulsion__init(message_memory);
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_fini_function(void * message_memory)
{
  segway_msgs__msg__Propulsion__fini(message_memory);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_battery_soc(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_soc(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_soc(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_battery_soc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_soc(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_battery_soc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_soc(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_battery_soc(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_battery_temp_deg(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_temp_deg(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_temp_deg(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_battery_temp_deg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_temp_deg(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_battery_temp_deg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_temp_deg(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_battery_temp_deg(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_inst_power(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_inst_power(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_inst_power(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_inst_power(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_inst_power(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_inst_power(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_inst_power(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_inst_power(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_total_energy(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_total_energy(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_total_energy(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_total_energy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_total_energy(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_total_energy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_total_energy(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_total_energy(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__motor_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__motor_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__motor_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__motor_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__motor_current_limit(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current_limit(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current_limit(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__motor_current_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current_limit(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__motor_current_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current_limit(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__motor_current_limit(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_propulsion_battery_soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, min_propulsion_battery_soc),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mcu_battery_soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, mcu_battery_soc),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_battery_soc,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_soc,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_soc,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_battery_soc,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_battery_soc,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_battery_soc  // resize(index) function pointer
  },
  {
    "mcu_battery_temp_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, mcu_battery_temp_deg),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_battery_temp_deg,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_battery_temp_deg,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_battery_temp_deg,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_battery_temp_deg,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_battery_temp_deg,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_battery_temp_deg  // resize(index) function pointer
  },
  {
    "mcu_inst_power",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, mcu_inst_power),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_inst_power,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_inst_power,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_inst_power,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_inst_power,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_inst_power,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_inst_power  // resize(index) function pointer
  },
  {
    "mcu_total_energy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, mcu_total_energy),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__mcu_total_energy,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__mcu_total_energy,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__mcu_total_energy,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__mcu_total_energy,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__mcu_total_energy,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__mcu_total_energy  // resize(index) function pointer
  },
  {
    "motor_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, motor_current),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__motor_current,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__motor_current,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__motor_current,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__motor_current  // resize(index) function pointer
  },
  {
    "max_motor_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, max_motor_current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motor_current_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, motor_current_limit),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__size_function__Propulsion__motor_current_limit,  // size() function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_const_function__Propulsion__motor_current_limit,  // get_const(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__get_function__Propulsion__motor_current_limit,  // get(index) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__fetch_function__Propulsion__motor_current_limit,  // fetch(index, &value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__assign_function__Propulsion__motor_current_limit,  // assign(index, value) function pointer
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__resize_function__Propulsion__motor_current_limit  // resize(index) function pointer
  },
  {
    "min_motor_current_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Propulsion, min_motor_current_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_members = {
  "segway_msgs__msg",  // message namespace
  "Propulsion",  // message name
  10,  // number of fields
  sizeof(segway_msgs__msg__Propulsion),
  segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_member_array,  // message members
  segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_type_support_handle = {
  0,
  &segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, msg, Propulsion)() {
  segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_type_support_handle.typesupport_identifier) {
    segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__msg__Propulsion__rosidl_typesupport_introspection_c__Propulsion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
