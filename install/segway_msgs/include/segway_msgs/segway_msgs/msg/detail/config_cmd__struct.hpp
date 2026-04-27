// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/ConfigCmd.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_HPP_

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
# define DEPRECATED__segway_msgs__msg__ConfigCmd __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__ConfigCmd __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfigCmd_
{
  using Type = ConfigCmd_<ContainerAllocator>;

  explicit ConfigCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gp_cmd = "";
      this->gp_param = 0ul;
    }
  }

  explicit ConfigCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    gp_cmd(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gp_cmd = "";
      this->gp_param = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _gp_cmd_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _gp_cmd_type gp_cmd;
  using _gp_param_type =
    uint32_t;
  _gp_param_type gp_param;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__gp_cmd(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->gp_cmd = _arg;
    return *this;
  }
  Type & set__gp_param(
    const uint32_t & _arg)
  {
    this->gp_param = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::ConfigCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::ConfigCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::ConfigCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::ConfigCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__ConfigCmd
    std::shared_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__ConfigCmd
    std::shared_ptr<segway_msgs::msg::ConfigCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfigCmd_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->gp_cmd != other.gp_cmd) {
      return false;
    }
    if (this->gp_param != other.gp_param) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfigCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfigCmd_

// alias to use template instance with default allocator
using ConfigCmd =
  segway_msgs::msg::ConfigCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIG_CMD__STRUCT_HPP_
