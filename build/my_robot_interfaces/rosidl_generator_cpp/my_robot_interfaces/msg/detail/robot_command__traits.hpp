// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_robot_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "my_robot_interfaces/msg/robot_command.hpp"


#ifndef MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
#define MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "my_robot_interfaces/msg/detail/robot_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace my_robot_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction: ";
    rosidl_generator_traits::value_to_yaml(msg.direction, out);
    out << "\n";
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace my_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use my_robot_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const my_robot_interfaces::msg::RobotCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  my_robot_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use my_robot_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const my_robot_interfaces::msg::RobotCommand & msg)
{
  return my_robot_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<my_robot_interfaces::msg::RobotCommand>()
{
  return "my_robot_interfaces::msg::RobotCommand";
}

template<>
inline const char * name<my_robot_interfaces::msg::RobotCommand>()
{
  return "my_robot_interfaces/msg/RobotCommand";
}

template<>
struct has_fixed_size<my_robot_interfaces::msg::RobotCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_robot_interfaces::msg::RobotCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_robot_interfaces::msg::RobotCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_ROBOT_INTERFACES__MSG__DETAIL__ROBOT_COMMAND__TRAITS_HPP_
