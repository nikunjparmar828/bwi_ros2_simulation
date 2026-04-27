// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from segway_msgs:msg/Faultlog.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "segway_msgs/msg/detail/faultlog__rosidl_typesupport_introspection_c.h"
#include "segway_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "segway_msgs/msg/detail/faultlog__functions.h"
#include "segway_msgs/msg/detail/faultlog__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  segway_msgs__msg__Faultlog__init(message_memory);
}

void segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_fini_function(void * message_memory)
{
  segway_msgs__msg__Faultlog__fini(message_memory);
}

size_t segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__size_function__Faultlog__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return member->size;
}

const void * segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_const_function__Faultlog__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint32__Sequence * member =
    (const rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_function__Faultlog__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  return &member->data[index];
}

void segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__fetch_function__Faultlog__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_const_function__Faultlog__data(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__assign_function__Faultlog__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_function__Faultlog__data(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

bool segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__resize_function__Faultlog__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint32__Sequence * member =
    (rosidl_runtime_c__uint32__Sequence *)(untyped_member);
  rosidl_runtime_c__uint32__Sequence__fini(member);
  return rosidl_runtime_c__uint32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs__msg__Faultlog, data),  // bytes offset in struct
    NULL,  // default value
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__size_function__Faultlog__data,  // size() function pointer
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_const_function__Faultlog__data,  // get_const(index) function pointer
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__get_function__Faultlog__data,  // get(index) function pointer
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__fetch_function__Faultlog__data,  // fetch(index, &value) function pointer
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__assign_function__Faultlog__data,  // assign(index, value) function pointer
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__resize_function__Faultlog__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_members = {
  "segway_msgs__msg",  // message namespace
  "Faultlog",  // message name
  1,  // number of fields
  sizeof(segway_msgs__msg__Faultlog),
  segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_member_array,  // message members
  segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_init_function,  // function to initialize message memory (memory has to be allocated)
  segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_type_support_handle = {
  0,
  &segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_segway_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, segway_msgs, msg, Faultlog)() {
  if (!segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_type_support_handle.typesupport_identifier) {
    segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &segway_msgs__msg__Faultlog__rosidl_typesupport_introspection_c__Faultlog_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
