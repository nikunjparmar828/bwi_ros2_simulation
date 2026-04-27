// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/propulsion__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/msg/detail/propulsion__struct.h"
#include "segway_msgs/msg/detail/propulsion__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // mcu_battery_soc, mcu_battery_temp_deg, mcu_inst_power, mcu_total_energy, motor_current, motor_current_limit
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // mcu_battery_soc, mcu_battery_temp_deg, mcu_inst_power, mcu_total_energy, motor_current, motor_current_limit
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


using _Propulsion__ros_msg_type = segway_msgs__msg__Propulsion;

static bool _Propulsion__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Propulsion__ros_msg_type * ros_message = static_cast<const _Propulsion__ros_msg_type *>(untyped_ros_message);
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

  // Field name: min_propulsion_battery_soc
  {
    cdr << ros_message->min_propulsion_battery_soc;
  }

  // Field name: mcu_battery_soc
  {
    size_t size = ros_message->mcu_battery_soc.size;
    auto array_ptr = ros_message->mcu_battery_soc.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mcu_battery_temp_deg
  {
    size_t size = ros_message->mcu_battery_temp_deg.size;
    auto array_ptr = ros_message->mcu_battery_temp_deg.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mcu_inst_power
  {
    size_t size = ros_message->mcu_inst_power.size;
    auto array_ptr = ros_message->mcu_inst_power.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: mcu_total_energy
  {
    size_t size = ros_message->mcu_total_energy.size;
    auto array_ptr = ros_message->mcu_total_energy.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: motor_current
  {
    size_t size = ros_message->motor_current.size;
    auto array_ptr = ros_message->motor_current.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: max_motor_current
  {
    cdr << ros_message->max_motor_current;
  }

  // Field name: motor_current_limit
  {
    size_t size = ros_message->motor_current_limit.size;
    auto array_ptr = ros_message->motor_current_limit.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: min_motor_current_limit
  {
    cdr << ros_message->min_motor_current_limit;
  }

  return true;
}

static bool _Propulsion__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Propulsion__ros_msg_type * ros_message = static_cast<_Propulsion__ros_msg_type *>(untyped_ros_message);
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

  // Field name: min_propulsion_battery_soc
  {
    cdr >> ros_message->min_propulsion_battery_soc;
  }

  // Field name: mcu_battery_soc
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

    if (ros_message->mcu_battery_soc.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mcu_battery_soc);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mcu_battery_soc, size)) {
      fprintf(stderr, "failed to create array for field 'mcu_battery_soc'");
      return false;
    }
    auto array_ptr = ros_message->mcu_battery_soc.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mcu_battery_temp_deg
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

    if (ros_message->mcu_battery_temp_deg.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mcu_battery_temp_deg);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mcu_battery_temp_deg, size)) {
      fprintf(stderr, "failed to create array for field 'mcu_battery_temp_deg'");
      return false;
    }
    auto array_ptr = ros_message->mcu_battery_temp_deg.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mcu_inst_power
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

    if (ros_message->mcu_inst_power.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mcu_inst_power);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mcu_inst_power, size)) {
      fprintf(stderr, "failed to create array for field 'mcu_inst_power'");
      return false;
    }
    auto array_ptr = ros_message->mcu_inst_power.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: mcu_total_energy
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

    if (ros_message->mcu_total_energy.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->mcu_total_energy);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->mcu_total_energy, size)) {
      fprintf(stderr, "failed to create array for field 'mcu_total_energy'");
      return false;
    }
    auto array_ptr = ros_message->mcu_total_energy.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: motor_current
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

    if (ros_message->motor_current.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->motor_current);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->motor_current, size)) {
      fprintf(stderr, "failed to create array for field 'motor_current'");
      return false;
    }
    auto array_ptr = ros_message->motor_current.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: max_motor_current
  {
    cdr >> ros_message->max_motor_current;
  }

  // Field name: motor_current_limit
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

    if (ros_message->motor_current_limit.data) {
      rosidl_runtime_c__float__Sequence__fini(&ros_message->motor_current_limit);
    }
    if (!rosidl_runtime_c__float__Sequence__init(&ros_message->motor_current_limit, size)) {
      fprintf(stderr, "failed to create array for field 'motor_current_limit'");
      return false;
    }
    auto array_ptr = ros_message->motor_current_limit.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: min_motor_current_limit
  {
    cdr >> ros_message->min_motor_current_limit;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__msg__Propulsion(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Propulsion__ros_msg_type * ros_message = static_cast<const _Propulsion__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name min_propulsion_battery_soc
  {
    size_t item_size = sizeof(ros_message->min_propulsion_battery_soc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mcu_battery_soc
  {
    size_t array_size = ros_message->mcu_battery_soc.size;
    auto array_ptr = ros_message->mcu_battery_soc.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mcu_battery_temp_deg
  {
    size_t array_size = ros_message->mcu_battery_temp_deg.size;
    auto array_ptr = ros_message->mcu_battery_temp_deg.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mcu_inst_power
  {
    size_t array_size = ros_message->mcu_inst_power.size;
    auto array_ptr = ros_message->mcu_inst_power.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mcu_total_energy
  {
    size_t array_size = ros_message->mcu_total_energy.size;
    auto array_ptr = ros_message->mcu_total_energy.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_current
  {
    size_t array_size = ros_message->motor_current.size;
    auto array_ptr = ros_message->motor_current.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_motor_current
  {
    size_t item_size = sizeof(ros_message->max_motor_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_current_limit
  {
    size_t array_size = ros_message->motor_current_limit.size;
    auto array_ptr = ros_message->motor_current_limit.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name min_motor_current_limit
  {
    size_t item_size = sizeof(ros_message->min_motor_current_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Propulsion__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__msg__Propulsion(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__msg__Propulsion(
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
  // member: min_propulsion_battery_soc
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: mcu_battery_soc
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
  // member: mcu_battery_temp_deg
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
  // member: mcu_inst_power
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
  // member: mcu_total_energy
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
  // member: motor_current
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
  // member: max_motor_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: motor_current_limit
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
  // member: min_motor_current_limit
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
    using DataType = segway_msgs__msg__Propulsion;
    is_plain =
      (
      offsetof(DataType, min_motor_current_limit) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Propulsion__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__msg__Propulsion(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Propulsion = {
  "segway_msgs::msg",
  "Propulsion",
  _Propulsion__cdr_serialize,
  _Propulsion__cdr_deserialize,
  _Propulsion__get_serialized_size,
  _Propulsion__max_serialized_size
};

static rosidl_message_type_support_t _Propulsion__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Propulsion,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, msg, Propulsion)() {
  return &_Propulsion__type_support;
}

#if defined(__cplusplus)
}
#endif
