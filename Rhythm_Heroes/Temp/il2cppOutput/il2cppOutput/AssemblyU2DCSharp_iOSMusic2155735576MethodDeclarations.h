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

// iOSMusic
struct iOSMusic_t2155735576;
// UnityEngine.WWW
struct WWW_t1522972100;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_WWW1522972100.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"
#include "UnityEngine_UnityEngine_AudioClip3714538611.h"
#include "mscorlib_System_String968488902.h"

// System.Void iOSMusic::.ctor()
extern "C"  void iOSMusic__ctor_m3438063491 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::.cctor()
extern "C"  void iOSMusic__cctor_m3018656906 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW iOSMusic::get_MusicLoader()
extern "C"  WWW_t1522972100 * iOSMusic_get_MusicLoader_m2860235549 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::set_MusicLoader(UnityEngine.WWW)
extern "C"  void iOSMusic_set_MusicLoader_m1250373334 (iOSMusic_t2155735576 * __this, WWW_t1522972100 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource iOSMusic::get_iOSMusicAudioSource()
extern "C"  AudioSource_t3628549054 * iOSMusic_get_iOSMusicAudioSource_m1695760824 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::set_iOSMusicAudioSource(UnityEngine.AudioSource)
extern "C"  void iOSMusic_set_iOSMusicAudioSource_m240945755 (iOSMusic_t2155735576 * __this, AudioSource_t3628549054 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip iOSMusic::get_iOSMusicClip()
extern "C"  AudioClip_t3714538611 * iOSMusic_get_iOSMusicClip_m3417835926 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::set_iOSMusicClip(UnityEngine.AudioClip)
extern "C"  void iOSMusic_set_iOSMusicClip_m2048228125 (Il2CppObject * __this /* static, unused */, AudioClip_t3714538611 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::readLocalMusic(System.Int32)
extern "C"  void iOSMusic_readLocalMusic_m2226170050 (Il2CppObject * __this /* static, unused */, int32_t ___musicNum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSMusic::get_HasAudioClipStartedPlaying()
extern "C"  bool iOSMusic_get_HasAudioClipStartedPlaying_m3937052535 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::set_HasAudioClipStartedPlaying(System.Boolean)
extern "C"  void iOSMusic_set_HasAudioClipStartedPlaying_m3277054318 (iOSMusic_t2155735576 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean iOSMusic::get_ShouldAppendToPlaylist()
extern "C"  bool iOSMusic_get_ShouldAppendToPlaylist_m2359950168 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::set_ShouldAppendToPlaylist(System.Boolean)
extern "C"  void iOSMusic_set_ShouldAppendToPlaylist_m1831647119 (iOSMusic_t2155735576 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::Awake()
extern "C"  void iOSMusic_Awake_m3675668710 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::Start()
extern "C"  void iOSMusic_Start_m2385201283 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::Update()
extern "C"  void iOSMusic_Update_m932647914 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::CheckAudioSourcePlayback()
extern "C"  void iOSMusic_CheckAudioSourcePlayback_m1785806597 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::HandleAppendToggleChange(System.Boolean)
extern "C"  void iOSMusic_HandleAppendToggleChange_m3795314110 (iOSMusic_t2155735576 * __this, bool ___toggle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ResetButtonStates()
extern "C"  void iOSMusic_ResetButtonStates_m420947620 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::LoadAudioClip()
extern "C"  void iOSMusic_LoadAudioClip_m122702497 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator iOSMusic::LoadMusic(System.String)
extern "C"  Il2CppObject * iOSMusic_LoadMusic_m3984490890 (iOSMusic_t2155735576 * __this, String_t* ___songPath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractTitle(System.String)
extern "C"  void iOSMusic_ExtractTitle_m2818124810 (iOSMusic_t2155735576 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractArtist(System.String)
extern "C"  void iOSMusic_ExtractArtist_m1386102745 (iOSMusic_t2155735576 * __this, String_t* ___artist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractAlbumTitle(System.String)
extern "C"  void iOSMusic_ExtractAlbumTitle_m2853582391 (iOSMusic_t2155735576 * __this, String_t* ___albumTitle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractBPM(System.String)
extern "C"  void iOSMusic_ExtractBPM_m1455911395 (iOSMusic_t2155735576 * __this, String_t* ___bpm0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractGenre(System.String)
extern "C"  void iOSMusic_ExtractGenre_m4138183039 (iOSMusic_t2155735576 * __this, String_t* ___genre0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractLyrics(System.String)
extern "C"  void iOSMusic_ExtractLyrics_m2870552460 (iOSMusic_t2155735576 * __this, String_t* ___lyrics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractDuration(System.String)
extern "C"  void iOSMusic_ExtractDuration_m260026924 (iOSMusic_t2155735576 * __this, String_t* ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::ExtractArtwork()
extern "C"  void iOSMusic_ExtractArtwork_m2984868052 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void iOSMusic::UserDidCancel()
extern "C"  void iOSMusic_UserDidCancel_m559539567 (iOSMusic_t2155735576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
