// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from my_robot_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/robot_command.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__my_robot_interfaces__msg__RobotCommand __attribute__((deprecated))
#else
# define DEPRECATED__my_robot_interfaces__msg__RobotCommand __declspec(deprecated)
#endif

namespace my_robot_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobotCommand_
{
  using Type = RobotCommand_<ContainerAllocator>;

  explicit RobotCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->direction = "";
      this->robot_name = "";
    }
  }

  explicit RobotCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : direction(_alloc),
    robot_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->direction = "";
      this->robot_name = "";
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _direction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _direction_type direction;
  using _robot_name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _robot_name_type robot_name;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__direction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__robot_name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->robot_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__my_robot_interfaces__msg__RobotCommand
    std::shared_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__my_robot_interfaces__msg__RobotCommand
    std::shared_ptr<my_robot_interfaces::msg::RobotCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobotCommand_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->robot_name != other.robot_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobotCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobotCommand_

// alias to use template instance with default allocator
using RobotCommand =
  my_robot_interfaces::msg::RobotCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace my_robot_interfaces

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__STRUCT_HPP_
