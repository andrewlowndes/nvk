/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceConditionalRenderingFeaturesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceConditionalRenderingFeaturesEXT::constructor;

_VkPhysicalDeviceConditionalRenderingFeaturesEXT::_VkPhysicalDeviceConditionalRenderingFeaturesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT;
  
}

_VkPhysicalDeviceConditionalRenderingFeaturesEXT::~_VkPhysicalDeviceConditionalRenderingFeaturesEXT() {
  //printf("VkPhysicalDeviceConditionalRenderingFeaturesEXT deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceConditionalRenderingFeaturesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceConditionalRenderingFeaturesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("conditionalRendering").ToLocalChecked(), GetconditionalRendering, SetconditionalRendering, ctor);
  SetPrototypeAccessor(proto, Nan::New("inheritedConditionalRendering").ToLocalChecked(), GetinheritedConditionalRendering, SetinheritedConditionalRendering, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceConditionalRenderingFeaturesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceConditionalRenderingFeaturesEXT::flush() {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceConditionalRenderingFeaturesEXT* self = new _VkPhysicalDeviceConditionalRenderingFeaturesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("conditionalRendering").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("inheritedConditionalRendering").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceConditionalRenderingFeaturesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::GetsType) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::SetsType) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConditionalRenderingFeaturesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// conditionalRendering
NAN_GETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::GetconditionalRendering) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.conditionalRendering));
}NAN_SETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::SetconditionalRendering) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.conditionalRendering = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConditionalRenderingFeaturesEXT.conditionalRendering' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// inheritedConditionalRendering
NAN_GETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::GetinheritedConditionalRendering) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inheritedConditionalRendering));
}NAN_SETTER(_VkPhysicalDeviceConditionalRenderingFeaturesEXT::SetinheritedConditionalRendering) {
  _VkPhysicalDeviceConditionalRenderingFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceConditionalRenderingFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.inheritedConditionalRendering = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceConditionalRenderingFeaturesEXT.inheritedConditionalRendering' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}