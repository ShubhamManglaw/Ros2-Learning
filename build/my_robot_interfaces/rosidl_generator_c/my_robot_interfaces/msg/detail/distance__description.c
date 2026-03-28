// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from my_robot_interfaces:msg/Distance.idl
// generated code does not contain a copyright notice

#include "my_robot_interfaces/msg/detail/distance__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_my_robot_interfaces
const rosidl_type_hash_t *
my_robot_interfaces__msg__Distance__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x9d, 0xe7, 0x38, 0x6e, 0xde, 0x18, 0x8a,
      0x27, 0x46, 0x46, 0xc2, 0x61, 0xe5, 0x87, 0x41,
      0xf0, 0x34, 0xee, 0x40, 0x3f, 0xda, 0x1a, 0xe9,
      0x86, 0x4d, 0xb8, 0x6d, 0xe6, 0xa5, 0x52, 0x4a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char my_robot_interfaces__msg__Distance__TYPE_NAME[] = "my_robot_interfaces/msg/Distance";

// Define type names, field names, and default values
static char my_robot_interfaces__msg__Distance__FIELD_NAME__distance[] = "distance";

static rosidl_runtime_c__type_description__Field my_robot_interfaces__msg__Distance__FIELDS[] = {
  {
    {my_robot_interfaces__msg__Distance__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
my_robot_interfaces__msg__Distance__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {my_robot_interfaces__msg__Distance__TYPE_NAME, 32, 32},
      {my_robot_interfaces__msg__Distance__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 distance";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
my_robot_interfaces__msg__Distance__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {my_robot_interfaces__msg__Distance__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 17, 17},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
my_robot_interfaces__msg__Distance__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *my_robot_interfaces__msg__Distance__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
