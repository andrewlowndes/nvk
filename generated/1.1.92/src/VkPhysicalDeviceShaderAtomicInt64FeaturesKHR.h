/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPHYSICALDEVICESHADERATOMICINT64FEATURESKHR_H__
#define __VK_VKPHYSICALDEVICESHADERATOMICINT64FEATURESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetshaderBufferInt64Atomics);
    static NAN_SETTER(SetshaderBufferInt64Atomics);
    
    static NAN_GETTER(GetshaderSharedInt64Atomics);
    static NAN_SETTER(SetshaderSharedInt64Atomics);
    

    // real instance
    VkPhysicalDeviceShaderAtomicInt64FeaturesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceShaderAtomicInt64FeaturesKHR();
    ~_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR();

};

#endif