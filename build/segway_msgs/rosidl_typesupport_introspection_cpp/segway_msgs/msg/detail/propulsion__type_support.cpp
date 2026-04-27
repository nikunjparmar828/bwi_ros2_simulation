// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "segway_msgs/msg/detail/propulsion__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace segway_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Propulsion_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) segway_msgs::msg::Propulsion(_init);
}

void Propulsion_fini_function(void * message_memory)
{
  auto typed_message = static_cast<segway_msgs::msg::Propulsion *>(message_memory);
  typed_message->~Propulsion();
}

size_t size_function__Propulsion__mcu_battery_soc(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__mcu_battery_soc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__mcu_battery_soc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__mcu_battery_soc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__mcu_battery_soc(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__mcu_battery_soc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__mcu_battery_soc(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__mcu_battery_soc(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Propulsion__mcu_battery_temp_deg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__mcu_battery_temp_deg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__mcu_battery_temp_deg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__mcu_battery_temp_deg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__mcu_battery_temp_deg(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__mcu_battery_temp_deg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__mcu_battery_temp_deg(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__mcu_battery_temp_deg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Propulsion__mcu_inst_power(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__mcu_inst_power(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__mcu_inst_power(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__mcu_inst_power(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__mcu_inst_power(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__mcu_inst_power(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__mcu_inst_power(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__mcu_inst_power(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Propulsion__mcu_total_energy(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__mcu_total_energy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__mcu_total_energy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__mcu_total_energy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__mcu_total_energy(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__mcu_total_energy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__mcu_total_energy(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__mcu_total_energy(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Propulsion__motor_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__motor_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__motor_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__motor_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__motor_current(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__motor_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__motor_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__motor_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__Propulsion__motor_current_limit(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Propulsion__motor_current_limit(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__Propulsion__motor_current_limit(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__Propulsion__motor_current_limit(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__Propulsion__motor_current_limit(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__Propulsion__motor_current_limit(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__Propulsion__motor_current_limit(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__Propulsion__motor_current_limit(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Propulsion_message_member_array[10] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "min_propulsion_battery_soc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, min_propulsion_battery_soc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mcu_battery_soc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, mcu_battery_soc),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__mcu_battery_soc,  // size() function pointer
    get_const_function__Propulsion__mcu_battery_soc,  // get_const(index) function pointer
    get_function__Propulsion__mcu_battery_soc,  // get(index) function pointer
    fetch_function__Propulsion__mcu_battery_soc,  // fetch(index, &value) function pointer
    assign_function__Propulsion__mcu_battery_soc,  // assign(index, value) function pointer
    resize_function__Propulsion__mcu_battery_soc  // resize(index) function pointer
  },
  {
    "mcu_battery_temp_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, mcu_battery_temp_deg),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__mcu_battery_temp_deg,  // size() function pointer
    get_const_function__Propulsion__mcu_battery_temp_deg,  // get_const(index) function pointer
    get_function__Propulsion__mcu_battery_temp_deg,  // get(index) function pointer
    fetch_function__Propulsion__mcu_battery_temp_deg,  // fetch(index, &value) function pointer
    assign_function__Propulsion__mcu_battery_temp_deg,  // assign(index, value) function pointer
    resize_function__Propulsion__mcu_battery_temp_deg  // resize(index) function pointer
  },
  {
    "mcu_inst_power",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, mcu_inst_power),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__mcu_inst_power,  // size() function pointer
    get_const_function__Propulsion__mcu_inst_power,  // get_const(index) function pointer
    get_function__Propulsion__mcu_inst_power,  // get(index) function pointer
    fetch_function__Propulsion__mcu_inst_power,  // fetch(index, &value) function pointer
    assign_function__Propulsion__mcu_inst_power,  // assign(index, value) function pointer
    resize_function__Propulsion__mcu_inst_power  // resize(index) function pointer
  },
  {
    "mcu_total_energy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, mcu_total_energy),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__mcu_total_energy,  // size() function pointer
    get_const_function__Propulsion__mcu_total_energy,  // get_const(index) function pointer
    get_function__Propulsion__mcu_total_energy,  // get(index) function pointer
    fetch_function__Propulsion__mcu_total_energy,  // fetch(index, &value) function pointer
    assign_function__Propulsion__mcu_total_energy,  // assign(index, value) function pointer
    resize_function__Propulsion__mcu_total_energy  // resize(index) function pointer
  },
  {
    "motor_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, motor_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__motor_current,  // size() function pointer
    get_const_function__Propulsion__motor_current,  // get_const(index) function pointer
    get_function__Propulsion__motor_current,  // get(index) function pointer
    fetch_function__Propulsion__motor_current,  // fetch(index, &value) function pointer
    assign_function__Propulsion__motor_current,  // assign(index, value) function pointer
    resize_function__Propulsion__motor_current  // resize(index) function pointer
  },
  {
    "max_motor_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, max_motor_current),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motor_current_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, motor_current_limit),  // bytes offset in struct
    nullptr,  // default value
    size_function__Propulsion__motor_current_limit,  // size() function pointer
    get_const_function__Propulsion__motor_current_limit,  // get_const(index) function pointer
    get_function__Propulsion__motor_current_limit,  // get(index) function pointer
    fetch_function__Propulsion__motor_current_limit,  // fetch(index, &value) function pointer
    assign_function__Propulsion__motor_current_limit,  // assign(index, value) function pointer
    resize_function__Propulsion__motor_current_limit  // resize(index) function pointer
  },
  {
    "min_motor_current_limit",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::Propulsion, min_motor_current_limit),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Propulsion_message_members = {
  "segway_msgs::msg",  // message namespace
  "Propulsion",  // message name
  10,  // number of fields
  sizeof(segway_msgs::msg::Propulsion),
  Propulsion_message_member_array,  // message members
  Propulsion_init_function,  // function to initialize message memory (memory has to be allocated)
  Propulsion_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Propulsion_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Propulsion_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace segway_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<segway_msgs::msg::Propulsion>()
{
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::Propulsion_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, msg, Propulsion)() {
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::Propulsion_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
