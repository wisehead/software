
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_net_URL__
#define __java_net_URL__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace java
  {
    namespace net
    {
        class URI;
        class URL;
        class URLConnection;
        class URLStreamHandler;
        class URLStreamHandlerFactory;
    }
  }
}

class java::net::URL : public ::java::lang::Object
{

public:
  URL(::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *);
  URL(::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
  URL(::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::net::URLStreamHandler *);
  URL(::java::lang::String *);
  URL(::java::net::URL *, ::java::lang::String *);
  URL(::java::net::URL *, ::java::lang::String *, ::java::net::URLStreamHandler *);
private:
  URL(::java::net::URL *, ::java::lang::String *, ::java::net::URLStreamHandler *, jboolean);
public:
  jboolean equals(::java::lang::Object *);
  ::java::lang::Object * getContent();
  ::java::lang::Object * getContent(JArray< ::java::lang::Class * > *);
  ::java::lang::String * getFile();
  ::java::lang::String * getPath();
  ::java::lang::String * getAuthority();
  ::java::lang::String * getHost();
  jint getPort();
  jint getDefaultPort();
  ::java::lang::String * getProtocol();
  ::java::lang::String * getRef();
  ::java::lang::String * getUserInfo();
  ::java::lang::String * getQuery();
  jint hashCode();
  ::java::net::URLConnection * openConnection();
  ::java::io::InputStream * openStream();
  jboolean sameFile(::java::net::URL *);
public: // actually protected
  void set(::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *);
  void set(::java::lang::String *, ::java::lang::String *, jint, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *, ::java::lang::String *);
public:
  static void setURLStreamHandlerFactory(::java::net::URLStreamHandlerFactory *);
  ::java::lang::String * toExternalForm();
  ::java::lang::String * toString();
private:
  static ::java::net::URLStreamHandler * getURLStreamHandler(::java::lang::String *);
  void readObject(::java::io::ObjectInputStream *);
  void writeObject(::java::io::ObjectOutputStream *);
public:
  ::java::net::URI * toURI();
private:
  static ::java::lang::String * DEFAULT_SEARCH_PATH;
  static ::java::lang::ClassLoader * systemClassLoader;
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) protocol;
  ::java::lang::String * authority;
  ::java::lang::String * host;
  ::java::lang::String * userInfo;
  jint port;
  ::java::lang::String * file;
  ::java::lang::String * ref;
  jint hashCode__;
public: // actually package-private
  ::java::net::URLStreamHandler * ph;
private:
  static ::java::net::URLStreamHandlerFactory * factory;
  static const jlong serialVersionUID = -7627629688361524110LL;
  static ::java::util::HashMap * ph_cache;
  static jboolean cache_handlers;
public:
  static ::java::lang::Class class$;
};

#endif // __java_net_URL__
