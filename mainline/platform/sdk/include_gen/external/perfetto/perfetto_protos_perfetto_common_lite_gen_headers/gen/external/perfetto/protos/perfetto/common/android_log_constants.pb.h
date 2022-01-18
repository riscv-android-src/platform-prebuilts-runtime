// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/common/android_log_constants.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5flog_5fconstants_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5flog_5fconstants_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2fcommon_2fandroid_5flog_5fconstants_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2fcommon_2fandroid_5flog_5fconstants_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum AndroidLogId : int {
  LID_DEFAULT = 0,
  LID_RADIO = 1,
  LID_EVENTS = 2,
  LID_SYSTEM = 3,
  LID_CRASH = 4,
  LID_STATS = 5,
  LID_SECURITY = 6,
  LID_KERNEL = 7
};
bool AndroidLogId_IsValid(int value);
constexpr AndroidLogId AndroidLogId_MIN = LID_DEFAULT;
constexpr AndroidLogId AndroidLogId_MAX = LID_KERNEL;
constexpr int AndroidLogId_ARRAYSIZE = AndroidLogId_MAX + 1;

const std::string& AndroidLogId_Name(AndroidLogId value);
template<typename T>
inline const std::string& AndroidLogId_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AndroidLogId>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AndroidLogId_Name.");
  return AndroidLogId_Name(static_cast<AndroidLogId>(enum_t_value));
}
bool AndroidLogId_Parse(
    const std::string& name, AndroidLogId* value);
enum AndroidLogPriority : int {
  PRIO_UNSPECIFIED = 0,
  PRIO_UNUSED = 1,
  PRIO_VERBOSE = 2,
  PRIO_DEBUG = 3,
  PRIO_INFO = 4,
  PRIO_WARN = 5,
  PRIO_ERROR = 6,
  PRIO_FATAL = 7
};
bool AndroidLogPriority_IsValid(int value);
constexpr AndroidLogPriority AndroidLogPriority_MIN = PRIO_UNSPECIFIED;
constexpr AndroidLogPriority AndroidLogPriority_MAX = PRIO_FATAL;
constexpr int AndroidLogPriority_ARRAYSIZE = AndroidLogPriority_MAX + 1;

const std::string& AndroidLogPriority_Name(AndroidLogPriority value);
template<typename T>
inline const std::string& AndroidLogPriority_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AndroidLogPriority>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AndroidLogPriority_Name.");
  return AndroidLogPriority_Name(static_cast<AndroidLogPriority>(enum_t_value));
}
bool AndroidLogPriority_Parse(
    const std::string& name, AndroidLogPriority* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::AndroidLogId> : ::std::true_type {};
template <> struct is_proto_enum< ::perfetto::protos::AndroidLogPriority> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2fcommon_2fandroid_5flog_5fconstants_2eproto
