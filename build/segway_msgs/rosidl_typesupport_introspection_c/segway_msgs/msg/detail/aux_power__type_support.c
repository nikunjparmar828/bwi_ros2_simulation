// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/msg/detail/aux_power__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/msg/detail/aux_power__functions.h"
#include "segway_msgs/msg/detail/aux_power__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `aux_soc`
// Member `aux_voltage`
// Member `aux_current`
// Member `aux_temp_deg`
// Member `aux_sys_status`
// Member `aux_bcu_status`
// Member `aux_bcu_faults`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__msg__AuxPower__init(message_memory);
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_fini_function(void * message_memory)
{
  segway_msgs__msg__AuxPower__fini(message_memory);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_soc(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_soc(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_soc(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_soc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_soc(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_soc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_soc(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_soc(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_voltage(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_voltage(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_voltage(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_voltage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_voltage(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_voltage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_voltage(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_voltage(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_current(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_current(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_current(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_current(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_current(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_current(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_temp_deg(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_temp_deg(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_temp_deg(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_temp_deg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_temp_deg(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_temp_deg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_temp_deg(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_temp_deg(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_sys_status(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_sys_status(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_sys_status(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_sys_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_sys_status(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_sys_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_sys_status(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_sys_status(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_bcu_status(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_status(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_status(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_bcu_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_status(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_bcu_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_status(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_bcu_status(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

size_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_bcu_faults(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_faults(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_faults(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_bcu_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_faults(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_bcu_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_faults(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_bcu_faults(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aux_soc",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_soc),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_soc,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_soc,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_soc,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_soc,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_soc,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_soc  // resize(index) function pointer
  },
  {
    "aux_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_voltage),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_voltage,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_voltage,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_voltage,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_voltage,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_voltage,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_voltage  // resize(index) function pointer
  },
  {
    "aux_current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_current),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_current,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_current,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_current,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_current,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_current,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_current  // resize(index) function pointer
  },
  {
    "aux_temp_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_temp_deg),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_temp_deg,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_temp_deg,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_temp_deg,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_temp_deg,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_temp_deg,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_temp_deg  // resize(index) function pointer
  },
  {
    "aux_sys_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_sys_status),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_sys_status,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_sys_status,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_sys_status,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_sys_status,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_sys_status,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_sys_status  // resize(index) function pointer
  },
  {
    "aux_bcu_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_bcu_status),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_bcu_status,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_status,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_status,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_bcu_status,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_bcu_status,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_bcu_status  // resize(index) function pointer
  },
  {
    "aux_bcu_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, aux_bcu_faults),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__size_function__AuxPower__aux_bcu_faults,  // size() function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_const_function__AuxPower__aux_bcu_faults,  // get_const(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__get_function__AuxPower__aux_bcu_faults,  // get(index) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__fetch_function__AuxPower__aux_bcu_faults,  // fetch(index, &value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__assign_function__AuxPower__aux_bcu_faults,  // assign(index, value) function pointer
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__resize_function__AuxPower__aux_bcu_faults  // resize(index) function pointer
  },
  {
    "startup_7p2v_batt_voltage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__AuxPower, startup_7p2v_batt_voltage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_members = {
  "segway_msgs__msg",  // message namespace
  "AuxPower",  // message name
  9,  // number of fields
  sizeof(segway_msgs__msg__AuxPower),
  segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_member_array,  // message members
  segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_type_support_handle = {
  0,
  &segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, msg, AuxPower)() {
  segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_type_support_handle.typesupport_identifier) {
    segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__msg__AuxPower__rosidl_typesupport_introspection_c__AuxPower_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
