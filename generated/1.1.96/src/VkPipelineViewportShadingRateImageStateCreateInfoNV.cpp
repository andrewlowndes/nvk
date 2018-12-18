/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineViewportShadingRateImageStateCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineViewportShadingRateImageStateCreateInfoNV::constructor;

_VkPipelineViewportShadingRateImageStateCreateInfoNV::_VkPipelineViewportShadingRateImageStateCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_SHADING_RATE_IMAGE_STATE_CREATE_INFO_NV;
  vpShadingRatePalettes = new std::vector<VkShadingRatePaletteNV>;
  
}

_VkPipelineViewportShadingRateImageStateCreateInfoNV::~_VkPipelineViewportShadingRateImageStateCreateInfoNV() {
  //printf("VkPipelineViewportShadingRateImageStateCreateInfoNV deconstructed!!\n");
  
  
  
  
  vpShadingRatePalettes->clear();
  delete vpShadingRatePalettes;
  
  pShadingRatePalettes.Reset();
  
}

void _VkPipelineViewportShadingRateImageStateCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineViewportShadingRateImageStateCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineViewportShadingRateImageStateCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("shadingRateImageEnable").ToLocalChecked(), GetshadingRateImageEnable, SetshadingRateImageEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewportCount").ToLocalChecked(), GetviewportCount, SetviewportCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pShadingRatePalettes").ToLocalChecked(), GetpShadingRatePalettes, SetpShadingRatePalettes, ctor);
  Nan::Set(target, Nan::New("VkPipelineViewportShadingRateImageStateCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineViewportShadingRateImageStateCreateInfoNV::flush() {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = this;
  if (!(self->pShadingRatePalettes.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pShadingRatePalettes);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.viewportCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'viewportCount' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.pShadingRatePalettes'");
      return false;
    }
    std::vector<VkShadingRatePaletteNV>* data = self->vpShadingRatePalettes;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkShadingRatePaletteNV::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkShadingRatePaletteNV]' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.pShadingRatePalettes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkShadingRatePaletteNV* result = Nan::ObjectWrap::Unwrap<_VkShadingRatePaletteNV>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pShadingRatePalettes = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineViewportShadingRateImageStateCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkPipelineViewportShadingRateImageStateCreateInfoNV* self = new _VkPipelineViewportShadingRateImageStateCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("shadingRateImageEnable").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("viewportCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pShadingRatePalettes").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineViewportShadingRateImageStateCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::GetsType) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::SetsType) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// shadingRateImageEnable
NAN_GETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::GetshadingRateImageEnable) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shadingRateImageEnable));
}NAN_SETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::SetshadingRateImageEnable) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.shadingRateImageEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.shadingRateImageEnable' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// viewportCount
NAN_GETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::GetviewportCount) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewportCount));
}NAN_SETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::SetviewportCount) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.viewportCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.viewportCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pShadingRatePalettes
NAN_GETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::GetpShadingRatePalettes) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  if (self->pShadingRatePalettes.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pShadingRatePalettes);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportShadingRateImageStateCreateInfoNV::SetpShadingRatePalettes) {
  _VkPipelineViewportShadingRateImageStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportShadingRateImageStateCreateInfoNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pShadingRatePalettes.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pShadingRatePalettes.Reset();
      self->instance.pShadingRatePalettes = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkShadingRatePaletteNV]' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.pShadingRatePalettes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pShadingRatePalettes = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkShadingRatePaletteNV]' for 'VkPipelineViewportShadingRateImageStateCreateInfoNV.pShadingRatePalettes' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}