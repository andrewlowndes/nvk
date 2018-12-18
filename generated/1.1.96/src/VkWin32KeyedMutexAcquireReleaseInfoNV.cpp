/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.1.0
 */
#include "utils.h"
#include "index.h"
#include "VkWin32KeyedMutexAcquireReleaseInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkWin32KeyedMutexAcquireReleaseInfoNV::constructor;

_VkWin32KeyedMutexAcquireReleaseInfoNV::_VkWin32KeyedMutexAcquireReleaseInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_WIN32_KEYED_MUTEX_ACQUIRE_RELEASE_INFO_NV;
  vpAcquireSyncs = new std::vector<VkDeviceMemory>;
  vpReleaseSyncs = new std::vector<VkDeviceMemory>;
  
}

_VkWin32KeyedMutexAcquireReleaseInfoNV::~_VkWin32KeyedMutexAcquireReleaseInfoNV() {
  //printf("VkWin32KeyedMutexAcquireReleaseInfoNV deconstructed!!\n");
  
  
  
  vpAcquireSyncs->clear();
  delete vpAcquireSyncs;
  
  pAcquireSyncs.Reset();
  
  pAcquireKeys.Reset();
  
  pAcquireTimeoutMilliseconds.Reset();
  
  
  vpReleaseSyncs->clear();
  delete vpReleaseSyncs;
  
  pReleaseSyncs.Reset();
  
  pReleaseKeys.Reset();
  
}

void _VkWin32KeyedMutexAcquireReleaseInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkWin32KeyedMutexAcquireReleaseInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkWin32KeyedMutexAcquireReleaseInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("acquireCount").ToLocalChecked(), GetacquireCount, SetacquireCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireSyncs").ToLocalChecked(), GetpAcquireSyncs, SetpAcquireSyncs, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireKeys").ToLocalChecked(), GetpAcquireKeys, SetpAcquireKeys, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAcquireTimeoutMilliseconds").ToLocalChecked(), GetpAcquireTimeoutMilliseconds, SetpAcquireTimeoutMilliseconds, ctor);
  SetPrototypeAccessor(proto, Nan::New("releaseCount").ToLocalChecked(), GetreleaseCount, SetreleaseCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pReleaseSyncs").ToLocalChecked(), GetpReleaseSyncs, SetpReleaseSyncs, ctor);
  SetPrototypeAccessor(proto, Nan::New("pReleaseKeys").ToLocalChecked(), GetpReleaseKeys, SetpReleaseKeys, ctor);
  Nan::Set(target, Nan::New("VkWin32KeyedMutexAcquireReleaseInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkWin32KeyedMutexAcquireReleaseInfoNV::flush() {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = this;
  if (!(self->pAcquireSyncs.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pAcquireSyncs);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.acquireCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'acquireCount' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireSyncs'");
      return false;
    }
    std::vector<VkDeviceMemory>* data = self->vpAcquireSyncs;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDeviceMemory* result = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pAcquireSyncs = data->data();
  }if (!(self->pReleaseSyncs.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pReleaseSyncs);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.releaseCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'releaseCount' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseSyncs'");
      return false;
    }
    std::vector<VkDeviceMemory>* data = self->vpReleaseSyncs;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDeviceMemory::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDeviceMemory* result = Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(obj);
      
      data->push_back(result->instance);
    };
    self->instance.pReleaseSyncs = data->data();
  }
  return true;
}

NAN_METHOD(_VkWin32KeyedMutexAcquireReleaseInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkWin32KeyedMutexAcquireReleaseInfoNV* self = new _VkWin32KeyedMutexAcquireReleaseInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("acquireCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pAcquireSyncs").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pAcquireKeys").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pAcquireTimeoutMilliseconds").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("releaseCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pReleaseSyncs").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pReleaseKeys").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkWin32KeyedMutexAcquireReleaseInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetsType) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetsType) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// acquireCount
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetacquireCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.acquireCount));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetacquireCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.acquireCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.acquireCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAcquireSyncs
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetpAcquireSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (self->pAcquireSyncs.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireSyncs);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetpAcquireSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAcquireSyncs.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAcquireSyncs.Reset();
      self->instance.pAcquireSyncs = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pAcquireSyncs = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAcquireKeys
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetpAcquireKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (self->pAcquireKeys.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireKeys);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetpAcquireKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pAcquireKeys.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pAcquireKeys.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pAcquireKeys = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pAcquireKeys = nullptr;
  }
}// pAcquireTimeoutMilliseconds
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetpAcquireTimeoutMilliseconds) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (self->pAcquireTimeoutMilliseconds.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAcquireTimeoutMilliseconds);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetpAcquireTimeoutMilliseconds) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pAcquireTimeoutMilliseconds.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireTimeoutMilliseconds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pAcquireTimeoutMilliseconds.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pAcquireTimeoutMilliseconds' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pAcquireTimeoutMilliseconds = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pAcquireTimeoutMilliseconds = nullptr;
  }
}// releaseCount
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetreleaseCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.releaseCount));
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetreleaseCount) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.releaseCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.releaseCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pReleaseSyncs
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetpReleaseSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (self->pReleaseSyncs.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pReleaseSyncs);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetpReleaseSyncs) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pReleaseSyncs.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pReleaseSyncs.Reset();
      self->instance.pReleaseSyncs = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pReleaseSyncs = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDeviceMemory]' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseSyncs' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pReleaseKeys
NAN_GETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::GetpReleaseKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  if (self->pReleaseKeys.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pReleaseKeys);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkWin32KeyedMutexAcquireReleaseInfoNV::SetpReleaseKeys) {
  _VkWin32KeyedMutexAcquireReleaseInfoNV *self = Nan::ObjectWrap::Unwrap<_VkWin32KeyedMutexAcquireReleaseInfoNV>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsBigUint64Array()) {
        self->pReleaseKeys.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pReleaseKeys.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'BigUint64Array' for 'VkWin32KeyedMutexAcquireReleaseInfoNV.pReleaseKeys' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pReleaseKeys = getTypedArrayData<uint64_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pReleaseKeys = nullptr;
  }
}