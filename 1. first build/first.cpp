/*
 * @Author: your name
 * @Date: 2020-04-19 14:44:43
 * @LastEditTime: 2020-04-19 14:54:31
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /nyaa-nodejs-demo/1. first build/first.cpp
 */
#include <node.h>

namespace __first__ {

using v8::FunctionCallbackInfo;
using v8::NewStringType;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Method(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    // args.GetReturnValue().Set(String::NewFromUtf8(isolate, "first build"));
    args.GetReturnValue().Set(String::NewFromUtf8(isolate, "first build").ToLocalChecked());
}

void init(Local<Object> exports)
{
    NODE_SET_METHOD(exports, "first", Method);
}

NODE_MODULE(addon, init)

}