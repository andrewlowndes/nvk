/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkExternalMemoryImageCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkExternalMemoryImageCreateInfoKHR::constructor;

_VkExternalMemoryImageCreateInfoKHR::_VkExternalMemoryImageCreateInfoKHR() {
  
  
}

_VkExternalMemoryImageCreateInfoKHR::~_VkExternalMemoryImageCreateInfoKHR() {
  //printf("VkExternalMemoryImageCreateInfoKHR deconstructed!!\n");
  
}

void _VkExternalMemoryImageCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExternalMemoryImageCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExternalMemoryImageCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkExternalMemoryImageCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExternalMemoryImageCreateInfoKHR::flush() {
  _VkExternalMemoryImageCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkExternalMemoryImageCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkExternalMemoryImageCreateInfoKHR* self = new _VkExternalMemoryImageCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExternalMemoryImageCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

