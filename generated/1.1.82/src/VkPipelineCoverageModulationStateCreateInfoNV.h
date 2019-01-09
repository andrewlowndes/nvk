/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#ifndef __VK_VKPIPELINECOVERAGEMODULATIONSTATECREATEINFONV_H__
#define __VK_VKPIPELINECOVERAGEMODULATIONSTATECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineCoverageModulationStateCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetcoverageModulationMode);
    static NAN_SETTER(SetcoverageModulationMode);
    
    static NAN_GETTER(GetcoverageModulationTableEnable);
    static NAN_SETTER(SetcoverageModulationTableEnable);
    
    static NAN_GETTER(GetcoverageModulationTableCount);
    static NAN_SETTER(SetcoverageModulationTableCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pCoverageModulationTable;
    static NAN_GETTER(GetpCoverageModulationTable);
    static NAN_SETTER(SetpCoverageModulationTable);
    

    // real instance
    VkPipelineCoverageModulationStateCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineCoverageModulationStateCreateInfoNV();
    ~_VkPipelineCoverageModulationStateCreateInfoNV();

};

#endif