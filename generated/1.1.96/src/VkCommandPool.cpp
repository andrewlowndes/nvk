/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "VkCommandPool.h"

Nan::Persistent<v8::FunctionTemplate> _VkCommandPool::constructor;

_VkCommandPool::_VkCommandPool() {}
_VkCommandPool::~_VkCommandPool() {}

void _VkCommandPool::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCommandPool::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCommandPool").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkCommandPool").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkCommandPool::New) {
  _VkCommandPool* self = new _VkCommandPool();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
