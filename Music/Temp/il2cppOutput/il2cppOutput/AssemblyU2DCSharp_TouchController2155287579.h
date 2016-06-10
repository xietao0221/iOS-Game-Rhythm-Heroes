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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t2155287579  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject TouchController::planeObj
	GameObject_t4012695102 * ___planeObj_2;
	// UnityEngine.GameObject TouchController::scoreTextObj
	GameObject_t4012695102 * ___scoreTextObj_3;
	// UnityEngine.GameObject TouchController::wordTextObj
	GameObject_t4012695102 * ___wordTextObj_4;
	// UnityEngine.GameObject TouchController::logPrintObj
	GameObject_t4012695102 * ___logPrintObj_5;
	// UnityEngine.GameObject TouchController::logDynamicPrintObj
	GameObject_t4012695102 * ___logDynamicPrintObj_6;

public:
	inline static int32_t get_offset_of_planeObj_2() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___planeObj_2)); }
	inline GameObject_t4012695102 * get_planeObj_2() const { return ___planeObj_2; }
	inline GameObject_t4012695102 ** get_address_of_planeObj_2() { return &___planeObj_2; }
	inline void set_planeObj_2(GameObject_t4012695102 * value)
	{
		___planeObj_2 = value;
		Il2CppCodeGenWriteBarrier(&___planeObj_2, value);
	}

	inline static int32_t get_offset_of_scoreTextObj_3() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___scoreTextObj_3)); }
	inline GameObject_t4012695102 * get_scoreTextObj_3() const { return ___scoreTextObj_3; }
	inline GameObject_t4012695102 ** get_address_of_scoreTextObj_3() { return &___scoreTextObj_3; }
	inline void set_scoreTextObj_3(GameObject_t4012695102 * value)
	{
		___scoreTextObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTextObj_3, value);
	}

	inline static int32_t get_offset_of_wordTextObj_4() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___wordTextObj_4)); }
	inline GameObject_t4012695102 * get_wordTextObj_4() const { return ___wordTextObj_4; }
	inline GameObject_t4012695102 ** get_address_of_wordTextObj_4() { return &___wordTextObj_4; }
	inline void set_wordTextObj_4(GameObject_t4012695102 * value)
	{
		___wordTextObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___wordTextObj_4, value);
	}

	inline static int32_t get_offset_of_logPrintObj_5() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___logPrintObj_5)); }
	inline GameObject_t4012695102 * get_logPrintObj_5() const { return ___logPrintObj_5; }
	inline GameObject_t4012695102 ** get_address_of_logPrintObj_5() { return &___logPrintObj_5; }
	inline void set_logPrintObj_5(GameObject_t4012695102 * value)
	{
		___logPrintObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___logPrintObj_5, value);
	}

	inline static int32_t get_offset_of_logDynamicPrintObj_6() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___logDynamicPrintObj_6)); }
	inline GameObject_t4012695102 * get_logDynamicPrintObj_6() const { return ___logDynamicPrintObj_6; }
	inline GameObject_t4012695102 ** get_address_of_logDynamicPrintObj_6() { return &___logDynamicPrintObj_6; }
	inline void set_logDynamicPrintObj_6(GameObject_t4012695102 * value)
	{
		___logDynamicPrintObj_6 = value;
		Il2CppCodeGenWriteBarrier(&___logDynamicPrintObj_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
