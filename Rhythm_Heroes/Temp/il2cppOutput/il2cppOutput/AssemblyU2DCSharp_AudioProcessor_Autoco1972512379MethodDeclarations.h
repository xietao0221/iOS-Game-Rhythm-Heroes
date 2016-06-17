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

// AudioProcessor/Autoco
struct Autoco_t1972512379;

#include "codegen/il2cpp-codegen.h"

// System.Void AudioProcessor/Autoco::.ctor(System.Int32,System.Single,System.Single,System.Single)
extern "C"  void Autoco__ctor_m1201947005 (Autoco_t1972512379 * __this, int32_t ___len0, float ___alpha1, float ___framePeriod2, float ___bandwidth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor/Autoco::newVal(System.Single)
extern "C"  void Autoco_newVal_m2756304963 (Autoco_t1972512379 * __this, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioProcessor/Autoco::autoco(System.Int32)
extern "C"  float Autoco_autoco_m1077754599 (Autoco_t1972512379 * __this, int32_t ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioProcessor/Autoco::avgBpm()
extern "C"  float Autoco_avgBpm_m4253921640 (Autoco_t1972512379 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
