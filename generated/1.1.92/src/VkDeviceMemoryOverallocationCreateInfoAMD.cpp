/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceMemoryOverallocationCreateInfoAMD.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceMemoryOverallocationCreateInfoAMD::constructor;

_VkDeviceMemoryOverallocationCreateInfoAMD::_VkDeviceMemoryOverallocationCreateInfoAMD() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_MEMORY_OVERALLOCATION_CREATE_INFO_AMD;
  
}

_VkDeviceMemoryOverallocationCreateInfoAMD::~_VkDeviceMemoryOverallocationCreateInfoAMD() {
  //printf("VkDeviceMemoryOverallocationCreateInfoAMD deconstructed!!\n");
  
  
  
}

void _VkDeviceMemoryOverallocationCreateInfoAMD::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceMemoryOverallocationCreateInfoAMD::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceMemoryOverallocationCreateInfoAMD").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("overallocationBehavior").ToLocalChecked(), GetoverallocationBehavior, SetoverallocationBehavior, ctor);
  Nan::Set(target, Nan::New("VkDeviceMemoryOverallocationCreateInfoAMD").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceMemoryOverallocationCreateInfoAMD::flush() {
  _VkDeviceMemoryOverallocationCreateInfoAMD *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceMemoryOverallocationCreateInfoAMD::New) {
  if (info.IsConstructCall()) {
    _VkDeviceMemoryOverallocationCreateInfoAMD* self = new _VkDeviceMemoryOverallocationCreateInfoAMD();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("overallocationBehavior").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceMemoryOverallocationCreateInfoAMD constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceMemoryOverallocationCreateInfoAMD::GetsType) {
  _VkDeviceMemoryOverallocationCreateInfoAMD *self = Nan::ObjectWrap::Unwrap<_VkDeviceMemoryOverallocationCreateInfoAMD>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceMemoryOverallocationCreateInfoAMD::SetsType) {
  _VkDeviceMemoryOverallocationCreateInfoAMD *self = Nan::ObjectWrap::Unwrap<_VkDeviceMemoryOverallocationCreateInfoAMD>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceMemoryOverallocationCreateInfoAMD.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// overallocationBehavior
NAN_GETTER(_VkDeviceMemoryOverallocationCreateInfoAMD::GetoverallocationBehavior) {
  _VkDeviceMemoryOverallocationCreateInfoAMD *self = Nan::ObjectWrap::Unwrap<_VkDeviceMemoryOverallocationCreateInfoAMD>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.overallocationBehavior));
}NAN_SETTER(_VkDeviceMemoryOverallocationCreateInfoAMD::SetoverallocationBehavior) {
  _VkDeviceMemoryOverallocationCreateInfoAMD *self = Nan::ObjectWrap::Unwrap<_VkDeviceMemoryOverallocationCreateInfoAMD>(info.This());
  if (value->IsNumber()) {
    self->instance.overallocationBehavior = static_cast<VkMemoryOverallocationBehaviorAMD>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceMemoryOverallocationCreateInfoAMD.overallocationBehavior' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}