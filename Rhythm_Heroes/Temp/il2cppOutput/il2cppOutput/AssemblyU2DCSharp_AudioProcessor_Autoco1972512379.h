#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioProcessor/Autoco
struct  Autoco_t1972512379  : public Il2CppObject
{
public:
	// System.Int32 AudioProcessor/Autoco::del_length
	int32_t ___del_length_0;
	// System.Single AudioProcessor/Autoco::decay
	float ___decay_1;
	// System.Single[] AudioProcessor/Autoco::delays
	SingleU5BU5D_t1219431280* ___delays_2;
	// System.Single[] AudioProcessor/Autoco::outputs
	SingleU5BU5D_t1219431280* ___outputs_3;
	// System.Int32 AudioProcessor/Autoco::indx
	int32_t ___indx_4;
	// System.Single[] AudioProcessor/Autoco::bpms
	SingleU5BU5D_t1219431280* ___bpms_5;
	// System.Single[] AudioProcessor/Autoco::rweight
	SingleU5BU5D_t1219431280* ___rweight_6;
	// System.Single AudioProcessor/Autoco::wmidbpm
	float ___wmidbpm_7;
	// System.Single AudioProcessor/Autoco::woctavewidth
	float ___woctavewidth_8;

public:
	inline static int32_t get_offset_of_del_length_0() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___del_length_0)); }
	inline int32_t get_del_length_0() const { return ___del_length_0; }
	inline int32_t* get_address_of_del_length_0() { return &___del_length_0; }
	inline void set_del_length_0(int32_t value)
	{
		___del_length_0 = value;
	}

	inline static int32_t get_offset_of_decay_1() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___decay_1)); }
	inline float get_decay_1() const { return ___decay_1; }
	inline float* get_address_of_decay_1() { return &___decay_1; }
	inline void set_decay_1(float value)
	{
		___decay_1 = value;
	}

	inline static int32_t get_offset_of_delays_2() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___delays_2)); }
	inline SingleU5BU5D_t1219431280* get_delays_2() const { return ___delays_2; }
	inline SingleU5BU5D_t1219431280** get_address_of_delays_2() { return &___delays_2; }
	inline void set_delays_2(SingleU5BU5D_t1219431280* value)
	{
		___delays_2 = value;
		Il2CppCodeGenWriteBarrier(&___delays_2, value);
	}

	inline static int32_t get_offset_of_outputs_3() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___outputs_3)); }
	inline SingleU5BU5D_t1219431280* get_outputs_3() const { return ___outputs_3; }
	inline SingleU5BU5D_t1219431280** get_address_of_outputs_3() { return &___outputs_3; }
	inline void set_outputs_3(SingleU5BU5D_t1219431280* value)
	{
		___outputs_3 = value;
		Il2CppCodeGenWriteBarrier(&___outputs_3, value);
	}

	inline static int32_t get_offset_of_indx_4() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___indx_4)); }
	inline int32_t get_indx_4() const { return ___indx_4; }
	inline int32_t* get_address_of_indx_4() { return &___indx_4; }
	inline void set_indx_4(int32_t value)
	{
		___indx_4 = value;
	}

	inline static int32_t get_offset_of_bpms_5() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___bpms_5)); }
	inline SingleU5BU5D_t1219431280* get_bpms_5() const { return ___bpms_5; }
	inline SingleU5BU5D_t1219431280** get_address_of_bpms_5() { return &___bpms_5; }
	inline void set_bpms_5(SingleU5BU5D_t1219431280* value)
	{
		___bpms_5 = value;
		Il2CppCodeGenWriteBarrier(&___bpms_5, value);
	}

	inline static int32_t get_offset_of_rweight_6() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___rweight_6)); }
	inline SingleU5BU5D_t1219431280* get_rweight_6() const { return ___rweight_6; }
	inline SingleU5BU5D_t1219431280** get_address_of_rweight_6() { return &___rweight_6; }
	inline void set_rweight_6(SingleU5BU5D_t1219431280* value)
	{
		___rweight_6 = value;
		Il2CppCodeGenWriteBarrier(&___rweight_6, value);
	}

	inline static int32_t get_offset_of_wmidbpm_7() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___wmidbpm_7)); }
	inline float get_wmidbpm_7() const { return ___wmidbpm_7; }
	inline float* get_address_of_wmidbpm_7() { return &___wmidbpm_7; }
	inline void set_wmidbpm_7(float value)
	{
		___wmidbpm_7 = value;
	}

	inline static int32_t get_offset_of_woctavewidth_8() { return static_cast<int32_t>(offsetof(Autoco_t1972512379, ___woctavewidth_8)); }
	inline float get_woctavewidth_8() const { return ___woctavewidth_8; }
	inline float* get_address_of_woctavewidth_8() { return &___woctavewidth_8; }
	inline void set_woctavewidth_8(float value)
	{
		___woctavewidth_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
