#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1809983122;
// System.Collections.Generic.Queue`1<BlockWrapper>[]
struct Queue_1U5BU5D_t3428488447;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// BlockWrapper[]
struct BlockWrapperU5BU5D_t4016510019;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled_pinvoke;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlaneController
struct  PlaneController_t1730645752  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject PlaneController::prefabBlock
	GameObject_t4012695102 * ___prefabBlock_11;
	// UnityEngine.GameObject PlaneController::wordObj
	GameObject_t4012695102 * ___wordObj_16;
	// UnityEngine.GameObject PlaneController::scoreObj
	GameObject_t4012695102 * ___scoreObj_17;
	// System.Int32 PlaneController::delay
	int32_t ___delay_22;
	// System.Single PlaneController::timePrev
	float ___timePrev_23;
	// System.Single PlaneController::timeNow
	float ___timeNow_24;

public:
	inline static int32_t get_offset_of_prefabBlock_11() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___prefabBlock_11)); }
	inline GameObject_t4012695102 * get_prefabBlock_11() const { return ___prefabBlock_11; }
	inline GameObject_t4012695102 ** get_address_of_prefabBlock_11() { return &___prefabBlock_11; }
	inline void set_prefabBlock_11(GameObject_t4012695102 * value)
	{
		___prefabBlock_11 = value;
		Il2CppCodeGenWriteBarrier(&___prefabBlock_11, value);
	}

	inline static int32_t get_offset_of_wordObj_16() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___wordObj_16)); }
	inline GameObject_t4012695102 * get_wordObj_16() const { return ___wordObj_16; }
	inline GameObject_t4012695102 ** get_address_of_wordObj_16() { return &___wordObj_16; }
	inline void set_wordObj_16(GameObject_t4012695102 * value)
	{
		___wordObj_16 = value;
		Il2CppCodeGenWriteBarrier(&___wordObj_16, value);
	}

	inline static int32_t get_offset_of_scoreObj_17() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___scoreObj_17)); }
	inline GameObject_t4012695102 * get_scoreObj_17() const { return ___scoreObj_17; }
	inline GameObject_t4012695102 ** get_address_of_scoreObj_17() { return &___scoreObj_17; }
	inline void set_scoreObj_17(GameObject_t4012695102 * value)
	{
		___scoreObj_17 = value;
		Il2CppCodeGenWriteBarrier(&___scoreObj_17, value);
	}

	inline static int32_t get_offset_of_delay_22() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___delay_22)); }
	inline int32_t get_delay_22() const { return ___delay_22; }
	inline int32_t* get_address_of_delay_22() { return &___delay_22; }
	inline void set_delay_22(int32_t value)
	{
		___delay_22 = value;
	}

	inline static int32_t get_offset_of_timePrev_23() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___timePrev_23)); }
	inline float get_timePrev_23() const { return ___timePrev_23; }
	inline float* get_address_of_timePrev_23() { return &___timePrev_23; }
	inline void set_timePrev_23(float value)
	{
		___timePrev_23 = value;
	}

	inline static int32_t get_offset_of_timeNow_24() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___timeNow_24)); }
	inline float get_timeNow_24() const { return ___timeNow_24; }
	inline float* get_address_of_timeNow_24() { return &___timeNow_24; }
	inline void set_timeNow_24(float value)
	{
		___timeNow_24 = value;
	}
};

