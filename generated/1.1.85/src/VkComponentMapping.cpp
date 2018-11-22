/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkComponentMapping.h"

Nan::Persistent<v8::FunctionTemplate> _VkComponentMapping::constructor;

_VkComponentMapping::_VkComponentMapping() {
  
  
}

_VkComponentMapping::~_VkComponentMapping() {
  //printf("VkComponentMapping deconstructed!!\n");
  
  
  
  
  
}

void _VkComponentMapping::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkComponentMapping::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkComponentMapping").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("r").ToLocalChecked(), Getr, Setr, ctor);
  SetPrototypeAccessor(proto, Nan::New("g").ToLocalChecked(), Getg, Setg, ctor);
  SetPrototypeAccessor(proto, Nan::New("b").ToLocalChecked(), Getb, Setb, ctor);
  SetPrototypeAccessor(proto, Nan::New("a").ToLocalChecked(), Geta, Seta, ctor);
  Nan::Set(target, Nan::New("VkComponentMapping").ToLocalChecked(), ctor->GetFunction());
}

bool _VkComponentMapping::flush() {
  _VkComponentMapping *self = this;
  
  return true;
}

NAN_METHOD(_VkComponentMapping::New) {
  if (info.IsConstructCall()) {
    _VkComponentMapping* self = new _VkComponentMapping();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("r").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("g").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("b").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("a").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkComponentMapping constructor cannot be invoked without 'new'");
  }
};

// r
NAN_GETTER(_VkComponentMapping::Getr) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.r));
}NAN_SETTER(_VkComponentMapping::Setr) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  if (value->IsNumber()) {
    self->instance.r = static_cast<VkComponentSwizzle>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkComponentMapping.r'");
  }
}// g
NAN_GETTER(_VkComponentMapping::Getg) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.g));
}NAN_SETTER(_VkComponentMapping::Setg) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  if (value->IsNumber()) {
    self->instance.g = static_cast<VkComponentSwizzle>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkComponentMapping.g'");
  }
}// b
NAN_GETTER(_VkComponentMapping::Getb) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.b));
}NAN_SETTER(_VkComponentMapping::Setb) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  if (value->IsNumber()) {
    self->instance.b = static_cast<VkComponentSwizzle>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkComponentMapping.b'");
  }
}// a
NAN_GETTER(_VkComponentMapping::Geta) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.a));
}NAN_SETTER(_VkComponentMapping::Seta) {
  _VkComponentMapping *self = Nan::ObjectWrap::Unwrap<_VkComponentMapping>(info.This());
  if (value->IsNumber()) {
    self->instance.a = static_cast<VkComponentSwizzle>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkComponentMapping.a'");
  }
}