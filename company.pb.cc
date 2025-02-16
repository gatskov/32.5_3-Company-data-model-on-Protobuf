// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: company.proto

#include "company.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
constexpr Company::Company(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : name_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , address_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , occupation_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , year_(0)
  , hasforeigneconomicactivity_(false){}
struct CompanyDefaultTypeInternal {
  constexpr CompanyDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CompanyDefaultTypeInternal() {}
  union {
    Company _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CompanyDefaultTypeInternal _Company_default_instance_;
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_company_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_company_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_company_2eproto = nullptr;

const uint32_t TableStruct_company_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Company, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::Company, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Company, name_),
  PROTOBUF_FIELD_OFFSET(::Company, address_),
  PROTOBUF_FIELD_OFFSET(::Company, year_),
  PROTOBUF_FIELD_OFFSET(::Company, occupation_),
  PROTOBUF_FIELD_OFFSET(::Company, hasforeigneconomicactivity_),
  0,
  1,
  3,
  2,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::Company)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_Company_default_instance_),
};

const char descriptor_table_protodef_company_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rcompany.proto\"n\n\007Company\022\014\n\004name\030\001 \002(\t"
  "\022\017\n\007address\030\002 \002(\t\022\014\n\004year\030\003 \002(\005\022\022\n\noccup"
  "ation\030\004 \001(\t\022\"\n\032hasForeignEconomicActivit"
  "y\030\005 \001(\010"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_company_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_company_2eproto = {
  false, false, 127, descriptor_table_protodef_company_2eproto, "company.proto",
  &descriptor_table_company_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_company_2eproto::offsets,
  file_level_metadata_company_2eproto, file_level_enum_descriptors_company_2eproto, file_level_service_descriptors_company_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_company_2eproto_getter() {
  return &descriptor_table_company_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_company_2eproto(&descriptor_table_company_2eproto);

// ===================================================================

class Company::_Internal {
 public:
  using HasBits = decltype(std::declval<Company>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_address(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_year(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_occupation(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_hasforeigneconomicactivity(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000b) ^ 0x0000000b) != 0;
  }
};

Company::Company(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Company)
}
Company::Company(const Company& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_name(),
      GetArenaForAllocation());
  }
  address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_address()) {
    address_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_address(),
      GetArenaForAllocation());
  }
  occupation_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    occupation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_occupation()) {
    occupation_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_occupation(),
      GetArenaForAllocation());
  }
  ::memcpy(&year_, &from.year_,
    static_cast<size_t>(reinterpret_cast<char*>(&hasforeigneconomicactivity_) -
    reinterpret_cast<char*>(&year_)) + sizeof(hasforeigneconomicactivity_));
  // @@protoc_insertion_point(copy_constructor:Company)
}

inline void Company::SharedCtor() {
name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
address_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  address_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
occupation_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  occupation_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&year_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&hasforeigneconomicactivity_) -
    reinterpret_cast<char*>(&year_)) + sizeof(hasforeigneconomicactivity_));
}

Company::~Company() {
  // @@protoc_insertion_point(destructor:Company)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Company::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  address_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  occupation_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Company::ArenaDtor(void* object) {
  Company* _this = reinterpret_cast< Company* >(object);
  (void)_this;
}
void Company::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Company::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Company::Clear() {
// @@protoc_insertion_point(message_clear_start:Company)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      address_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      occupation_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&year_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&hasforeigneconomicactivity_) -
        reinterpret_cast<char*>(&year_)) + sizeof(hasforeigneconomicactivity_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Company::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Company.name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required string address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_address();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Company.address");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required int32 year = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_year(&has_bits);
          year_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string occupation = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_occupation();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Company.occupation");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool hasForeignEconomicActivity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_hasforeigneconomicactivity(&has_bits);
          hasforeigneconomicactivity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Company::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Company)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // required string address = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.address");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_address(), target);
  }

  // required int32 year = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_year(), target);
  }

  // optional string occupation = 4;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_occupation().data(), static_cast<int>(this->_internal_occupation().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Company.occupation");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_occupation(), target);
  }

  // optional bool hasForeignEconomicActivity = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_hasforeigneconomicactivity(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Company)
  return target;
}

size_t Company::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Company)
  size_t total_size = 0;

  if (_internal_has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (_internal_has_address()) {
    // required string address = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());
  }

  if (_internal_has_year()) {
    // required int32 year = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_year());
  }

  return total_size;
}
size_t Company::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Company)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000b) ^ 0x0000000b) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required string address = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());

    // required int32 year = 3;
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_year());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string occupation = 4;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_occupation());
  }

  // optional bool hasForeignEconomicActivity = 5;
  if (cached_has_bits & 0x00000010u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Company::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Company::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Company::GetClassData() const { return &_class_data_; }

void Company::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Company *>(to)->MergeFrom(
      static_cast<const Company &>(from));
}


void Company::MergeFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Company)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_address(from._internal_address());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_occupation(from._internal_occupation());
    }
    if (cached_has_bits & 0x00000008u) {
      year_ = from.year_;
    }
    if (cached_has_bits & 0x00000010u) {
      hasforeigneconomicactivity_ = from.hasforeigneconomicactivity_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Company::CopyFrom(const Company& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Company)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Company::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Company::InternalSwap(Company* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &address_, lhs_arena,
      &other->address_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &occupation_, lhs_arena,
      &other->occupation_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Company, hasforeigneconomicactivity_)
      + sizeof(Company::hasforeigneconomicactivity_)
      - PROTOBUF_FIELD_OFFSET(Company, year_)>(
          reinterpret_cast<char*>(&year_),
          reinterpret_cast<char*>(&other->year_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Company::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_company_2eproto_getter, &descriptor_table_company_2eproto_once,
      file_level_metadata_company_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Company* Arena::CreateMaybeMessage< ::Company >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Company >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
