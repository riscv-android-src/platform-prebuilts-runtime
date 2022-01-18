// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/ftrace/gpu_mem.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto {
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
namespace perfetto {
namespace protos {
class GpuMemTotalFtraceEvent;
class GpuMemTotalFtraceEventDefaultTypeInternal;
extern GpuMemTotalFtraceEventDefaultTypeInternal _GpuMemTotalFtraceEvent_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::GpuMemTotalFtraceEvent* Arena::CreateMaybeMessage<::perfetto::protos::GpuMemTotalFtraceEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class GpuMemTotalFtraceEvent :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.GpuMemTotalFtraceEvent) */ {
 public:
  GpuMemTotalFtraceEvent();
  virtual ~GpuMemTotalFtraceEvent();

  GpuMemTotalFtraceEvent(const GpuMemTotalFtraceEvent& from);
  GpuMemTotalFtraceEvent(GpuMemTotalFtraceEvent&& from) noexcept
    : GpuMemTotalFtraceEvent() {
    *this = ::std::move(from);
  }

  inline GpuMemTotalFtraceEvent& operator=(const GpuMemTotalFtraceEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline GpuMemTotalFtraceEvent& operator=(GpuMemTotalFtraceEvent&& from) noexcept {
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

  static const GpuMemTotalFtraceEvent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const GpuMemTotalFtraceEvent* internal_default_instance() {
    return reinterpret_cast<const GpuMemTotalFtraceEvent*>(
               &_GpuMemTotalFtraceEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GpuMemTotalFtraceEvent& a, GpuMemTotalFtraceEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(GpuMemTotalFtraceEvent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline GpuMemTotalFtraceEvent* New() const final {
    return CreateMaybeMessage<GpuMemTotalFtraceEvent>(nullptr);
  }

  GpuMemTotalFtraceEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<GpuMemTotalFtraceEvent>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const GpuMemTotalFtraceEvent& from);
  void MergeFrom(const GpuMemTotalFtraceEvent& from);
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
  void InternalSwap(GpuMemTotalFtraceEvent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.GpuMemTotalFtraceEvent";
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
    kGpuIdFieldNumber = 1,
    kPidFieldNumber = 2,
    kSizeFieldNumber = 3,
  };
  // optional uint32 gpu_id = 1;
  bool has_gpu_id() const;
  void clear_gpu_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 gpu_id() const;
  void set_gpu_id(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint32 pid = 2;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::uint32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // optional uint64 size = 3;
  bool has_size() const;
  void clear_size();
  ::PROTOBUF_NAMESPACE_ID::uint64 size() const;
  void set_size(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.GpuMemTotalFtraceEvent)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 gpu_id_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 size_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GpuMemTotalFtraceEvent

// optional uint32 gpu_id = 1;
inline bool GpuMemTotalFtraceEvent::has_gpu_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void GpuMemTotalFtraceEvent::clear_gpu_id() {
  gpu_id_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GpuMemTotalFtraceEvent::gpu_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuMemTotalFtraceEvent.gpu_id)
  return gpu_id_;
}
inline void GpuMemTotalFtraceEvent::set_gpu_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  gpu_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuMemTotalFtraceEvent.gpu_id)
}

// optional uint32 pid = 2;
inline bool GpuMemTotalFtraceEvent::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void GpuMemTotalFtraceEvent::clear_pid() {
  pid_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 GpuMemTotalFtraceEvent::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuMemTotalFtraceEvent.pid)
  return pid_;
}
inline void GpuMemTotalFtraceEvent::set_pid(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000002u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuMemTotalFtraceEvent.pid)
}

// optional uint64 size = 3;
inline bool GpuMemTotalFtraceEvent::has_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void GpuMemTotalFtraceEvent::clear_size() {
  size_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 GpuMemTotalFtraceEvent::size() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.GpuMemTotalFtraceEvent.size)
  return size_;
}
inline void GpuMemTotalFtraceEvent::set_size(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  size_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.GpuMemTotalFtraceEvent.size)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fftrace_2fgpu_5fmem_2eproto
