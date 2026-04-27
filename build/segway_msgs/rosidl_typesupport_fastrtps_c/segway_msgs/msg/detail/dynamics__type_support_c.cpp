// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/dynamics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/msg/detail/dynamics__struct.h"
#include "segway_msgs/msg/detail/dynamics__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // wheel_pos_m, wheel_vel_mps
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // wheel_pos_m, wheel_vel_mps
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_segway_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_segway_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_segway_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _Dynamics__ros_msg_type = segway_msgs__msg__Dynamics;

static bool _Dynamics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Dynamics__ros_msg_type * ros_message = static_cast<const _Dynamics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: x_vel_target_mps
  {
    cdr << ros_message->x_vel_target_mps;
  }

  // Field name: y_vel_target_mps
  {
    cdr << ros_message->y_vel_target_mps;
  }

  // Field name: yaw_rate_target_rps
  {
    cdr << ros_message->yaw_rate_target_rps;
  }

  // Field name: vel_limit_mps
  {
    cdr << ros_message->vel_limit_mps;
  }

  // Field name: yaw_rate_limit_rps
  {
    cdr << ros_message->yaw_rate_limit_rps;
  }

  // Field name: wheel_vel_mps
  {
    size_t size = ros_message->wheel_vel_mps.size;
    auto array_ptr = ros_message->wheel_vel_mps.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: wheel_pos_m
  {
    size_t size = ros_message->wheel_pos_m.size;
    auto array_ptr = ros_message->wheel_pos_m.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: x_accel_mps2
  {
    cdr << ros_message->x_accel_mps2;
  }

  // Field name: y_accel_mps2
  {
    cdr << ros_message->y_accel_mps2;
  }

  // Field name: yaw_accel_mps2
  {
    cdr << ros_message->yaw_accel_mps2;
  }

  // Field name: yaw_angle_rad
  {
    cdr << ros_message->yaw_angle_rad;
  }

  // Field name: odom_yaw_angle_rad
  {
    cdr << ros_message->odom_yaw_angle_rad;
  }

  return true;
}

static bool _Dynamics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Dynamics__ros_msg_type * ros_message = static_cast<_Dynamics__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: x_vel_target_mps
  {
    cdr >> ros_message->x_vel_target_mps;
  }

  // Field name: y_vel_target_mps
  {
    cdr >> ros_message->y_vel_target_mps;
  }

  // Field name: yaw_rate_target_rps
  {
    cdr >> ros_message->yaw_rate_target_rps;
  }

  // Field name: vel_limit_mps
  {
    cdr >> ros_message->vel_limit_mps;
  }

  // Field name: yaw_rate_limit_rps
  {
    cdr >> ros_message->yaw_rate_limit_rps;
  }

  // Field name: wheel_vel_mps
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->wheel_vel_mps.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wheel_vel_mps);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wheel_vel_mps, size)) {
      fprintf(stderr, "failed to create array for field 'wheel_vel_mps'");
      return false;
    }
    auto array_ptr = ros_message->wheel_vel_mps.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: wheel_pos_m
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);

    // Check there are at least 'size' remaining bytes in the CDR stream before resizing
    auto old_state = cdr.getState();
    bool correct_size = cdr.jump(size);
    cdr.setState(old_state);
    if (!correct_size) {
      fprintf(stderr, "sequence size exceeds remaining buffer\n");
      return false;
    }

    if (ros_message->wheel_pos_m.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->wheel_pos_m);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->wheel_pos_m, size)) {
      fprintf(stderr, "failed to create array for field 'wheel_pos_m'");
      return false;
    }
    auto array_ptr = ros_message->wheel_pos_m.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: x_accel_mps2
  {
    cdr >> ros_message->x_accel_mps2;
  }

  // Field name: y_accel_mps2
  {
    cdr >> ros_message->y_accel_mps2;
  }

  // Field name: yaw_accel_mps2
  {
    cdr >> ros_message->yaw_accel_mps2;
  }

  // Field name: yaw_angle_rad
  {
    cdr >> ros_message->yaw_angle_rad;
  }

  // Field name: odom_yaw_angle_rad
  {
    cdr >> ros_message->odom_yaw_angle_rad;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__msg__Dynamics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Dynamics__ros_msg_type * ros_message = static_cast<const _Dynamics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name x_vel_target_mps
  {
    size_t item_size = sizeof(ros_message->x_vel_target_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_vel_target_mps
  {
    size_t item_size = sizeof(ros_message->y_vel_target_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_target_rps
  {
    size_t item_size = sizeof(ros_message->yaw_rate_target_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_limit_mps
  {
    size_t item_size = sizeof(ros_message->vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message->yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_vel_mps
  {
    size_t array_size = ros_message->wheel_vel_mps.size;
    auto array_ptr = ros_message->wheel_vel_mps.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_pos_m
  {
    size_t array_size = ros_message->wheel_pos_m.size;
    auto array_ptr = ros_message->wheel_pos_m.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_accel_mps2
  {
    size_t item_size = sizeof(ros_message->x_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_accel_mps2
  {
    size_t item_size = sizeof(ros_message->y_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_accel_mps2
  {
    size_t item_size = sizeof(ros_message->yaw_accel_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_angle_rad
  {
    size_t item_size = sizeof(ros_message->yaw_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_yaw_angle_rad
  {
    size_t item_size = sizeof(ros_message->odom_yaw_angle_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Dynamics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__msg__Dynamics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__msg__Dynamics(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: x_vel_target_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_vel_target_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_target_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_limit_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_rate_limit_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_vel_mps
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_pos_m
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: x_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_accel_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw_angle_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: odom_yaw_angle_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__msg__Dynamics;
    is_plain =
      (
      offsetof(DataType, odom_yaw_angle_rad) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Dynamics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__msg__Dynamics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Dynamics = {
  "segway_msgs::msg",
  "Dynamics",
  _Dynamics__cdr_serialize,
  _Dynamics__cdr_deserialize,
  _Dynamics__get_serialized_size,
  _Dynamics__max_serialized_size
};

static rosidl_message_type_support_t _Dynamics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Dynamics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, msg, Dynamics)() {
  return &_Dynamics__type_support;
}

#if defined(__cplusplus)
}
#endif
