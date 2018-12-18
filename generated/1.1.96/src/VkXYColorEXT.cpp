/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkXYColorEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkXYColorEXT::constructor;

_VkXYColorEXT::_VkXYColorEXT() {
  
  
}

_VkXYColorEXT::~_VkXYColorEXT() {
  //printf("VkXYColorEXT deconstructed!!\n");
  
  
  
}

void _VkXYColorEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkXYColorEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkXYColorEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  Nan::Set(target, Nan::New("VkXYColorEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkXYColorEXT::flush() {
  _VkXYColorEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkXYColorEXT::New) {
  if (info.IsConstructCall()) {
    _VkXYColorEXT* self = new _VkXYColorEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("x").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("y").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkXYColorEXT constructor cannot be invoked without 'new'");
  }
};

// x
NAN_GETTER(_VkXYColorEXT::Getx) {
  _VkXYColorEXT *self = Nan::ObjectWrap::Unwrap<_VkXYColorEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.x));
}NAN_SETTER(_VkXYColorEXT::Setx) {
  _VkXYColorEXT *self = Nan::ObjectWrap::Unwrap<_VkXYColorEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.x = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkXYColorEXT.x' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// y
NAN_GETTER(_VkXYColorEXT::Gety) {
  _VkXYColorEXT *self = Nan::ObjectWrap::Unwrap<_VkXYColorEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.y));
}NAN_SETTER(_VkXYColorEXT::Sety) {
  _VkXYColorEXT *self = Nan::ObjectWrap::Unwrap<_VkXYColorEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.y = static_cast<float>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkXYColorEXT.y' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}