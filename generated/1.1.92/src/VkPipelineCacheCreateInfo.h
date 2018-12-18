/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPIPELINECACHECREATEINFO_H__
#define __VK_VKPIPELINECACHECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineCacheCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetinitialDataSize);
    static NAN_SETTER(SetinitialDataSize);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pInitialData;
    static NAN_GETTER(GetpInitialData);
    static NAN_SETTER(SetpInitialData);
    

    // real instance
    VkPipelineCacheCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineCacheCreateInfo();
    ~_VkPipelineCacheCreateInfo();

};

#endif