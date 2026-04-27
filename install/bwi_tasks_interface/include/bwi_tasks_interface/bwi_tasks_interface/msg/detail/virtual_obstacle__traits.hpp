// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice

#ifndef BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__TRAITS_HPP_
#define BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "bwi_tasks_interface/msg/detail/virtual_obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace bwi_tasks_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const VirtualObstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: poses
  {
    if (msg.poses.size() == 0) {
      out << "poses: []";
    } else {
      out << "poses: [";
      size_t pending_items = msg.poses.size();
      for (auto item : msg.poses) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: active
  {
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VirtualObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.poses.size() == 0) {
      out << "poses: []\n";
    } else {
      out << "poses:\n";
      for (auto item : msg.poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "active: ";
    rosidl_generator_traits::value_to_yaml(msg.active, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VirtualObstacle & msg, bool use_flow_style = false)
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

}  // namespace bwi_tasks_interface

namespace rosidl_generator_traits
{

[[deprecated("use bwi_tasks_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const bwi_tasks_interface::msg::VirtualObstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  bwi_tasks_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use bwi_tasks_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const bwi_tasks_interface::msg::VirtualObstacle & msg)
{
  return bwi_tasks_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<bwi_tasks_interface::msg::VirtualObstacle>()
{
  return "bwi_tasks_interface::msg::VirtualObstacle";
}

template<>
inline const char * name<bwi_tasks_interface::msg::VirtualObstacle>()
{
  return "bwi_tasks_interface/msg/VirtualObstacle";
}

template<>
struct has_fixed_size<bwi_tasks_interface::msg::VirtualObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<bwi_tasks_interface::msg::VirtualObstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<bwi_tasks_interface::msg::VirtualObstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__TRAITS_HPP_
