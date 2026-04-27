// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from bwi_tasks_interface:msg/VirtualObstacle.idl
// generated code does not contain a copyright notice

#ifndef BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_HPP_
#define BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__bwi_tasks_interface__msg__VirtualObstacle __attribute__((deprecated))
#else
# define DEPRECATED__bwi_tasks_interface__msg__VirtualObstacle __declspec(deprecated)
#endif

namespace bwi_tasks_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct VirtualObstacle_
{
  using Type = VirtualObstacle_<ContainerAllocator>;

  explicit VirtualObstacle_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
      this->active = false;
    }
  }

  explicit VirtualObstacle_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->radius = 0.0;
      this->active = false;
    }
  }

  // field types and members
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _radius_type =
    double;
  _radius_type radius;
  using _active_type =
    bool;
  _active_type active;

  // setters for named parameter idiom
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__radius(
    const double & _arg)
  {
    this->radius = _arg;
    return *this;
  }
  Type & set__active(
    const bool & _arg)
  {
    this->active = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> *;
  using ConstRawPtr =
    const bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__bwi_tasks_interface__msg__VirtualObstacle
    std::shared_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__bwi_tasks_interface__msg__VirtualObstacle
    std::shared_ptr<bwi_tasks_interface::msg::VirtualObstacle_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const VirtualObstacle_ & other) const
  {
    if (this->poses != other.poses) {
      return false;
    }
    if (this->radius != other.radius) {
      return false;
    }
    if (this->active != other.active) {
      return false;
    }
    return true;
  }
  bool operator!=(const VirtualObstacle_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct VirtualObstacle_

// alias to use template instance with default allocator
using VirtualObstacle =
  bwi_tasks_interface::msg::VirtualObstacle_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace bwi_tasks_interface

#endif  // BWI_TASKS_INTERFACE__MSG__DETAIL__VIRTUAL_OBSTACLE__STRUCT_HPP_
