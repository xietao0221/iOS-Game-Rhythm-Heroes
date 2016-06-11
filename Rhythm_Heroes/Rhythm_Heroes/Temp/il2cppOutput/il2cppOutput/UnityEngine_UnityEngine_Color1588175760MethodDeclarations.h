#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"

// System.String UnityEngine.Color::ToString()
extern "C"  String_t* Color_ToString_m2277845527 (Color_t1588175760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Color::GetHashCode()
extern "C"  int32_t Color_GetHashCode_m170503301 (Color_t1588175760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Color::Equals(System.Object)
extern "C"  bool Color_Equals_m3016668205 (Color_t1588175760 * __this, Il2CppObject * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
extern "C"  Vector4_t3525329790  Color_op_Implicit_m2638307542 (Il2CppObject * __this /* static, unused */, Color_t1588175760  ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Color_t1588175760;
struct Color_t1588175760_marshaled_pinvoke;

extern "C" void Color_t1588175760_marshal_pinvoke(const Color_t1588175760& unmarshaled, Color_t1588175760_marshaled_pinvoke& marshaled);
extern "C" void Color_t1588175760_marshal_pinvoke_back(const Color_t1588175760_marshaled_pinvoke& marshaled, Color_t1588175760& unmarshaled);
extern "C" void Color_t1588175760_marshal_pinvoke_cleanup(Color_t1588175760_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Color_t1588175760;
struct Color_t1588175760_marshaled_com;

extern "C" void Color_t1588175760_marshal_com(const Color_t1588175760& unmarshaled, Color_t1588175760_marshaled_com& marshaled);
extern "C" void Color_t1588175760_marshal_com_back(const Color_t1588175760_marshaled_com& marshaled, Color_t1588175760& unmarshaled);
extern "C" void Color_t1588175760_marshal_com_cleanup(Color_t1588175760_marshaled_com& marshaled);
