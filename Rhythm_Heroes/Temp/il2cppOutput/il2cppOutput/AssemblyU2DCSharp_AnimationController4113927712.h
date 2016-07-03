#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimationController
struct  AnimationController_t4113927712  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Animator AnimationController::anim
	Animator_t792326996 * ___anim_2;
	// UnityEngine.Animator AnimationController::planeAnim
	Animator_t792326996 * ___planeAnim_3;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(AnimationController_t4113927712, ___anim_2)); }
	inline Animator_t792326996 * get_anim_2() const { return ___anim_2; }
	inline Animator_t792326996 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t792326996 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_planeAnim_3() { return static_cast<int32_t>(offsetof(AnimationController_t4113927712, ___planeAnim_3)); }
	inline Animator_t792326996 * get_planeAnim_3() const { return ___planeAnim_3; }
	inline Animator_t792326996 ** get_address_of_planeAnim_3() { return &___planeAnim_3; }
	inline void set_planeAnim_3(Animator_t792326996 * value)
	{
		___planeAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___planeAnim_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
