// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__rosidl_typesupport_introspection_c.h"
#include "bwi_perception_interface/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__functions.h"
#include "bwi_perception_interface/msg/detail/dl_amcl_coords__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bwi_perception_interface__msg__DlAmclCoords__init(message_memory);
}

void bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_fini_function(void * message_memory)
{
  bwi_perception_interface__msg__DlAmclCoords__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_perception_interface__msg__DlAmclCoords, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_perception_interface__msg__DlAmclCoords, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bwi_perception_interface__msg__DlAmclCoords, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_members = {
  "bwi_perception_interface__msg",  // message namespace
  "DlAmclCoords",  // message name
  3,  // number of fields
  sizeof(bwi_perception_interface__msg__DlAmclCoords),
  bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_member_array,  // message members
  bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_init_function,  // function to initialize message memory (memory has to be allocated)
  bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_type_support_handle = {
  0,
  &bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bwi_perception_interface
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bwi_perception_interface, msg, DlAmclCoords)() {
  if (!bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_type_support_handle.typesupport_identifier) {
    bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bwi_perception_interface__msg__DlAmclCoords__rosidl_typesupport_introspection_c__DlAmclCoords_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
