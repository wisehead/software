
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_xml_transform_Templates__
#define __javax_xml_transform_Templates__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace xml
    {
      namespace transform
      {
          class Templates;
          class Transformer;
      }
    }
  }
}

class javax::xml::transform::Templates : public ::java::lang::Object
{

public:
  virtual ::javax::xml::transform::Transformer * newTransformer() = 0;
  virtual ::java::util::Properties * getOutputProperties() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_xml_transform_Templates__