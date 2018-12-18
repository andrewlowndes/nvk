/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkAccelerationStructureCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkAccelerationStructureCreateInfoNV::constructor;

_VkAccelerationStructureCreateInfoNV::_VkAccelerationStructureCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_NV;
  
}

_VkAccelerationStructureCreateInfoNV::~_VkAccelerationStructureCreateInfoNV() {
  //printf("VkAccelerationStructureCreateInfoNV deconstructed!!\n");
  
  
  
  
}

void _VkAccelerationStructureCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkAccelerationStructureCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkAccelerationStructureCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("compactedSize").ToLocalChecked(), GetcompactedSize, SetcompactedSize, ctor);
  SetPrototypeAccessor(proto, Nan::New("info").ToLocalChecked(), Getinfo, Setinfo, ctor);
  Nan::Set(target, Nan::New("VkAccelerationStructureCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkAccelerationStructureCreateInfoNV::flush() {
  _VkAccelerationStructureCreateInfoNV *self = this;
  if (!(self->info.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->info);
    
    _VkAccelerationStructureInfoNV* result = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureInfoNV>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.info = result->instance;
  }
  return true;
}

NAN_METHOD(_VkAccelerationStructureCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkAccelerationStructureCreateInfoNV* self = new _VkAccelerationStructureCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("compactedSize").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("info").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkAccelerationStructureCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkAccelerationStructureCreateInfoNV::GetsType) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkAccelerationStructureCreateInfoNV::SetsType) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAccelerationStructureCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// compactedSize
NAN_GETTER(_VkAccelerationStructureCreateInfoNV::GetcompactedSize) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compactedSize));
}NAN_SETTER(_VkAccelerationStructureCreateInfoNV::SetcompactedSize) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.compactedSize = static_cast<uint64_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkAccelerationStructureCreateInfoNV.compactedSize' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// info
NAN_GETTER(_VkAccelerationStructureCreateInfoNV::Getinfo) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  if (self->info.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->info);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkAccelerationStructureCreateInfoNV::Setinfo) {
  _VkAccelerationStructureCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureCreateInfoNV>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkAccelerationStructureInfoNV::constructor)->HasInstance(obj)) {
      self->info.Reset<v8::Object>(value.As<v8::Object>());
      _VkAccelerationStructureInfoNV* inst = Nan::ObjectWrap::Unwrap<_VkAccelerationStructureInfoNV>(obj);
      inst->flush();
      self->instance.info = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAccelerationStructureInfoNV]' for 'VkAccelerationStructureCreateInfoNV.info' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->info.Reset();
    memset(&self->instance.info, 0, sizeof(VkAccelerationStructureInfoNV));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAccelerationStructureInfoNV]' for 'VkAccelerationStructureCreateInfoNV.info' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}