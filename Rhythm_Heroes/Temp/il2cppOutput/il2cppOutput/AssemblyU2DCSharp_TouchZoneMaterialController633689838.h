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
// UnityEngine.Texture[]
struct TextureU5BU5D_t3618347161;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchZoneMaterialController
struct  TouchZoneMaterialController_t633689838  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Material TouchZoneMaterialController::mat
	Material_t1886596500 * ___mat_2;
	// UnityEngine.Texture[] TouchZoneMaterialController::textures
	TextureU5BU5D_t3618347161* ___textures_3;

public:
	inline static int32_t get_offset_of_mat_2() { return static_cast<int32_t>(offsetof(TouchZoneMaterialController_t633689838, ___mat_2)); }
	inline Material_t1886596500 * get_mat_2() const { return ___mat_2; }
	inline Material_t1886596500 ** get_address_of_mat_2() { return &___mat_2; }
	inline void set_mat_2(Material_t1886596500 * value)
	{
		___mat_2 = value;
		Il2CppCodeGenWriteBarrier(&___mat_2, value);
	}

	inline static int32_t get_offset_of_textures_3() { return static_cast<int32_t>(offsetof(TouchZoneMaterialController_t633689838, ___textures_3)); }
	inline TextureU5BU5D_t3618347161* get_textures_3() const { return ___textures_3; }
	inline TextureU5BU5D_t3618347161** get_address_of_textures_3() { return &___textures_3; }
	inline void set_textures_3(TextureU5BU5D_t3618347161* value)
	{
		___textures_3 = value;
		Il2CppCodeGenWriteBarrier(&___textures_3, value);
	}
};

struct TouchZoneMaterialController_t633689838_StaticFields
{
public:
	// System.Boolean TouchZoneMaterialController::isHot
	bool ___isHot_4;

public:
	inline static int32_t get_offset_of_isHot_4() { return static_cast<int32_t>(offsetof(TouchZoneMaterialController_t633689838_StaticFields, ___isHot_4)); }
	inline bool get_isHot_4() const { return ___isHot_4; }
	inline bool* get_address_of_isHot_4() { return &___isHot_4; }
	inline void set_isHot_4(bool value)
	{
		___isHot_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
