#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.LineRenderer
struct LineRenderer_t305781060;
// UnityEngine.Animation
struct Animation_t350396337;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RayBehavior
struct  RayBehavior_t3008801916  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject RayBehavior::BeginLocation
	GameObject_t4012695102 * ___BeginLocation_2;
	// UnityEngine.GameObject RayBehavior::EndLocation
	GameObject_t4012695102 * ___EndLocation_3;
	// UnityEngine.Color RayBehavior::BeginColor
	Color_t1588175760  ___BeginColor_4;
	// UnityEngine.Color RayBehavior::EndColor
	Color_t1588175760  ___EndColor_5;
	// UnityEngine.Vector3 RayBehavior::PositionRange
	Vector3_t3525329789  ___PositionRange_6;
	// System.Single RayBehavior::WidthA
	float ___WidthA_7;
	// System.Single RayBehavior::WidthB
	float ___WidthB_8;
	// System.Single RayBehavior::RadiusA
	float ___RadiusA_9;
	// System.Single RayBehavior::RadiusB
	float ___RadiusB_10;
	// UnityEngine.LineRenderer RayBehavior::Line
	LineRenderer_t305781060 * ___Line_11;
	// UnityEngine.Animation RayBehavior::Anim
	Animation_t350396337 * ___Anim_12;
	// System.Boolean RayBehavior::changed
	bool ___changed_13;
	// UnityEngine.Vector3 RayBehavior::Offset
	Vector3_t3525329789  ___Offset_14;
	// System.Single RayBehavior::AlphaCurve
	float ___AlphaCurve_15;
	// System.Single RayBehavior::FadeSpeed
	float ___FadeSpeed_16;

public:
	inline static int32_t get_offset_of_BeginLocation_2() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___BeginLocation_2)); }
	inline GameObject_t4012695102 * get_BeginLocation_2() const { return ___BeginLocation_2; }
	inline GameObject_t4012695102 ** get_address_of_BeginLocation_2() { return &___BeginLocation_2; }
	inline void set_BeginLocation_2(GameObject_t4012695102 * value)
	{
		___BeginLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&___BeginLocation_2, value);
	}

	inline static int32_t get_offset_of_EndLocation_3() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___EndLocation_3)); }
	inline GameObject_t4012695102 * get_EndLocation_3() const { return ___EndLocation_3; }
	inline GameObject_t4012695102 ** get_address_of_EndLocation_3() { return &___EndLocation_3; }
	inline void set_EndLocation_3(GameObject_t4012695102 * value)
	{
		___EndLocation_3 = value;
		Il2CppCodeGenWriteBarrier(&___EndLocation_3, value);
	}

	inline static int32_t get_offset_of_BeginColor_4() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___BeginColor_4)); }
	inline Color_t1588175760  get_BeginColor_4() const { return ___BeginColor_4; }
	inline Color_t1588175760 * get_address_of_BeginColor_4() { return &___BeginColor_4; }
	inline void set_BeginColor_4(Color_t1588175760  value)
	{
		___BeginColor_4 = value;
	}

	inline static int32_t get_offset_of_EndColor_5() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___EndColor_5)); }
	inline Color_t1588175760  get_EndColor_5() const { return ___EndColor_5; }
	inline Color_t1588175760 * get_address_of_EndColor_5() { return &___EndColor_5; }
	inline void set_EndColor_5(Color_t1588175760  value)
	{
		___EndColor_5 = value;
	}

	inline static int32_t get_offset_of_PositionRange_6() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___PositionRange_6)); }
	inline Vector3_t3525329789  get_PositionRange_6() const { return ___PositionRange_6; }
	inline Vector3_t3525329789 * get_address_of_PositionRange_6() { return &___PositionRange_6; }
	inline void set_PositionRange_6(Vector3_t3525329789  value)
	{
		___PositionRange_6 = value;
	}

	inline static int32_t get_offset_of_WidthA_7() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___WidthA_7)); }
	inline float get_WidthA_7() const { return ___WidthA_7; }
	inline float* get_address_of_WidthA_7() { return &___WidthA_7; }
	inline void set_WidthA_7(float value)
	{
		___WidthA_7 = value;
	}

	inline static int32_t get_offset_of_WidthB_8() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___WidthB_8)); }
	inline float get_WidthB_8() const { return ___WidthB_8; }
	inline float* get_address_of_WidthB_8() { return &___WidthB_8; }
	inline void set_WidthB_8(float value)
	{
		___WidthB_8 = value;
	}

	inline static int32_t get_offset_of_RadiusA_9() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___RadiusA_9)); }
	inline float get_RadiusA_9() const { return ___RadiusA_9; }
	inline float* get_address_of_RadiusA_9() { return &___RadiusA_9; }
	inline void set_RadiusA_9(float value)
	{
		___RadiusA_9 = value;
	}

	inline static int32_t get_offset_of_RadiusB_10() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___RadiusB_10)); }
	inline float get_RadiusB_10() const { return ___RadiusB_10; }
	inline float* get_address_of_RadiusB_10() { return &___RadiusB_10; }
	inline void set_RadiusB_10(float value)
	{
		___RadiusB_10 = value;
	}

	inline static int32_t get_offset_of_Line_11() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___Line_11)); }
	inline LineRenderer_t305781060 * get_Line_11() const { return ___Line_11; }
	inline LineRenderer_t305781060 ** get_address_of_Line_11() { return &___Line_11; }
	inline void set_Line_11(LineRenderer_t305781060 * value)
	{
		___Line_11 = value;
		Il2CppCodeGenWriteBarrier(&___Line_11, value);
	}

	inline static int32_t get_offset_of_Anim_12() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___Anim_12)); }
	inline Animation_t350396337 * get_Anim_12() const { return ___Anim_12; }
	inline Animation_t350396337 ** get_address_of_Anim_12() { return &___Anim_12; }
	inline void set_Anim_12(Animation_t350396337 * value)
	{
		___Anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___Anim_12, value);
	}

	inline static int32_t get_offset_of_changed_13() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___changed_13)); }
	inline bool get_changed_13() const { return ___changed_13; }
	inline bool* get_address_of_changed_13() { return &___changed_13; }
	inline void set_changed_13(bool value)
	{
		___changed_13 = value;
	}

	inline static int32_t get_offset_of_Offset_14() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___Offset_14)); }
	inline Vector3_t3525329789  get_Offset_14() const { return ___Offset_14; }
	inline Vector3_t3525329789 * get_address_of_Offset_14() { return &___Offset_14; }
	inline void set_Offset_14(Vector3_t3525329789  value)
	{
		___Offset_14 = value;
	}

	inline static int32_t get_offset_of_AlphaCurve_15() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___AlphaCurve_15)); }
	inline float get_AlphaCurve_15() const { return ___AlphaCurve_15; }
	inline float* get_address_of_AlphaCurve_15() { return &___AlphaCurve_15; }
	inline void set_AlphaCurve_15(float value)
	{
		___AlphaCurve_15 = value;
	}

	inline static int32_t get_offset_of_FadeSpeed_16() { return static_cast<int32_t>(offsetof(RayBehavior_t3008801916, ___FadeSpeed_16)); }
	inline float get_FadeSpeed_16() const { return ___FadeSpeed_16; }
	inline float* get_address_of_FadeSpeed_16() { return &___FadeSpeed_16; }
	inline void set_FadeSpeed_16(float value)
	{
		___FadeSpeed_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
