// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_

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
# define DEPRECATED__segway_msgs__msg__Status __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Status __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Status_
{
  using Type = Status_<ContainerAllocator>;

  explicit Status_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operational_time = 0.0f;
      this->operational_state = 0ul;
      this->dynamic_response = 0ul;
      this->machine_id = 0ul;
    }
  }

  explicit Status_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->operational_time = 0.0f;
      this->operational_state = 0ul;
      this->dynamic_response = 0ul;
      this->machine_id = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _fault_status_words_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _fault_status_words_type fault_status_words;
  using _mcu_fault_status_type =
    std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>>;
  _mcu_fault_status_type mcu_fault_status;
  using _operational_time_type =
    float;
  _operational_time_type operational_time;
  using _operational_state_type =
    uint32_t;
  _operational_state_type operational_state;
  using _dynamic_response_type =
    uint32_t;
  _dynamic_response_type dynamic_response;
  using _machine_id_type =
    uint32_t;
  _machine_id_type machine_id;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__fault_status_words(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->fault_status_words = _arg;
    return *this;
  }
  Type & set__mcu_fault_status(
    const std::vector<uint32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint32_t>> & _arg)
  {
    this->mcu_fault_status = _arg;
    return *this;
  }
  Type & set__operational_time(
    const float & _arg)
  {
    this->operational_time = _arg;
    return *this;
  }
  Type & set__operational_state(
    const uint32_t & _arg)
  {
    this->operational_state = _arg;
    return *this;
  }
  Type & set__dynamic_response(
    const uint32_t & _arg)
  {
    this->dynamic_response = _arg;
    return *this;
  }
  Type & set__machine_id(
    const uint32_t & _arg)
  {
    this->machine_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Status_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Status_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Status_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Status_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Status_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Status_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Status_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Status_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Status_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Status_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Status
    std::shared_ptr<segway_msgs::msg::Status_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Status
    std::shared_ptr<segway_msgs::msg::Status_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Status_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->fault_status_words != other.fault_status_words) {
      return false;
    }
    if (this->mcu_fault_status != other.mcu_fault_status) {
      return false;
    }
    if (this->operational_time != other.operational_time) {
      return false;
    }
    if (this->operational_state != other.operational_state) {
      return false;
    }
    if (this->dynamic_response != other.dynamic_response) {
      return false;
    }
    if (this->machine_id != other.machine_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const Status_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Status_

// alias to use template instance with default allocator
using Status =
  segway_msgs::msg::Status_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__STATUS__STRUCT_HPP_
