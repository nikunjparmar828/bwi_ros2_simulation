// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/AuxPower.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__segway_msgs__msg__AuxPower __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__AuxPower __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AuxPower_
{
  using Type = AuxPower_<ContainerAllocator>;

  explicit AuxPower_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startup_7p2v_batt_voltage = 0.0f;
    }
  }

  explicit AuxPower_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->startup_7p2v_batt_voltage = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _aux_soc_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _aux_soc_type aux_soc;
  using _aux_voltage_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _aux_voltage_type aux_voltage;
  using _aux_current_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _aux_current_type aux_current;
  using _aux_temp_deg_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _aux_temp_deg_type aux_temp_deg;
  using _aux_sys_status_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _aux_sys_status_type aux_sys_status;
  using _aux_bcu_status_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _aux_bcu_status_type aux_bcu_status;
  using _aux_bcu_faults_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _aux_bcu_faults_type aux_bcu_faults;
  using _startup_7p2v_batt_voltage_type =
    float;
  _startup_7p2v_batt_voltage_type startup_7p2v_batt_voltage;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__aux_soc(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->aux_soc = _arg;
    return *this;
  }
  Type & set__aux_voltage(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->aux_voltage = _arg;
    return *this;
  }
  Type & set__aux_current(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->aux_current = _arg;
    return *this;
  }
  Type & set__aux_temp_deg(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->aux_temp_deg = _arg;
    return *this;
  }
  Type & set__aux_sys_status(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->aux_sys_status = _arg;
    return *this;
  }
  Type & set__aux_bcu_status(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->aux_bcu_status = _arg;
    return *this;
  }
  Type & set__aux_bcu_faults(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->aux_bcu_faults = _arg;
    return *this;
  }
  Type & set__startup_7p2v_batt_voltage(
    const float & _arg)
  {
    this->startup_7p2v_batt_voltage = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::AuxPower_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::AuxPower_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::AuxPower_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::AuxPower_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__AuxPower
    std::shared_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__AuxPower
    std::shared_ptr<segway_msgs::msg::AuxPower_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AuxPower_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->aux_soc != other.aux_soc) {
      return false;
    }
    if (this->aux_voltage != other.aux_voltage) {
      return false;
    }
    if (this->aux_current != other.aux_current) {
      return false;
    }
    if (this->aux_temp_deg != other.aux_temp_deg) {
      return false;
    }
    if (this->aux_sys_status != other.aux_sys_status) {
      return false;
    }
    if (this->aux_bcu_status != other.aux_bcu_status) {
      return false;
    }
    if (this->aux_bcu_faults != other.aux_bcu_faults) {
      return false;
    }
    if (this->startup_7p2v_batt_voltage != other.startup_7p2v_batt_voltage) {
      return false;
    }
    return true;
  }
  bool operator!=(const AuxPower_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AuxPower_

// alias to use template instance with default allocator
using AuxPower =
  segway_msgs::msg::AuxPower_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__AUX_POWER__STRUCT_HPP_
