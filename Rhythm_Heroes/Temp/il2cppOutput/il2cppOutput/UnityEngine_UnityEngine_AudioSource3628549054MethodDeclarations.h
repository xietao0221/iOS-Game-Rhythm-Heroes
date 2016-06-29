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

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FFTWindow1124744433.h"

// System.Void UnityEngine.AudioSource::PlayDelayed(System.Single)
extern "C"  void AudioSource_PlayDelayed_m2357889495 (AudioSource_t3628549054 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m4213444423 (AudioSource_t3628549054 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumDataHelper(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumDataHelper_m2191873714 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples0, int32_t ___channel1, int32_t ___window2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::GetSpectrumData(System.Single[],System.Int32,UnityEngine.FFTWindow)
extern "C"  void AudioSource_GetSpectrumData_m3618983524 (AudioSource_t3628549054 * __this, SingleU5BU5D_t1219431280* ___samples0, int32_t ___channel1, int32_t ___window2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
