/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceRayTracingPropertiesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceRayTracingPropertiesNV::constructor;

_VkPhysicalDeviceRayTracingPropertiesNV::_VkPhysicalDeviceRayTracingPropertiesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PROPERTIES_NV;
  
}

_VkPhysicalDeviceRayTracingPropertiesNV::~_VkPhysicalDeviceRayTracingPropertiesNV() {
  //printf("VkPhysicalDeviceRayTracingPropertiesNV deconstructed!!\n");
  
  
  
  
  
  
  
  
  
  
}

void _VkPhysicalDeviceRayTracingPropertiesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceRayTracingPropertiesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceRayTracingPropertiesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderGroupHandleSize").ToLocalChecked(), GetshaderGroupHandleSize, SetshaderGroupHandleSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxRecursionDepth").ToLocalChecked(), GetmaxRecursionDepth, SetmaxRecursionDepth, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxShaderGroupStride").ToLocalChecked(), GetmaxShaderGroupStride, SetmaxShaderGroupStride, ctor);
  SetPrototypeAccessor(proto, Nan::New("shaderGroupBaseAlignment").ToLocalChecked(), GetshaderGroupBaseAlignment, SetshaderGroupBaseAlignment, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxGeometryCount").ToLocalChecked(), GetmaxGeometryCount, SetmaxGeometryCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxInstanceCount").ToLocalChecked(), GetmaxInstanceCount, SetmaxInstanceCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxTriangleCount").ToLocalChecked(), GetmaxTriangleCount, SetmaxTriangleCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDescriptorSetAccelerationStructures").ToLocalChecked(), GetmaxDescriptorSetAccelerationStructures, SetmaxDescriptorSetAccelerationStructures, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceRayTracingPropertiesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceRayTracingPropertiesNV::flush() {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceRayTracingPropertiesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceRayTracingPropertiesNV* self = new _VkPhysicalDeviceRayTracingPropertiesNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("shaderGroupHandleSize").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("maxRecursionDepth").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("maxShaderGroupStride").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("shaderGroupBaseAlignment").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("maxGeometryCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("maxInstanceCount").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("maxTriangleCount").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("maxDescriptorSetAccelerationStructures").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceRayTracingPropertiesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetsType) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetsType) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderGroupHandleSize
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetshaderGroupHandleSize) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderGroupHandleSize));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetshaderGroupHandleSize) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.shaderGroupHandleSize = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.shaderGroupHandleSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxRecursionDepth
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxRecursionDepth) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxRecursionDepth));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxRecursionDepth) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxRecursionDepth = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxRecursionDepth' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxShaderGroupStride
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxShaderGroupStride) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxShaderGroupStride));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxShaderGroupStride) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxShaderGroupStride = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxShaderGroupStride' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shaderGroupBaseAlignment
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetshaderGroupBaseAlignment) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shaderGroupBaseAlignment));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetshaderGroupBaseAlignment) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.shaderGroupBaseAlignment = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.shaderGroupBaseAlignment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxGeometryCount
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxGeometryCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxGeometryCount));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxGeometryCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxGeometryCount = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxGeometryCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxInstanceCount
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxInstanceCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxInstanceCount));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxInstanceCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxInstanceCount = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxInstanceCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxTriangleCount
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxTriangleCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxTriangleCount));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxTriangleCount) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxTriangleCount = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxTriangleCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxDescriptorSetAccelerationStructures
NAN_GETTER(_VkPhysicalDeviceRayTracingPropertiesNV::GetmaxDescriptorSetAccelerationStructures) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDescriptorSetAccelerationStructures));
}NAN_SETTER(_VkPhysicalDeviceRayTracingPropertiesNV::SetmaxDescriptorSetAccelerationStructures) {
  _VkPhysicalDeviceRayTracingPropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceRayTracingPropertiesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.maxDescriptorSetAccelerationStructures = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceRayTracingPropertiesNV.maxDescriptorSetAccelerationStructures' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}