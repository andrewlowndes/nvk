/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkSamplerYcbcrConversionCreateInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSamplerYcbcrConversionCreateInfoKHR::constructor;

_VkSamplerYcbcrConversionCreateInfoKHR::_VkSamplerYcbcrConversionCreateInfoKHR() {
  
  
}

_VkSamplerYcbcrConversionCreateInfoKHR::~_VkSamplerYcbcrConversionCreateInfoKHR() {
  //printf("VkSamplerYcbcrConversionCreateInfoKHR deconstructed!!\n");
  
}

void _VkSamplerYcbcrConversionCreateInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSamplerYcbcrConversionCreateInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSamplerYcbcrConversionCreateInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkSamplerYcbcrConversionCreateInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSamplerYcbcrConversionCreateInfoKHR::flush() {
  _VkSamplerYcbcrConversionCreateInfoKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkSamplerYcbcrConversionCreateInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkSamplerYcbcrConversionCreateInfoKHR* self = new _VkSamplerYcbcrConversionCreateInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSamplerYcbcrConversionCreateInfoKHR constructor cannot be invoked without 'new'");
  }
};

