/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKSAMPLERYCBCRCONVERSIONCREATEINFOKHR_H__
#define __VK_VKSAMPLERYCBCRCONVERSIONCREATEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSamplerYcbcrConversionCreateInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors

    // real instance
    VkSamplerYcbcrConversionCreateInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSamplerYcbcrConversionCreateInfoKHR();
    ~_VkSamplerYcbcrConversionCreateInfoKHR();

};

#endif