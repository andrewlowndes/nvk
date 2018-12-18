/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkDrawIndexedIndirectCommand.h"

Nan::Persistent<v8::FunctionTemplate> _VkDrawIndexedIndirectCommand::constructor;

_VkDrawIndexedIndirectCommand::_VkDrawIndexedIndirectCommand() {
  
  
}

_VkDrawIndexedIndirectCommand::~_VkDrawIndexedIndirectCommand() {
  //printf("VkDrawIndexedIndirectCommand deconstructed!!\n");
  
  
  
  
  
  
}

void _VkDrawIndexedIndirectCommand::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDrawIndexedIndirectCommand::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDrawIndexedIndirectCommand").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("indexCount").ToLocalChecked(), GetindexCount, SetindexCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("instanceCount").ToLocalChecked(), GetinstanceCount, SetinstanceCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("firstIndex").ToLocalChecked(), GetfirstIndex, SetfirstIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexOffset").ToLocalChecked(), GetvertexOffset, SetvertexOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("firstInstance").ToLocalChecked(), GetfirstInstance, SetfirstInstance, ctor);
  Nan::Set(target, Nan::New("VkDrawIndexedIndirectCommand").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDrawIndexedIndirectCommand::flush() {
  _VkDrawIndexedIndirectCommand *self = this;
  
  return true;
}

NAN_METHOD(_VkDrawIndexedIndirectCommand::New) {
  if (info.IsConstructCall()) {
    _VkDrawIndexedIndirectCommand* self = new _VkDrawIndexedIndirectCommand();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("indexCount").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("instanceCount").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("firstIndex").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("vertexOffset").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("firstInstance").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDrawIndexedIndirectCommand constructor cannot be invoked without 'new'");
  }
};

// indexCount
NAN_GETTER(_VkDrawIndexedIndirectCommand::GetindexCount) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.indexCount));
}NAN_SETTER(_VkDrawIndexedIndirectCommand::SetindexCount) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  if (value->IsNumber()) {
    self->instance.indexCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDrawIndexedIndirectCommand.indexCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// instanceCount
NAN_GETTER(_VkDrawIndexedIndirectCommand::GetinstanceCount) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.instanceCount));
}NAN_SETTER(_VkDrawIndexedIndirectCommand::SetinstanceCount) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  if (value->IsNumber()) {
    self->instance.instanceCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDrawIndexedIndirectCommand.instanceCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// firstIndex
NAN_GETTER(_VkDrawIndexedIndirectCommand::GetfirstIndex) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.firstIndex));
}NAN_SETTER(_VkDrawIndexedIndirectCommand::SetfirstIndex) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  if (value->IsNumber()) {
    self->instance.firstIndex = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDrawIndexedIndirectCommand.firstIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vertexOffset
NAN_GETTER(_VkDrawIndexedIndirectCommand::GetvertexOffset) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexOffset));
}NAN_SETTER(_VkDrawIndexedIndirectCommand::SetvertexOffset) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  if (value->IsNumber()) {
    self->instance.vertexOffset = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDrawIndexedIndirectCommand.vertexOffset' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// firstInstance
NAN_GETTER(_VkDrawIndexedIndirectCommand::GetfirstInstance) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.firstInstance));
}NAN_SETTER(_VkDrawIndexedIndirectCommand::SetfirstInstance) {
  _VkDrawIndexedIndirectCommand *self = Nan::ObjectWrap::Unwrap<_VkDrawIndexedIndirectCommand>(info.This());
  if (value->IsNumber()) {
    self->instance.firstInstance = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDrawIndexedIndirectCommand.firstInstance' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}