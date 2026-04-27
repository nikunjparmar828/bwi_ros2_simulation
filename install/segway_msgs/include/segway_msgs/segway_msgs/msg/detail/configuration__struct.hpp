// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Configuration.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_HPP_

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
# define DEPRECATED__segway_msgs__msg__Configuration __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Configuration __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Configuration_
{
  using Type = Configuration_<ContainerAllocator>;

  explicit Configuration_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->teleop_vel_limit_mps = 0.0f;
      this->teleop_accel_limit_mps2 = 0.0f;
      this->teleop_yaw_rate_limit_rps = 0.0f;
      this->teleop_yaw_accel_limit_rps2 = 0.0f;
      this->vel_limit_mps = 0.0f;
      this->accel_limit_mps2 = 0.0f;
      this->decel_limit_mps2 = 0.0f;
      this->dtz_decel_limit_mps2 = 0.0f;
      this->lateral_accel_limit_mps2 = 0.0f;
      this->yaw_rate_limit_rps = 0.0f;
      this->yaw_accel_limit_rps2 = 0.0f;
      this->tire_diameter_m = 0.0f;
      this->wheelbase_length_m = 0.0f;
      this->wheel_track_width_m = 0.0f;
      this->gear_ratio = 0.0f;
      this->config_bitmap = 0ul;
      this->eth_ip_address = "";
      this->eth_port_number = 0ul;
      this->eth_subnet_mask = "";
      this->eth_gateway = "";
    }
  }

  explicit Configuration_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    eth_ip_address(_alloc),
    eth_subnet_mask(_alloc),
    eth_gateway(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->teleop_vel_limit_mps = 0.0f;
      this->teleop_accel_limit_mps2 = 0.0f;
      this->teleop_yaw_rate_limit_rps = 0.0f;
      this->teleop_yaw_accel_limit_rps2 = 0.0f;
      this->vel_limit_mps = 0.0f;
      this->accel_limit_mps2 = 0.0f;
      this->decel_limit_mps2 = 0.0f;
      this->dtz_decel_limit_mps2 = 0.0f;
      this->lateral_accel_limit_mps2 = 0.0f;
      this->yaw_rate_limit_rps = 0.0f;
      this->yaw_accel_limit_rps2 = 0.0f;
      this->tire_diameter_m = 0.0f;
      this->wheelbase_length_m = 0.0f;
      this->wheel_track_width_m = 0.0f;
      this->gear_ratio = 0.0f;
      this->config_bitmap = 0ul;
      this->eth_ip_address = "";
      this->eth_port_number = 0ul;
      this->eth_subnet_mask = "";
      this->eth_gateway = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _teleop_vel_limit_mps_type =
    float;
  _teleop_vel_limit_mps_type teleop_vel_limit_mps;
  using _teleop_accel_limit_mps2_type =
    float;
  _teleop_accel_limit_mps2_type teleop_accel_limit_mps2;
  using _teleop_yaw_rate_limit_rps_type =
    float;
  _teleop_yaw_rate_limit_rps_type teleop_yaw_rate_limit_rps;
  using _teleop_yaw_accel_limit_rps2_type =
    float;
  _teleop_yaw_accel_limit_rps2_type teleop_yaw_accel_limit_rps2;
  using _vel_limit_mps_type =
    float;
  _vel_limit_mps_type vel_limit_mps;
  using _accel_limit_mps2_type =
    float;
  _accel_limit_mps2_type accel_limit_mps2;
  using _decel_limit_mps2_type =
    float;
  _decel_limit_mps2_type decel_limit_mps2;
  using _dtz_decel_limit_mps2_type =
    float;
  _dtz_decel_limit_mps2_type dtz_decel_limit_mps2;
  using _lateral_accel_limit_mps2_type =
    float;
  _lateral_accel_limit_mps2_type lateral_accel_limit_mps2;
  using _yaw_rate_limit_rps_type =
    float;
  _yaw_rate_limit_rps_type yaw_rate_limit_rps;
  using _yaw_accel_limit_rps2_type =
    float;
  _yaw_accel_limit_rps2_type yaw_accel_limit_rps2;
  using _tire_diameter_m_type =
    float;
  _tire_diameter_m_type tire_diameter_m;
  using _wheelbase_length_m_type =
    float;
  _wheelbase_length_m_type wheelbase_length_m;
  using _wheel_track_width_m_type =
    float;
  _wheel_track_width_m_type wheel_track_width_m;
  using _gear_ratio_type =
    float;
  _gear_ratio_type gear_ratio;
  using _config_bitmap_type =
    uint32_t;
  _config_bitmap_type config_bitmap;
  using _eth_ip_address_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _eth_ip_address_type eth_ip_address;
  using _eth_port_number_type =
    uint32_t;
  _eth_port_number_type eth_port_number;
  using _eth_subnet_mask_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _eth_subnet_mask_type eth_subnet_mask;
  using _eth_gateway_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _eth_gateway_type eth_gateway;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__teleop_vel_limit_mps(
    const float & _arg)
  {
    this->teleop_vel_limit_mps = _arg;
    return *this;
  }
  Type & set__teleop_accel_limit_mps2(
    const float & _arg)
  {
    this->teleop_accel_limit_mps2 = _arg;
    return *this;
  }
  Type & set__teleop_yaw_rate_limit_rps(
    const float & _arg)
  {
    this->teleop_yaw_rate_limit_rps = _arg;
    return *this;
  }
  Type & set__teleop_yaw_accel_limit_rps2(
    const float & _arg)
  {
    this->teleop_yaw_accel_limit_rps2 = _arg;
    return *this;
  }
  Type & set__vel_limit_mps(
    const float & _arg)
  {
    this->vel_limit_mps = _arg;
    return *this;
  }
  Type & set__accel_limit_mps2(
    const float & _arg)
  {
    this->accel_limit_mps2 = _arg;
    return *this;
  }
  Type & set__decel_limit_mps2(
    const float & _arg)
  {
    this->decel_limit_mps2 = _arg;
    return *this;
  }
  Type & set__dtz_decel_limit_mps2(
    const float & _arg)
  {
    this->dtz_decel_limit_mps2 = _arg;
    return *this;
  }
  Type & set__lateral_accel_limit_mps2(
    const float & _arg)
  {
    this->lateral_accel_limit_mps2 = _arg;
    return *this;
  }
  Type & set__yaw_rate_limit_rps(
    const float & _arg)
  {
    this->yaw_rate_limit_rps = _arg;
    return *this;
  }
  Type & set__yaw_accel_limit_rps2(
    const float & _arg)
  {
    this->yaw_accel_limit_rps2 = _arg;
    return *this;
  }
  Type & set__tire_diameter_m(
    const float & _arg)
  {
    this->tire_diameter_m = _arg;
    return *this;
  }
  Type & set__wheelbase_length_m(
    const float & _arg)
  {
    this->wheelbase_length_m = _arg;
    return *this;
  }
  Type & set__wheel_track_width_m(
    const float & _arg)
  {
    this->wheel_track_width_m = _arg;
    return *this;
  }
  Type & set__gear_ratio(
    const float & _arg)
  {
    this->gear_ratio = _arg;
    return *this;
  }
  Type & set__config_bitmap(
    const uint32_t & _arg)
  {
    this->config_bitmap = _arg;
    return *this;
  }
  Type & set__eth_ip_address(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->eth_ip_address = _arg;
    return *this;
  }
  Type & set__eth_port_number(
    const uint32_t & _arg)
  {
    this->eth_port_number = _arg;
    return *this;
  }
  Type & set__eth_subnet_mask(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->eth_subnet_mask = _arg;
    return *this;
  }
  Type & set__eth_gateway(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->eth_gateway = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Configuration_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Configuration_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Configuration_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Configuration_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Configuration_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Configuration_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Configuration_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Configuration_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Configuration_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Configuration_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Configuration
    std::shared_ptr<segway_msgs::msg::Configuration_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Configuration
    std::shared_ptr<segway_msgs::msg::Configuration_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Configuration_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->teleop_vel_limit_mps != other.teleop_vel_limit_mps) {
      return false;
    }
    if (this->teleop_accel_limit_mps2 != other.teleop_accel_limit_mps2) {
      return false;
    }
    if (this->teleop_yaw_rate_limit_rps != other.teleop_yaw_rate_limit_rps) {
      return false;
    }
    if (this->teleop_yaw_accel_limit_rps2 != other.teleop_yaw_accel_limit_rps2) {
      return false;
    }
    if (this->vel_limit_mps != other.vel_limit_mps) {
      return false;
    }
    if (this->accel_limit_mps2 != other.accel_limit_mps2) {
      return false;
    }
    if (this->decel_limit_mps2 != other.decel_limit_mps2) {
      return false;
    }
    if (this->dtz_decel_limit_mps2 != other.dtz_decel_limit_mps2) {
      return false;
    }
    if (this->lateral_accel_limit_mps2 != other.lateral_accel_limit_mps2) {
      return false;
    }
    if (this->yaw_rate_limit_rps != other.yaw_rate_limit_rps) {
      return false;
    }
    if (this->yaw_accel_limit_rps2 != other.yaw_accel_limit_rps2) {
      return false;
    }
    if (this->tire_diameter_m != other.tire_diameter_m) {
      return false;
    }
    if (this->wheelbase_length_m != other.wheelbase_length_m) {
      return false;
    }
    if (this->wheel_track_width_m != other.wheel_track_width_m) {
      return false;
    }
    if (this->gear_ratio != other.gear_ratio) {
      return false;
    }
    if (this->config_bitmap != other.config_bitmap) {
      return false;
    }
    if (this->eth_ip_address != other.eth_ip_address) {
      return false;
    }
    if (this->eth_port_number != other.eth_port_number) {
      return false;
    }
    if (this->eth_subnet_mask != other.eth_subnet_mask) {
      return false;
    }
    if (this->eth_gateway != other.eth_gateway) {
      return false;
    }
    return true;
  }
  bool operator!=(const Configuration_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Configuration_

// alias to use template instance with default allocator
using Configuration =
  segway_msgs::msg::Configuration_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__CONFIGURATION__STRUCT_HPP_
