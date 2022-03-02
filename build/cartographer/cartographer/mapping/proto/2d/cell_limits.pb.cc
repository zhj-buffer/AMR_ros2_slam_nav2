// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/2d/cell_limits.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/2d/cell_limits.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* CellLimits_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CellLimits_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/2d/cell_limits.proto");
  GOOGLE_CHECK(file != NULL);
  CellLimits_descriptor_ = file->message_type(0);
  static const int CellLimits_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CellLimits, num_x_cells_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CellLimits, num_y_cells_),
  };
  CellLimits_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CellLimits_descriptor_,
      CellLimits::default_instance_,
      CellLimits_offsets_,
      -1,
      -1,
      -1,
      sizeof(CellLimits),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CellLimits, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CellLimits, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CellLimits_descriptor_, &CellLimits::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() {
  delete CellLimits::default_instance_;
  delete CellLimits_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n/cartographer/mapping/proto/2d/cell_lim"
    "its.proto\022\032cartographer.mapping.proto\"6\n"
    "\nCellLimits\022\023\n\013num_x_cells\030\001 \001(\005\022\023\n\013num_"
    "y_cells\030\002 \001(\005b\006proto3", 141);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/2d/cell_limits.proto", &protobuf_RegisterTypes);
  CellLimits::default_instance_ = new CellLimits();
  CellLimits::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CellLimits::kNumXCellsFieldNumber;
const int CellLimits::kNumYCellsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CellLimits::CellLimits()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping.proto.CellLimits)
}

void CellLimits::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

CellLimits::CellLimits(const CellLimits& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping.proto.CellLimits)
}

void CellLimits::SharedCtor() {
    _is_default_instance_ = false;
  _cached_size_ = 0;
  num_x_cells_ = 0;
  num_y_cells_ = 0;
}

CellLimits::~CellLimits() {
  // @@protoc_insertion_point(destructor:cartographer.mapping.proto.CellLimits)
  SharedDtor();
}

void CellLimits::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CellLimits::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CellLimits::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CellLimits_descriptor_;
}

const CellLimits& CellLimits::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2f2d_2fcell_5flimits_2eproto();
  return *default_instance_;
}

CellLimits* CellLimits::default_instance_ = NULL;

CellLimits* CellLimits::New(::google::protobuf::Arena* arena) const {
  CellLimits* n = new CellLimits;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CellLimits::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping.proto.CellLimits)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(CellLimits, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<CellLimits*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(num_x_cells_, num_y_cells_);

#undef ZR_HELPER_
#undef ZR_

}

bool CellLimits::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping.proto.CellLimits)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 num_x_cells = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_x_cells_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_num_y_cells;
        break;
      }

      // optional int32 num_y_cells = 2;
      case 2: {
        if (tag == 16) {
         parse_num_y_cells:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_y_cells_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping.proto.CellLimits)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping.proto.CellLimits)
  return false;
#undef DO_
}

void CellLimits::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping.proto.CellLimits)
  // optional int32 num_x_cells = 1;
  if (this->num_x_cells() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->num_x_cells(), output);
  }

  // optional int32 num_y_cells = 2;
  if (this->num_y_cells() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->num_y_cells(), output);
  }

  // @@protoc_insertion_point(serialize_end:cartographer.mapping.proto.CellLimits)
}

::google::protobuf::uint8* CellLimits::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping.proto.CellLimits)
  // optional int32 num_x_cells = 1;
  if (this->num_x_cells() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->num_x_cells(), target);
  }

  // optional int32 num_y_cells = 2;
  if (this->num_y_cells() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->num_y_cells(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping.proto.CellLimits)
  return target;
}

int CellLimits::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping.proto.CellLimits)
  int total_size = 0;

  // optional int32 num_x_cells = 1;
  if (this->num_x_cells() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_x_cells());
  }

  // optional int32 num_y_cells = 2;
  if (this->num_y_cells() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->num_y_cells());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CellLimits::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping.proto.CellLimits)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const CellLimits* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const CellLimits>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping.proto.CellLimits)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping.proto.CellLimits)
    MergeFrom(*source);
  }
}

void CellLimits::MergeFrom(const CellLimits& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping.proto.CellLimits)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from.num_x_cells() != 0) {
    set_num_x_cells(from.num_x_cells());
  }
  if (from.num_y_cells() != 0) {
    set_num_y_cells(from.num_y_cells());
  }
}

void CellLimits::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping.proto.CellLimits)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CellLimits::CopyFrom(const CellLimits& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping.proto.CellLimits)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CellLimits::IsInitialized() const {

  return true;
}

void CellLimits::Swap(CellLimits* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CellLimits::InternalSwap(CellLimits* other) {
  std::swap(num_x_cells_, other->num_x_cells_);
  std::swap(num_y_cells_, other->num_y_cells_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CellLimits::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CellLimits_descriptor_;
  metadata.reflection = CellLimits_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CellLimits

// optional int32 num_x_cells = 1;
void CellLimits::clear_num_x_cells() {
  num_x_cells_ = 0;
}
 ::google::protobuf::int32 CellLimits::num_x_cells() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.CellLimits.num_x_cells)
  return num_x_cells_;
}
 void CellLimits::set_num_x_cells(::google::protobuf::int32 value) {
  
  num_x_cells_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.CellLimits.num_x_cells)
}

// optional int32 num_y_cells = 2;
void CellLimits::clear_num_y_cells() {
  num_y_cells_ = 0;
}
 ::google::protobuf::int32 CellLimits::num_y_cells() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.CellLimits.num_y_cells)
  return num_y_cells_;
}
 void CellLimits::set_num_y_cells(::google::protobuf::int32 value) {
  
  num_y_cells_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.CellLimits.num_y_cells)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)