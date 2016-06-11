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
#include "UnityEngine_UnityEngine_Color1588175760.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Button
struct  Button_t2001146706  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Color Button::defaultColor
	Color_t1588175760  ___defaultColor_2;
	// UnityEngine.Color Button::selectedColor
	Color_t1588175760  ___selectedColor_3;
	// UnityEngine.Material Button::mat
	Material_t1886596500 * ___mat_4;

public:
	inline static int32_t get_offset_of_defaultColor_2() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___defaultColor_2)); }
	inline Color_t1588175760  get_defaultColor_2() const { return ___defaultColor_2; }
	inline Color_t1588175760 * get_address_of_defaultColor_2() { return &___defaultColor_2; }
	inline void set_defaultColor_2(Color_t1588175760  value)
	{
		___defaultColor_2 = value;
	}

	inline static int32_t get_offset_of_selectedColor_3() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___selectedColor_3)); }
	inline Color_t1588175760  get_selectedColor_3() const { return ___selectedColor_3; }
	inline Color_t1588175760 * get_address_of_selectedColor_3() { return &___selectedColor_3; }
	inline void set_selectedColor_3(Color_t1588175760  value)
	{
		___selectedColor_3 = value;
	}

	inline static int32_t get_offset_of_mat_4() { return static_cast<int32_t>(offsetof(Button_t2001146706, ___mat_4)); }
	inline Material_t1886596500 * get_mat_4() const { return ___mat_4; }
	inline Material_t1886596500 ** get_address_of_mat_4() { return &___mat_4; }
	inline void set_mat_4(Material_t1886596500 * value)
	{
		___mat_4 = value;
		Il2CppCodeGenWriteBarrier(&___mat_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
