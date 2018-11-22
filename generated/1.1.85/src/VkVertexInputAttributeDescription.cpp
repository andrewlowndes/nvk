/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkVertexInputAttributeDescription.h"

Nan::Persistent<v8::FunctionTemplate> _VkVertexInputAttributeDescription::constructor;

_VkVertexInputAttributeDescription::_VkVertexInputAttributeDescription() {
  
  
}

_VkVertexInputAttributeDescription::~_VkVertexInputAttributeDescription() {
  //printf("VkVertexInputAttributeDescription deconstructed!!\n");
  
  
  
  
  
}

void _VkVertexInputAttributeDescription::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkVertexInputAttributeDescription::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkVertexInputAttributeDescription").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("location").ToLocalChecked(), Getlocation, Setlocation, ctor);
  SetPrototypeAccessor(proto, Nan::New("binding").ToLocalChecked(), Getbinding, Setbinding, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("offset").ToLocalChecked(), Getoffset, Setoffset, ctor);
  Nan::Set(target, Nan::New("VkVertexInputAttributeDescription").ToLocalChecked(), ctor->GetFunction());
}

bool _VkVertexInputAttributeDescription::flush() {
  _VkVertexInputAttributeDescription *self = this;
  
  return true;
}

NAN_METHOD(_VkVertexInputAttributeDescription::New) {
  if (info.IsConstructCall()) {
    _VkVertexInputAttributeDescription* self = new _VkVertexInputAttributeDescription();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("location").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("binding").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("offset").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkVertexInputAttributeDescription constructor cannot be invoked without 'new'");
  }
};

// location
NAN_GETTER(_VkVertexInputAttributeDescription::Getlocation) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.location));
}NAN_SETTER(_VkVertexInputAttributeDescription::Setlocation) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.location = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkVertexInputAttributeDescription.location'");
  }
}// binding
NAN_GETTER(_VkVertexInputAttributeDescription::Getbinding) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.binding));
}NAN_SETTER(_VkVertexInputAttributeDescription::Setbinding) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.binding = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkVertexInputAttributeDescription.binding'");
  }
}// format
NAN_GETTER(_VkVertexInputAttributeDescription::Getformat) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkVertexInputAttributeDescription::Setformat) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkVertexInputAttributeDescription.format'");
  }
}// offset
NAN_GETTER(_VkVertexInputAttributeDescription::Getoffset) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.offset));
}NAN_SETTER(_VkVertexInputAttributeDescription::Setoffset) {
  _VkVertexInputAttributeDescription *self = Nan::ObjectWrap::Unwrap<_VkVertexInputAttributeDescription>(info.This());
  if (value->IsNumber()) {
    self->instance.offset = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkVertexInputAttributeDescription.offset'");
  }
}