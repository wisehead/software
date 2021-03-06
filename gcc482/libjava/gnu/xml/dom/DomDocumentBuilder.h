
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_DomDocumentBuilder__
#define __gnu_xml_dom_DomDocumentBuilder__

#pragma interface

#include <javax/xml/parsers/DocumentBuilder.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
          class DomDocumentBuilder;
      }
    }
  }
  namespace org
  {
    namespace w3c
    {
      namespace dom
      {
          class DOMImplementation;
          class Document;
        namespace ls
        {
            class DOMImplementationLS;
            class LSParser;
        }
      }
    }
    namespace xml
    {
      namespace sax
      {
          class EntityResolver;
          class ErrorHandler;
          class InputSource;
      }
    }
  }
}

class gnu::xml::dom::DomDocumentBuilder : public ::javax::xml::parsers::DocumentBuilder
{

public: // actually package-private
  DomDocumentBuilder(::org::w3c::dom::DOMImplementation *, ::org::w3c::dom::ls::DOMImplementationLS *, ::org::w3c::dom::ls::LSParser *);
public:
  virtual jboolean isNamespaceAware();
  virtual jboolean isValidating();
  virtual jboolean isXIncludeAware();
  virtual void setEntityResolver(::org::xml::sax::EntityResolver *);
  virtual void setErrorHandler(::org::xml::sax::ErrorHandler *);
  virtual ::org::w3c::dom::DOMImplementation * getDOMImplementation();
  virtual ::org::w3c::dom::Document * newDocument();
  virtual ::org::w3c::dom::Document * parse(::java::io::InputStream *);
  virtual ::org::w3c::dom::Document * parse(::java::io::InputStream *, ::java::lang::String *);
  virtual ::org::w3c::dom::Document * parse(::java::lang::String *);
  virtual ::org::w3c::dom::Document * parse(::org::xml::sax::InputSource *);
public: // actually package-private
  ::org::w3c::dom::DOMImplementation * __attribute__((aligned(__alignof__( ::javax::xml::parsers::DocumentBuilder)))) impl;
  ::org::w3c::dom::ls::DOMImplementationLS * ls;
  ::org::w3c::dom::ls::LSParser * parser;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_DomDocumentBuilder__
