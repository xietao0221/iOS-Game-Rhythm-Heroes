#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

// BackgroundMusicController
struct  BackgroundMusicController_t1016431731  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource BackgroundMusicController::music
	AudioSource_t3628549054 * ___music_2;
	// UnityEngine.AudioClip BackgroundMusicController::clip
	AudioClip_t3714538611 * ___clip_3;
	// System.Boolean BackgroundMusicController::hasBegun
	bool ___hasBegun_4;

public:
	inline static int32_t get_offset_of_music_2() { return static_cast<int32_t>(offsetof(BackgroundMusicController_t1016431731, ___music_2)); }
	inline AudioSource_t3628549054 * get_music_2() const { return ___music_2; }
	inline AudioSource_t3628549054 ** get_address_of_music_2() { return &___music_2; }
	inline void set_music_2(AudioSource_t3628549054 * value)
	{
		___music_2 = value;
		Il2CppCodeGenWriteBarrier(&___music_2, value);
	}

	inline static int32_t get_offset_of_clip_3() { return static_cast<int32_t>(offsetof(BackgroundMusicController_t1016431731, ___clip_3)); }
	inline AudioClip_t3714538611 * get_clip_3() const { return ___clip_3; }
	inline AudioClip_t3714538611 ** get_address_of_clip_3() { return &___clip_3; }
	inline void set_clip_3(AudioClip_t3714538611 * value)
	{
		___clip_3 = value;
		Il2CppCodeGenWriteBarrier(&___clip_3, value);
	}

	inline static int32_t get_offset_of_hasBegun_4() { return static_cast<int32_t>(offsetof(BackgroundMusicController_t1016431731, ___hasBegun_4)); }
	inline bool get_hasBegun_4() const { return ___hasBegun_4; }
	inline bool* get_address_of_hasBegun_4() { return &___hasBegun_4; }
	inline void set_hasBegun_4(bool value)
	{
		___hasBegun_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
