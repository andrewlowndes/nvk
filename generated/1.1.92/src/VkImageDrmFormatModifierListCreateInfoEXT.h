/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKIMAGEDRMFORMATMODIFIERLISTCREATEINFOEXT_H__
#define __VK_VKIMAGEDRMFORMATMODIFIERLISTCREATEINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageDrmFormatModifierListCreateInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetdrmFormatModifierCount);
    static NAN_SETTER(SetdrmFormatModifierCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pDrmFormatModifiers;
    static NAN_GETTER(GetpDrmFormatModifiers);
    static NAN_SETTER(SetpDrmFormatModifiers);
    

    // real instance
    VkImageDrmFormatModifierListCreateInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkImageDrmFormatModifierListCreateInfoEXT();
    ~_VkImageDrmFormatModifierListCreateInfoEXT();

};

#endif