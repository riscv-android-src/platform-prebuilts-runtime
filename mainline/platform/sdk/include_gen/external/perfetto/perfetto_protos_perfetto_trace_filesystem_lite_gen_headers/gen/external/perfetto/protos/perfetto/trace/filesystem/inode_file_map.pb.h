// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/filesystem/inode_file_map.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto {
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
class InodeFileMap;
class InodeFileMapDefaultTypeInternal;
extern InodeFileMapDefaultTypeInternal _InodeFileMap_default_instance_;
class InodeFileMap_Entry;
class InodeFileMap_EntryDefaultTypeInternal;
extern InodeFileMap_EntryDefaultTypeInternal _InodeFileMap_Entry_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::InodeFileMap* Arena::CreateMaybeMessage<::perfetto::protos::InodeFileMap>(Arena*);
template<> ::perfetto::protos::InodeFileMap_Entry* Arena::CreateMaybeMessage<::perfetto::protos::InodeFileMap_Entry>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum InodeFileMap_Entry_Type : int {
  InodeFileMap_Entry_Type_UNKNOWN = 0,
  InodeFileMap_Entry_Type_FILE = 1,
  InodeFileMap_Entry_Type_DIRECTORY = 2
};
bool InodeFileMap_Entry_Type_IsValid(int value);
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry_Type_Type_MIN = InodeFileMap_Entry_Type_UNKNOWN;
constexpr InodeFileMap_Entry_Type InodeFileMap_Entry_Type_Type_MAX = InodeFileMap_Entry_Type_DIRECTORY;
constexpr int InodeFileMap_Entry_Type_Type_ARRAYSIZE = InodeFileMap_Entry_Type_Type_MAX + 1;

const std::string& InodeFileMap_Entry_Type_Name(InodeFileMap_Entry_Type value);
template<typename T>
inline const std::string& InodeFileMap_Entry_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, InodeFileMap_Entry_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function InodeFileMap_Entry_Type_Name.");
  return InodeFileMap_Entry_Type_Name(static_cast<InodeFileMap_Entry_Type>(enum_t_value));
}
bool InodeFileMap_Entry_Type_Parse(
    const std::string& name, InodeFileMap_Entry_Type* value);
// ===================================================================

class InodeFileMap_Entry :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InodeFileMap.Entry) */ {
 public:
  InodeFileMap_Entry();
  virtual ~InodeFileMap_Entry();

  InodeFileMap_Entry(const InodeFileMap_Entry& from);
  InodeFileMap_Entry(InodeFileMap_Entry&& from) noexcept
    : InodeFileMap_Entry() {
    *this = ::std::move(from);
  }

