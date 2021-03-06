// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/oom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class MarkVictimFtraceEvent;
class MarkVictimFtraceEventDefaultTypeInternal;
extern MarkVictimFtraceEventDefaultTypeInternal _MarkVictimFtraceEvent_default_instance_;
class OomScoreAdjUpdateFtraceEvent;
class OomScoreAdjUpdateFtraceEventDefaultTypeInternal;
extern OomScoreAdjUpdateFtraceEventDefaultTypeInternal _OomScoreAdjUpdateFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::MarkVictimFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::MarkVictimFtraceEvent>(Arena*);
template<> ::perfetto::protos::OomScoreAdjUpdateFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::OomScoreAdjUpdateFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class OomScoreAdjUpdateFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.OomScoreAdjUpdateFtraceEvent) */ {
 public:
  OomScoreAdjUpdateFtraceEvent();
  virtual ~OomScoreAdjUpdateFtraceEvent();

  OomScoreAdjUpdateFtraceEvent(const OomScoreAdjUpdateFtraceEvent& from);
  OomScoreAdjUpdateFtraceEvent(OomScoreAdjUpdateFtraceEvent&& from) noexcept
    : OomScoreAdjUpdateFtraceEvent() {
    *this = ::std::move(from);
  }

  inline OomScoreAdjUpdateFtraceEvent& operator=(const OomScoreAdjUpdateFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline OomScoreAdjUpdateFtraceEvent& operator=(OomScoreAdjUpdateFtraceEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const OomScoreAdjUpdateFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const OomScoreAdjUpdateFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const OomScoreAdjUpdateFtraceEvent*>(
               &_OomScoreAdjUpdateFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(OomScoreAdjUpdateFtraceEvent& a, OomScoreAdjUpdateFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(OomScoreAdjUpdateFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline OomScoreAdjUpdateFtraceEvent* New() const final {
    return CreateMaybeMessage<OomScoreAdjUpdateFtraceEvent>(nullptr);
  }

  OomScoreAdjUpdateFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<OomScoreAdjUpdateFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const OomScoreAdjUpdateFtraceEvent& from);
  void MergeFrom(const OomScoreAdjUpdateFtraceEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(OomScoreAdjUpdateFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.OomScoreAdjUpdateFtraceEvent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommFieldNumber = 1,
    kOomScoreAdjFieldNumber = 2,
    kPidFieldNumber = 3,
  };
  // optional string comm = 1;
  bool has_comm() const;
  void clear_comm();
  const std::string& comm() const;
  void set_comm(const std::string& value);
  void set_comm(std::string&& value);
  void set_comm(const char* value);
  void set_comm(const char* value, size_t size);
  std::string* mutable_comm();
  std::string* release_comm();
  void set_allocated_comm(std::string* comm);

  // optional int32 oom_score_adj = 2;
  bool has_oom_score_adj() const;
  void clear_oom_score_adj();
  ::PROTOBUF_NAMESPACE_ID::int32 oom_score_adj() const;
  void set_oom_score_adj(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 pid = 3;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.OomScoreAdjUpdateFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr comm_;
  ::PROTOBUF_NAMESPACE_ID::int32 oom_score_adj_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto;
};
// -------------------------------------------------------------------

class MarkVictimFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.MarkVictimFtraceEvent) */ {
 public:
  MarkVictimFtraceEvent();
  virtual ~MarkVictimFtraceEvent();

  MarkVictimFtraceEvent(const MarkVictimFtraceEvent& from);
  MarkVictimFtraceEvent(MarkVictimFtraceEvent&& from) noexcept
    : MarkVictimFtraceEvent() {
    *this = ::std::move(from);
  }

  inline MarkVictimFtraceEvent& operator=(const MarkVictimFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline MarkVictimFtraceEvent& operator=(MarkVictimFtraceEvent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const MarkVictimFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const MarkVictimFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const MarkVictimFtraceEvent*>(
               &_MarkVictimFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(MarkVictimFtraceEvent& a, MarkVictimFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(MarkVictimFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline MarkVictimFtraceEvent* New() const final {
    return CreateMaybeMessage<MarkVictimFtraceEvent>(nullptr);
  }

  MarkVictimFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<MarkVictimFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const MarkVictimFtraceEvent& from);
  void MergeFrom(const MarkVictimFtraceEvent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MarkVictimFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.MarkVictimFtraceEvent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPidFieldNumber = 1,
  };
  // optional int32 pid = 1;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.MarkVictimFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// OomScoreAdjUpdateFtraceEvent

// optional string comm = 1;
inline bool OomScoreAdjUpdateFtraceEvent::has_comm() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void OomScoreAdjUpdateFtraceEvent::clear_comm() {
  comm_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& OomScoreAdjUpdateFtraceEvent::comm() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
  return comm_.GetNoArena();
}
inline void OomScoreAdjUpdateFtraceEvent::set_comm(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
}
inline void OomScoreAdjUpdateFtraceEvent::set_comm(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
}
inline void OomScoreAdjUpdateFtraceEvent::set_comm(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
}
inline void OomScoreAdjUpdateFtraceEvent::set_comm(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  comm_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
}
inline std::string* OomScoreAdjUpdateFtraceEvent::mutable_comm() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
  return comm_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* OomScoreAdjUpdateFtraceEvent::release_comm() {
  // @@protoc_insertion_point(field_release:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
  if (!has_comm()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return comm_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void OomScoreAdjUpdateFtraceEvent::set_allocated_comm(std::string* comm) {
  if (comm != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  comm_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), comm);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.OomScoreAdjUpdateFtraceEvent.comm)
}

// optional int32 oom_score_adj = 2;
inline bool OomScoreAdjUpdateFtraceEvent::has_oom_score_adj() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void OomScoreAdjUpdateFtraceEvent::clear_oom_score_adj() {
  oom_score_adj_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OomScoreAdjUpdateFtraceEvent::oom_score_adj() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.OomScoreAdjUpdateFtraceEvent.oom_score_adj)
  return oom_score_adj_;
}
inline void OomScoreAdjUpdateFtraceEvent::set_oom_score_adj(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  oom_score_adj_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.OomScoreAdjUpdateFtraceEvent.oom_score_adj)
}

// optional int32 pid = 3;
inline bool OomScoreAdjUpdateFtraceEvent::has_pid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void OomScoreAdjUpdateFtraceEvent::clear_pid() {
  pid_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 OomScoreAdjUpdateFtraceEvent::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.OomScoreAdjUpdateFtraceEvent.pid)
  return pid_;
}
inline void OomScoreAdjUpdateFtraceEvent::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.OomScoreAdjUpdateFtraceEvent.pid)
}

// -------------------------------------------------------------------

// MarkVictimFtraceEvent

// optional int32 pid = 1;
inline bool MarkVictimFtraceEvent::has_pid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MarkVictimFtraceEvent::clear_pid() {
  pid_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 MarkVictimFtraceEvent::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.MarkVictimFtraceEvent.pid)
  return pid_;
}
inline void MarkVictimFtraceEvent::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.MarkVictimFtraceEvent.pid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2foom_2eproto
