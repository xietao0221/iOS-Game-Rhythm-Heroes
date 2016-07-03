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
// System.String
struct String_t;

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
	// System.Single StatController::miss
	float ___miss_4;
	// System.Single StatController::perfect
	float ___perfect_5;
	// System.Single StatController::block
	float ___block_6;
	// UnityEngine.UI.Text StatController::grade
	Text_t3286458198 * ___grade_7;
	// UnityEngine.UI.Text StatController::totalScore
	Text_t3286458198 * ___totalScore_8;
	// UnityEngine.UI.Text StatController::maxComboVal
	Text_t3286458198 * ___maxComboVal_9;
	// UnityEngine.UI.Text StatController::perfectVal
	Text_t3286458198 * ___perfectVal_10;
	// UnityEngine.UI.Text StatController::missVal
	Text_t3286458198 * ___missVal_11;
	// System.String StatController::strGrade
	String_t* ___strGrade_12;
	// System.String StatController::strTotalScore
	String_t* ___strTotalScore_13;
	// System.String StatController::strMaxComboVal
	String_t* ___strMaxComboVal_14;
	// System.String StatController::strPerfectVal
	String_t* ___strPerfectVal_15;
	// System.String StatController::strMissVal
	String_t* ___strMissVal_16;

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

	inline static int32_t get_offset_of_miss_4() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___miss_4)); }
	inline float get_miss_4() const { return ___miss_4; }
	inline float* get_address_of_miss_4() { return &___miss_4; }
	inline void set_miss_4(float value)
	{
		___miss_4 = value;
	}

	inline static int32_t get_offset_of_perfect_5() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___perfect_5)); }
	inline float get_perfect_5() const { return ___perfect_5; }
	inline float* get_address_of_perfect_5() { return &___perfect_5; }
	inline void set_perfect_5(float value)
	{
		___perfect_5 = value;
	}

	inline static int32_t get_offset_of_block_6() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___block_6)); }
	inline float get_block_6() const { return ___block_6; }
	inline float* get_address_of_block_6() { return &___block_6; }
	inline void set_block_6(float value)
	{
		___block_6 = value;
	}

	inline static int32_t get_offset_of_grade_7() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___grade_7)); }
	inline Text_t3286458198 * get_grade_7() const { return ___grade_7; }
	inline Text_t3286458198 ** get_address_of_grade_7() { return &___grade_7; }
	inline void set_grade_7(Text_t3286458198 * value)
	{
		___grade_7 = value;
		Il2CppCodeGenWriteBarrier(&___grade_7, value);
	}

	inline static int32_t get_offset_of_totalScore_8() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___totalScore_8)); }
	inline Text_t3286458198 * get_totalScore_8() const { return ___totalScore_8; }
	inline Text_t3286458198 ** get_address_of_totalScore_8() { return &___totalScore_8; }
	inline void set_totalScore_8(Text_t3286458198 * value)
	{
		___totalScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___totalScore_8, value);
	}

	inline static int32_t get_offset_of_maxComboVal_9() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___maxComboVal_9)); }
	inline Text_t3286458198 * get_maxComboVal_9() const { return ___maxComboVal_9; }
	inline Text_t3286458198 ** get_address_of_maxComboVal_9() { return &___maxComboVal_9; }
	inline void set_maxComboVal_9(Text_t3286458198 * value)
	{
		___maxComboVal_9 = value;
		Il2CppCodeGenWriteBarrier(&___maxComboVal_9, value);
	}

	inline static int32_t get_offset_of_perfectVal_10() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___perfectVal_10)); }
	inline Text_t3286458198 * get_perfectVal_10() const { return ___perfectVal_10; }
	inline Text_t3286458198 ** get_address_of_perfectVal_10() { return &___perfectVal_10; }
	inline void set_perfectVal_10(Text_t3286458198 * value)
	{
		___perfectVal_10 = value;
		Il2CppCodeGenWriteBarrier(&___perfectVal_10, value);
	}

	inline static int32_t get_offset_of_missVal_11() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___missVal_11)); }
	inline Text_t3286458198 * get_missVal_11() const { return ___missVal_11; }
	inline Text_t3286458198 ** get_address_of_missVal_11() { return &___missVal_11; }
	inline void set_missVal_11(Text_t3286458198 * value)
	{
		___missVal_11 = value;
		Il2CppCodeGenWriteBarrier(&___missVal_11, value);
	}

	inline static int32_t get_offset_of_strGrade_12() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___strGrade_12)); }
	inline String_t* get_strGrade_12() const { return ___strGrade_12; }
	inline String_t** get_address_of_strGrade_12() { return &___strGrade_12; }
	inline void set_strGrade_12(String_t* value)
	{
		___strGrade_12 = value;
		Il2CppCodeGenWriteBarrier(&___strGrade_12, value);
	}

	inline static int32_t get_offset_of_strTotalScore_13() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___strTotalScore_13)); }
	inline String_t* get_strTotalScore_13() const { return ___strTotalScore_13; }
	inline String_t** get_address_of_strTotalScore_13() { return &___strTotalScore_13; }
	inline void set_strTotalScore_13(String_t* value)
	{
		___strTotalScore_13 = value;
		Il2CppCodeGenWriteBarrier(&___strTotalScore_13, value);
	}

	inline static int32_t get_offset_of_strMaxComboVal_14() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___strMaxComboVal_14)); }
	inline String_t* get_strMaxComboVal_14() const { return ___strMaxComboVal_14; }
	inline String_t** get_address_of_strMaxComboVal_14() { return &___strMaxComboVal_14; }
	inline void set_strMaxComboVal_14(String_t* value)
	{
		___strMaxComboVal_14 = value;
		Il2CppCodeGenWriteBarrier(&___strMaxComboVal_14, value);
	}

	inline static int32_t get_offset_of_strPerfectVal_15() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___strPerfectVal_15)); }
	inline String_t* get_strPerfectVal_15() const { return ___strPerfectVal_15; }
	inline String_t** get_address_of_strPerfectVal_15() { return &___strPerfectVal_15; }
	inline void set_strPerfectVal_15(String_t* value)
	{
		___strPerfectVal_15 = value;
		Il2CppCodeGenWriteBarrier(&___strPerfectVal_15, value);
	}

	inline static int32_t get_offset_of_strMissVal_16() { return static_cast<int32_t>(offsetof(StatController_t1292384560, ___strMissVal_16)); }
	inline String_t* get_strMissVal_16() const { return ___strMissVal_16; }
	inline String_t** get_address_of_strMissVal_16() { return &___strMissVal_16; }
	inline void set_strMissVal_16(String_t* value)
	{
		___strMissVal_16 = value;
		Il2CppCodeGenWriteBarrier(&___strMissVal_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