  inline InodeFileMap_Entry& operator=(const InodeFileMap_Entry& from) {
    CopyFrom(from);
    return *this;
  }
  inline InodeFileMap_Entry& operator=(InodeFileMap_Entry&& from) noexcept {
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

  static const InodeFileMap_Entry& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InodeFileMap_Entry* internal_default_instance() {
    return reinterpret_cast<const InodeFileMap_Entry*>(
               &_InodeFileMap_Entry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(InodeFileMap_Entry& a, InodeFileMap_Entry& b) {
    a.Swap(&b);
  }
  inline void Swap(InodeFileMap_Entry* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InodeFileMap_Entry* New() const final {
    return CreateMaybeMessage<InodeFileMap_Entry>(nullptr);
  }

  InodeFileMap_Entry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InodeFileMap_Entry>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const InodeFileMap_Entry& from);
  void MergeFrom(const InodeFileMap_Entry& from);
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
  void InternalSwap(InodeFileMap_Entry* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.InodeFileMap.Entry";
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

  typedef InodeFileMap_Entry_Type Type;
  static constexpr Type UNKNOWN =
    InodeFileMap_Entry_Type_UNKNOWN;
  static constexpr Type FILE =
    InodeFileMap_Entry_Type_FILE;
  static constexpr Type DIRECTORY =
    InodeFileMap_Entry_Type_DIRECTORY;
  static inline bool Type_IsValid(int value) {
    return InodeFileMap_Entry_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    InodeFileMap_Entry_Type_Type_MIN;
  static constexpr Type Type_MAX =
    InodeFileMap_Entry_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    InodeFileMap_Entry_Type_Type_ARRAYSIZE;
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return InodeFileMap_Entry_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(const std::string& name,
      Type* value) {
    return InodeFileMap_Entry_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kPathsFieldNumber = 2,
    kInodeNumberFieldNumber = 1,
    kTypeFieldNumber = 3,
  };
  // repeated string paths = 2;
  int paths_size() const;
  void clear_paths();
  const std::string& paths(int index) const;
  std::string* mutable_paths(int index);
  void set_paths(int index, const std::string& value);
  void set_paths(int index, std::string&& value);
  void set_paths(int index, const char* value);
  void set_paths(int index, const char* value, size_t size);
  std::string* add_paths();
  void add_paths(const std::string& value);
  void add_paths(std::string&& value);
  void add_paths(const char* value);
  void add_paths(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& paths() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_paths();

  // optional uint64 inode_number = 1;
  bool has_inode_number() const;
  void clear_inode_number();
  ::PROTOBUF_NAMESPACE_ID::uint64 inode_number() const;
  void set_inode_number(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // optional .perfetto.protos.InodeFileMap.Entry.Type type = 3;
  bool has_type() const;
  void clear_type();
  ::perfetto::protos::InodeFileMap_Entry_Type type() const;
  void set_type(::perfetto::protos::InodeFileMap_Entry_Type value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.InodeFileMap.Entry)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> paths_;
  ::PROTOBUF_NAMESPACE_ID::uint64 inode_number_;
  int type_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto;
};
// -------------------------------------------------------------------

class InodeFileMap :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.InodeFileMap) */ {
 public:
  InodeFileMap();
  virtual ~InodeFileMap();

  InodeFileMap(const InodeFileMap& from);
  InodeFileMap(InodeFileMap&& from) noexcept
    : InodeFileMap() {
    *this = ::std::move(from);
  }

  inline InodeFileMap& operator=(const InodeFileMap& from) {
    CopyFrom(from);
    return *this;
  }
  inline InodeFileMap& operator=(InodeFileMap&& from) noexcept {
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

  static const InodeFileMap& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const InodeFileMap* internal_default_instance() {
    return reinterpret_cast<const InodeFileMap*>(
               &_InodeFileMap_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(InodeFileMap& a, InodeFileMap& b) {
    a.Swap(&b);
  }
  inline void Swap(InodeFileMap* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline InodeFileMap* New() const final {
    return CreateMaybeMessage<InodeFileMap>(nullptr);
  }

  InodeFileMap* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<InodeFileMap>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const InodeFileMap& from);
  void MergeFrom(const InodeFileMap& from);
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
  void InternalSwap(InodeFileMap* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.InodeFileMap";
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

  typedef InodeFileMap_Entry Entry;

  // accessors -------------------------------------------------------

  enum : int {
    kMountPointsFieldNumber = 2,
    kEntriesFieldNumber = 3,
    kBlockDeviceIdFieldNumber = 1,
  };
  // repeated string mount_points = 2;
  int mount_points_size() const;
  void clear_mount_points();
  const std::string& mount_points(int index) const;
  std::string* mutable_mount_points(int index);
  void set_mount_points(int index, const std::string& value);
  void set_mount_points(int index, std::string&& value);
  void set_mount_points(int index, const char* value);
  void set_mount_points(int index, const char* value, size_t size);
  std::string* add_mount_points();
  void add_mount_points(const std::string& value);
  void add_mount_points(std::string&& value);
  void add_mount_points(const char* value);
  void add_mount_points(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& mount_points() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_mount_points();

  // repeated .perfetto.protos.InodeFileMap.Entry entries = 3;
  int entries_size() const;
  void clear_entries();
  ::perfetto::protos::InodeFileMap_Entry* mutable_entries(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::InodeFileMap_Entry >*
      mutable_entries();
  const ::perfetto::protos::InodeFileMap_Entry& entries(int index) const;
  ::perfetto::protos::InodeFileMap_Entry* add_entries();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::InodeFileMap_Entry >&
      entries() const;

  // optional uint64 block_device_id = 1;
  bool has_block_device_id() const;
  void clear_block_device_id();
  ::PROTOBUF_NAMESPACE_ID::uint64 block_device_id() const;
  void set_block_device_id(::PROTOBUF_NAMESPACE_ID::uint64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.InodeFileMap)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> mount_points_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::InodeFileMap_Entry > entries_;
  ::PROTOBUF_NAMESPACE_ID::uint64 block_device_id_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// InodeFileMap_Entry

// optional uint64 inode_number = 1;
inline bool InodeFileMap_Entry::has_inode_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InodeFileMap_Entry::clear_inode_number() {
  inode_number_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 InodeFileMap_Entry::inode_number() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.Entry.inode_number)
  return inode_number_;
}
inline void InodeFileMap_Entry::set_inode_number(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  inode_number_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.Entry.inode_number)
}

// repeated string paths = 2;
inline int InodeFileMap_Entry::paths_size() const {
  return paths_.size();
}
inline void InodeFileMap_Entry::clear_paths() {
  paths_.Clear();
}
inline const std::string& InodeFileMap_Entry::paths(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.Entry.paths)
  return paths_.Get(index);
}
inline std::string* InodeFileMap_Entry::mutable_paths(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileMap.Entry.paths)
  return paths_.Mutable(index);
}
inline void InodeFileMap_Entry::set_paths(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.Entry.paths)
  paths_.Mutable(index)->assign(value);
}
inline void InodeFileMap_Entry::set_paths(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.Entry.paths)
  paths_.Mutable(index)->assign(std::move(value));
}
inline void InodeFileMap_Entry::set_paths(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.InodeFileMap.Entry.paths)
}
inline void InodeFileMap_Entry::set_paths(int index, const char* value, size_t size) {
  paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.InodeFileMap.Entry.paths)
}
inline std::string* InodeFileMap_Entry::add_paths() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.InodeFileMap.Entry.paths)
  return paths_.Add();
}
inline void InodeFileMap_Entry::add_paths(const std::string& value) {
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileMap.Entry.paths)
}
inline void InodeFileMap_Entry::add_paths(std::string&& value) {
  paths_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileMap.Entry.paths)
}
inline void InodeFileMap_Entry::add_paths(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.InodeFileMap.Entry.paths)
}
inline void InodeFileMap_Entry::add_paths(const char* value, size_t size) {
  paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.InodeFileMap.Entry.paths)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
