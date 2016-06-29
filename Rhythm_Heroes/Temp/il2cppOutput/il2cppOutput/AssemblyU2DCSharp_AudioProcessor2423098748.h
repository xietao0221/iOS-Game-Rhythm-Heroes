#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.Generic.List`1<AudioProcessor/AudioCallbacks>
struct List_1_t3270953649;
// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Single[]
struct SingleU5BU5D_t1219431280;
// AudioProcessor/Autoco
struct Autoco_t1972512379;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioProcessor
struct  AudioProcessor_t2423098748  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.AudioSource AudioProcessor::audioSource
	AudioSource_t3628549054 * ___audioSource_2;
	// System.Int64 AudioProcessor::lastT
	int64_t ___lastT_3;
	// System.Int64 AudioProcessor::nowT
	int64_t ___nowT_4;
	// System.Int64 AudioProcessor::diff
	int64_t ___diff_5;
	// System.Int64 AudioProcessor::entries
	int64_t ___entries_6;
	// System.Int64 AudioProcessor::sum
	int64_t ___sum_7;
	// System.Collections.Generic.List`1<AudioProcessor/AudioCallbacks> AudioProcessor::callbacks
	List_1_t3270953649 * ___callbacks_8;
	// System.Int32 AudioProcessor::bufferSize
	int32_t ___bufferSize_9;
	// System.Int32 AudioProcessor::samplingRate
	int32_t ___samplingRate_10;
	// System.Int32 AudioProcessor::nBand
	int32_t ___nBand_11;
	// System.Single AudioProcessor::gThresh
	float ___gThresh_12;
	// System.Int32 AudioProcessor::blipDelayLen
	int32_t ___blipDelayLen_13;
	// System.Int32[] AudioProcessor::blipDelay
	Int32U5BU5D_t1809983122* ___blipDelay_14;
	// System.Int32 AudioProcessor::sinceLast
	int32_t ___sinceLast_15;
	// System.Single AudioProcessor::framePeriod
	float ___framePeriod_16;
	// System.Int32 AudioProcessor::colmax
	int32_t ___colmax_17;
	// System.Single[] AudioProcessor::spectrum
	SingleU5BU5D_t1219431280* ___spectrum_18;
	// System.Single[] AudioProcessor::averages
	SingleU5BU5D_t1219431280* ___averages_19;
	// System.Single[] AudioProcessor::acVals
	SingleU5BU5D_t1219431280* ___acVals_20;
	// System.Single[] AudioProcessor::onsets
	SingleU5BU5D_t1219431280* ___onsets_21;
	// System.Single[] AudioProcessor::scorefun
	SingleU5BU5D_t1219431280* ___scorefun_22;
	// System.Single[] AudioProcessor::dobeat
	SingleU5BU5D_t1219431280* ___dobeat_23;
	// System.Int32 AudioProcessor::now
	int32_t ___now_24;
	// System.Single[] AudioProcessor::spec
	SingleU5BU5D_t1219431280* ___spec_25;
	// System.Int32 AudioProcessor::maxlag
	int32_t ___maxlag_26;
	// System.Single AudioProcessor::decay
	float ___decay_27;
	// AudioProcessor/Autoco AudioProcessor::auco
	Autoco_t1972512379 * ___auco_28;
	// System.Single AudioProcessor::alph
	float ___alph_29;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___audioSource_2)); }
	inline AudioSource_t3628549054 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t3628549054 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_lastT_3() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___lastT_3)); }
	inline int64_t get_lastT_3() const { return ___lastT_3; }
	inline int64_t* get_address_of_lastT_3() { return &___lastT_3; }
	inline void set_lastT_3(int64_t value)
	{
		___lastT_3 = value;
	}

	inline static int32_t get_offset_of_nowT_4() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___nowT_4)); }
	inline int64_t get_nowT_4() const { return ___nowT_4; }
	inline int64_t* get_address_of_nowT_4() { return &___nowT_4; }
	inline void set_nowT_4(int64_t value)
	{
		___nowT_4 = value;
	}

	inline static int32_t get_offset_of_diff_5() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___diff_5)); }
	inline int64_t get_diff_5() const { return ___diff_5; }
	inline int64_t* get_address_of_diff_5() { return &___diff_5; }
	inline void set_diff_5(int64_t value)
	{
		___diff_5 = value;
	}

	inline static int32_t get_offset_of_entries_6() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___entries_6)); }
	inline int64_t get_entries_6() const { return ___entries_6; }
	inline int64_t* get_address_of_entries_6() { return &___entries_6; }
	inline void set_entries_6(int64_t value)
	{
		___entries_6 = value;
	}

	inline static int32_t get_offset_of_sum_7() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___sum_7)); }
	inline int64_t get_sum_7() const { return ___sum_7; }
	inline int64_t* get_address_of_sum_7() { return &___sum_7; }
	inline void set_sum_7(int64_t value)
	{
		___sum_7 = value;
	}

	inline static int32_t get_offset_of_callbacks_8() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___callbacks_8)); }
	inline List_1_t3270953649 * get_callbacks_8() const { return ___callbacks_8; }
	inline List_1_t3270953649 ** get_address_of_callbacks_8() { return &___callbacks_8; }
	inline void set_callbacks_8(List_1_t3270953649 * value)
	{
		___callbacks_8 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_8, value);
	}

	inline static int32_t get_offset_of_bufferSize_9() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___bufferSize_9)); }
	inline int32_t get_bufferSize_9() const { return ___bufferSize_9; }
	inline int32_t* get_address_of_bufferSize_9() { return &___bufferSize_9; }
	inline void set_bufferSize_9(int32_t value)
	{
		___bufferSize_9 = value;
	}

	inline static int32_t get_offset_of_samplingRate_10() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___samplingRate_10)); }
	inline int32_t get_samplingRate_10() const { return ___samplingRate_10; }
	inline int32_t* get_address_of_samplingRate_10() { return &___samplingRate_10; }
	inline void set_samplingRate_10(int32_t value)
	{
		___samplingRate_10 = value;
	}

	inline static int32_t get_offset_of_nBand_11() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___nBand_11)); }
	inline int32_t get_nBand_11() const { return ___nBand_11; }
	inline int32_t* get_address_of_nBand_11() { return &___nBand_11; }
	inline void set_nBand_11(int32_t value)
	{
		___nBand_11 = value;
	}

	inline static int32_t get_offset_of_gThresh_12() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___gThresh_12)); }
	inline float get_gThresh_12() const { return ___gThresh_12; }
	inline float* get_address_of_gThresh_12() { return &___gThresh_12; }
	inline void set_gThresh_12(float value)
	{
		___gThresh_12 = value;
	}

	inline static int32_t get_offset_of_blipDelayLen_13() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___blipDelayLen_13)); }
	inline int32_t get_blipDelayLen_13() const { return ___blipDelayLen_13; }
	inline int32_t* get_address_of_blipDelayLen_13() { return &___blipDelayLen_13; }
	inline void set_blipDelayLen_13(int32_t value)
	{
		___blipDelayLen_13 = value;
	}

	inline static int32_t get_offset_of_blipDelay_14() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___blipDelay_14)); }
	inline Int32U5BU5D_t1809983122* get_blipDelay_14() const { return ___blipDelay_14; }
	inline Int32U5BU5D_t1809983122** get_address_of_blipDelay_14() { return &___blipDelay_14; }
	inline void set_blipDelay_14(Int32U5BU5D_t1809983122* value)
	{
		___blipDelay_14 = value;
		Il2CppCodeGenWriteBarrier(&___blipDelay_14, value);
	}

	inline static int32_t get_offset_of_sinceLast_15() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___sinceLast_15)); }
	inline int32_t get_sinceLast_15() const { return ___sinceLast_15; }
	inline int32_t* get_address_of_sinceLast_15() { return &___sinceLast_15; }
	inline void set_sinceLast_15(int32_t value)
	{
		___sinceLast_15 = value;
	}

	inline static int32_t get_offset_of_framePeriod_16() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___framePeriod_16)); }
	inline float get_framePeriod_16() const { return ___framePeriod_16; }
	inline float* get_address_of_framePeriod_16() { return &___framePeriod_16; }
	inline void set_framePeriod_16(float value)
	{
		___framePeriod_16 = value;
	}

	inline static int32_t get_offset_of_colmax_17() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___colmax_17)); }
	inline int32_t get_colmax_17() const { return ___colmax_17; }
	inline int32_t* get_address_of_colmax_17() { return &___colmax_17; }
	inline void set_colmax_17(int32_t value)
	{
		___colmax_17 = value;
	}

	inline static int32_t get_offset_of_spectrum_18() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___spectrum_18)); }
	inline SingleU5BU5D_t1219431280* get_spectrum_18() const { return ___spectrum_18; }
	inline SingleU5BU5D_t1219431280** get_address_of_spectrum_18() { return &___spectrum_18; }
	inline void set_spectrum_18(SingleU5BU5D_t1219431280* value)
	{
		___spectrum_18 = value;
		Il2CppCodeGenWriteBarrier(&___spectrum_18, value);
	}

	inline static int32_t get_offset_of_averages_19() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___averages_19)); }
	inline SingleU5BU5D_t1219431280* get_averages_19() const { return ___averages_19; }
	inline SingleU5BU5D_t1219431280** get_address_of_averages_19() { return &___averages_19; }
	inline void set_averages_19(SingleU5BU5D_t1219431280* value)
	{
		___averages_19 = value;
		Il2CppCodeGenWriteBarrier(&___averages_19, value);
	}

	inline static int32_t get_offset_of_acVals_20() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___acVals_20)); }
	inline SingleU5BU5D_t1219431280* get_acVals_20() const { return ___acVals_20; }
	inline SingleU5BU5D_t1219431280** get_address_of_acVals_20() { return &___acVals_20; }
	inline void set_acVals_20(SingleU5BU5D_t1219431280* value)
	{
		___acVals_20 = value;
		Il2CppCodeGenWriteBarrier(&___acVals_20, value);
	}

	inline static int32_t get_offset_of_onsets_21() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___onsets_21)); }
	inline SingleU5BU5D_t1219431280* get_onsets_21() const { return ___onsets_21; }
	inline SingleU5BU5D_t1219431280** get_address_of_onsets_21() { return &___onsets_21; }
	inline void set_onsets_21(SingleU5BU5D_t1219431280* value)
	{
		___onsets_21 = value;
		Il2CppCodeGenWriteBarrier(&___onsets_21, value);
	}

	inline static int32_t get_offset_of_scorefun_22() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___scorefun_22)); }
	inline SingleU5BU5D_t1219431280* get_scorefun_22() const { return ___scorefun_22; }
	inline SingleU5BU5D_t1219431280** get_address_of_scorefun_22() { return &___scorefun_22; }
	inline void set_scorefun_22(SingleU5BU5D_t1219431280* value)
	{
		___scorefun_22 = value;
		Il2CppCodeGenWriteBarrier(&___scorefun_22, value);
	}

	inline static int32_t get_offset_of_dobeat_23() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___dobeat_23)); }
	inline SingleU5BU5D_t1219431280* get_dobeat_23() const { return ___dobeat_23; }
	inline SingleU5BU5D_t1219431280** get_address_of_dobeat_23() { return &___dobeat_23; }
	inline void set_dobeat_23(SingleU5BU5D_t1219431280* value)
	{
		___dobeat_23 = value;
		Il2CppCodeGenWriteBarrier(&___dobeat_23, value);
	}

	inline static int32_t get_offset_of_now_24() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___now_24)); }
	inline int32_t get_now_24() const { return ___now_24; }
	inline int32_t* get_address_of_now_24() { return &___now_24; }
	inline void set_now_24(int32_t value)
	{
		___now_24 = value;
	}

	inline static int32_t get_offset_of_spec_25() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___spec_25)); }
	inline SingleU5BU5D_t1219431280* get_spec_25() const { return ___spec_25; }
	inline SingleU5BU5D_t1219431280** get_address_of_spec_25() { return &___spec_25; }
	inline void set_spec_25(SingleU5BU5D_t1219431280* value)
	{
		___spec_25 = value;
		Il2CppCodeGenWriteBarrier(&___spec_25, value);
	}

	inline static int32_t get_offset_of_maxlag_26() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___maxlag_26)); }
	inline int32_t get_maxlag_26() const { return ___maxlag_26; }
	inline int32_t* get_address_of_maxlag_26() { return &___maxlag_26; }
	inline void set_maxlag_26(int32_t value)
	{
		___maxlag_26 = value;
	}

	inline static int32_t get_offset_of_decay_27() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___decay_27)); }
	inline float get_decay_27() const { return ___decay_27; }
	inline float* get_address_of_decay_27() { return &___decay_27; }
	inline void set_decay_27(float value)
	{
		___decay_27 = value;
	}

	inline static int32_t get_offset_of_auco_28() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___auco_28)); }
	inline Autoco_t1972512379 * get_auco_28() const { return ___auco_28; }
	inline Autoco_t1972512379 ** get_address_of_auco_28() { return &___auco_28; }
	inline void set_auco_28(Autoco_t1972512379 * value)
	{
		___auco_28 = value;
		Il2CppCodeGenWriteBarrier(&___auco_28, value);
	}

	inline static int32_t get_offset_of_alph_29() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___alph_29)); }
	inline float get_alph_29() const { return ___alph_29; }
	inline float* get_address_of_alph_29() { return &___alph_29; }
	inline void set_alph_29(float value)
	{
		___alph_29 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
