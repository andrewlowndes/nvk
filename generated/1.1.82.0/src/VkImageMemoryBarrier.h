/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#ifndef __VK_VKIMAGEMEMORYBARRIER_H__
#define __VK_VKIMAGEMEMORYBARRIER_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkImageMemoryBarrier: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetsrcAccessMask);
    static NAN_SETTER(SetsrcAccessMask);
    
    static NAN_GETTER(GetdstAccessMask);
    static NAN_SETTER(SetdstAccessMask);
    
    static NAN_GETTER(GetoldLayout);
    static NAN_SETTER(SetoldLayout);
    
    static NAN_GETTER(GetnewLayout);
    static NAN_SETTER(SetnewLayout);
    
    static NAN_GETTER(GetsrcQueueFamilyIndex);
    static NAN_SETTER(SetsrcQueueFamilyIndex);
    
    static NAN_GETTER(GetdstQueueFamilyIndex);
    static NAN_SETTER(SetdstQueueFamilyIndex);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> image;
      static NAN_GETTER(Getimage);
    static NAN_SETTER(Setimage);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> subresourceRange;
      static NAN_GETTER(GetsubresourceRange);
    static NAN_SETTER(SetsubresourceRange);
    

    // real instance
    VkImageMemoryBarrier instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkImageMemoryBarrier();
    ~_VkImageMemoryBarrier();

};

#endif