InodeFileMap_Entry::paths() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileMap.Entry.paths)
  return paths_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
InodeFileMap_Entry::mutable_paths() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileMap.Entry.paths)
  return &paths_;
}

// optional .perfetto.protos.InodeFileMap.Entry.Type type = 3;
inline bool InodeFileMap_Entry::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void InodeFileMap_Entry::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::perfetto::protos::InodeFileMap_Entry_Type InodeFileMap_Entry::type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.Entry.type)
  return static_cast< ::perfetto::protos::InodeFileMap_Entry_Type >(type_);
}
inline void InodeFileMap_Entry::set_type(::perfetto::protos::InodeFileMap_Entry_Type value) {
  assert(::perfetto::protos::InodeFileMap_Entry_Type_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  type_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.Entry.type)
}

// -------------------------------------------------------------------

// InodeFileMap

// optional uint64 block_device_id = 1;
inline bool InodeFileMap::has_block_device_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void InodeFileMap::clear_block_device_id() {
  block_device_id_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 InodeFileMap::block_device_id() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.block_device_id)
  return block_device_id_;
}
inline void InodeFileMap::set_block_device_id(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000001u;
  block_device_id_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.block_device_id)
}

// repeated string mount_points = 2;
inline int InodeFileMap::mount_points_size() const {
  return mount_points_.size();
}
inline void InodeFileMap::clear_mount_points() {
  mount_points_.Clear();
}
inline const std::string& InodeFileMap::mount_points(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.mount_points)
  return mount_points_.Get(index);
}
inline std::string* InodeFileMap::mutable_mount_points(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileMap.mount_points)
  return mount_points_.Mutable(index);
}
inline void InodeFileMap::set_mount_points(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.mount_points)
  mount_points_.Mutable(index)->assign(value);
}
inline void InodeFileMap::set_mount_points(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.InodeFileMap.mount_points)
  mount_points_.Mutable(index)->assign(std::move(value));
}
inline void InodeFileMap::set_mount_points(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  mount_points_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.InodeFileMap.mount_points)
}
inline void InodeFileMap::set_mount_points(int index, const char* value, size_t size) {
  mount_points_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.InodeFileMap.mount_points)
}
inline std::string* InodeFileMap::add_mount_points() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.InodeFileMap.mount_points)
  return mount_points_.Add();
}
inline void InodeFileMap::add_mount_points(const std::string& value) {
  mount_points_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileMap.mount_points)
}
inline void InodeFileMap::add_mount_points(std::string&& value) {
  mount_points_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileMap.mount_points)
}
inline void InodeFileMap::add_mount_points(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  mount_points_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.InodeFileMap.mount_points)
}
inline void InodeFileMap::add_mount_points(const char* value, size_t size) {
  mount_points_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.InodeFileMap.mount_points)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
InodeFileMap::mount_points() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileMap.mount_points)
  return mount_points_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
InodeFileMap::mutable_mount_points() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileMap.mount_points)
  return &mount_points_;
}

// repeated .perfetto.protos.InodeFileMap.Entry entries = 3;
inline int InodeFileMap::entries_size() const {
  return entries_.size();
}
inline void InodeFileMap::clear_entries() {
  entries_.Clear();
}
inline ::perfetto::protos::InodeFileMap_Entry* InodeFileMap::mutable_entries(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.InodeFileMap.entries)
  return entries_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::InodeFileMap_Entry >*
InodeFileMap::mutable_entries() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.InodeFileMap.entries)
  return &entries_;
}
inline const ::perfetto::protos::InodeFileMap_Entry& InodeFileMap::entries(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.InodeFileMap.entries)
  return entries_.Get(index);
}
inline ::perfetto::protos::InodeFileMap_Entry* InodeFileMap::add_entries() {
  // @@protoc_insertion_point(field_add:perfetto.protos.InodeFileMap.entries)
  return entries_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::perfetto::protos::InodeFileMap_Entry >&
InodeFileMap::entries() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.InodeFileMap.entries)
  return entries_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::InodeFileMap_Entry_Type> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ffilesystem_2finode_5ffile_5fmap_2eproto
