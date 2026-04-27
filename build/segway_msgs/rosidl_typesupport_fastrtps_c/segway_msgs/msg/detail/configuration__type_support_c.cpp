// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/configuration__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "segway_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "segway_msgs/msg/detail/configuration__struct.h"
#include "segway_msgs/msg/detail/configuration__functions.h"
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

#include "rosidl_runtime_c/string.h"  // eth_gateway, eth_ip_address, eth_subnet_mask
#include "rosidl_runtime_c/string_functions.h"  // eth_gateway, eth_ip_address, eth_subnet_mask
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


using _Configuration__ros_msg_type = segway_msgs__msg__Configuration;

static bool _Configuration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Configuration__ros_msg_type * ros_message = static_cast<const _Configuration__ros_msg_type *>(untyped_ros_message);
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

  // Field name: teleop_vel_limit_mps
  {
    cdr << ros_message->teleop_vel_limit_mps;
  }

  // Field name: teleop_accel_limit_mps2
  {
    cdr << ros_message->teleop_accel_limit_mps2;
  }

  // Field name: teleop_yaw_rate_limit_rps
  {
    cdr << ros_message->teleop_yaw_rate_limit_rps;
  }

  // Field name: teleop_yaw_accel_limit_rps2
  {
    cdr << ros_message->teleop_yaw_accel_limit_rps2;
  }

  // Field name: vel_limit_mps
  {
    cdr << ros_message->vel_limit_mps;
  }

  // Field name: accel_limit_mps2
  {
    cdr << ros_message->accel_limit_mps2;
  }

  // Field name: decel_limit_mps2
  {
    cdr << ros_message->decel_limit_mps2;
  }

  // Field name: dtz_decel_limit_mps2
  {
    cdr << ros_message->dtz_decel_limit_mps2;
  }

  // Field name: lateral_accel_limit_mps2
  {
    cdr << ros_message->lateral_accel_limit_mps2;
  }

  // Field name: yaw_rate_limit_rps
  {
    cdr << ros_message->yaw_rate_limit_rps;
  }

  // Field name: yaw_accel_limit_rps2
  {
    cdr << ros_message->yaw_accel_limit_rps2;
  }

  // Field name: tire_diameter_m
  {
    cdr << ros_message->tire_diameter_m;
  }

  // Field name: wheelbase_length_m
  {
    cdr << ros_message->wheelbase_length_m;
  }

  // Field name: wheel_track_width_m
  {
    cdr << ros_message->wheel_track_width_m;
  }

  // Field name: gear_ratio
  {
    cdr << ros_message->gear_ratio;
  }

  // Field name: config_bitmap
  {
    cdr << ros_message->config_bitmap;
  }

  // Field name: eth_ip_address
  {
    const rosidl_runtime_c__String * str = &ros_message->eth_ip_address;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eth_port_number
  {
    cdr << ros_message->eth_port_number;
  }

  // Field name: eth_subnet_mask
  {
    const rosidl_runtime_c__String * str = &ros_message->eth_subnet_mask;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: eth_gateway
  {
    const rosidl_runtime_c__String * str = &ros_message->eth_gateway;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _Configuration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Configuration__ros_msg_type * ros_message = static_cast<_Configuration__ros_msg_type *>(untyped_ros_message);
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

  // Field name: teleop_vel_limit_mps
  {
    cdr >> ros_message->teleop_vel_limit_mps;
  }

  // Field name: teleop_accel_limit_mps2
  {
    cdr >> ros_message->teleop_accel_limit_mps2;
  }

  // Field name: teleop_yaw_rate_limit_rps
  {
    cdr >> ros_message->teleop_yaw_rate_limit_rps;
  }

  // Field name: teleop_yaw_accel_limit_rps2
  {
    cdr >> ros_message->teleop_yaw_accel_limit_rps2;
  }

  // Field name: vel_limit_mps
  {
    cdr >> ros_message->vel_limit_mps;
  }

  // Field name: accel_limit_mps2
  {
    cdr >> ros_message->accel_limit_mps2;
  }

  // Field name: decel_limit_mps2
  {
    cdr >> ros_message->decel_limit_mps2;
  }

  // Field name: dtz_decel_limit_mps2
  {
    cdr >> ros_message->dtz_decel_limit_mps2;
  }

  // Field name: lateral_accel_limit_mps2
  {
    cdr >> ros_message->lateral_accel_limit_mps2;
  }

  // Field name: yaw_rate_limit_rps
  {
    cdr >> ros_message->yaw_rate_limit_rps;
  }

  // Field name: yaw_accel_limit_rps2
  {
    cdr >> ros_message->yaw_accel_limit_rps2;
  }

  // Field name: tire_diameter_m
  {
    cdr >> ros_message->tire_diameter_m;
  }

  // Field name: wheelbase_length_m
  {
    cdr >> ros_message->wheelbase_length_m;
  }

  // Field name: wheel_track_width_m
  {
    cdr >> ros_message->wheel_track_width_m;
  }

  // Field name: gear_ratio
  {
    cdr >> ros_message->gear_ratio;
  }

  // Field name: config_bitmap
  {
    cdr >> ros_message->config_bitmap;
  }

  // Field name: eth_ip_address
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eth_ip_address.data) {
      rosidl_runtime_c__String__init(&ros_message->eth_ip_address);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eth_ip_address,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eth_ip_address'\n");
      return false;
    }
  }

  // Field name: eth_port_number
  {
    cdr >> ros_message->eth_port_number;
  }

  // Field name: eth_subnet_mask
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eth_subnet_mask.data) {
      rosidl_runtime_c__String__init(&ros_message->eth_subnet_mask);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eth_subnet_mask,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eth_subnet_mask'\n");
      return false;
    }
  }

  // Field name: eth_gateway
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->eth_gateway.data) {
      rosidl_runtime_c__String__init(&ros_message->eth_gateway);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->eth_gateway,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'eth_gateway'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t get_serialized_size_segway_msgs__msg__Configuration(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Configuration__ros_msg_type * ros_message = static_cast<const _Configuration__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name teleop_vel_limit_mps
  {
    size_t item_size = sizeof(ros_message->teleop_vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name teleop_accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message->teleop_accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name teleop_yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message->teleop_yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name teleop_yaw_accel_limit_rps2
  {
    size_t item_size = sizeof(ros_message->teleop_yaw_accel_limit_rps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_limit_mps
  {
    size_t item_size = sizeof(ros_message->vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message->accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name decel_limit_mps2
  {
    size_t item_size = sizeof(ros_message->decel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dtz_decel_limit_mps2
  {
    size_t item_size = sizeof(ros_message->dtz_decel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lateral_accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message->lateral_accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message->yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw_accel_limit_rps2
  {
    size_t item_size = sizeof(ros_message->yaw_accel_limit_rps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tire_diameter_m
  {
    size_t item_size = sizeof(ros_message->tire_diameter_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheelbase_length_m
  {
    size_t item_size = sizeof(ros_message->wheelbase_length_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name wheel_track_width_m
  {
    size_t item_size = sizeof(ros_message->wheel_track_width_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_ratio
  {
    size_t item_size = sizeof(ros_message->gear_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name config_bitmap
  {
    size_t item_size = sizeof(ros_message->config_bitmap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eth_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eth_ip_address.size + 1);
  // field.name eth_port_number
  {
    size_t item_size = sizeof(ros_message->eth_port_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eth_subnet_mask
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eth_subnet_mask.size + 1);
  // field.name eth_gateway
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->eth_gateway.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Configuration__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_segway_msgs__msg__Configuration(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_segway_msgs
size_t max_serialized_size_segway_msgs__msg__Configuration(
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
  // member: teleop_vel_limit_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: teleop_accel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: teleop_yaw_rate_limit_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: teleop_yaw_accel_limit_rps2
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
  // member: accel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: decel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dtz_decel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lateral_accel_limit_mps2
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
  // member: yaw_accel_limit_rps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tire_diameter_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheelbase_length_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: wheel_track_width_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: gear_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: config_bitmap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eth_ip_address
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eth_port_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: eth_subnet_mask
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: eth_gateway
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = segway_msgs__msg__Configuration;
    is_plain =
      (
      offsetof(DataType, eth_gateway) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Configuration__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_segway_msgs__msg__Configuration(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Configuration = {
  "segway_msgs::msg",
  "Configuration",
  _Configuration__cdr_serialize,
  _Configuration__cdr_deserialize,
  _Configuration__get_serialized_size,
  _Configuration__max_serialized_size
};

static rosidl_message_type_support_t _Configuration__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Configuration,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, segway_msgs, msg, Configuration)() {
  return &_Configuration__type_support;
}

#if defined(__cplusplus)
}
#endif
