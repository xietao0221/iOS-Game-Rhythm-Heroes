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

// AudioProcessor
struct AudioProcessor_t2423098748;
// System.Double[]
struct DoubleU5BU5D_t1048280995;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// AudioProcessor/AudioCallbacks
struct AudioCallbacks_t2473994680;

#include "codegen/il2cpp-codegen.h"

// System.Void AudioProcessor::.ctor()
extern "C"  void AudioProcessor__ctor_m3341396639 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 AudioProcessor::getCurrentTimeMillis()
extern "C"  int64_t AudioProcessor_getCurrentTimeMillis_m2494678154 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::initArrays()
extern "C"  void AudioProcessor_initArrays_m3995805583 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::Start()
extern "C"  void AudioProcessor_Start_m2288534431 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::tapTempo()
extern "C"  void AudioProcessor_tapTempo_m658815965 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double[] AudioProcessor::toDoubleArray(System.Single[])
extern "C"  DoubleU5BU5D_t1048280995* AudioProcessor_toDoubleArray_m3055473504 (AudioProcessor_t2423098748 * __this, SingleU5BU5D_t1219431280* ___arr0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::Update()
extern "C"  void AudioProcessor_Update_m2230942798 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::changeCameraColor()
extern "C"  void AudioProcessor_changeCameraColor_m3796794315 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioProcessor::getBandWidth()
extern "C"  float AudioProcessor_getBandWidth_m1919797644 (AudioProcessor_t2423098748 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AudioProcessor::freqToIndex(System.Int32)
extern "C"  int32_t AudioProcessor_freqToIndex_m793311647 (AudioProcessor_t2423098748 * __this, int32_t ___freq0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::computeAverages(System.Single[])
extern "C"  void AudioProcessor_computeAverages_m4170463199 (AudioProcessor_t2423098748 * __this, SingleU5BU5D_t1219431280* ___data0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioProcessor::map(System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C"  float AudioProcessor_map_m650653682 (AudioProcessor_t2423098748 * __this, float ___s0, float ___a11, float ___a22, float ___b13, float ___b24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AudioProcessor::constrain(System.Single,System.Single,System.Single)
extern "C"  float AudioProcessor_constrain_m4001026029 (AudioProcessor_t2423098748 * __this, float ___value0, float ___inclusiveMinimum1, float ___inlusiveMaximum2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::addAudioCallback(AudioProcessor/AudioCallbacks)
extern "C"  void AudioProcessor_addAudioCallback_m1494138248 (AudioProcessor_t2423098748 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AudioProcessor::removeAudioCallback(AudioProcessor/AudioCallbacks)
extern "C"  void AudioProcessor_removeAudioCallback_m3072698803 (AudioProcessor_t2423098748 * __this, Il2CppObject * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
