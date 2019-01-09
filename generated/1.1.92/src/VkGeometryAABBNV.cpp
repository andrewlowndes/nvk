/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkGeometryAABBNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkGeometryAABBNV::constructor;

_VkGeometryAABBNV::_VkGeometryAABBNV() {
  instance.sType = VK_STRUCTURE_TYPE_GEOMETRY_AABB_NV;
  
}

_VkGeometryAABBNV::~_VkGeometryAABBNV() {
  //printf("VkGeometryAABBNV deconstructed!!\n");
  
  
  
  
  
  
}

void _VkGeometryAABBNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkGeometryAABBNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkGeometryAABBNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("aabbData").ToLocalChecked(), GetaabbData, SetaabbData, ctor);
  SetPrototypeAccessor(proto, Nan::New("numAABBs").ToLocalChecked(), GetnumAABBs, SetnumAABBs, ctor);
  SetPrototypeAccessor(proto, Nan::New("stride").ToLocalChecked(), Getstride, Setstride, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  Nan::Set(target, Nan::New("VkGeometryAABBNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkGeometryAABBNV::flush() {
  _VkGeometryAABBNV *self = this;
  
  return true;
}

NAN_METHOD(_VkGeometryAABBNV::New) {
  if (info.IsConstructCall()) {
    _VkGeometryAABBNV* self = new _VkGeometryAABBNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("aabbData").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("numAABBs").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("stride").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("offset").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkGeometryAABBNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkGeometryAABBNV::GetsType) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkGeometryAABBNV::SetsType) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryAABBNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// aabbData
NAN_GETTER(_VkGeometryAABBNV::GetaabbData) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  if (self->aabbData.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->aabbData);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkGeometryAABBNV::SetaabbData) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkBuffer::constructor)->HasInstance(obj)) {
      self->aabbData.Reset<v8::Object>(value.As<v8::Object>());
      _VkBuffer* inst = Nan::ObjectWrap::Unwrap<_VkBuffer>(obj);
      ;
      self->instance.aabbData = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkGeometryAABBNV.aabbData' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->aabbData.Reset();
    self->instance.aabbData = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkBuffer]' for 'VkGeometryAABBNV.aabbData' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// numAABBs
NAN_GETTER(_VkGeometryAABBNV::GetnumAABBs) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.numAABBs));
}NAN_SETTER(_VkGeometryAABBNV::SetnumAABBs) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  if (value->IsNumber()) {
    self->instance.numAABBs = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryAABBNV.numAABBs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stride
NAN_GETTER(_VkGeometryAABBNV::Getstride) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stride));
}NAN_SETTER(_VkGeometryAABBNV::Setstride) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  if (value->IsNumber()) {
    self->instance.stride = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryAABBNV.stride' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// offset
NAN_GETTER(_VkGeometryAABBNV::Getoffset) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkGeometryAABBNV::Setoffset) {
  _VkGeometryAABBNV *self = Nan::ObjectWrap::Unwrap<_VkGeometryAABBNV>(info.This());
  if (value->IsNumber()) {
    self->instance.offset = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkGeometryAABBNV.offset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}