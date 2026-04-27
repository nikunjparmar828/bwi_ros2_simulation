// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from segway_msgs:msg/Dynamics.idl
// generated code does not contain a copyright notice

#ifndef SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_HPP_
#define SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_HPP_

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
# define DEPRECATED__segway_msgs__msg__Dynamics __attribute__((deprecated))
#else
# define DEPRECATED__segway_msgs__msg__Dynamics __declspec(deprecated)
#endif

namespace segway_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Dynamics_
{
  using Type = Dynamics_<ContainerAllocator>;

  explicit Dynamics_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_vel_target_mps = 0.0f;
      this->y_vel_target_mps = 0.0f;
      this->yaw_rate_target_rps = 0.0f;
      this->vel_limit_mps = 0.0f;
      this->yaw_rate_limit_rps = 0.0f;
      this->x_accel_mps2 = 0.0f;
      this->y_accel_mps2 = 0.0f;
      this->yaw_accel_mps2 = 0.0f;
      this->yaw_angle_rad = 0.0f;
      this->odom_yaw_angle_rad = 0.0f;
    }
  }

  explicit Dynamics_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x_vel_target_mps = 0.0f;
      this->y_vel_target_mps = 0.0f;
      this->yaw_rate_target_rps = 0.0f;
      this->vel_limit_mps = 0.0f;
      this->yaw_rate_limit_rps = 0.0f;
      this->x_accel_mps2 = 0.0f;
      this->y_accel_mps2 = 0.0f;
      this->yaw_accel_mps2 = 0.0f;
      this->yaw_angle_rad = 0.0f;
      this->odom_yaw_angle_rad = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_vel_target_mps_type =
    float;
  _x_vel_target_mps_type x_vel_target_mps;
  using _y_vel_target_mps_type =
    float;
  _y_vel_target_mps_type y_vel_target_mps;
  using _yaw_rate_target_rps_type =
    float;
  _yaw_rate_target_rps_type yaw_rate_target_rps;
  using _vel_limit_mps_type =
    float;
  _vel_limit_mps_type vel_limit_mps;
  using _yaw_rate_limit_rps_type =
    float;
  _yaw_rate_limit_rps_type yaw_rate_limit_rps;
  using _wheel_vel_mps_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _wheel_vel_mps_type wheel_vel_mps;
  using _wheel_pos_m_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _wheel_pos_m_type wheel_pos_m;
  using _x_accel_mps2_type =
    float;
  _x_accel_mps2_type x_accel_mps2;
  using _y_accel_mps2_type =
    float;
  _y_accel_mps2_type y_accel_mps2;
  using _yaw_accel_mps2_type =
    float;
  _yaw_accel_mps2_type yaw_accel_mps2;
  using _yaw_angle_rad_type =
    float;
  _yaw_angle_rad_type yaw_angle_rad;
  using _odom_yaw_angle_rad_type =
    float;
  _odom_yaw_angle_rad_type odom_yaw_angle_rad;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x_vel_target_mps(
    const float & _arg)
  {
    this->x_vel_target_mps = _arg;
    return *this;
  }
  Type & set__y_vel_target_mps(
    const float & _arg)
  {
    this->y_vel_target_mps = _arg;
    return *this;
  }
  Type & set__yaw_rate_target_rps(
    const float & _arg)
  {
    this->yaw_rate_target_rps = _arg;
    return *this;
  }
  Type & set__vel_limit_mps(
    const float & _arg)
  {
    this->vel_limit_mps = _arg;
    return *this;
  }
  Type & set__yaw_rate_limit_rps(
    const float & _arg)
  {
    this->yaw_rate_limit_rps = _arg;
    return *this;
  }
  Type & set__wheel_vel_mps(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->wheel_vel_mps = _arg;
    return *this;
  }
  Type & set__wheel_pos_m(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->wheel_pos_m = _arg;
    return *this;
  }
  Type & set__x_accel_mps2(
    const float & _arg)
  {
    this->x_accel_mps2 = _arg;
    return *this;
  }
  Type & set__y_accel_mps2(
    const float & _arg)
  {
    this->y_accel_mps2 = _arg;
    return *this;
  }
  Type & set__yaw_accel_mps2(
    const float & _arg)
  {
    this->yaw_accel_mps2 = _arg;
    return *this;
  }
  Type & set__yaw_angle_rad(
    const float & _arg)
  {
    this->yaw_angle_rad = _arg;
    return *this;
  }
  Type & set__odom_yaw_angle_rad(
    const float & _arg)
  {
    this->odom_yaw_angle_rad = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    segway_msgs::msg::Dynamics_<ContainerAllocator> *;
  using ConstRawPtr =
    const segway_msgs::msg::Dynamics_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Dynamics_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      segway_msgs::msg::Dynamics_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__segway_msgs__msg__Dynamics
    std::shared_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__segway_msgs__msg__Dynamics
    std::shared_ptr<segway_msgs::msg::Dynamics_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Dynamics_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x_vel_target_mps != other.x_vel_target_mps) {
      return false;
    }
    if (this->y_vel_target_mps != other.y_vel_target_mps) {
      return false;
    }
    if (this->yaw_rate_target_rps != other.yaw_rate_target_rps) {
      return false;
    }
    if (this->vel_limit_mps != other.vel_limit_mps) {
      return false;
    }
    if (this->yaw_rate_limit_rps != other.yaw_rate_limit_rps) {
      return false;
    }
    if (this->wheel_vel_mps != other.wheel_vel_mps) {
      return false;
    }
    if (this->wheel_pos_m != other.wheel_pos_m) {
      return false;
    }
    if (this->x_accel_mps2 != other.x_accel_mps2) {
      return false;
    }
    if (this->y_accel_mps2 != other.y_accel_mps2) {
      return false;
    }
    if (this->yaw_accel_mps2 != other.yaw_accel_mps2) {
      return false;
    }
    if (this->yaw_angle_rad != other.yaw_angle_rad) {
      return false;
    }
    if (this->odom_yaw_angle_rad != other.odom_yaw_angle_rad) {
      return false;
    }
    return true;
  }
  bool operator!=(const Dynamics_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Dynamics_

// alias to use template instance with default allocator
using Dynamics =
  segway_msgs::msg::Dynamics_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace segway_msgs

#endif  // SEGWAY_MSGS__MSG__DETAIL__DYNAMICS__STRUCT_HPP_
