/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkImagePlaneMemoryRequirementsInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkImagePlaneMemoryRequirementsInfoKHR::constructor;

_VkImagePlaneMemoryRequirementsInfoKHR::_VkImagePlaneMemoryRequirementsInfoKHR() {
  
  
}

_VkImagePlaneMemoryRequirementsInfoKHR::~_VkImagePlaneMemoryRequirementsInfoKHR() {
  //printf("VkImagePlaneMemoryRequirementsInfoKHR deconstructed!!\n");
  
}

void _VkImagePlaneMemoryRequirementsInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImagePlaneMemoryRequirementsInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImagePlaneMemoryRequirementsInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkImagePlaneMemoryRequirementsInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImagePlaneMemoryRequirementsInfoKHR::flush() {
  _VkImagePlaneMemoryRequirementsInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkImagePlaneMemoryRequirementsInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkImagePlaneMemoryRequirementsInfoKHR* self = new _VkImagePlaneMemoryRequirementsInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImagePlaneMemoryRequirementsInfoKHR constructor cannot be invoked without 'new'");
  }
};

