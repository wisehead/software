
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_net_ssl_provider_CompressionMethodList$Iterator__
#define __gnu_javax_net_ssl_provider_CompressionMethodList$Iterator__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace net
      {
        namespace ssl
        {
          namespace provider
          {
              class CompressionMethod;
              class CompressionMethodList;
              class CompressionMethodList$Iterator;
          }
        }
      }
    }
  }
}

class gnu::javax::net::ssl::provider::CompressionMethodList$Iterator : public ::java::lang::Object
{

public: // actually package-private
  CompressionMethodList$Iterator(::gnu::javax::net::ssl::provider::CompressionMethodList *);
public:
  virtual void CompressionMethodList$Iterator$add(::gnu::javax::net::ssl::provider::CompressionMethod *);
  virtual jboolean hasNext();
  virtual jboolean hasPrevious();
  virtual ::gnu::javax::net::ssl::provider::CompressionMethod * CompressionMethodList$Iterator$next();
  virtual jint nextIndex();
  virtual ::gnu::javax::net::ssl::provider::CompressionMethod * CompressionMethodList$Iterator$previous();
  virtual jint previousIndex();
  virtual void remove();
  virtual void CompressionMethodList$Iterator$set(::gnu::javax::net::ssl::provider::CompressionMethod *);
  virtual ::java::lang::Object * next();
  virtual ::java::lang::Object * previous();
  virtual void add(::java::lang::Object *);
  virtual void set(::java::lang::Object *);
private:
  jint __attribute__((aligned(__alignof__( ::java::lang::Object)))) index;
  jint modCount;
public: // actually package-private
  ::gnu::javax::net::ssl::provider::CompressionMethodList * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_net_ssl_provider_CompressionMethodList$Iterator__
