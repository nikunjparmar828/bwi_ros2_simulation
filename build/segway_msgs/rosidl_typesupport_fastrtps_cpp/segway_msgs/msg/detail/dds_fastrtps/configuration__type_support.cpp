// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice
#include "segway_msgs/msg/detail/configuration__rosidl_typesupport_fastrtps_cpp.hpp"
#include "segway_msgs/msg/detail/configuration__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace segway_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_serialize(
  const segway_msgs::msg::Configuration & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: teleop_vel_limit_mps
  cdr << ros_message.teleop_vel_limit_mps;
  // Member: teleop_accel_limit_mps2
  cdr << ros_message.teleop_accel_limit_mps2;
  // Member: teleop_yaw_rate_limit_rps
  cdr << ros_message.teleop_yaw_rate_limit_rps;
  // Member: teleop_yaw_accel_limit_rps2
  cdr << ros_message.teleop_yaw_accel_limit_rps2;
  // Member: vel_limit_mps
  cdr << ros_message.vel_limit_mps;
  // Member: accel_limit_mps2
  cdr << ros_message.accel_limit_mps2;
  // Member: decel_limit_mps2
  cdr << ros_message.decel_limit_mps2;
  // Member: dtz_decel_limit_mps2
  cdr << ros_message.dtz_decel_limit_mps2;
  // Member: lateral_accel_limit_mps2
  cdr << ros_message.lateral_accel_limit_mps2;
  // Member: yaw_rate_limit_rps
  cdr << ros_message.yaw_rate_limit_rps;
  // Member: yaw_accel_limit_rps2
  cdr << ros_message.yaw_accel_limit_rps2;
  // Member: tire_diameter_m
  cdr << ros_message.tire_diameter_m;
  // Member: wheelbase_length_m
  cdr << ros_message.wheelbase_length_m;
  // Member: wheel_track_width_m
  cdr << ros_message.wheel_track_width_m;
  // Member: gear_ratio
  cdr << ros_message.gear_ratio;
  // Member: config_bitmap
  cdr << ros_message.config_bitmap;
  // Member: eth_ip_address
  cdr << ros_message.eth_ip_address;
  // Member: eth_port_number
  cdr << ros_message.eth_port_number;
  // Member: eth_subnet_mask
  cdr << ros_message.eth_subnet_mask;
  // Member: eth_gateway
  cdr << ros_message.eth_gateway;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  segway_msgs::msg::Configuration & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: teleop_vel_limit_mps
  cdr >> ros_message.teleop_vel_limit_mps;

  // Member: teleop_accel_limit_mps2
  cdr >> ros_message.teleop_accel_limit_mps2;

  // Member: teleop_yaw_rate_limit_rps
  cdr >> ros_message.teleop_yaw_rate_limit_rps;

  // Member: teleop_yaw_accel_limit_rps2
  cdr >> ros_message.teleop_yaw_accel_limit_rps2;

  // Member: vel_limit_mps
  cdr >> ros_message.vel_limit_mps;

  // Member: accel_limit_mps2
  cdr >> ros_message.accel_limit_mps2;

  // Member: decel_limit_mps2
  cdr >> ros_message.decel_limit_mps2;

  // Member: dtz_decel_limit_mps2
  cdr >> ros_message.dtz_decel_limit_mps2;

  // Member: lateral_accel_limit_mps2
  cdr >> ros_message.lateral_accel_limit_mps2;

  // Member: yaw_rate_limit_rps
  cdr >> ros_message.yaw_rate_limit_rps;

  // Member: yaw_accel_limit_rps2
  cdr >> ros_message.yaw_accel_limit_rps2;

  // Member: tire_diameter_m
  cdr >> ros_message.tire_diameter_m;

  // Member: wheelbase_length_m
  cdr >> ros_message.wheelbase_length_m;

  // Member: wheel_track_width_m
  cdr >> ros_message.wheel_track_width_m;

  // Member: gear_ratio
  cdr >> ros_message.gear_ratio;

  // Member: config_bitmap
  cdr >> ros_message.config_bitmap;

  // Member: eth_ip_address
  cdr >> ros_message.eth_ip_address;

  // Member: eth_port_number
  cdr >> ros_message.eth_port_number;

  // Member: eth_subnet_mask
  cdr >> ros_message.eth_subnet_mask;

  // Member: eth_gateway
  cdr >> ros_message.eth_gateway;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
