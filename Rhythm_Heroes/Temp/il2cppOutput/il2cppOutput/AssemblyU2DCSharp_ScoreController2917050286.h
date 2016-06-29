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

// ScoreController
struct  ScoreController_t2917050286  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text ScoreController::scoreText
	Text_t3286458198 * ___scoreText_2;

public:
	inline static int32_t get_offset_of_scoreText_2() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286, ___scoreText_2)); }
	inline Text_t3286458198 * get_scoreText_2() const { return ___scoreText_2; }
	inline Text_t3286458198 ** get_address_of_scoreText_2() { return &___scoreText_2; }
	inline void set_scoreText_2(Text_t3286458198 * value)
	{
		___scoreText_2 = value;
		Il2CppCodeGenWriteBarrier(&___scoreText_2, value);
	}
};

struct ScoreController_t2917050286_StaticFields
{
public:
	// System.Single ScoreController::scoreCount
	float ___scoreCount_3;
	// System.Single ScoreController::comboMax
	float ___comboMax_4;
	// System.Single ScoreController::combo
	float ___combo_5;
	// System.Single ScoreController::blockNum
	float ___blockNum_6;
	// System.Single ScoreController::missNum
	float ___missNum_7;
	// System.Single ScoreController::perfectNum
	float ___perfectNum_8;

public:
	inline static int32_t get_offset_of_scoreCount_3() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___scoreCount_3)); }
	inline float get_scoreCount_3() const { return ___scoreCount_3; }
	inline float* get_address_of_scoreCount_3() { return &___scoreCount_3; }
	inline void set_scoreCount_3(float value)
	{
		___scoreCount_3 = value;
	}

	inline static int32_t get_offset_of_comboMax_4() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___comboMax_4)); }
	inline float get_comboMax_4() const { return ___comboMax_4; }
	inline float* get_address_of_comboMax_4() { return &___comboMax_4; }
	inline void set_comboMax_4(float value)
	{
		___comboMax_4 = value;
	}

	inline static int32_t get_offset_of_combo_5() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___combo_5)); }
	inline float get_combo_5() const { return ___combo_5; }
	inline float* get_address_of_combo_5() { return &___combo_5; }
	inline void set_combo_5(float value)
	{
		___combo_5 = value;
	}

	inline static int32_t get_offset_of_blockNum_6() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___blockNum_6)); }
	inline float get_blockNum_6() const { return ___blockNum_6; }
	inline float* get_address_of_blockNum_6() { return &___blockNum_6; }
	inline void set_blockNum_6(float value)
	{
		___blockNum_6 = value;
	}

	inline static int32_t get_offset_of_missNum_7() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___missNum_7)); }
	inline float get_missNum_7() const { return ___missNum_7; }
	inline float* get_address_of_missNum_7() { return &___missNum_7; }
	inline void set_missNum_7(float value)
	{
		___missNum_7 = value;
	}

	inline static int32_t get_offset_of_perfectNum_8() { return static_cast<int32_t>(offsetof(ScoreController_t2917050286_StaticFields, ___perfectNum_8)); }
	inline float get_perfectNum_8() const { return ___perfectNum_8; }
	inline float* get_address_of_perfectNum_8() { return &___perfectNum_8; }
	inline void set_perfectNum_8(float value)
	{
		___perfectNum_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
