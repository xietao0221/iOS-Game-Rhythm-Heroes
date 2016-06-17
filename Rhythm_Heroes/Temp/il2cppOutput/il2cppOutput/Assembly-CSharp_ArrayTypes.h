#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// AudioProcessor/AudioCallbacks
struct AudioCallbacks_t2473994680;
// BlockWrapper
struct BlockWrapper_t1007084390;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_BlockWrapper1007084390.h"

#pragma once
// AudioProcessor/AudioCallbacks[]
struct AudioCallbacksU5BU5D_t3391889513  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) Il2CppObject * m_Items[1];

public:
	inline Il2CppObject * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Il2CppObject ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Il2CppObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// BlockWrapper[]
struct BlockWrapperU5BU5D_t4016510019  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) BlockWrapper_t1007084390 * m_Items[1];

public:
	inline BlockWrapper_t1007084390 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline BlockWrapper_t1007084390 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, BlockWrapper_t1007084390 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
