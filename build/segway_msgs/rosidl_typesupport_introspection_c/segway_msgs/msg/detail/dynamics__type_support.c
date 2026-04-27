// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/msg/detail/dynamics__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/msg/detail/dynamics__functions.h"
#include "segway_msgs/msg/detail/dynamics__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `wheel_vel_mps`
// Member `wheel_pos_m`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__msg__Dynamics__init(message_memory);
}

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_fini_function(void * message_memory)
{
  segway_msgs__msg__Dynamics__fini(message_memory);
}

size_t segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__size_function__Dynamics__wheel_vel_mps(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_vel_mps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_vel_mps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__fetch_function__Dynamics__wheel_vel_mps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_vel_mps(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__assign_function__Dynamics__wheel_vel_mps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_vel_mps(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__resize_function__Dynamics__wheel_vel_mps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__size_function__Dynamics__wheel_pos_m(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_pos_m(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_pos_m(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__fetch_function__Dynamics__wheel_pos_m(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_pos_m(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__assign_function__Dynamics__wheel_pos_m(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_pos_m(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__resize_function__Dynamics__wheel_pos_m(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_member_array[13] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x_vel_target_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, x_vel_target_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_vel_target_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, y_vel_target_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate_target_rps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, yaw_rate_target_rps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel_limit_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, vel_limit_mps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_rate_limit_rps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, yaw_rate_limit_rps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "wheel_vel_mps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, wheel_vel_mps),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__size_function__Dynamics__wheel_vel_mps,  // size() function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_vel_mps,  // get_const(index) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_vel_mps,  // get(index) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__fetch_function__Dynamics__wheel_vel_mps,  // fetch(index, &value) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__assign_function__Dynamics__wheel_vel_mps,  // assign(index, value) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__resize_function__Dynamics__wheel_vel_mps  // resize(index) function pointer
  },
  {
    "wheel_pos_m",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, wheel_pos_m),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__size_function__Dynamics__wheel_pos_m,  // size() function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_const_function__Dynamics__wheel_pos_m,  // get_const(index) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__get_function__Dynamics__wheel_pos_m,  // get(index) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__fetch_function__Dynamics__wheel_pos_m,  // fetch(index, &value) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__assign_function__Dynamics__wheel_pos_m,  // assign(index, value) function pointer
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__resize_function__Dynamics__wheel_pos_m  // resize(index) function pointer
  },
  {
    "x_accel_mps2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, x_accel_mps2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y_accel_mps2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, y_accel_mps2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_accel_mps2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, yaw_accel_mps2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw_angle_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, yaw_angle_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "odom_yaw_angle_rad",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Dynamics, odom_yaw_angle_rad),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_members = {
  "segway_msgs__msg",  // message namespace
  "Dynamics",  // message name
  13,  // number of fields
  sizeof(segway_msgs__msg__Dynamics),
  segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_member_array,  // message members
  segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_type_support_handle = {
  0,
  &segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, msg, Dynamics)() {
  segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_type_support_handle.typesupport_identifier) {
    segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__msg__Dynamics__rosidl_typesupport_introspection_c__Dynamics_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
