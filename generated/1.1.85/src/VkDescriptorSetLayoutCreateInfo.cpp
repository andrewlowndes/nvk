/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.8
 */
#include "utils.h"
#include "index.h"
#include "VkDescriptorSetLayoutCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkDescriptorSetLayoutCreateInfo::constructor;

_VkDescriptorSetLayoutCreateInfo::_VkDescriptorSetLayoutCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
  vpBindings = new std::vector<VkDescriptorSetLayoutBinding>;
  
}

_VkDescriptorSetLayoutCreateInfo::~_VkDescriptorSetLayoutCreateInfo() {
  //printf("VkDescriptorSetLayoutCreateInfo deconstructed!!\n");
  
  
  pNext.Reset();
  
  
  
  vpBindings->clear();
  delete vpBindings;
  
  pBindings.Reset();
  
}

void _VkDescriptorSetLayoutCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDescriptorSetLayoutCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDescriptorSetLayoutCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("bindingCount").ToLocalChecked(), GetbindingCount, SetbindingCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pBindings").ToLocalChecked(), GetpBindings, SetpBindings, ctor);
  Nan::Set(target, Nan::New("VkDescriptorSetLayoutCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDescriptorSetLayoutCreateInfo::flush() {
  _VkDescriptorSetLayoutCreateInfo *self = this;
  if (!(self->pBindings.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pBindings);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.bindingCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'bindingCount' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
      return false;
    }
    std::vector<VkDescriptorSetLayoutBinding>* data = self->vpBindings;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDescriptorSetLayoutBinding::constructor)->HasInstance(obj))) {
        Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayoutBinding]' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
        return false;
      }
      _VkDescriptorSetLayoutBinding* result = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutBinding>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pBindings = data->data();
  }
  return true;
}

NAN_METHOD(_VkDescriptorSetLayoutCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkDescriptorSetLayoutCreateInfo* self = new _VkDescriptorSetLayoutCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("bindingCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pBindings").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDescriptorSetLayoutCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetsType) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetsType) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetpNext) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetpNext) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::Getflags) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::Setflags) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDescriptorSetLayoutCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.flags'");
  }
}// bindingCount
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetbindingCount) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bindingCount));
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetbindingCount) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.bindingCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkDescriptorSetLayoutCreateInfo.bindingCount'");
  }
}// pBindings
NAN_GETTER(_VkDescriptorSetLayoutCreateInfo::GetpBindings) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  if (self->pBindings.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pBindings);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDescriptorSetLayoutCreateInfo::SetpBindings) {
  _VkDescriptorSetLayoutCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkDescriptorSetLayoutCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pBindings.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pBindings.Reset();
      self->instance.pBindings = nullptr;
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayoutBinding]' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pBindings = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkDescriptorSetLayoutBinding]' for 'VkDescriptorSetLayoutCreateInfo.pBindings'");
  }
}