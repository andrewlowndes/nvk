/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPresentRegionsKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPresentRegionsKHR::constructor;

_VkPresentRegionsKHR::_VkPresentRegionsKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PRESENT_REGIONS_KHR;
  vpRegions = new std::vector<VkPresentRegionKHR>;
  
}

_VkPresentRegionsKHR::~_VkPresentRegionsKHR() {
  //printf("VkPresentRegionsKHR deconstructed!!\n");
  
  
  
  vpRegions->clear();
  delete vpRegions;
  
  pRegions.Reset();
  
}

void _VkPresentRegionsKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPresentRegionsKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPresentRegionsKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("swapchainCount").ToLocalChecked(), GetswapchainCount, SetswapchainCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pRegions").ToLocalChecked(), GetpRegions, SetpRegions, ctor);
  Nan::Set(target, Nan::New("VkPresentRegionsKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPresentRegionsKHR::flush() {
  _VkPresentRegionsKHR *self = this;
  if (!(self->pRegions.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pRegions);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.swapchainCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'swapchainCount' for 'VkPresentRegionsKHR.pRegions'");
      return false;
    }
    std::vector<VkPresentRegionKHR>* data = self->vpRegions;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkPresentRegionKHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentRegionKHR]' for 'VkPresentRegionsKHR.pRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkPresentRegionKHR* result = Nan::ObjectWrap::Unwrap<_VkPresentRegionKHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pRegions = data->data();
  }
  return true;
}

NAN_METHOD(_VkPresentRegionsKHR::New) {
  if (info.IsConstructCall()) {
    _VkPresentRegionsKHR* self = new _VkPresentRegionsKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("swapchainCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pRegions").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPresentRegionsKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPresentRegionsKHR::GetsType) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPresentRegionsKHR::SetsType) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPresentRegionsKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// swapchainCount
NAN_GETTER(_VkPresentRegionsKHR::GetswapchainCount) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.swapchainCount));
}NAN_SETTER(_VkPresentRegionsKHR::SetswapchainCount) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.swapchainCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPresentRegionsKHR.swapchainCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pRegions
NAN_GETTER(_VkPresentRegionsKHR::GetpRegions) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  if (self->pRegions.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pRegions);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentRegionsKHR::SetpRegions) {
  _VkPresentRegionsKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionsKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pRegions.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pRegions.Reset();
      self->instance.pRegions = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentRegionKHR]' for 'VkPresentRegionsKHR.pRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pRegions = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPresentRegionKHR]' for 'VkPresentRegionsKHR.pRegions' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}