struct PlaneController_t1730645752_StaticFields
{
public:
	// System.Boolean PlaneController::keepPlaying
	bool ___keepPlaying_2;
	// System.Int32 PlaneController::channelNum
	int32_t ___channelNum_3;
	// System.Int32 PlaneController::blockNumPerChannel
	int32_t ___blockNumPerChannel_4;
	// System.Int32[] PlaneController::blockSpeed
	Int32U5BU5D_t1809983122* ___blockSpeed_5;
	// System.Int32 PlaneController::comboBonus
	int32_t ___comboBonus_6;
	// System.Single PlaneController::beatMinInterval
	float ___beatMinInterval_7;
	// System.Single PlaneController::countDownInterval
	float ___countDownInterval_8;
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInPool
	Queue_1U5BU5D_t3428488447* ___blocksInPool_9;
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInChannel
	Queue_1U5BU5D_t3428488447* ___blocksInChannel_10;
	// UnityEngine.GameObject[] PlaneController::planeObj
	GameObjectU5BU5D_t3499186955* ___planeObj_12;
	// UnityEngine.GameObject[] PlaneController::touchZoneObj
	GameObjectU5BU5D_t3499186955* ___touchZoneObj_13;
	// UnityEngine.GameObject PlaneController::note
	GameObject_t4012695102 * ___note_14;
	// BlockWrapper[] PlaneController::blockClone
	BlockWrapperU5BU5D_t4016510019* ___blockClone_15;
	// UnityEngine.Object PlaneController::mutex
	Object_t3878351788 * ___mutex_18;
	// UnityEngine.Vector3[] PlaneController::startingPoint
	Vector3U5BU5D_t3227571696* ___startingPoint_19;
	// System.Single PlaneController::endingPointLocalMin
	float ___endingPointLocalMin_20;
	// System.Single PlaneController::touchZoneLocalMin
	float ___touchZoneLocalMin_21;

public:
	inline static int32_t get_offset_of_keepPlaying_2() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___keepPlaying_2)); }
	inline bool get_keepPlaying_2() const { return ___keepPlaying_2; }
	inline bool* get_address_of_keepPlaying_2() { return &___keepPlaying_2; }
	inline void set_keepPlaying_2(bool value)
	{
		___keepPlaying_2 = value;
	}

	inline static int32_t get_offset_of_channelNum_3() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___channelNum_3)); }
	inline int32_t get_channelNum_3() const { return ___channelNum_3; }
	inline int32_t* get_address_of_channelNum_3() { return &___channelNum_3; }
	inline void set_channelNum_3(int32_t value)
	{
		___channelNum_3 = value;
	}

	inline static int32_t get_offset_of_blockNumPerChannel_4() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockNumPerChannel_4)); }
	inline int32_t get_blockNumPerChannel_4() const { return ___blockNumPerChannel_4; }
	inline int32_t* get_address_of_blockNumPerChannel_4() { return &___blockNumPerChannel_4; }
	inline void set_blockNumPerChannel_4(int32_t value)
	{
		___blockNumPerChannel_4 = value;
	}

	inline static int32_t get_offset_of_blockSpeed_5() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockSpeed_5)); }
	inline Int32U5BU5D_t1809983122* get_blockSpeed_5() const { return ___blockSpeed_5; }
	inline Int32U5BU5D_t1809983122** get_address_of_blockSpeed_5() { return &___blockSpeed_5; }
	inline void set_blockSpeed_5(Int32U5BU5D_t1809983122* value)
	{
		___blockSpeed_5 = value;
		Il2CppCodeGenWriteBarrier(&___blockSpeed_5, value);
	}

	inline static int32_t get_offset_of_comboBonus_6() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___comboBonus_6)); }
	inline int32_t get_comboBonus_6() const { return ___comboBonus_6; }
	inline int32_t* get_address_of_comboBonus_6() { return &___comboBonus_6; }
	inline void set_comboBonus_6(int32_t value)
	{
		___comboBonus_6 = value;
	}

	inline static int32_t get_offset_of_beatMinInterval_7() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___beatMinInterval_7)); }
	inline float get_beatMinInterval_7() const { return ___beatMinInterval_7; }
	inline float* get_address_of_beatMinInterval_7() { return &___beatMinInterval_7; }
	inline void set_beatMinInterval_7(float value)
	{
		___beatMinInterval_7 = value;
	}

	inline static int32_t get_offset_of_countDownInterval_8() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___countDownInterval_8)); }
	inline float get_countDownInterval_8() const { return ___countDownInterval_8; }
	inline float* get_address_of_countDownInterval_8() { return &___countDownInterval_8; }
	inline void set_countDownInterval_8(float value)
	{
		___countDownInterval_8 = value;
	}

	inline static int32_t get_offset_of_blocksInPool_9() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInPool_9)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInPool_9() const { return ___blocksInPool_9; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInPool_9() { return &___blocksInPool_9; }
	inline void set_blocksInPool_9(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInPool_9 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInPool_9, value);
	}

	inline static int32_t get_offset_of_blocksInChannel_10() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInChannel_10)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInChannel_10() const { return ___blocksInChannel_10; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInChannel_10() { return &___blocksInChannel_10; }
	inline void set_blocksInChannel_10(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInChannel_10 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInChannel_10, value);
	}

	inline static int32_t get_offset_of_planeObj_12() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___planeObj_12)); }
	inline GameObjectU5BU5D_t3499186955* get_planeObj_12() const { return ___planeObj_12; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_planeObj_12() { return &___planeObj_12; }
	inline void set_planeObj_12(GameObjectU5BU5D_t3499186955* value)
	{
		___planeObj_12 = value;
		Il2CppCodeGenWriteBarrier(&___planeObj_12, value);
	}

	inline static int32_t get_offset_of_touchZoneObj_13() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZoneObj_13)); }
	inline GameObjectU5BU5D_t3499186955* get_touchZoneObj_13() const { return ___touchZoneObj_13; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_touchZoneObj_13() { return &___touchZoneObj_13; }
	inline void set_touchZoneObj_13(GameObjectU5BU5D_t3499186955* value)
	{
		___touchZoneObj_13 = value;
		Il2CppCodeGenWriteBarrier(&___touchZoneObj_13, value);
	}

	inline static int32_t get_offset_of_note_14() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___note_14)); }
	inline GameObject_t4012695102 * get_note_14() const { return ___note_14; }
	inline GameObject_t4012695102 ** get_address_of_note_14() { return &___note_14; }
	inline void set_note_14(GameObject_t4012695102 * value)
	{
		___note_14 = value;
		Il2CppCodeGenWriteBarrier(&___note_14, value);
	}

	inline static int32_t get_offset_of_blockClone_15() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockClone_15)); }
	inline BlockWrapperU5BU5D_t4016510019* get_blockClone_15() const { return ___blockClone_15; }
	inline BlockWrapperU5BU5D_t4016510019** get_address_of_blockClone_15() { return &___blockClone_15; }
	inline void set_blockClone_15(BlockWrapperU5BU5D_t4016510019* value)
	{
		___blockClone_15 = value;
		Il2CppCodeGenWriteBarrier(&___blockClone_15, value);
	}

	inline static int32_t get_offset_of_mutex_18() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___mutex_18)); }
	inline Object_t3878351788 * get_mutex_18() const { return ___mutex_18; }
	inline Object_t3878351788 ** get_address_of_mutex_18() { return &___mutex_18; }
	inline void set_mutex_18(Object_t3878351788 * value)
	{
		___mutex_18 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_18, value);
	}

	inline static int32_t get_offset_of_startingPoint_19() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___startingPoint_19)); }
	inline Vector3U5BU5D_t3227571696* get_startingPoint_19() const { return ___startingPoint_19; }
	inline Vector3U5BU5D_t3227571696** get_address_of_startingPoint_19() { return &___startingPoint_19; }
	inline void set_startingPoint_19(Vector3U5BU5D_t3227571696* value)
	{
		___startingPoint_19 = value;
		Il2CppCodeGenWriteBarrier(&___startingPoint_19, value);
	}

	inline static int32_t get_offset_of_endingPointLocalMin_20() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___endingPointLocalMin_20)); }
	inline float get_endingPointLocalMin_20() const { return ___endingPointLocalMin_20; }
	inline float* get_address_of_endingPointLocalMin_20() { return &___endingPointLocalMin_20; }
	inline void set_endingPointLocalMin_20(float value)
	{
		___endingPointLocalMin_20 = value;
	}

	inline static int32_t get_offset_of_touchZoneLocalMin_21() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZoneLocalMin_21)); }
	inline float get_touchZoneLocalMin_21() const { return ___touchZoneLocalMin_21; }
	inline float* get_address_of_touchZoneLocalMin_21() { return &___touchZoneLocalMin_21; }
	inline void set_touchZoneLocalMin_21(float value)
	{
		___touchZoneLocalMin_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
