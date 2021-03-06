// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto

#include "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.pb.h"

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
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace tensorflow {
namespace decision_trees {
class MatchingValuesTestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MatchingValuesTest>
      _instance;
} _MatchingValuesTest_default_instance_;
}  // namespace decision_trees
}  // namespace tensorflow
namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto {
void InitDefaultsMatchingValuesTestImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::InitDefaultsFeatureId();
  protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::InitDefaultsValue();
  {
    void* ptr = &::tensorflow::decision_trees::_MatchingValuesTest_default_instance_;
    new (ptr) ::tensorflow::decision_trees::MatchingValuesTest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::decision_trees::MatchingValuesTest::InitAsDefaultInstance();
}

void InitDefaultsMatchingValuesTest() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMatchingValuesTestImpl);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, feature_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::decision_trees::MatchingValuesTest, inverse_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::decision_trees::MatchingValuesTest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::decision_trees::_MatchingValuesTest_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\nKtensorflow/contrib/decision_trees/prot"
      "o/generic_tree_model_extensions.proto\022\031t"
      "ensorflow.decision_trees\032@tensorflow/con"
      "trib/decision_trees/proto/generic_tree_m"
      "odel.proto\"\220\001\n\022MatchingValuesTest\0228\n\nfea"
      "ture_id\030\001 \001(\0132$.tensorflow.decision_tree"
      "s.FeatureId\022/\n\005value\030\002 \003(\0132 .tensorflow."
      "decision_trees.Value\022\017\n\007inverse\030\003 \001(\010b\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 325);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/contrib/decision_trees/proto/generic_tree_model_extensions.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto
namespace tensorflow {
namespace decision_trees {

// ===================================================================

void MatchingValuesTest::InitAsDefaultInstance() {
  ::tensorflow::decision_trees::_MatchingValuesTest_default_instance_._instance.get_mutable()->feature_id_ = const_cast< ::tensorflow::decision_trees::FeatureId*>(
      ::tensorflow::decision_trees::FeatureId::internal_default_instance());
}
void MatchingValuesTest::clear_feature_id() {
  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
}
void MatchingValuesTest::clear_value() {
  value_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MatchingValuesTest::kFeatureIdFieldNumber;
const int MatchingValuesTest::kValueFieldNumber;
const int MatchingValuesTest::kInverseFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MatchingValuesTest::MatchingValuesTest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::InitDefaultsMatchingValuesTest();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.decision_trees.MatchingValuesTest)
}
MatchingValuesTest::MatchingValuesTest(const MatchingValuesTest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      value_(from.value_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_feature_id()) {
    feature_id_ = new ::tensorflow::decision_trees::FeatureId(*from.feature_id_);
  } else {
    feature_id_ = NULL;
  }
  inverse_ = from.inverse_;
  // @@protoc_insertion_point(copy_constructor:tensorflow.decision_trees.MatchingValuesTest)
}

void MatchingValuesTest::SharedCtor() {
  ::memset(&feature_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&inverse_) -
      reinterpret_cast<char*>(&feature_id_)) + sizeof(inverse_));
  _cached_size_ = 0;
}

MatchingValuesTest::~MatchingValuesTest() {
  // @@protoc_insertion_point(destructor:tensorflow.decision_trees.MatchingValuesTest)
  SharedDtor();
}

void MatchingValuesTest::SharedDtor() {
  if (this != internal_default_instance()) delete feature_id_;
}

void MatchingValuesTest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MatchingValuesTest::descriptor() {
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MatchingValuesTest& MatchingValuesTest::default_instance() {
  ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::InitDefaultsMatchingValuesTest();
  return *internal_default_instance();
}


void MatchingValuesTest::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  value_.Clear();
  if (GetArenaNoVirtual() == NULL && feature_id_ != NULL) {
    delete feature_id_;
  }
  feature_id_ = NULL;
  inverse_ = false;
  _internal_metadata_.Clear();
}

bool MatchingValuesTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.decision_trees.MatchingValuesTest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.decision_trees.FeatureId feature_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_feature_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tensorflow.decision_trees.Value value = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_value()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool inverse = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &inverse_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.decision_trees.MatchingValuesTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.decision_trees.MatchingValuesTest)
  return false;
#undef DO_
}

void MatchingValuesTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *feature_id_, output);
  }

  // repeated .tensorflow.decision_trees.Value value = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->value_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2,
      this->value(static_cast<int>(i)),
      output);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->inverse(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.decision_trees.MatchingValuesTest)
}

::google::protobuf::uint8* MatchingValuesTest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.decision_trees.MatchingValuesTest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, *feature_id_, deterministic, target);
  }

  // repeated .tensorflow.decision_trees.Value value = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->value_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->value(static_cast<int>(i)), deterministic, target);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->inverse(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.decision_trees.MatchingValuesTest)
  return target;
}

size_t MatchingValuesTest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.decision_trees.MatchingValuesTest)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .tensorflow.decision_trees.Value value = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->value_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->value(static_cast<int>(i)));
    }
  }

  // .tensorflow.decision_trees.FeatureId feature_id = 1;
  if (this->has_feature_id()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *feature_id_);
  }

  // bool inverse = 3;
  if (this->inverse() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MatchingValuesTest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.decision_trees.MatchingValuesTest)
  GOOGLE_DCHECK_NE(&from, this);
  const MatchingValuesTest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MatchingValuesTest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.decision_trees.MatchingValuesTest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.decision_trees.MatchingValuesTest)
    MergeFrom(*source);
  }
}

void MatchingValuesTest::MergeFrom(const MatchingValuesTest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.decision_trees.MatchingValuesTest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  value_.MergeFrom(from.value_);
  if (from.has_feature_id()) {
    mutable_feature_id()->::tensorflow::decision_trees::FeatureId::MergeFrom(from.feature_id());
  }
  if (from.inverse() != 0) {
    set_inverse(from.inverse());
  }
}

void MatchingValuesTest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.decision_trees.MatchingValuesTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MatchingValuesTest::CopyFrom(const MatchingValuesTest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.decision_trees.MatchingValuesTest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MatchingValuesTest::IsInitialized() const {
  return true;
}

void MatchingValuesTest::Swap(MatchingValuesTest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MatchingValuesTest::InternalSwap(MatchingValuesTest* other) {
  using std::swap;
  CastToBase(&value_)->InternalSwap(CastToBase(&other->value_));
  swap(feature_id_, other->feature_id_);
  swap(inverse_, other->inverse_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata MatchingValuesTest::GetMetadata() const {
  protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_2fcontrib_2fdecision_5ftrees_2fproto_2fgeneric_5ftree_5fmodel_5fextensions_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace decision_trees
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::decision_trees::MatchingValuesTest* Arena::Create< ::tensorflow::decision_trees::MatchingValuesTest >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::decision_trees::MatchingValuesTest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
