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
	// System.Boolean AudioProcessor::hasBegun
	bool ___hasBegun_2;
	// UnityEngine.AudioSource AudioProcessor::audioSource
	AudioSource_t3628549054 * ___audioSource_3;
	// System.Int64 AudioProcessor::lastT
	int64_t ___lastT_4;
	// System.Int64 AudioProcessor::nowT
	int64_t ___nowT_5;
	// System.Int64 AudioProcessor::diff
	int64_t ___diff_6;
	// System.Int64 AudioProcessor::entries
	int64_t ___entries_7;
	// System.Int64 AudioProcessor::sum
	int64_t ___sum_8;
	// System.Collections.Generic.List`1<AudioProcessor/AudioCallbacks> AudioProcessor::callbacks
	List_1_t3270953649 * ___callbacks_9;
	// System.Int32 AudioProcessor::bufferSize
	int32_t ___bufferSize_10;
	// System.Int32 AudioProcessor::samplingRate
	int32_t ___samplingRate_11;
	// System.Int32 AudioProcessor::nBand
	int32_t ___nBand_12;
	// System.Single AudioProcessor::gThresh
	float ___gThresh_13;
	// System.Int32 AudioProcessor::blipDelayLen
	int32_t ___blipDelayLen_14;
	// System.Int32[] AudioProcessor::blipDelay
	Int32U5BU5D_t1809983122* ___blipDelay_15;
	// System.Int32 AudioProcessor::sinceLast
	int32_t ___sinceLast_16;
	// System.Single AudioProcessor::framePeriod
	float ___framePeriod_17;
	// System.Int32 AudioProcessor::colmax
	int32_t ___colmax_18;
	// System.Single[] AudioProcessor::spectrum
	SingleU5BU5D_t1219431280* ___spectrum_19;
	// System.Single[] AudioProcessor::averages
	SingleU5BU5D_t1219431280* ___averages_20;
	// System.Single[] AudioProcessor::acVals
	SingleU5BU5D_t1219431280* ___acVals_21;
	// System.Single[] AudioProcessor::onsets
	SingleU5BU5D_t1219431280* ___onsets_22;
	// System.Single[] AudioProcessor::scorefun
	SingleU5BU5D_t1219431280* ___scorefun_23;
	// System.Single[] AudioProcessor::dobeat
	SingleU5BU5D_t1219431280* ___dobeat_24;
	// System.Int32 AudioProcessor::now
	int32_t ___now_25;
	// System.Single[] AudioProcessor::spec
	SingleU5BU5D_t1219431280* ___spec_26;
	// System.Int32 AudioProcessor::maxlag
	int32_t ___maxlag_27;
	// System.Single AudioProcessor::decay
	float ___decay_28;
	// AudioProcessor/Autoco AudioProcessor::auco
	Autoco_t1972512379 * ___auco_29;
	// System.Single AudioProcessor::alph
	float ___alph_30;

