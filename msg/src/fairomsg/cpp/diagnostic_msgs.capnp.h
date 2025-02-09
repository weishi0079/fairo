// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: diagnostic_msgs.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 9001
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include "std_msgs.capnp.h"

CAPNP_BEGIN_HEADER

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(adaa5408704b2852);
CAPNP_DECLARE_SCHEMA(947ebd0eef1456d3);
CAPNP_DECLARE_SCHEMA(d19648ea8c7d3f56);
CAPNP_DECLARE_SCHEMA(a3b14ac1d61cb8e2);
CAPNP_DECLARE_SCHEMA(ed588a675af27a57);
CAPNP_DECLARE_SCHEMA(c71c9d15844d1d86);
CAPNP_DECLARE_SCHEMA(d727272b032131a0);

}  // namespace schemas
}  // namespace capnp

namespace mrp {
namespace diagnostic {

struct DiagnosticArray {
  DiagnosticArray() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(adaa5408704b2852, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct DiagnosticStatus {
  DiagnosticStatus() = delete;

  class Reader;
  class Builder;
  class Pipeline;
  static constexpr  ::uint8_t K_OK = 0u;
  static constexpr  ::uint8_t K_WARN = 1u;
  static constexpr  ::uint8_t K_ERROR = 2u;
  static constexpr  ::uint8_t K_STALE = 3u;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(947ebd0eef1456d3, 1, 4)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct KeyValue {
  KeyValue() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(d727272b032131a0, 0, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class DiagnosticArray::Reader {
public:
  typedef DiagnosticArray Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasHeader() const;
  inline  ::mrp::std::Header::Reader getHeader() const;

  inline bool hasStatus() const;
  inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Reader getStatus() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class DiagnosticArray::Builder {
public:
  typedef DiagnosticArray Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasHeader();
  inline  ::mrp::std::Header::Builder getHeader();
  inline void setHeader( ::mrp::std::Header::Reader value);
  inline  ::mrp::std::Header::Builder initHeader();
  inline void adoptHeader(::capnp::Orphan< ::mrp::std::Header>&& value);
  inline ::capnp::Orphan< ::mrp::std::Header> disownHeader();

  inline bool hasStatus();
  inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Builder getStatus();
  inline void setStatus( ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Builder initStatus(unsigned int size);
  inline void adoptStatus(::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>> disownStatus();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class DiagnosticArray::Pipeline {
public:
  typedef DiagnosticArray Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

  inline  ::mrp::std::Header::Pipeline getHeader();
private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class DiagnosticStatus::Reader {
public:
  typedef DiagnosticStatus Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint8_t getLevel() const;

  inline bool hasName() const;
  inline  ::capnp::Text::Reader getName() const;

  inline bool hasMessage() const;
  inline  ::capnp::Text::Reader getMessage() const;

  inline bool hasHardwareId() const;
  inline  ::capnp::Text::Reader getHardwareId() const;

  inline bool hasValues() const;
  inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Reader getValues() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class DiagnosticStatus::Builder {
public:
  typedef DiagnosticStatus Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint8_t getLevel();
  inline void setLevel( ::uint8_t value);

  inline bool hasName();
  inline  ::capnp::Text::Builder getName();
  inline void setName( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initName(unsigned int size);
  inline void adoptName(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownName();

  inline bool hasMessage();
  inline  ::capnp::Text::Builder getMessage();
  inline void setMessage( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initMessage(unsigned int size);
  inline void adoptMessage(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownMessage();

  inline bool hasHardwareId();
  inline  ::capnp::Text::Builder getHardwareId();
  inline void setHardwareId( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initHardwareId(unsigned int size);
  inline void adoptHardwareId(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownHardwareId();

  inline bool hasValues();
  inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Builder getValues();
  inline void setValues( ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Builder initValues(unsigned int size);
  inline void adoptValues(::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>> disownValues();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class DiagnosticStatus::Pipeline {
public:
  typedef DiagnosticStatus Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class KeyValue::Reader {
public:
  typedef KeyValue Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool hasKey() const;
  inline  ::capnp::Text::Reader getKey() const;

  inline bool hasValue() const;
  inline  ::capnp::Text::Reader getValue() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class KeyValue::Builder {
public:
  typedef KeyValue Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool hasKey();
  inline  ::capnp::Text::Builder getKey();
  inline void setKey( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initKey(unsigned int size);
  inline void adoptKey(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownKey();

  inline bool hasValue();
  inline  ::capnp::Text::Builder getValue();
  inline void setValue( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initValue(unsigned int size);
  inline void adoptValue(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownValue();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class KeyValue::Pipeline {
public:
  typedef KeyValue Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline bool DiagnosticArray::Reader::hasHeader() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticArray::Builder::hasHeader() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::mrp::std::Header::Reader DiagnosticArray::Reader::getHeader() const {
  return ::capnp::_::PointerHelpers< ::mrp::std::Header>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::mrp::std::Header::Builder DiagnosticArray::Builder::getHeader() {
  return ::capnp::_::PointerHelpers< ::mrp::std::Header>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
#if !CAPNP_LITE
inline  ::mrp::std::Header::Pipeline DiagnosticArray::Pipeline::getHeader() {
  return  ::mrp::std::Header::Pipeline(_typeless.getPointerField(0));
}
#endif  // !CAPNP_LITE
inline void DiagnosticArray::Builder::setHeader( ::mrp::std::Header::Reader value) {
  ::capnp::_::PointerHelpers< ::mrp::std::Header>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::mrp::std::Header::Builder DiagnosticArray::Builder::initHeader() {
  return ::capnp::_::PointerHelpers< ::mrp::std::Header>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void DiagnosticArray::Builder::adoptHeader(
    ::capnp::Orphan< ::mrp::std::Header>&& value) {
  ::capnp::_::PointerHelpers< ::mrp::std::Header>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::mrp::std::Header> DiagnosticArray::Builder::disownHeader() {
  return ::capnp::_::PointerHelpers< ::mrp::std::Header>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool DiagnosticArray::Reader::hasStatus() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticArray::Builder::hasStatus() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Reader DiagnosticArray::Reader::getStatus() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Builder DiagnosticArray::Builder::getStatus() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void DiagnosticArray::Builder::setStatus( ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>::Builder DiagnosticArray::Builder::initStatus(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void DiagnosticArray::Builder::adoptStatus(
    ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>> DiagnosticArray::Builder::disownStatus() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::DiagnosticStatus,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline  ::uint8_t DiagnosticStatus::Reader::getLevel() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DiagnosticStatus::Builder::getLevel() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void DiagnosticStatus::Builder::setLevel( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool DiagnosticStatus::Reader::hasName() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticStatus::Builder::hasName() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader DiagnosticStatus::Reader::getName() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::getName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void DiagnosticStatus::Builder::setName( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::initName(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void DiagnosticStatus::Builder::adoptName(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> DiagnosticStatus::Builder::disownName() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool DiagnosticStatus::Reader::hasMessage() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticStatus::Builder::hasMessage() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader DiagnosticStatus::Reader::getMessage() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::getMessage() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void DiagnosticStatus::Builder::setMessage( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::initMessage(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void DiagnosticStatus::Builder::adoptMessage(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> DiagnosticStatus::Builder::disownMessage() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool DiagnosticStatus::Reader::hasHardwareId() const {
  return !_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticStatus::Builder::hasHardwareId() {
  return !_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader DiagnosticStatus::Reader::getHardwareId() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::getHardwareId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}
inline void DiagnosticStatus::Builder::setHardwareId( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder DiagnosticStatus::Builder::initHardwareId(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), size);
}
inline void DiagnosticStatus::Builder::adoptHardwareId(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> DiagnosticStatus::Builder::disownHardwareId() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<2>() * ::capnp::POINTERS));
}

inline bool DiagnosticStatus::Reader::hasValues() const {
  return !_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline bool DiagnosticStatus::Builder::hasValues() {
  return !_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Reader DiagnosticStatus::Reader::getValues() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Builder DiagnosticStatus::Builder::getValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}
inline void DiagnosticStatus::Builder::setValues( ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>::Builder DiagnosticStatus::Builder::initValues(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), size);
}
inline void DiagnosticStatus::Builder::adoptValues(
    ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>> DiagnosticStatus::Builder::disownValues() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::mrp::diagnostic::KeyValue,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<3>() * ::capnp::POINTERS));
}

inline bool KeyValue::Reader::hasKey() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool KeyValue::Builder::hasKey() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader KeyValue::Reader::getKey() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder KeyValue::Builder::getKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void KeyValue::Builder::setKey( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder KeyValue::Builder::initKey(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void KeyValue::Builder::adoptKey(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> KeyValue::Builder::disownKey() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline bool KeyValue::Reader::hasValue() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool KeyValue::Builder::hasValue() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader KeyValue::Reader::getValue() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder KeyValue::Builder::getValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void KeyValue::Builder::setValue( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder KeyValue::Builder::initValue(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void KeyValue::Builder::adoptValue(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> KeyValue::Builder::disownValue() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

}  // namespace
}  // namespace

CAPNP_END_HEADER

