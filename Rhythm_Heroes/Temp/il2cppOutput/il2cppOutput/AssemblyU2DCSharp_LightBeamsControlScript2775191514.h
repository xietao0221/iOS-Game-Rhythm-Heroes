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
// RayBehavior[]
struct RayBehaviorU5BU5D_t1164183061;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LightBeamsControlScript
struct  LightBeamsControlScript_t2775191514  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject LightBeamsControlScript::SourceObject
	GameObject_t4012695102 * ___SourceObject_2;
	// UnityEngine.GameObject LightBeamsControlScript::TargetObject
	GameObject_t4012695102 * ___TargetObject_3;
	// UnityEngine.GameObject LightBeamsControlScript::RayPrefab
	GameObject_t4012695102 * ___RayPrefab_4;
	// UnityEngine.Color LightBeamsControlScript::RayColor
	Color_t1588175760  ___RayColor_5;
	// UnityEngine.Vector3 LightBeamsControlScript::PositionRange
	Vector3_t3525329789  ___PositionRange_6;
	// System.Single LightBeamsControlScript::RadiusA
	float ___RadiusA_7;
	// System.Single LightBeamsControlScript::RadiusB
	float ___RadiusB_8;
	// System.Single LightBeamsControlScript::WidthA
	float ___WidthA_9;
	// System.Single LightBeamsControlScript::WidthB
	float ___WidthB_10;
	// System.Single LightBeamsControlScript::FadeSpeed
	float ___FadeSpeed_11;
	// System.Int32 LightBeamsControlScript::NumRays
	int32_t ___NumRays_12;
	// System.Int32 LightBeamsControlScript::Spawned
	int32_t ___Spawned_13;
	// System.Single LightBeamsControlScript::TimeToSpawnAll
	float ___TimeToSpawnAll_14;
	// System.Single LightBeamsControlScript::spawnInterval
	float ___spawnInterval_15;
	// System.Single LightBeamsControlScript::currentCountdown
	float ___currentCountdown_16;
	// RayBehavior[] LightBeamsControlScript::rays
	RayBehaviorU5BU5D_t1164183061* ___rays_17;

