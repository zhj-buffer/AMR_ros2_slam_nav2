// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/range_data_inserter_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping/proto/2d/probability_grid_range_data_inserter_options_2d.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();

class RangeDataInserterOptions;

enum RangeDataInserterOptions_RangeDataInserterType {
  RangeDataInserterOptions_RangeDataInserterType_INVALID_INSERTER = 0,
  RangeDataInserterOptions_RangeDataInserterType_PROBABILITY_GRID_INSERTER_2D = 1,
  RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterOptions_RangeDataInserterType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterOptions_RangeDataInserterType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool RangeDataInserterOptions_RangeDataInserterType_IsValid(int value);
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_MIN = RangeDataInserterOptions_RangeDataInserterType_INVALID_INSERTER;
const RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_MAX = RangeDataInserterOptions_RangeDataInserterType_PROBABILITY_GRID_INSERTER_2D;
const int RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_ARRAYSIZE = RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_MAX + 1;

const ::google::protobuf::EnumDescriptor* RangeDataInserterOptions_RangeDataInserterType_descriptor();
inline const ::std::string& RangeDataInserterOptions_RangeDataInserterType_Name(RangeDataInserterOptions_RangeDataInserterType value) {
  return ::google::protobuf::internal::NameOfEnum(
    RangeDataInserterOptions_RangeDataInserterType_descriptor(), value);
}
inline bool RangeDataInserterOptions_RangeDataInserterType_Parse(
    const ::std::string& name, RangeDataInserterOptions_RangeDataInserterType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<RangeDataInserterOptions_RangeDataInserterType>(
    RangeDataInserterOptions_RangeDataInserterType_descriptor(), name, value);
}
// ===================================================================

class RangeDataInserterOptions : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:cartographer.mapping.proto.RangeDataInserterOptions) */ {
 public:
  RangeDataInserterOptions();
  virtual ~RangeDataInserterOptions();

  RangeDataInserterOptions(const RangeDataInserterOptions& from);

  inline RangeDataInserterOptions& operator=(const RangeDataInserterOptions& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RangeDataInserterOptions& default_instance();

  void Swap(RangeDataInserterOptions* other);

  // implements Message ----------------------------------------------

  inline RangeDataInserterOptions* New() const { return New(NULL); }

  RangeDataInserterOptions* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RangeDataInserterOptions& from);
  void MergeFrom(const RangeDataInserterOptions& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RangeDataInserterOptions* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef RangeDataInserterOptions_RangeDataInserterType RangeDataInserterType;
  static const RangeDataInserterType INVALID_INSERTER =
    RangeDataInserterOptions_RangeDataInserterType_INVALID_INSERTER;
  static const RangeDataInserterType PROBABILITY_GRID_INSERTER_2D =
    RangeDataInserterOptions_RangeDataInserterType_PROBABILITY_GRID_INSERTER_2D;
  static inline bool RangeDataInserterType_IsValid(int value) {
    return RangeDataInserterOptions_RangeDataInserterType_IsValid(value);
  }
  static const RangeDataInserterType RangeDataInserterType_MIN =
    RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_MIN;
  static const RangeDataInserterType RangeDataInserterType_MAX =
    RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_MAX;
  static const int RangeDataInserterType_ARRAYSIZE =
    RangeDataInserterOptions_RangeDataInserterType_RangeDataInserterType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  RangeDataInserterType_descriptor() {
    return RangeDataInserterOptions_RangeDataInserterType_descriptor();
  }
  static inline const ::std::string& RangeDataInserterType_Name(RangeDataInserterType value) {
    return RangeDataInserterOptions_RangeDataInserterType_Name(value);
  }
  static inline bool RangeDataInserterType_Parse(const ::std::string& name,
      RangeDataInserterType* value) {
    return RangeDataInserterOptions_RangeDataInserterType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
  void clear_range_data_inserter_type();
  static const int kRangeDataInserterTypeFieldNumber = 1;
  ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType range_data_inserter_type() const;
  void set_range_data_inserter_type(::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType value);

  // optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
  bool has_probability_grid_range_data_inserter_options_2d() const;
  void clear_probability_grid_range_data_inserter_options_2d();
  static const int kProbabilityGridRangeDataInserterOptions2DFieldNumber = 2;
  const ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D& probability_grid_range_data_inserter_options_2d() const;
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* mutable_probability_grid_range_data_inserter_options_2d();
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* release_probability_grid_range_data_inserter_options_2d();
  void set_allocated_probability_grid_range_data_inserter_options_2d(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* probability_grid_range_data_inserter_options_2d);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.RangeDataInserterOptions)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* probability_grid_range_data_inserter_options_2d_;
  int range_data_inserter_type_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto();

  void InitAsDefaultInstance();
  static RangeDataInserterOptions* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RangeDataInserterOptions

// optional .cartographer.mapping.proto.RangeDataInserterOptions.RangeDataInserterType range_data_inserter_type = 1;
inline void RangeDataInserterOptions::clear_range_data_inserter_type() {
  range_data_inserter_type_ = 0;
}
inline ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType RangeDataInserterOptions::range_data_inserter_type() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions.range_data_inserter_type)
  return static_cast< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType >(range_data_inserter_type_);
}
inline void RangeDataInserterOptions::set_range_data_inserter_type(::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType value) {
  
  range_data_inserter_type_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.RangeDataInserterOptions.range_data_inserter_type)
}

// optional .cartographer.mapping.proto.ProbabilityGridRangeDataInserterOptions2D probability_grid_range_data_inserter_options_2d = 2;
inline bool RangeDataInserterOptions::has_probability_grid_range_data_inserter_options_2d() const {
  return !_is_default_instance_ && probability_grid_range_data_inserter_options_2d_ != NULL;
}
inline void RangeDataInserterOptions::clear_probability_grid_range_data_inserter_options_2d() {
  if (GetArenaNoVirtual() == NULL && probability_grid_range_data_inserter_options_2d_ != NULL) delete probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = NULL;
}
inline const ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D& RangeDataInserterOptions::probability_grid_range_data_inserter_options_2d() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  return probability_grid_range_data_inserter_options_2d_ != NULL ? *probability_grid_range_data_inserter_options_2d_ : *default_instance_->probability_grid_range_data_inserter_options_2d_;
}
inline ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* RangeDataInserterOptions::mutable_probability_grid_range_data_inserter_options_2d() {
  
  if (probability_grid_range_data_inserter_options_2d_ == NULL) {
    probability_grid_range_data_inserter_options_2d_ = new ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  return probability_grid_range_data_inserter_options_2d_;
}
inline ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* RangeDataInserterOptions::release_probability_grid_range_data_inserter_options_2d() {
  // @@protoc_insertion_point(field_release:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
  
  ::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* temp = probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = NULL;
  return temp;
}
inline void RangeDataInserterOptions::set_allocated_probability_grid_range_data_inserter_options_2d(::cartographer::mapping::proto::ProbabilityGridRangeDataInserterOptions2D* probability_grid_range_data_inserter_options_2d) {
  delete probability_grid_range_data_inserter_options_2d_;
  probability_grid_range_data_inserter_options_2d_ = probability_grid_range_data_inserter_options_2d;
  if (probability_grid_range_data_inserter_options_2d) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.RangeDataInserterOptions.probability_grid_range_data_inserter_options_2d)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType>() {
  return ::cartographer::mapping::proto::RangeDataInserterOptions_RangeDataInserterType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2frange_5fdata_5finserter_5foptions_2eproto__INCLUDED
