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
// UnityEngine.UI.Outline
struct Outline_t3842262571;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WordController
struct  WordController_t1618021990  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text WordController::wordText
	Text_t3286458198 * ___wordText_2;
	// UnityEngine.UI.Outline WordController::outline
	Outline_t3842262571 * ___outline_3;

public:
	inline static int32_t get_offset_of_wordText_2() { return static_cast<int32_t>(offsetof(WordController_t1618021990, ___wordText_2)); }
	inline Text_t3286458198 * get_wordText_2() const { return ___wordText_2; }
	inline Text_t3286458198 ** get_address_of_wordText_2() { return &___wordText_2; }
	inline void set_wordText_2(Text_t3286458198 * value)
	{
		___wordText_2 = value;
		Il2CppCodeGenWriteBarrier(&___wordText_2, value);
	}

	inline static int32_t get_offset_of_outline_3() { return static_cast<int32_t>(offsetof(WordController_t1618021990, ___outline_3)); }
	inline Outline_t3842262571 * get_outline_3() const { return ___outline_3; }
	inline Outline_t3842262571 ** get_address_of_outline_3() { return &___outline_3; }
	inline void set_outline_3(Outline_t3842262571 * value)
	{
		___outline_3 = value;
		Il2CppCodeGenWriteBarrier(&___outline_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
