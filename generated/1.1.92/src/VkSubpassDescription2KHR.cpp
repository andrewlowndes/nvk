/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkSubpassDescription2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkSubpassDescription2KHR::constructor;

_VkSubpassDescription2KHR::_VkSubpassDescription2KHR() {
  instance.sType = VK_STRUCTURE_TYPE_SUBPASS_DESCRIPTION_2_KHR;
  vpInputAttachments = new std::vector<VkAttachmentReference2KHR>;
  vpColorAttachments = new std::vector<VkAttachmentReference2KHR>;
  vpResolveAttachments = new std::vector<VkAttachmentReference2KHR>;
  
}

_VkSubpassDescription2KHR::~_VkSubpassDescription2KHR() {
  //printf("VkSubpassDescription2KHR deconstructed!!\n");
  
  
  
  
  
  
  vpInputAttachments->clear();
  delete vpInputAttachments;
  
  pInputAttachments.Reset();
  
  
  vpColorAttachments->clear();
  delete vpColorAttachments;
  
  pColorAttachments.Reset();
  
  vpResolveAttachments->clear();
  delete vpResolveAttachments;
  
  pResolveAttachments.Reset();
  
  pDepthStencilAttachment.Reset();
  
  
  pPreserveAttachments.Reset();
  
}

void _VkSubpassDescription2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSubpassDescription2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSubpassDescription2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineBindPoint").ToLocalChecked(), GetpipelineBindPoint, SetpipelineBindPoint, ctor);
  SetPrototypeAccessor(proto, Nan::New("viewMask").ToLocalChecked(), GetviewMask, SetviewMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("inputAttachmentCount").ToLocalChecked(), GetinputAttachmentCount, SetinputAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pInputAttachments").ToLocalChecked(), GetpInputAttachments, SetpInputAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorAttachmentCount").ToLocalChecked(), GetcolorAttachmentCount, SetcolorAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pColorAttachments").ToLocalChecked(), GetpColorAttachments, SetpColorAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("pResolveAttachments").ToLocalChecked(), GetpResolveAttachments, SetpResolveAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDepthStencilAttachment").ToLocalChecked(), GetpDepthStencilAttachment, SetpDepthStencilAttachment, ctor);
  SetPrototypeAccessor(proto, Nan::New("preserveAttachmentCount").ToLocalChecked(), GetpreserveAttachmentCount, SetpreserveAttachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pPreserveAttachments").ToLocalChecked(), GetpPreserveAttachments, SetpPreserveAttachments, ctor);
  Nan::Set(target, Nan::New("VkSubpassDescription2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSubpassDescription2KHR::flush() {
  _VkSubpassDescription2KHR *self = this;
  if (!(self->pInputAttachments.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pInputAttachments);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.inputAttachmentCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'inputAttachmentCount' for 'VkSubpassDescription2KHR.pInputAttachments'");
      return false;
    }
    std::vector<VkAttachmentReference2KHR>* data = self->vpInputAttachments;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkAttachmentReference2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pInputAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkAttachmentReference2KHR* result = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pInputAttachments = data->data();
  }if (!(self->pColorAttachments.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pColorAttachments);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.colorAttachmentCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'colorAttachmentCount' for 'VkSubpassDescription2KHR.pColorAttachments'");
      return false;
    }
    std::vector<VkAttachmentReference2KHR>* data = self->vpColorAttachments;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkAttachmentReference2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pColorAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkAttachmentReference2KHR* result = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pColorAttachments = data->data();
  }if (!(self->pResolveAttachments.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pResolveAttachments);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.colorAttachmentCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'colorAttachmentCount' for 'VkSubpassDescription2KHR.pResolveAttachments'");
      return false;
    }
    std::vector<VkAttachmentReference2KHR>* data = self->vpResolveAttachments;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkAttachmentReference2KHR::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pResolveAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkAttachmentReference2KHR* result = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pResolveAttachments = data->data();
  }
  return true;
}

