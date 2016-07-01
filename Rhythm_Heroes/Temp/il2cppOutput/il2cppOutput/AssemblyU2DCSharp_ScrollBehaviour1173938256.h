#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollBehaviour
struct  ScrollBehaviour_t1173938256  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ScrollBehaviour::materialIndex
	int32_t ___materialIndex_2;
	// UnityEngine.Vector2 ScrollBehaviour::uvAnimationRate
	Vector2_t3525329788  ___uvAnimationRate_3;
	// System.String ScrollBehaviour::textureName
	String_t* ___textureName_4;
	// UnityEngine.Vector2 ScrollBehaviour::uvOffset
	Vector2_t3525329788  ___uvOffset_5;

public:
	inline static int32_t get_offset_of_materialIndex_2() { return static_cast<int32_t>(offsetof(ScrollBehaviour_t1173938256, ___materialIndex_2)); }
	inline int32_t get_materialIndex_2() const { return ___materialIndex_2; }
	inline int32_t* get_address_of_materialIndex_2() { return &___materialIndex_2; }
	inline void set_materialIndex_2(int32_t value)
	{
		___materialIndex_2 = value;
	}

	inline static int32_t get_offset_of_uvAnimationRate_3() { return static_cast<int32_t>(offsetof(ScrollBehaviour_t1173938256, ___uvAnimationRate_3)); }
	inline Vector2_t3525329788  get_uvAnimationRate_3() const { return ___uvAnimationRate_3; }
	inline Vector2_t3525329788 * get_address_of_uvAnimationRate_3() { return &___uvAnimationRate_3; }
	inline void set_uvAnimationRate_3(Vector2_t3525329788  value)
	{
		___uvAnimationRate_3 = value;
	}

	inline static int32_t get_offset_of_textureName_4() { return static_cast<int32_t>(offsetof(ScrollBehaviour_t1173938256, ___textureName_4)); }
	inline String_t* get_textureName_4() const { return ___textureName_4; }
	inline String_t** get_address_of_textureName_4() { return &___textureName_4; }
	inline void set_textureName_4(String_t* value)
	{
		___textureName_4 = value;
		Il2CppCodeGenWriteBarrier(&___textureName_4, value);
	}

	inline static int32_t get_offset_of_uvOffset_5() { return static_cast<int32_t>(offsetof(ScrollBehaviour_t1173938256, ___uvOffset_5)); }
	inline Vector2_t3525329788  get_uvOffset_5() const { return ___uvOffset_5; }
	inline Vector2_t3525329788 * get_address_of_uvOffset_5() { return &___uvOffset_5; }
	inline void set_uvOffset_5(Vector2_t3525329788  value)
	{
		___uvOffset_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
