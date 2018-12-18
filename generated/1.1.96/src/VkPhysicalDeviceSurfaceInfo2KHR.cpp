/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceSurfaceInfo2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceSurfaceInfo2KHR::constructor;

_VkPhysicalDeviceSurfaceInfo2KHR::_VkPhysicalDeviceSurfaceInfo2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SURFACE_INFO_2_KHR;
  
}

_VkPhysicalDeviceSurfaceInfo2KHR::~_VkPhysicalDeviceSurfaceInfo2KHR() {
  //printf("VkPhysicalDeviceSurfaceInfo2KHR deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceSurfaceInfo2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceSurfaceInfo2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceSurfaceInfo2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("surface").ToLocalChecked(), Getsurface, Setsurface, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceSurfaceInfo2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceSurfaceInfo2KHR::flush() {
  _VkPhysicalDeviceSurfaceInfo2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceSurfaceInfo2KHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceSurfaceInfo2KHR* self = new _VkPhysicalDeviceSurfaceInfo2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("surface").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceSurfaceInfo2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceSurfaceInfo2KHR::GetsType) {
  _VkPhysicalDeviceSurfaceInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSurfaceInfo2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceSurfaceInfo2KHR::SetsType) {
  _VkPhysicalDeviceSurfaceInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSurfaceInfo2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSurfaceInfo2KHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// surface
NAN_GETTER(_VkPhysicalDeviceSurfaceInfo2KHR::Getsurface) {
  _VkPhysicalDeviceSurfaceInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSurfaceInfo2KHR>(info.This());
  if (self->surface.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->surface);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPhysicalDeviceSurfaceInfo2KHR::Setsurface) {
  _VkPhysicalDeviceSurfaceInfo2KHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSurfaceInfo2KHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkSurfaceKHR::constructor)->HasInstance(obj)) {
      self->surface.Reset<v8::Object>(value.As<v8::Object>());
      _VkSurfaceKHR* inst = Nan::ObjectWrap::Unwrap<_VkSurfaceKHR>(obj);
      ;
      self->instance.surface = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSurfaceKHR]' for 'VkPhysicalDeviceSurfaceInfo2KHR.surface' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->surface.Reset();
    self->instance.surface = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSurfaceKHR]' for 'VkPhysicalDeviceSurfaceInfo2KHR.surface' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}