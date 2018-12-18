/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkExtent3D.h"

Nan::Persistent<v8::FunctionTemplate> _VkExtent3D::constructor;

_VkExtent3D::_VkExtent3D() {
  
  
}

_VkExtent3D::~_VkExtent3D() {
  //printf("VkExtent3D deconstructed!!\n");
  
  
  
  
}

void _VkExtent3D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExtent3D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExtent3D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("width").ToLocalChecked(), Getwidth, Setwidth, ctor);
  SetPrototypeAccessor(proto, Nan::New("height").ToLocalChecked(), Getheight, Setheight, ctor);
  SetPrototypeAccessor(proto, Nan::New("depth").ToLocalChecked(), Getdepth, Setdepth, ctor);
  Nan::Set(target, Nan::New("VkExtent3D").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExtent3D::flush() {
  _VkExtent3D *self = this;
  
  return true;
}

NAN_METHOD(_VkExtent3D::New) {
  if (info.IsConstructCall()) {
    _VkExtent3D* self = new _VkExtent3D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("width").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("height").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("depth").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExtent3D constructor cannot be invoked without 'new'");
  }
};

// width
NAN_GETTER(_VkExtent3D::Getwidth) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.width));
}NAN_SETTER(_VkExtent3D::Setwidth) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  if (value->IsNumber()) {
    self->instance.width = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExtent3D.width' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// height
NAN_GETTER(_VkExtent3D::Getheight) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.height));
}NAN_SETTER(_VkExtent3D::Setheight) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  if (value->IsNumber()) {
    self->instance.height = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExtent3D.height' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// depth
NAN_GETTER(_VkExtent3D::Getdepth) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.depth));
}NAN_SETTER(_VkExtent3D::Setdepth) {
  _VkExtent3D *self = Nan::ObjectWrap::Unwrap<_VkExtent3D>(info.This());
  if (value->IsNumber()) {
    self->instance.depth = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkExtent3D.depth' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}