public:
	inline static int32_t get_offset_of_SourceObject_2() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___SourceObject_2)); }
	inline GameObject_t4012695102 * get_SourceObject_2() const { return ___SourceObject_2; }
	inline GameObject_t4012695102 ** get_address_of_SourceObject_2() { return &___SourceObject_2; }
	inline void set_SourceObject_2(GameObject_t4012695102 * value)
	{
		___SourceObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___SourceObject_2, value);
	}

	inline static int32_t get_offset_of_TargetObject_3() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___TargetObject_3)); }
	inline GameObject_t4012695102 * get_TargetObject_3() const { return ___TargetObject_3; }
	inline GameObject_t4012695102 ** get_address_of_TargetObject_3() { return &___TargetObject_3; }
	inline void set_TargetObject_3(GameObject_t4012695102 * value)
	{
		___TargetObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___TargetObject_3, value);
	}

	inline static int32_t get_offset_of_RayPrefab_4() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___RayPrefab_4)); }
	inline GameObject_t4012695102 * get_RayPrefab_4() const { return ___RayPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_RayPrefab_4() { return &___RayPrefab_4; }
	inline void set_RayPrefab_4(GameObject_t4012695102 * value)
	{
		___RayPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___RayPrefab_4, value);
	}

	inline static int32_t get_offset_of_RayColor_5() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___RayColor_5)); }
	inline Color_t1588175760  get_RayColor_5() const { return ___RayColor_5; }
	inline Color_t1588175760 * get_address_of_RayColor_5() { return &___RayColor_5; }
	inline void set_RayColor_5(Color_t1588175760  value)
	{
		___RayColor_5 = value;
	}

	inline static int32_t get_offset_of_PositionRange_6() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___PositionRange_6)); }
	inline Vector3_t3525329789  get_PositionRange_6() const { return ___PositionRange_6; }
	inline Vector3_t3525329789 * get_address_of_PositionRange_6() { return &___PositionRange_6; }
	inline void set_PositionRange_6(Vector3_t3525329789  value)
	{
		___PositionRange_6 = value;
	}

	inline static int32_t get_offset_of_RadiusA_7() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___RadiusA_7)); }
	inline float get_RadiusA_7() const { return ___RadiusA_7; }
	inline float* get_address_of_RadiusA_7() { return &___RadiusA_7; }
	inline void set_RadiusA_7(float value)
	{
		___RadiusA_7 = value;
	}

	inline static int32_t get_offset_of_RadiusB_8() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___RadiusB_8)); }
	inline float get_RadiusB_8() const { return ___RadiusB_8; }
	inline float* get_address_of_RadiusB_8() { return &___RadiusB_8; }
	inline void set_RadiusB_8(float value)
	{
		___RadiusB_8 = value;
	}

	inline static int32_t get_offset_of_WidthA_9() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___WidthA_9)); }
	inline float get_WidthA_9() const { return ___WidthA_9; }
	inline float* get_address_of_WidthA_9() { return &___WidthA_9; }
	inline void set_WidthA_9(float value)
	{
		___WidthA_9 = value;
	}

	inline static int32_t get_offset_of_WidthB_10() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___WidthB_10)); }
	inline float get_WidthB_10() const { return ___WidthB_10; }
	inline float* get_address_of_WidthB_10() { return &___WidthB_10; }
	inline void set_WidthB_10(float value)
	{
		___WidthB_10 = value;
	}

	inline static int32_t get_offset_of_FadeSpeed_11() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___FadeSpeed_11)); }
	inline float get_FadeSpeed_11() const { return ___FadeSpeed_11; }
	inline float* get_address_of_FadeSpeed_11() { return &___FadeSpeed_11; }
	inline void set_FadeSpeed_11(float value)
	{
		___FadeSpeed_11 = value;
	}

	inline static int32_t get_offset_of_NumRays_12() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___NumRays_12)); }
	inline int32_t get_NumRays_12() const { return ___NumRays_12; }
	inline int32_t* get_address_of_NumRays_12() { return &___NumRays_12; }
	inline void set_NumRays_12(int32_t value)
	{
		___NumRays_12 = value;
	}

	inline static int32_t get_offset_of_Spawned_13() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___Spawned_13)); }
	inline int32_t get_Spawned_13() const { return ___Spawned_13; }
	inline int32_t* get_address_of_Spawned_13() { return &___Spawned_13; }
	inline void set_Spawned_13(int32_t value)
	{
		___Spawned_13 = value;
	}

	inline static int32_t get_offset_of_TimeToSpawnAll_14() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___TimeToSpawnAll_14)); }
	inline float get_TimeToSpawnAll_14() const { return ___TimeToSpawnAll_14; }
	inline float* get_address_of_TimeToSpawnAll_14() { return &___TimeToSpawnAll_14; }
	inline void set_TimeToSpawnAll_14(float value)
	{
		___TimeToSpawnAll_14 = value;
	}

	inline static int32_t get_offset_of_spawnInterval_15() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___spawnInterval_15)); }
	inline float get_spawnInterval_15() const { return ___spawnInterval_15; }
	inline float* get_address_of_spawnInterval_15() { return &___spawnInterval_15; }
	inline void set_spawnInterval_15(float value)
	{
		___spawnInterval_15 = value;
	}

	inline static int32_t get_offset_of_currentCountdown_16() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___currentCountdown_16)); }
	inline float get_currentCountdown_16() const { return ___currentCountdown_16; }
	inline float* get_address_of_currentCountdown_16() { return &___currentCountdown_16; }
	inline void set_currentCountdown_16(float value)
	{
		___currentCountdown_16 = value;
	}

	inline static int32_t get_offset_of_rays_17() { return static_cast<int32_t>(offsetof(LightBeamsControlScript_t2775191514, ___rays_17)); }
	inline RayBehaviorU5BU5D_t1164183061* get_rays_17() const { return ___rays_17; }
	inline RayBehaviorU5BU5D_t1164183061** get_address_of_rays_17() { return &___rays_17; }
	inline void set_rays_17(RayBehaviorU5BU5D_t1164183061* value)
	{
		___rays_17 = value;
		Il2CppCodeGenWriteBarrier(&___rays_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
