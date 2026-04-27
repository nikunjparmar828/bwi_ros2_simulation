// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from segway_msgs:msg/ConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__TRAITS_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "segway_msgs/msg/detail/config_cmd__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace segway_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ConfigCmd & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: gp_cmd
  {
    out << "gp_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gp_cmd, out);
    out << ", ";
  }

  // member: gp_param
  {
    out << "gp_param: ";
    rosidl_generator_traits::value_to_yaml(msg.gp_param, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ConfigCmd & msg,
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

  // member: gp_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gp_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.gp_cmd, out);
    out << "\n";
  }

  // member: gp_param
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gp_param: ";
    rosidl_generator_traits::value_to_yaml(msg.gp_param, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ConfigCmd & msg, bool use_flow_style = false)
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
  const segway_msgs::msg::ConfigCmd & msg,
  std::ostream & out, size_t indentation = 0)
{
  segway_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use segway_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const segway_msgs::msg::ConfigCmd & msg)
{
  return segway_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<segway_msgs::msg::ConfigCmd>()
{
  return "segway_msgs::msg::ConfigCmd";
}

template<>
inline const char * name<segway_msgs::msg::ConfigCmd>()
{
  return "segway_msgs/msg/ConfigCmd";
}

template<>
struct has_fixed_size<segway_msgs::msg::ConfigCmd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<segway_msgs::msg::ConfigCmd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<segway_msgs::msg::ConfigCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__TRAITS_HPP_
