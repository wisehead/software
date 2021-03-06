
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __java_awt_DefaultKeyboardFocusManager$EventDelayRequest__
#define __java_awt_DefaultKeyboardFocusManager$EventDelayRequest__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Component;
        class DefaultKeyboardFocusManager;
        class DefaultKeyboardFocusManager$EventDelayRequest;
      namespace event
      {
          class KeyEvent;
      }
    }
  }
}

class java::awt::DefaultKeyboardFocusManager$EventDelayRequest : public ::java::lang::Object
{

public:
  DefaultKeyboardFocusManager$EventDelayRequest(::java::awt::DefaultKeyboardFocusManager *, jlong, ::java::awt::Component *);
  virtual jint compareTo(::java::lang::Object *);
  virtual jboolean equals(::java::lang::Object *);
  virtual void enqueueEvent(::java::awt::event::KeyEvent *);
  virtual void dispatchEvents();
  virtual void discardEvents();
private:
  ::java::util::LinkedList * __attribute__((aligned(__alignof__( ::java::lang::Object)))) enqueuedKeyEvents;
public:
  jlong timestamp;
  ::java::awt::Component * focusedComp;
public: // actually package-private
  ::java::awt::DefaultKeyboardFocusManager * this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __java_awt_DefaultKeyboardFocusManager$EventDelayRequest__
