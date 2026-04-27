// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: fault_status_words
  {
    if (msg.fault_status_words.size() == 0) {
      out << "fault_status_words: []";
    } else {
      out << "fault_status_words: [";
      size_t pending_items = msg.fault_status_words.size();
      for (auto item : msg.fault_status_words) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: mcu_fault_status
  {
    if (msg.mcu_fault_status.size() == 0) {
      out << "mcu_fault_status: []";
    } else {
      out << "mcu_fault_status: [";
      size_t pending_items = msg.mcu_fault_status.size();
      for (auto item : msg.mcu_fault_status) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: operational_time
  {
    out << "operational_time: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_time, out);
    out << ", ";
  }

  // member: operational_state
  {
    out << "operational_state: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_state, out);
    out << ", ";
  }

  // member: dynamic_response
  {
    out << "dynamic_response: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_response, out);
    out << ", ";
  }

  // member: machine_id
  {
    out << "machine_id: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: fault_status_words
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fault_status_words.size() == 0) {
      out << "fault_status_words: []\n";
    } else {
      out << "fault_status_words:\n";
      for (auto item : msg.fault_status_words) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: mcu_fault_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mcu_fault_status.size() == 0) {
      out << "mcu_fault_status: []\n";
    } else {
      out << "mcu_fault_status:\n";
      for (auto item : msg.mcu_fault_status) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: operational_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operational_time: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_time, out);
    out << "\n";
  }

  // member: operational_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "operational_state: ";
    rosidl_generator_traits::value_to_yaml(msg.operational_state, out);
    out << "\n";
  }

  // member: dynamic_response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dynamic_response: ";
    rosidl_generator_traits::value_to_yaml(msg.dynamic_response, out);
    out << "\n";
  }

  // member: machine_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "machine_id: ";
    rosidl_generator_traits::value_to_yaml(msg.machine_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace segway_msgs

namespace rosidl_generator_traits
{

[[deprecated("use segway_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const segway_msgs::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::Status & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::Status>()
{
  return "segway_msgs::msg::Status";
}

template<>
inline const char * name<segway_msgs::msg::Status>()
{
  return "segway_msgs/msg/Status";
}

template<>
struct has_fixed_size<segway_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::Status>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__STATUS__TRAITS_HPP_
