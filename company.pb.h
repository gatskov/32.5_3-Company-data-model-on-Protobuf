// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_company_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_company_2eproto

#include <limits>
#include <string>

//#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_company_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_company_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_company_2eproto;
class Company;
struct CompanyDefaultTypeInternal;
extern CompanyDefaultTypeInternal _Company_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Company* Arena::CreateMaybeMessage<::Company>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Company final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Company) */ {
 public:
  inline Company() : Company(nullptr) {}
  ~Company() override;
  explicit constexpr Company(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Company(const Company& from);
  Company(Company&& from) noexcept
    : Company() {
    *this = ::std::move(from);
  }

  inline Company& operator=(const Company& from) {
    CopyFrom(from);
    return *this;
  }
  inline Company& operator=(Company&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Company& default_instance() {
    return *internal_default_instance();
  }
  static inline const Company* internal_default_instance() {
    return reinterpret_cast<const Company*>(
               &_Company_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Company& a, Company& b) {
    a.Swap(&b);
  }
  inline void Swap(Company* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Company* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Company* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Company>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Company& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Company& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Company* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Company";
  }
  protected:
  explicit Company(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kAddressFieldNumber = 2,
    kOccupationFieldNumber = 4,
    kYearFieldNumber = 3,
    kHasForeignEconomicActivityFieldNumber = 5,
  };
  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required string address = 2;
  bool has_address() const;
  private:
  bool _internal_has_address() const;
  public:
  void clear_address();
  const std::string& address() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_address(ArgT0&& arg0, ArgT... args);
  std::string* mutable_address();
  PROTOBUF_NODISCARD std::string* release_address();
  void set_allocated_address(std::string* address);
  private:
  const std::string& _internal_address() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_address(const std::string& value);
  std::string* _internal_mutable_address();
  public:

  // optional string occupation = 4;
  bool has_occupation() const;
  private:
  bool _internal_has_occupation() const;
  public:
  void clear_occupation();
  const std::string& occupation() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_occupation(ArgT0&& arg0, ArgT... args);
  std::string* mutable_occupation();
  PROTOBUF_NODISCARD std::string* release_occupation();
  void set_allocated_occupation(std::string* occupation);
  private:
  const std::string& _internal_occupation() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_occupation(const std::string& value);
  std::string* _internal_mutable_occupation();
  public:

  // required int32 year = 3;
  bool has_year() const;
  private:
  bool _internal_has_year() const;
  public:
  void clear_year();
  int32_t year() const;
  void set_year(int32_t value);
  private:
  int32_t _internal_year() const;
  void _internal_set_year(int32_t value);
  public:

  // optional bool hasForeignEconomicActivity = 5;
  bool has_hasforeigneconomicactivity() const;
  private:
  bool _internal_has_hasforeigneconomicactivity() const;
  public:
  void clear_hasforeigneconomicactivity();
  bool hasforeigneconomicactivity() const;
  void set_hasforeigneconomicactivity(bool value);
  private:
  bool _internal_hasforeigneconomicactivity() const;
  void _internal_set_hasforeigneconomicactivity(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Company)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr address_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr occupation_;
  int32_t year_;
  bool hasforeigneconomicactivity_;
  friend struct ::TableStruct_company_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Company

// required string name = 1;
inline bool Company::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Company::has_name() const {
  return _internal_has_name();
}
inline void Company::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Company::name() const {
  // @@protoc_insertion_point(field_get:Company.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Company::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Company.name)
}
inline std::string* Company::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Company.name)
  return _s;
}
inline const std::string& Company::_internal_name() const {
  return name_.Get();
}
inline void Company::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Company::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Company::release_name() {
  // @@protoc_insertion_point(field_release:Company.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = name_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Company::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.name)
}

// required string address = 2;
inline bool Company::_internal_has_address() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Company::has_address() const {
  return _internal_has_address();
}
inline void Company::clear_address() {
  address_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Company::address() const {
  // @@protoc_insertion_point(field_get:Company.address)
  return _internal_address();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Company::set_address(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Company.address)
}
inline std::string* Company::mutable_address() {
  std::string* _s = _internal_mutable_address();
  // @@protoc_insertion_point(field_mutable:Company.address)
  return _s;
}
inline const std::string& Company::_internal_address() const {
  return address_.Get();
}
inline void Company::_internal_set_address(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Company::_internal_mutable_address() {
  _has_bits_[0] |= 0x00000002u;
  return address_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Company::release_address() {
  // @@protoc_insertion_point(field_release:Company.address)
  if (!_internal_has_address()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = address_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (address_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Company::set_allocated_address(std::string* address) {
  if (address != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  address_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), address,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (address_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.address)
}

// required int32 year = 3;
inline bool Company::_internal_has_year() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Company::has_year() const {
  return _internal_has_year();
}
inline void Company::clear_year() {
  year_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline int32_t Company::_internal_year() const {
  return year_;
}
inline int32_t Company::year() const {
  // @@protoc_insertion_point(field_get:Company.year)
  return _internal_year();
}
inline void Company::_internal_set_year(int32_t value) {
  _has_bits_[0] |= 0x00000008u;
  year_ = value;
}
inline void Company::set_year(int32_t value) {
  _internal_set_year(value);
  // @@protoc_insertion_point(field_set:Company.year)
}

// optional string occupation = 4;
inline bool Company::_internal_has_occupation() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Company::has_occupation() const {
  return _internal_has_occupation();
}
inline void Company::clear_occupation() {
  occupation_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Company::occupation() const {
  // @@protoc_insertion_point(field_get:Company.occupation)
  return _internal_occupation();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Company::set_occupation(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 occupation_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Company.occupation)
}
inline std::string* Company::mutable_occupation() {
  std::string* _s = _internal_mutable_occupation();
  // @@protoc_insertion_point(field_mutable:Company.occupation)
  return _s;
}
inline const std::string& Company::_internal_occupation() const {
  return occupation_.Get();
}
inline void Company::_internal_set_occupation(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  occupation_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Company::_internal_mutable_occupation() {
  _has_bits_[0] |= 0x00000004u;
  return occupation_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Company::release_occupation() {
  // @@protoc_insertion_point(field_release:Company.occupation)
  if (!_internal_has_occupation()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  auto* p = occupation_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (occupation_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    occupation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Company::set_allocated_occupation(std::string* occupation) {
  if (occupation != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  occupation_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), occupation,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (occupation_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    occupation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Company.occupation)
}

// optional bool hasForeignEconomicActivity = 5;
inline bool Company::_internal_has_hasforeigneconomicactivity() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool Company::has_hasforeigneconomicactivity() const {
  return _internal_has_hasforeigneconomicactivity();
}
inline void Company::clear_hasforeigneconomicactivity() {
  hasforeigneconomicactivity_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool Company::_internal_hasforeigneconomicactivity() const {
  return hasforeigneconomicactivity_;
}
inline bool Company::hasforeigneconomicactivity() const {
  // @@protoc_insertion_point(field_get:Company.hasForeignEconomicActivity)
  return _internal_hasforeigneconomicactivity();
}
inline void Company::_internal_set_hasforeigneconomicactivity(bool value) {
  _has_bits_[0] |= 0x00000010u;
  hasforeigneconomicactivity_ = value;
}
inline void Company::set_hasforeigneconomicactivity(bool value) {
  _internal_set_hasforeigneconomicactivity(value);
  // @@protoc_insertion_point(field_set:Company.hasForeignEconomicActivity)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_company_2eproto
