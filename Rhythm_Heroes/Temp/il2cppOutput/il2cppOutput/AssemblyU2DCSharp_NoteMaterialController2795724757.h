#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Renderer
struct Renderer_t1092684080;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NoteMaterialController
struct  NoteMaterialController_t2795724757  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Renderer NoteMaterialController::rend
	Renderer_t1092684080 * ___rend_2;

public:
	inline static int32_t get_offset_of_rend_2() { return static_cast<int32_t>(offsetof(NoteMaterialController_t2795724757, ___rend_2)); }
	inline Renderer_t1092684080 * get_rend_2() const { return ___rend_2; }
	inline Renderer_t1092684080 ** get_address_of_rend_2() { return &___rend_2; }
	inline void set_rend_2(Renderer_t1092684080 * value)
	{
		___rend_2 = value;
		Il2CppCodeGenWriteBarrier(&___rend_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
