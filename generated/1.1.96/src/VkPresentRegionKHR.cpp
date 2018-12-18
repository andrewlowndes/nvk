/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkPresentRegionKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPresentRegionKHR::constructor;

_VkPresentRegionKHR::_VkPresentRegionKHR() {
  
  vpRectangles = new std::vector<VkRectLayerKHR>;
  
}

_VkPresentRegionKHR::~_VkPresentRegionKHR() {
  //printf("VkPresentRegionKHR deconstructed!!\n");
  
  
  vpRectangles->clear();
  delete vpRectangles;
  
  pRectangles.Reset();
  
}

void _VkPresentRegionKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPresentRegionKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPresentRegionKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("rectangleCount").ToLocalChecked(), GetrectangleCount, SetrectangleCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pRectangles").ToLocalChecked(), GetpRectangles, SetpRectangles, ctor);
  Nan::Set(target, Nan::New("VkPresentRegionKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPresentRegionKHR::flush() {
  _VkPresentRegionKHR *self = this;
  if (!(self->pRectangles.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pRectangles);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.rectangleCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'rectangleCount' for 'VkPresentRegionKHR.pRectangles'");
      return false;
    }
    std::vector<VkRectLayerKHR>* data = self->vpRectangles;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkRectLayerKHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRectLayerKHR]' for 'VkPresentRegionKHR.pRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkRectLayerKHR* result = Nan::ObjectWrap::Unwrap<_VkRectLayerKHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pRectangles = data->data();
  }
  return true;
}

NAN_METHOD(_VkPresentRegionKHR::New) {
  if (info.IsConstructCall()) {
    _VkPresentRegionKHR* self = new _VkPresentRegionKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("rectangleCount").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("pRectangles").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPresentRegionKHR constructor cannot be invoked without 'new'");
  }
};

// rectangleCount
NAN_GETTER(_VkPresentRegionKHR::GetrectangleCount) {
  _VkPresentRegionKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.rectangleCount));
}NAN_SETTER(_VkPresentRegionKHR::SetrectangleCount) {
  _VkPresentRegionKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.rectangleCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPresentRegionKHR.rectangleCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pRectangles
NAN_GETTER(_VkPresentRegionKHR::GetpRectangles) {
  _VkPresentRegionKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionKHR>(info.This());
  if (self->pRectangles.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pRectangles);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPresentRegionKHR::SetpRectangles) {
  _VkPresentRegionKHR *self = Nan::ObjectWrap::Unwrap<_VkPresentRegionKHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pRectangles.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pRectangles.Reset();
      self->instance.pRectangles = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRectLayerKHR]' for 'VkPresentRegionKHR.pRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pRectangles = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRectLayerKHR]' for 'VkPresentRegionKHR.pRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}