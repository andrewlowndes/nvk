/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceImageDrmFormatModifierInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceImageDrmFormatModifierInfoEXT::constructor;

_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::_VkPhysicalDeviceImageDrmFormatModifierInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_DRM_FORMAT_MODIFIER_INFO_EXT;
  
}

_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::~_VkPhysicalDeviceImageDrmFormatModifierInfoEXT() {
  //printf("VkPhysicalDeviceImageDrmFormatModifierInfoEXT deconstructed!!\n");
  
  
  
  
  
  pQueueFamilyIndices.Reset();
  
}

void _VkPhysicalDeviceImageDrmFormatModifierInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceImageDrmFormatModifierInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("drmFormatModifier").ToLocalChecked(), GetdrmFormatModifier, SetdrmFormatModifier, ctor);
  SetPrototypeAccessor(proto, Nan::New("sharingMode").ToLocalChecked(), GetsharingMode, SetsharingMode, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueFamilyIndexCount").ToLocalChecked(), GetqueueFamilyIndexCount, SetqueueFamilyIndexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueFamilyIndices").ToLocalChecked(), GetpQueueFamilyIndices, SetpQueueFamilyIndices, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceImageDrmFormatModifierInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceImageDrmFormatModifierInfoEXT::flush() {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceImageDrmFormatModifierInfoEXT* self = new _VkPhysicalDeviceImageDrmFormatModifierInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("drmFormatModifier").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("sharingMode").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("queueFamilyIndexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pQueueFamilyIndices").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceImageDrmFormatModifierInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::GetsType) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::SetsType) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// drmFormatModifier
NAN_GETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::GetdrmFormatModifier) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.drmFormatModifier));
}NAN_SETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::SetdrmFormatModifier) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.drmFormatModifier = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.drmFormatModifier' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// sharingMode
NAN_GETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::GetsharingMode) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sharingMode));
}NAN_SETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::SetsharingMode) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sharingMode = static_cast<VkSharingMode>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.sharingMode' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queueFamilyIndexCount
NAN_GETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::GetqueueFamilyIndexCount) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueFamilyIndexCount));
}NAN_SETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::SetqueueFamilyIndexCount) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.queueFamilyIndexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.queueFamilyIndexCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pQueueFamilyIndices
NAN_GETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::GetpQueueFamilyIndices) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  if (self->pQueueFamilyIndices.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueFamilyIndices);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPhysicalDeviceImageDrmFormatModifierInfoEXT::SetpQueueFamilyIndices) {
  _VkPhysicalDeviceImageDrmFormatModifierInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceImageDrmFormatModifierInfoEXT>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pQueueFamilyIndices.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.pQueueFamilyIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pQueueFamilyIndices.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkPhysicalDeviceImageDrmFormatModifierInfoEXT.pQueueFamilyIndices' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pQueueFamilyIndices = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pQueueFamilyIndices = nullptr;
  }
}