public:
	inline static int32_t get_offset_of_hasBegun_2() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___hasBegun_2)); }
	inline bool get_hasBegun_2() const { return ___hasBegun_2; }
	inline bool* get_address_of_hasBegun_2() { return &___hasBegun_2; }
	inline void set_hasBegun_2(bool value)
	{
		___hasBegun_2 = value;
	}

	inline static int32_t get_offset_of_audioSource_3() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___audioSource_3)); }
	inline AudioSource_t3628549054 * get_audioSource_3() const { return ___audioSource_3; }
	inline AudioSource_t3628549054 ** get_address_of_audioSource_3() { return &___audioSource_3; }
	inline void set_audioSource_3(AudioSource_t3628549054 * value)
	{
		___audioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_3, value);
	}

	inline static int32_t get_offset_of_lastT_4() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___lastT_4)); }
	inline int64_t get_lastT_4() const { return ___lastT_4; }
	inline int64_t* get_address_of_lastT_4() { return &___lastT_4; }
	inline void set_lastT_4(int64_t value)
	{
		___lastT_4 = value;
	}

	inline static int32_t get_offset_of_nowT_5() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___nowT_5)); }
	inline int64_t get_nowT_5() const { return ___nowT_5; }
	inline int64_t* get_address_of_nowT_5() { return &___nowT_5; }
	inline void set_nowT_5(int64_t value)
	{
		___nowT_5 = value;
	}

	inline static int32_t get_offset_of_diff_6() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___diff_6)); }
	inline int64_t get_diff_6() const { return ___diff_6; }
	inline int64_t* get_address_of_diff_6() { return &___diff_6; }
	inline void set_diff_6(int64_t value)
	{
		___diff_6 = value;
	}

	inline static int32_t get_offset_of_entries_7() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___entries_7)); }
	inline int64_t get_entries_7() const { return ___entries_7; }
	inline int64_t* get_address_of_entries_7() { return &___entries_7; }
	inline void set_entries_7(int64_t value)
	{
		___entries_7 = value;
	}

	inline static int32_t get_offset_of_sum_8() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___sum_8)); }
	inline int64_t get_sum_8() const { return ___sum_8; }
	inline int64_t* get_address_of_sum_8() { return &___sum_8; }
	inline void set_sum_8(int64_t value)
	{
		___sum_8 = value;
	}

	inline static int32_t get_offset_of_callbacks_9() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___callbacks_9)); }
	inline List_1_t3270953649 * get_callbacks_9() const { return ___callbacks_9; }
	inline List_1_t3270953649 ** get_address_of_callbacks_9() { return &___callbacks_9; }
	inline void set_callbacks_9(List_1_t3270953649 * value)
	{
		___callbacks_9 = value;
		Il2CppCodeGenWriteBarrier(&___callbacks_9, value);
	}

	inline static int32_t get_offset_of_bufferSize_10() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___bufferSize_10)); }
	inline int32_t get_bufferSize_10() const { return ___bufferSize_10; }
	inline int32_t* get_address_of_bufferSize_10() { return &___bufferSize_10; }
	inline void set_bufferSize_10(int32_t value)
	{
		___bufferSize_10 = value;
	}

	inline static int32_t get_offset_of_samplingRate_11() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___samplingRate_11)); }
	inline int32_t get_samplingRate_11() const { return ___samplingRate_11; }
	inline int32_t* get_address_of_samplingRate_11() { return &___samplingRate_11; }
	inline void set_samplingRate_11(int32_t value)
	{
		___samplingRate_11 = value;
	}

	inline static int32_t get_offset_of_nBand_12() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___nBand_12)); }
	inline int32_t get_nBand_12() const { return ___nBand_12; }
	inline int32_t* get_address_of_nBand_12() { return &___nBand_12; }
	inline void set_nBand_12(int32_t value)
	{
		___nBand_12 = value;
	}

	inline static int32_t get_offset_of_gThresh_13() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___gThresh_13)); }
	inline float get_gThresh_13() const { return ___gThresh_13; }
	inline float* get_address_of_gThresh_13() { return &___gThresh_13; }
	inline void set_gThresh_13(float value)
	{
		___gThresh_13 = value;
	}

	inline static int32_t get_offset_of_blipDelayLen_14() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___blipDelayLen_14)); }
	inline int32_t get_blipDelayLen_14() const { return ___blipDelayLen_14; }
	inline int32_t* get_address_of_blipDelayLen_14() { return &___blipDelayLen_14; }
	inline void set_blipDelayLen_14(int32_t value)
	{
		___blipDelayLen_14 = value;
	}

	inline static int32_t get_offset_of_blipDelay_15() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___blipDelay_15)); }
	inline Int32U5BU5D_t1809983122* get_blipDelay_15() const { return ___blipDelay_15; }
	inline Int32U5BU5D_t1809983122** get_address_of_blipDelay_15() { return &___blipDelay_15; }
	inline void set_blipDelay_15(Int32U5BU5D_t1809983122* value)
	{
		___blipDelay_15 = value;
		Il2CppCodeGenWriteBarrier(&___blipDelay_15, value);
	}

	inline static int32_t get_offset_of_sinceLast_16() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___sinceLast_16)); }
	inline int32_t get_sinceLast_16() const { return ___sinceLast_16; }
	inline int32_t* get_address_of_sinceLast_16() { return &___sinceLast_16; }
	inline void set_sinceLast_16(int32_t value)
	{
		___sinceLast_16 = value;
	}

	inline static int32_t get_offset_of_framePeriod_17() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___framePeriod_17)); }
	inline float get_framePeriod_17() const { return ___framePeriod_17; }
	inline float* get_address_of_framePeriod_17() { return &___framePeriod_17; }
	inline void set_framePeriod_17(float value)
	{
		___framePeriod_17 = value;
	}

	inline static int32_t get_offset_of_colmax_18() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___colmax_18)); }
	inline int32_t get_colmax_18() const { return ___colmax_18; }
	inline int32_t* get_address_of_colmax_18() { return &___colmax_18; }
	inline void set_colmax_18(int32_t value)
	{
		___colmax_18 = value;
	}

	inline static int32_t get_offset_of_spectrum_19() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___spectrum_19)); }
	inline SingleU5BU5D_t1219431280* get_spectrum_19() const { return ___spectrum_19; }
	inline SingleU5BU5D_t1219431280** get_address_of_spectrum_19() { return &___spectrum_19; }
	inline void set_spectrum_19(SingleU5BU5D_t1219431280* value)
	{
		___spectrum_19 = value;
		Il2CppCodeGenWriteBarrier(&___spectrum_19, value);
	}

	inline static int32_t get_offset_of_averages_20() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___averages_20)); }
	inline SingleU5BU5D_t1219431280* get_averages_20() const { return ___averages_20; }
	inline SingleU5BU5D_t1219431280** get_address_of_averages_20() { return &___averages_20; }
	inline void set_averages_20(SingleU5BU5D_t1219431280* value)
	{
		___averages_20 = value;
		Il2CppCodeGenWriteBarrier(&___averages_20, value);
	}

	inline static int32_t get_offset_of_acVals_21() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___acVals_21)); }
	inline SingleU5BU5D_t1219431280* get_acVals_21() const { return ___acVals_21; }
	inline SingleU5BU5D_t1219431280** get_address_of_acVals_21() { return &___acVals_21; }
	inline void set_acVals_21(SingleU5BU5D_t1219431280* value)
	{
		___acVals_21 = value;
		Il2CppCodeGenWriteBarrier(&___acVals_21, value);
	}

	inline static int32_t get_offset_of_onsets_22() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___onsets_22)); }
	inline SingleU5BU5D_t1219431280* get_onsets_22() const { return ___onsets_22; }
	inline SingleU5BU5D_t1219431280** get_address_of_onsets_22() { return &___onsets_22; }
	inline void set_onsets_22(SingleU5BU5D_t1219431280* value)
	{
		___onsets_22 = value;
		Il2CppCodeGenWriteBarrier(&___onsets_22, value);
	}

	inline static int32_t get_offset_of_scorefun_23() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___scorefun_23)); }
	inline SingleU5BU5D_t1219431280* get_scorefun_23() const { return ___scorefun_23; }
	inline SingleU5BU5D_t1219431280** get_address_of_scorefun_23() { return &___scorefun_23; }
	inline void set_scorefun_23(SingleU5BU5D_t1219431280* value)
	{
		___scorefun_23 = value;
		Il2CppCodeGenWriteBarrier(&___scorefun_23, value);
	}

	inline static int32_t get_offset_of_dobeat_24() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___dobeat_24)); }
	inline SingleU5BU5D_t1219431280* get_dobeat_24() const { return ___dobeat_24; }
	inline SingleU5BU5D_t1219431280** get_address_of_dobeat_24() { return &___dobeat_24; }
	inline void set_dobeat_24(SingleU5BU5D_t1219431280* value)
	{
		___dobeat_24 = value;
		Il2CppCodeGenWriteBarrier(&___dobeat_24, value);
	}

	inline static int32_t get_offset_of_now_25() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___now_25)); }
	inline int32_t get_now_25() const { return ___now_25; }
	inline int32_t* get_address_of_now_25() { return &___now_25; }
	inline void set_now_25(int32_t value)
	{
		___now_25 = value;
	}

	inline static int32_t get_offset_of_spec_26() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___spec_26)); }
	inline SingleU5BU5D_t1219431280* get_spec_26() const { return ___spec_26; }
	inline SingleU5BU5D_t1219431280** get_address_of_spec_26() { return &___spec_26; }
	inline void set_spec_26(SingleU5BU5D_t1219431280* value)
	{
		___spec_26 = value;
		Il2CppCodeGenWriteBarrier(&___spec_26, value);
	}

	inline static int32_t get_offset_of_maxlag_27() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___maxlag_27)); }
	inline int32_t get_maxlag_27() const { return ___maxlag_27; }
	inline int32_t* get_address_of_maxlag_27() { return &___maxlag_27; }
	inline void set_maxlag_27(int32_t value)
	{
		___maxlag_27 = value;
	}

	inline static int32_t get_offset_of_decay_28() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___decay_28)); }
	inline float get_decay_28() const { return ___decay_28; }
	inline float* get_address_of_decay_28() { return &___decay_28; }
	inline void set_decay_28(float value)
	{
		___decay_28 = value;
	}

	inline static int32_t get_offset_of_auco_29() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___auco_29)); }
	inline Autoco_t1972512379 * get_auco_29() const { return ___auco_29; }
	inline Autoco_t1972512379 ** get_address_of_auco_29() { return &___auco_29; }
	inline void set_auco_29(Autoco_t1972512379 * value)
	{
		___auco_29 = value;
		Il2CppCodeGenWriteBarrier(&___auco_29, value);
	}

	inline static int32_t get_offset_of_alph_30() { return static_cast<int32_t>(offsetof(AudioProcessor_t2423098748, ___alph_30)); }
	inline float get_alph_30() const { return ___alph_30; }
	inline float* get_address_of_alph_30() { return &___alph_30; }
	inline void set_alph_30(float value)
	{
		___alph_30 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
