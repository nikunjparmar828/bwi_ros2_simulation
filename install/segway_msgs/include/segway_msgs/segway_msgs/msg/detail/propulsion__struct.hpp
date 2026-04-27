// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Propulsion.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_HPP_

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
# define DEPRECATED__segway_msgs__msg__Propulsion __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Propulsion __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Propulsion_
{
  using Type = Propulsion_<ContainerAllocator>;

  explicit Propulsion_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_propulsion_battery_soc = 0.0f;
      this->max_motor_current = 0.0f;
      this->min_motor_current_limit = 0.0f;
    }
  }

  explicit Propulsion_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_propulsion_battery_soc = 0.0f;
      this->max_motor_current = 0.0f;
      this->min_motor_current_limit = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _min_propulsion_battery_soc_type =
    float;
  _min_propulsion_battery_soc_type min_propulsion_battery_soc;
  using _mcu_battery_soc_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mcu_battery_soc_type mcu_battery_soc;
  using _mcu_battery_temp_deg_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mcu_battery_temp_deg_type mcu_battery_temp_deg;
  using _mcu_inst_power_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mcu_inst_power_type mcu_inst_power;
  using _mcu_total_energy_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _mcu_total_energy_type mcu_total_energy;
  using _motor_current_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _motor_current_type motor_current;
  using _max_motor_current_type =
    float;
  _max_motor_current_type max_motor_current;
  using _motor_current_limit_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _motor_current_limit_type motor_current_limit;
  using _min_motor_current_limit_type =
    float;
  _min_motor_current_limit_type min_motor_current_limit;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__min_propulsion_battery_soc(
    const float & _arg)
  {
    this->min_propulsion_battery_soc = _arg;
    return *this;
  }
  Type & set__mcu_battery_soc(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mcu_battery_soc = _arg;
    return *this;
  }
  Type & set__mcu_battery_temp_deg(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mcu_battery_temp_deg = _arg;
    return *this;
  }
  Type & set__mcu_inst_power(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mcu_inst_power = _arg;
    return *this;
  }
  Type & set__mcu_total_energy(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->mcu_total_energy = _arg;
    return *this;
  }
  Type & set__motor_current(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->motor_current = _arg;
    return *this;
  }
  Type & set__max_motor_current(
    const float & _arg)
  {
    this->max_motor_current = _arg;
    return *this;
  }
  Type & set__motor_current_limit(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->motor_current_limit = _arg;
    return *this;
  }
  Type & set__min_motor_current_limit(
    const float & _arg)
  {
    this->min_motor_current_limit = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Propulsion_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Propulsion_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Propulsion_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Propulsion_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Propulsion
    std::shared_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Propulsion
    std::shared_ptr<segway_msgs::msg::Propulsion_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Propulsion_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->min_propulsion_battery_soc != other.min_propulsion_battery_soc) {
      return false;
    }
    if (this->mcu_battery_soc != other.mcu_battery_soc) {
      return false;
    }
    if (this->mcu_battery_temp_deg != other.mcu_battery_temp_deg) {
      return false;
    }
    if (this->mcu_inst_power != other.mcu_inst_power) {
      return false;
    }
    if (this->mcu_total_energy != other.mcu_total_energy) {
      return false;
    }
    if (this->motor_current != other.motor_current) {
      return false;
    }
    if (this->max_motor_current != other.max_motor_current) {
      return false;
    }
    if (this->motor_current_limit != other.motor_current_limit) {
      return false;
    }
    if (this->min_motor_current_limit != other.min_motor_current_limit) {
      return false;
    }
    return true;
  }
  bool operator!=(const Propulsion_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Propulsion_

// alias to use template instance with default allocator
using Propulsion =
  segway_msgs::msg::Propulsion_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__PROPULSION__STRUCT_HPP_
