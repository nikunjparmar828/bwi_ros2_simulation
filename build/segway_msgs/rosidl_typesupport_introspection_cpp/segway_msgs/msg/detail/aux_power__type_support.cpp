// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "segway_msgs/msg/detail/aux_power__struct.hpp"
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

void AuxPower_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) segway_msgs::msg::AuxPower(_init);
}

void AuxPower_fini_function(void * message_memory)
{
  auto typed_message = static_cast<segway_msgs::msg::AuxPower *>(message_memory);
  typed_message->~AuxPower();
}

size_t size_function__AuxPower__aux_soc(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_soc(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_soc(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_soc(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AuxPower__aux_soc(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_soc(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AuxPower__aux_soc(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_soc(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_voltage(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_voltage(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_voltage(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_voltage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AuxPower__aux_voltage(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_voltage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AuxPower__aux_voltage(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_voltage(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_current(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_current(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_current(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_current(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AuxPower__aux_current(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_current(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AuxPower__aux_current(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_current(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_temp_deg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<float> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_temp_deg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<float> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_temp_deg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<float> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_temp_deg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AuxPower__aux_temp_deg(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_temp_deg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AuxPower__aux_temp_deg(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_temp_deg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<float> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_sys_status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_sys_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_sys_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_sys_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__AuxPower__aux_sys_status(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_sys_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__AuxPower__aux_sys_status(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_sys_status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_bcu_status(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_bcu_status(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_bcu_status(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_bcu_status(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__AuxPower__aux_bcu_status(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_bcu_status(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__AuxPower__aux_bcu_status(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_bcu_status(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AuxPower__aux_bcu_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AuxPower__aux_bcu_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__AuxPower__aux_bcu_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__AuxPower__aux_bcu_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__AuxPower__aux_bcu_faults(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__AuxPower__aux_bcu_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__AuxPower__aux_bcu_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__AuxPower__aux_bcu_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AuxPower_message_member_array[9] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "aux_soc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_soc),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_soc,  // size() function pointer
    get_const_function__AuxPower__aux_soc,  // get_const(index) function pointer
    get_function__AuxPower__aux_soc,  // get(index) function pointer
    fetch_function__AuxPower__aux_soc,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_soc,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_soc  // resize(index) function pointer
  },
  {
    "aux_voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_voltage),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_voltage,  // size() function pointer
    get_const_function__AuxPower__aux_voltage,  // get_const(index) function pointer
    get_function__AuxPower__aux_voltage,  // get(index) function pointer
    fetch_function__AuxPower__aux_voltage,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_voltage,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_voltage  // resize(index) function pointer
  },
  {
    "aux_current",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_current),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_current,  // size() function pointer
    get_const_function__AuxPower__aux_current,  // get_const(index) function pointer
    get_function__AuxPower__aux_current,  // get(index) function pointer
    fetch_function__AuxPower__aux_current,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_current,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_current  // resize(index) function pointer
  },
  {
    "aux_temp_deg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_temp_deg),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_temp_deg,  // size() function pointer
    get_const_function__AuxPower__aux_temp_deg,  // get_const(index) function pointer
    get_function__AuxPower__aux_temp_deg,  // get(index) function pointer
    fetch_function__AuxPower__aux_temp_deg,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_temp_deg,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_temp_deg  // resize(index) function pointer
  },
  {
    "aux_sys_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_sys_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_sys_status,  // size() function pointer
    get_const_function__AuxPower__aux_sys_status,  // get_const(index) function pointer
    get_function__AuxPower__aux_sys_status,  // get(index) function pointer
    fetch_function__AuxPower__aux_sys_status,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_sys_status,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_sys_status  // resize(index) function pointer
  },
  {
    "aux_bcu_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_bcu_status),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_bcu_status,  // size() function pointer
    get_const_function__AuxPower__aux_bcu_status,  // get_const(index) function pointer
    get_function__AuxPower__aux_bcu_status,  // get(index) function pointer
    fetch_function__AuxPower__aux_bcu_status,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_bcu_status,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_bcu_status  // resize(index) function pointer
  },
  {
    "aux_bcu_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, aux_bcu_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__AuxPower__aux_bcu_faults,  // size() function pointer
    get_const_function__AuxPower__aux_bcu_faults,  // get_const(index) function pointer
    get_function__AuxPower__aux_bcu_faults,  // get(index) function pointer
    fetch_function__AuxPower__aux_bcu_faults,  // fetch(index, &value) function pointer
    assign_function__AuxPower__aux_bcu_faults,  // assign(index, value) function pointer
    resize_function__AuxPower__aux_bcu_faults  // resize(index) function pointer
  },
  {
    "startup_7p2v_batt_voltage",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(segway_msgs::msg::AuxPower, startup_7p2v_batt_voltage),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AuxPower_message_members = {
  "segway_msgs::msg",  // message namespace
  "AuxPower",  // message name
  9,  // number of fields
  sizeof(segway_msgs::msg::AuxPower),
  AuxPower_message_member_array,  // message members
  AuxPower_init_function,  // function to initialize message memory (memory has to be allocated)
  AuxPower_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AuxPower_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AuxPower_message_members,
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
get_message_type_support_handle<segway_msgs::msg::AuxPower>()
{
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::AuxPower_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, segway_msgs, msg, AuxPower)() {
  return &::segway_msgs::msg::rosidl_typesupport_introspection_cpp::AuxPower_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
