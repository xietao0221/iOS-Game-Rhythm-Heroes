#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StatController
struct  StatController_t1292384560  : public MonoBehaviour_t3012272455
{
public:
	// System.Single StatController::score
	float ___score_2;
	// System.Single StatController::combo
	float ___combo_3;
	// UnityEngine.UI.Text StatController::statText
	Text_t3286458198 * ___statText_4;

public:
	inline static int32_t get_offset_of_score_2() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___score_2)); }
	inline float get_score_2() const { return ___score_2; }
	inline float* get_address_of_score_2() { return &___score_2; }
	inline void set_score_2(float value)
	{
		___score_2 = value;
	}

	inline static int32_t get_offset_of_combo_3() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___combo_3)); }
	inline float get_combo_3() const { return ___combo_3; }
	inline float* get_address_of_combo_3() { return &___combo_3; }
	inline void set_combo_3(float value)
	{
		___combo_3 = value;
	}

	inline static int32_t get_offset_of_statText_4() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___statText_4)); }
	inline Text_t3286458198 * get_statText_4() const { return ___statText_4; }
	inline Text_t3286458198 ** get_address_of_statText_4() { return &___statText_4; }
	inline void set_statText_4(Text_t3286458198 * value)
	{
		___statText_4 = value;
		Il2CppCodeGenWriteBarrier(&___statText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
