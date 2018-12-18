/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceFloat16Int8FeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceFloat16Int8FeaturesKHR::constructor;

_VkPhysicalDeviceFloat16Int8FeaturesKHR::_VkPhysicalDeviceFloat16Int8FeaturesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FLOAT16_INT8_FEATURES_KHR;
  
}

_VkPhysicalDeviceFloat16Int8FeaturesKHR::~_VkPhysicalDeviceFloat16Int8FeaturesKHR() {
  //printf("VkPhysicalDeviceFloat16Int8FeaturesKHR deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceFloat16Int8FeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceFloat16Int8FeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceFloat16Int8FeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderFloat16").ToLocalChecked(), GetshaderFloat16, SetshaderFloat16, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderInt8").ToLocalChecked(), GetshaderInt8, SetshaderInt8, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceFloat16Int8FeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceFloat16Int8FeaturesKHR::flush() {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceFloat16Int8FeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceFloat16Int8FeaturesKHR* self = new _VkPhysicalDeviceFloat16Int8FeaturesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("shaderFloat16").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("shaderInt8").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceFloat16Int8FeaturesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::GetsType) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::SetsType) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceFloat16Int8FeaturesKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderFloat16
NAN_GETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::GetshaderFloat16) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderFloat16));
}NAN_SETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::SetshaderFloat16) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.shaderFloat16 = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceFloat16Int8FeaturesKHR.shaderFloat16' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderInt8
NAN_GETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::GetshaderInt8) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderInt8));
}NAN_SETTER(_VkPhysicalDeviceFloat16Int8FeaturesKHR::SetshaderInt8) {
  _VkPhysicalDeviceFloat16Int8FeaturesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFloat16Int8FeaturesKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.shaderInt8 = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceFloat16Int8FeaturesKHR.shaderInt8' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}