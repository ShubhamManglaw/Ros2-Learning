// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/RobotCommand.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/robot_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__RobotCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xdc, 0xf4, 0x09, 0xc4, 0x4e, 0x3a, 0xa3, 0x89,
      0xca, 0x50, 0xa1, 0x58, 0xa4, 0xc2, 0x49, 0x87,
      0xc3, 0xeb, 0x63, 0x4f, 0xc7, 0x97, 0xeb, 0x0b,
      0x1f, 0x13, 0x70, 0x38, 0x01, 0xb3, 0x7b, 0x69,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__RobotCommand__TYPE_NAME[] = "my_robot_interfaces/msg/RobotCommand";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__RobotCommand__FIELD_NAME__speed[] = "speed";
static char my_robot_interfaces__msg__RobotCommand__FIELD_NAME__direction[] = "direction";
static char my_robot_interfaces__msg__RobotCommand__FIELD_NAME__robot_name[] = "robot_name";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__RobotCommand__FIELDS[] = {
  {
    {my_robot_interfaces__msg__RobotCommand__FIELD_NAME__speed, 5, 5},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__RobotCommand__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {my_robot_interfaces__msg__RobotCommand__FIELD_NAME__robot_name, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__RobotCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__RobotCommand__TYPE_NAME, 36, 36},
      {my_robot_interfaces__msg__RobotCommand__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 speed\n"
  "string direction\n"
  "string robot_name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__RobotCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__RobotCommand__TYPE_NAME, 36, 36},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 48, 48},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__RobotCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__RobotCommand__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
