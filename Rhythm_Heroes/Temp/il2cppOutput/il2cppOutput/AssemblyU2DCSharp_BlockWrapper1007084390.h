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

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BlockWrapper
struct  BlockWrapper_t1007084390  : public Il2CppObject
{
public:
	// UnityEngine.GameObject BlockWrapper::blockObj
	GameObject_t4012695102 * ___blockObj_0;

public:
	inline static int32_t get_offset_of_blockObj_0() { return static_cast<int32_t>(offsetof(BlockWrapper_t1007084390, ___blockObj_0)); }
	inline GameObject_t4012695102 * get_blockObj_0() const { return ___blockObj_0; }
	inline GameObject_t4012695102 ** get_address_of_blockObj_0() { return &___blockObj_0; }
	inline void set_blockObj_0(GameObject_t4012695102 * value)
	{
		___blockObj_0 = value;
		Il2CppCodeGenWriteBarrier(&___blockObj_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
