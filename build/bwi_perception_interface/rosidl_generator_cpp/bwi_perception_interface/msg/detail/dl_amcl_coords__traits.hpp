// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bwi_perception_interface:msg/DlAmclCoords.idl
// generated code does not contain a copyright notice

#ifndef BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__TRAITS_HPP_
#define BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bwi_perception_interface/msg/detail/dl_amcl_coords__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace bwi_perception_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const DlAmclCoords & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DlAmclCoords & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DlAmclCoords & msg, bool use_flow_style = false)
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

}  // namespace bwi_perception_interface

namespace rosidl_generator_traits
{

[[deprecated("use bwi_perception_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bwi_perception_interface::msg::DlAmclCoords & msg,
  std::ostream & out, size_t indentation = 0)
{
  bwi_perception_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bwi_perception_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const bwi_perception_interface::msg::DlAmclCoords & msg)
{
  return bwi_perception_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bwi_perception_interface::msg::DlAmclCoords>()
{
  return "bwi_perception_interface::msg::DlAmclCoords";
}

template<>
inline const char * name<bwi_perception_interface::msg::DlAmclCoords>()
{
  return "bwi_perception_interface/msg/DlAmclCoords";
}

template<>
struct has_fixed_size<bwi_perception_interface::msg::DlAmclCoords>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<bwi_perception_interface::msg::DlAmclCoords>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<bwi_perception_interface::msg::DlAmclCoords>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BWI_PERCEPTION_INTERFACE__MSG__DETAIL__DL_AMCL_COORDS__TRAITS_HPP_
