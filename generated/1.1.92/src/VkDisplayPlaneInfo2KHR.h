/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKDISPLAYPLANEINFO2KHR_H__
#define __VK_VKDISPLAYPLANEINFO2KHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayPlaneInfo2KHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> mode;
      static NAN_GETTER(Getmode);
    static NAN_SETTER(Setmode);
    
    static NAN_GETTER(GetplaneIndex);
    static NAN_SETTER(SetplaneIndex);
    

    // real instance
    VkDisplayPlaneInfo2KHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplayPlaneInfo2KHR();
    ~_VkDisplayPlaneInfo2KHR();

};

#endif