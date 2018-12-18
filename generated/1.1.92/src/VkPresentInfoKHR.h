/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPRESENTINFOKHR_H__
#define __VK_VKPRESENTINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPresentInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetwaitSemaphoreCount);
    static NAN_SETTER(SetwaitSemaphoreCount);
    
    std::vector<VkSemaphore>* vpWaitSemaphores;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pWaitSemaphores;
    static NAN_GETTER(GetpWaitSemaphores);
    static NAN_SETTER(SetpWaitSemaphores);
    
    static NAN_GETTER(GetswapchainCount);
    static NAN_SETTER(SetswapchainCount);
    
    std::vector<VkSwapchainKHR>* vpSwapchains;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pSwapchains;
    static NAN_GETTER(GetpSwapchains);
    static NAN_SETTER(SetpSwapchains);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pImageIndices;
    static NAN_GETTER(GetpImageIndices);
    static NAN_SETTER(SetpImageIndices);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pResults;
    static NAN_GETTER(GetpResults);
    static NAN_SETTER(SetpResults);
    

    // real instance
    VkPresentInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPresentInfoKHR();
    ~_VkPresentInfoKHR();

};

#endif