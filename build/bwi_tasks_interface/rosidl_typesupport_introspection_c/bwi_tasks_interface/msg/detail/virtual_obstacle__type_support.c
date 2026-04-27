// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bwi_tasks_interface/msg/detail/virtual_obstacle__rosidl_typesupport_introspection_c.h"
#include "bwi_tasks_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bwi_tasks_interface/msg/detail/virtual_obstacle__functions.h"
#include "bwi_tasks_interface/msg/detail/virtual_obstacle__struct.h"


// Include directives for member types
// Member `poses`
#include "geometry_msgs/msg/pose.h"
// Member `poses`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bwi_tasks_interface__msg__VirtualObstacle__init(message_memory);
}

void bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_fini_function(void * message_memory)
{
  bwi_tasks_interface__msg__VirtualObstacle__fini(message_memory);
}

size_t bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__size_function__VirtualObstacle__poses(
  const void * untyped_member)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return member->size;
}

const void * bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_const_function__VirtualObstacle__poses(
  const void * untyped_member, size_t index)
{
  const geometry_msgs__msg__Pose__Sequence * member =
    (const geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_function__VirtualObstacle__poses(
  void * untyped_member, size_t index)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  return &member->data[index];
}

void bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__fetch_function__VirtualObstacle__poses(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const geometry_msgs__msg__Pose * item =
    ((const geometry_msgs__msg__Pose *)
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_const_function__VirtualObstacle__poses(untyped_member, index));
  geometry_msgs__msg__Pose * value =
    (geometry_msgs__msg__Pose *)(untyped_value);
  *value = *item;
}

void bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__assign_function__VirtualObstacle__poses(
  void * untyped_member, size_t index, const void * untyped_value)
{
  geometry_msgs__msg__Pose * item =
    ((geometry_msgs__msg__Pose *)
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_function__VirtualObstacle__poses(untyped_member, index));
  const geometry_msgs__msg__Pose * value =
    (const geometry_msgs__msg__Pose *)(untyped_value);
  *item = *value;
}

bool bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__resize_function__VirtualObstacle__poses(
  void * untyped_member, size_t size)
{
  geometry_msgs__msg__Pose__Sequence * member =
    (geometry_msgs__msg__Pose__Sequence *)(untyped_member);
  geometry_msgs__msg__Pose__Sequence__fini(member);
  return geometry_msgs__msg__Pose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_member_array[3] = {
  {
    "poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_tasks_interface__msg__VirtualObstacle, poses),  // bytes offset in struct
    NULL,  // default value
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__size_function__VirtualObstacle__poses,  // size() function pointer
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_const_function__VirtualObstacle__poses,  // get_const(index) function pointer
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__get_function__VirtualObstacle__poses,  // get(index) function pointer
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__fetch_function__VirtualObstacle__poses,  // fetch(index, &value) function pointer
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__assign_function__VirtualObstacle__poses,  // assign(index, value) function pointer
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__resize_function__VirtualObstacle__poses  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_tasks_interface__msg__VirtualObstacle, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_tasks_interface__msg__VirtualObstacle, active),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_members = {
  "bwi_tasks_interface__msg",  // message namespace
  "VirtualObstacle",  // message name
  3,  // number of fields
  sizeof(bwi_tasks_interface__msg__VirtualObstacle),
  bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_member_array,  // message members
  bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_type_support_handle = {
  0,
  &bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bwi_tasks_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bwi_tasks_interface, msg, VirtualObstacle)() {
  bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_type_support_handle.typesupport_identifier) {
    bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bwi_tasks_interface__msg__VirtualObstacle__rosidl_typesupport_introspection_c__VirtualObstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