get_serialized_size(
  const segway_msgs::msg::Configuration & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: teleop_vel_limit_mps
  {
    size_t item_size = sizeof(ros_message.teleop_vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teleop_accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message.teleop_accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teleop_yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message.teleop_yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teleop_yaw_accel_limit_rps2
  {
    size_t item_size = sizeof(ros_message.teleop_yaw_accel_limit_rps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vel_limit_mps
  {
    size_t item_size = sizeof(ros_message.vel_limit_mps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message.accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: decel_limit_mps2
  {
    size_t item_size = sizeof(ros_message.decel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dtz_decel_limit_mps2
  {
    size_t item_size = sizeof(ros_message.dtz_decel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lateral_accel_limit_mps2
  {
    size_t item_size = sizeof(ros_message.lateral_accel_limit_mps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_rate_limit_rps
  {
    size_t item_size = sizeof(ros_message.yaw_rate_limit_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: yaw_accel_limit_rps2
  {
    size_t item_size = sizeof(ros_message.yaw_accel_limit_rps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tire_diameter_m
  {
    size_t item_size = sizeof(ros_message.tire_diameter_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheelbase_length_m
  {
    size_t item_size = sizeof(ros_message.wheelbase_length_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: wheel_track_width_m
  {
    size_t item_size = sizeof(ros_message.wheel_track_width_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gear_ratio
  {
    size_t item_size = sizeof(ros_message.gear_ratio);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: config_bitmap
  {
    size_t item_size = sizeof(ros_message.config_bitmap);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eth_ip_address
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eth_ip_address.size() + 1);
  // Member: eth_port_number
  {
    size_t item_size = sizeof(ros_message.eth_port_number);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: eth_subnet_mask
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eth_subnet_mask.size() + 1);
  // Member: eth_gateway
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.eth_gateway.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_segway_msgs
max_serialized_size_Configuration(
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


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: teleop_vel_limit_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: teleop_accel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: teleop_yaw_rate_limit_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: teleop_yaw_accel_limit_rps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: vel_limit_mps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: accel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: decel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: dtz_decel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lateral_accel_limit_mps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_rate_limit_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: yaw_accel_limit_rps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tire_diameter_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheelbase_length_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: wheel_track_width_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: gear_ratio
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: config_bitmap
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eth_ip_address
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

  // Member: eth_port_number
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: eth_subnet_mask
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

  // Member: eth_gateway
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
    using DataType = segway_msgs::msg::Configuration;
    is_plain =
      (
      offsetof(DataType, eth_gateway) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Configuration__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const segway_msgs::msg::Configuration *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Configuration__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<segway_msgs::msg::Configuration *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Configuration__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const segway_msgs::msg::Configuration *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Configuration__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Configuration(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Configuration__callbacks = {
  "segway_msgs::msg",
  "Configuration",
  _Configuration__cdr_serialize,
  _Configuration__cdr_deserialize,
  _Configuration__get_serialized_size,
  _Configuration__max_serialized_size
};

static rosidl_message_type_support_t _Configuration__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Configuration__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_segway_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::msg::Configuration>()
{
  return &segway_msgs::msg::typesupport_fastrtps_cpp::_Configuration__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, segway_msgs, msg, Configuration)() {
  return &segway_msgs::msg::typesupport_fastrtps_cpp::_Configuration__handle;
}

#ifdef __cplusplus
}
#endif
