#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaneMaterialController
struct  PlaneMaterialController_t2074521471  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material PlaneMaterialController::mat
	Material_t1886596500 * ___mat_2;

public:
	inline static int32_t get_offset_of_mat_2() { return static_cast<int32_t>(offsetof(PlaneMaterialController_t2074521471, ___mat_2)); }
	inline Material_t1886596500 * get_mat_2() const { return ___mat_2; }
	inline Material_t1886596500 ** get_address_of_mat_2() { return &___mat_2; }
	inline void set_mat_2(Material_t1886596500 * value)
	{
		___mat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mat_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