NAN_METHOD(_VkSubpassDescription2KHR::New) {
  if (info.IsConstructCall()) {
    _VkSubpassDescription2KHR* self = new _VkSubpassDescription2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pipelineBindPoint").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("viewMask").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("inputAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pInputAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("colorAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pColorAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pResolveAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("pDepthStencilAttachment").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("preserveAttachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess12 = Nan::New("pPreserveAttachments").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      if (obj->Has(sAccess12)) info.This()->Set(sAccess12, obj->Get(sAccess12));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSubpassDescription2KHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSubpassDescription2KHR::GetsType) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSubpassDescription2KHR::SetsType) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkSubpassDescription2KHR::Getflags) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSubpassDescription2KHR::Setflags) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkSubpassDescriptionFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineBindPoint
NAN_GETTER(_VkSubpassDescription2KHR::GetpipelineBindPoint) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineBindPoint));
}NAN_SETTER(_VkSubpassDescription2KHR::SetpipelineBindPoint) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.pipelineBindPoint = static_cast<VkPipelineBindPoint>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.pipelineBindPoint' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// viewMask
NAN_GETTER(_VkSubpassDescription2KHR::GetviewMask) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.viewMask));
}NAN_SETTER(_VkSubpassDescription2KHR::SetviewMask) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.viewMask = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.viewMask' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// inputAttachmentCount
NAN_GETTER(_VkSubpassDescription2KHR::GetinputAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.inputAttachmentCount));
}NAN_SETTER(_VkSubpassDescription2KHR::SetinputAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.inputAttachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.inputAttachmentCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pInputAttachments
NAN_GETTER(_VkSubpassDescription2KHR::GetpInputAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (self->pInputAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pInputAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription2KHR::SetpInputAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pInputAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pInputAttachments.Reset();
      self->instance.pInputAttachments = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pInputAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pInputAttachments = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pInputAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// colorAttachmentCount
NAN_GETTER(_VkSubpassDescription2KHR::GetcolorAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorAttachmentCount));
}NAN_SETTER(_VkSubpassDescription2KHR::SetcolorAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.colorAttachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.colorAttachmentCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pColorAttachments
NAN_GETTER(_VkSubpassDescription2KHR::GetpColorAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (self->pColorAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pColorAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription2KHR::SetpColorAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pColorAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pColorAttachments.Reset();
      self->instance.pColorAttachments = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pColorAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pColorAttachments = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pColorAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pResolveAttachments
NAN_GETTER(_VkSubpassDescription2KHR::GetpResolveAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (self->pResolveAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pResolveAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription2KHR::SetpResolveAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pResolveAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pResolveAttachments.Reset();
      self->instance.pResolveAttachments = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pResolveAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pResolveAttachments = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pResolveAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDepthStencilAttachment
NAN_GETTER(_VkSubpassDescription2KHR::GetpDepthStencilAttachment) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (self->pDepthStencilAttachment.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDepthStencilAttachment);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription2KHR::SetpDepthStencilAttachment) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkAttachmentReference2KHR::constructor)->HasInstance(obj)) {
      self->pDepthStencilAttachment.Reset<v8::Object>(value.As<v8::Object>());
      _VkAttachmentReference2KHR* inst = Nan::ObjectWrap::Unwrap<_VkAttachmentReference2KHR>(obj);
      inst->flush();
      self->instance.pDepthStencilAttachment = &inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pDepthStencilAttachment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->pDepthStencilAttachment.Reset();
    self->instance.pDepthStencilAttachment = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentReference2KHR]' for 'VkSubpassDescription2KHR.pDepthStencilAttachment' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// preserveAttachmentCount
NAN_GETTER(_VkSubpassDescription2KHR::GetpreserveAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.preserveAttachmentCount));
}NAN_SETTER(_VkSubpassDescription2KHR::SetpreserveAttachmentCount) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (value->IsNumber()) {
    self->instance.preserveAttachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkSubpassDescription2KHR.preserveAttachmentCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pPreserveAttachments
NAN_GETTER(_VkSubpassDescription2KHR::GetpPreserveAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  if (self->pPreserveAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pPreserveAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkSubpassDescription2KHR::SetpPreserveAttachments) {
  _VkSubpassDescription2KHR *self = Nan::ObjectWrap::Unwrap<_VkSubpassDescription2KHR>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pPreserveAttachments.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkSubpassDescription2KHR.pPreserveAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pPreserveAttachments.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkSubpassDescription2KHR.pPreserveAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pPreserveAttachments = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pPreserveAttachments = nullptr;
  }
}