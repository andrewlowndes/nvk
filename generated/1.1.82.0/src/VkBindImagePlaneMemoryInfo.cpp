/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#include "utils.h"
#include "index.h"
#include "VkBindImagePlaneMemoryInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkBindImagePlaneMemoryInfo::constructor;

_VkBindImagePlaneMemoryInfo::_VkBindImagePlaneMemoryInfo() {
}

_VkBindImagePlaneMemoryInfo::~_VkBindImagePlaneMemoryInfo() { }

void _VkBindImagePlaneMemoryInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBindImagePlaneMemoryInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBindImagePlaneMemoryInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("planeAspect").ToLocalChecked(), GetplaneAspect, SetplaneAspect, ctor);
  Nan::Set(target, Nan::New("VkBindImagePlaneMemoryInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBindImagePlaneMemoryInfo::New) {
  _VkBindImagePlaneMemoryInfo* self = new _VkBindImagePlaneMemoryInfo();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkBindImagePlaneMemoryInfo::GetsType) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkBindImagePlaneMemoryInfo::SetsType) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// planeAspect
NAN_GETTER(_VkBindImagePlaneMemoryInfo::GetplaneAspect) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.planeAspect));
}NAN_SETTER(_VkBindImagePlaneMemoryInfo::SetplaneAspect) {
  _VkBindImagePlaneMemoryInfo *self = Nan::ObjectWrap::Unwrap<_VkBindImagePlaneMemoryInfo>(info.This());
  self->instance.planeAspect = static_cast<VkImageAspectFlagBits>((int32_t)value->NumberValue());
}