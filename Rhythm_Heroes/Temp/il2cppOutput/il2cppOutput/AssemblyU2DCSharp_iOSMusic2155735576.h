#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// iOSMusic
struct iOSMusic_t2155735576;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// UnityEngine.WWW
struct WWW_t1522972100;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.AudioClip
struct AudioClip_t3714538611;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// iOSMusic
struct  iOSMusic_t2155735576  : public MonoBehaviour_t3012272455
{
public:
	// System.Single[] iOSMusic::musicData
	SingleU5BU5D_t1219431280* ___musicData_3;
	// UnityEngine.WWW iOSMusic::_musicLoader
	WWW_t1522972100 * ____musicLoader_4;
	// UnityEngine.AudioSource iOSMusic::_audioSource
	AudioSource_t3628549054 * ____audioSource_5;
	// System.Boolean iOSMusic::_hasAudioClipStartedPlaying
	bool ____hasAudioClipStartedPlaying_8;
	// System.Boolean iOSMusic::_shouldAppendToPlaylist
	bool ____shouldAppendToPlaylist_9;

public:
	inline static int32_t get_offset_of_musicData_3() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576, ___musicData_3)); }
	inline SingleU5BU5D_t1219431280* get_musicData_3() const { return ___musicData_3; }
	inline SingleU5BU5D_t1219431280** get_address_of_musicData_3() { return &___musicData_3; }
	inline void set_musicData_3(SingleU5BU5D_t1219431280* value)
	{
		___musicData_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicData_3, value);
	}

	inline static int32_t get_offset_of__musicLoader_4() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576, ____musicLoader_4)); }
	inline WWW_t1522972100 * get__musicLoader_4() const { return ____musicLoader_4; }
	inline WWW_t1522972100 ** get_address_of__musicLoader_4() { return &____musicLoader_4; }
	inline void set__musicLoader_4(WWW_t1522972100 * value)
	{
		____musicLoader_4 = value;
		Il2CppCodeGenWriteBarrier(&____musicLoader_4, value);
	}

	inline static int32_t get_offset_of__audioSource_5() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576, ____audioSource_5)); }
	inline AudioSource_t3628549054 * get__audioSource_5() const { return ____audioSource_5; }
	inline AudioSource_t3628549054 ** get_address_of__audioSource_5() { return &____audioSource_5; }
	inline void set__audioSource_5(AudioSource_t3628549054 * value)
	{
		____audioSource_5 = value;
		Il2CppCodeGenWriteBarrier(&____audioSource_5, value);
	}

	inline static int32_t get_offset_of__hasAudioClipStartedPlaying_8() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576, ____hasAudioClipStartedPlaying_8)); }
	inline bool get__hasAudioClipStartedPlaying_8() const { return ____hasAudioClipStartedPlaying_8; }
	inline bool* get_address_of__hasAudioClipStartedPlaying_8() { return &____hasAudioClipStartedPlaying_8; }
	inline void set__hasAudioClipStartedPlaying_8(bool value)
	{
		____hasAudioClipStartedPlaying_8 = value;
	}

	inline static int32_t get_offset_of__shouldAppendToPlaylist_9() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576, ____shouldAppendToPlaylist_9)); }
	inline bool get__shouldAppendToPlaylist_9() const { return ____shouldAppendToPlaylist_9; }
	inline bool* get_address_of__shouldAppendToPlaylist_9() { return &____shouldAppendToPlaylist_9; }
	inline void set__shouldAppendToPlaylist_9(bool value)
	{
		____shouldAppendToPlaylist_9 = value;
	}
};

struct iOSMusic_t2155735576_StaticFields
{
public:
	// iOSMusic iOSMusic::instance
	iOSMusic_t2155735576 * ___instance_2;
	// UnityEngine.AudioClip iOSMusic::_audioClip
	AudioClip_t3714538611 * ____audioClip_6;
	// UnityEngine.AudioClip iOSMusic::_audioClip2
	AudioClip_t3714538611 * ____audioClip2_7;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576_StaticFields, ___instance_2)); }
	inline iOSMusic_t2155735576 * get_instance_2() const { return ___instance_2; }
	inline iOSMusic_t2155735576 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(iOSMusic_t2155735576 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of__audioClip_6() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576_StaticFields, ____audioClip_6)); }
	inline AudioClip_t3714538611 * get__audioClip_6() const { return ____audioClip_6; }
	inline AudioClip_t3714538611 ** get_address_of__audioClip_6() { return &____audioClip_6; }
	inline void set__audioClip_6(AudioClip_t3714538611 * value)
	{
		____audioClip_6 = value;
		Il2CppCodeGenWriteBarrier(&____audioClip_6, value);
	}

	inline static int32_t get_offset_of__audioClip2_7() { return static_cast<int32_t>(offsetof(iOSMusic_t2155735576_StaticFields, ____audioClip2_7)); }
	inline AudioClip_t3714538611 * get__audioClip2_7() const { return ____audioClip2_7; }
	inline AudioClip_t3714538611 ** get_address_of__audioClip2_7() { return &____audioClip2_7; }
	inline void set__audioClip2_7(AudioClip_t3714538611 * value)
	{
		____audioClip2_7 = value;
		Il2CppCodeGenWriteBarrier(&____audioClip2_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
