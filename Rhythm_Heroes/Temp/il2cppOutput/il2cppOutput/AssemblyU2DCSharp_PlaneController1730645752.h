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
	GameObject_t4012695102 * ___prefabBlock_9;
	// UnityEngine.GameObject PlaneController::wordObj
	GameObject_t4012695102 * ___wordObj_13;
	// UnityEngine.GameObject PlaneController::scoreObj
	GameObject_t4012695102 * ___scoreObj_14;
	// System.Int32 PlaneController::delay
	int32_t ___delay_19;

public:
	inline static int32_t get_offset_of_prefabBlock_9() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___prefabBlock_9)); }
	inline GameObject_t4012695102 * get_prefabBlock_9() const { return ___prefabBlock_9; }
	inline GameObject_t4012695102 ** get_address_of_prefabBlock_9() { return &___prefabBlock_9; }
	inline void set_prefabBlock_9(GameObject_t4012695102 * value)
	{
		___prefabBlock_9 = value;
		Il2CppCodeGenWriteBarrier(&___prefabBlock_9, value);
	}

	inline static int32_t get_offset_of_wordObj_13() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___wordObj_13)); }
	inline GameObject_t4012695102 * get_wordObj_13() const { return ___wordObj_13; }
	inline GameObject_t4012695102 ** get_address_of_wordObj_13() { return &___wordObj_13; }
	inline void set_wordObj_13(GameObject_t4012695102 * value)
	{
		___wordObj_13 = value;
		Il2CppCodeGenWriteBarrier(&___wordObj_13, value);
	}

	inline static int32_t get_offset_of_scoreObj_14() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___scoreObj_14)); }
	inline GameObject_t4012695102 * get_scoreObj_14() const { return ___scoreObj_14; }
	inline GameObject_t4012695102 ** get_address_of_scoreObj_14() { return &___scoreObj_14; }
	inline void set_scoreObj_14(GameObject_t4012695102 * value)
	{
		___scoreObj_14 = value;
		Il2CppCodeGenWriteBarrier(&___scoreObj_14, value);
	}

	inline static int32_t get_offset_of_delay_19() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___delay_19)); }
	inline int32_t get_delay_19() const { return ___delay_19; }
	inline int32_t* get_address_of_delay_19() { return &___delay_19; }
	inline void set_delay_19(int32_t value)
	{
		___delay_19 = value;
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
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInPool
	Queue_1U5BU5D_t3428488447* ___blocksInPool_7;
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInChannel
	Queue_1U5BU5D_t3428488447* ___blocksInChannel_8;
	// UnityEngine.GameObject[] PlaneController::planeObj
	GameObjectU5BU5D_t3499186955* ___planeObj_10;
	// UnityEngine.GameObject[] PlaneController::touchZoneObj
	GameObjectU5BU5D_t3499186955* ___touchZoneObj_11;
	// BlockWrapper[] PlaneController::blockClone
	BlockWrapperU5BU5D_t4016510019* ___blockClone_12;
	// UnityEngine.Object PlaneController::mutex
	Object_t3878351788 * ___mutex_15;
	// UnityEngine.Vector3[] PlaneController::startingPoint
	Vector3U5BU5D_t3227571696* ___startingPoint_16;
	// System.Single PlaneController::endingPointLocalMin
	float ___endingPointLocalMin_17;
	// System.Single PlaneController::touchZoneLocalMin
	float ___touchZoneLocalMin_18;

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

	inline static int32_t get_offset_of_blocksInPool_7() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInPool_7)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInPool_7() const { return ___blocksInPool_7; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInPool_7() { return &___blocksInPool_7; }
	inline void set_blocksInPool_7(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInPool_7 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInPool_7, value);
	}

	inline static int32_t get_offset_of_blocksInChannel_8() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInChannel_8)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInChannel_8() const { return ___blocksInChannel_8; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInChannel_8() { return &___blocksInChannel_8; }
	inline void set_blocksInChannel_8(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInChannel_8 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInChannel_8, value);
	}

	inline static int32_t get_offset_of_planeObj_10() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___planeObj_10)); }
	inline GameObjectU5BU5D_t3499186955* get_planeObj_10() const { return ___planeObj_10; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_planeObj_10() { return &___planeObj_10; }
	inline void set_planeObj_10(GameObjectU5BU5D_t3499186955* value)
	{
		___planeObj_10 = value;
		Il2CppCodeGenWriteBarrier(&___planeObj_10, value);
	}

	inline static int32_t get_offset_of_touchZoneObj_11() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZoneObj_11)); }
	inline GameObjectU5BU5D_t3499186955* get_touchZoneObj_11() const { return ___touchZoneObj_11; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_touchZoneObj_11() { return &___touchZoneObj_11; }
	inline void set_touchZoneObj_11(GameObjectU5BU5D_t3499186955* value)
	{
		___touchZoneObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___touchZoneObj_11, value);
	}

	inline static int32_t get_offset_of_blockClone_12() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockClone_12)); }
	inline BlockWrapperU5BU5D_t4016510019* get_blockClone_12() const { return ___blockClone_12; }
	inline BlockWrapperU5BU5D_t4016510019** get_address_of_blockClone_12() { return &___blockClone_12; }
	inline void set_blockClone_12(BlockWrapperU5BU5D_t4016510019* value)
	{
		___blockClone_12 = value;
		Il2CppCodeGenWriteBarrier(&___blockClone_12, value);
	}

	inline static int32_t get_offset_of_mutex_15() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___mutex_15)); }
	inline Object_t3878351788 * get_mutex_15() const { return ___mutex_15; }
	inline Object_t3878351788 ** get_address_of_mutex_15() { return &___mutex_15; }
	inline void set_mutex_15(Object_t3878351788 * value)
	{
		___mutex_15 = value;
		Il2CppCodeGenWriteBarrier(&___mutex_15, value);
	}

	inline static int32_t get_offset_of_startingPoint_16() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___startingPoint_16)); }
	inline Vector3U5BU5D_t3227571696* get_startingPoint_16() const { return ___startingPoint_16; }
	inline Vector3U5BU5D_t3227571696** get_address_of_startingPoint_16() { return &___startingPoint_16; }
	inline void set_startingPoint_16(Vector3U5BU5D_t3227571696* value)
	{
		___startingPoint_16 = value;
		Il2CppCodeGenWriteBarrier(&___startingPoint_16, value);
	}

	inline static int32_t get_offset_of_endingPointLocalMin_17() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___endingPointLocalMin_17)); }
	inline float get_endingPointLocalMin_17() const { return ___endingPointLocalMin_17; }
	inline float* get_address_of_endingPointLocalMin_17() { return &___endingPointLocalMin_17; }
	inline void set_endingPointLocalMin_17(float value)
	{
		___endingPointLocalMin_17 = value;
	}

	inline static int32_t get_offset_of_touchZoneLocalMin_18() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZoneLocalMin_18)); }
	inline float get_touchZoneLocalMin_18() const { return ___touchZoneLocalMin_18; }
	inline float* get_address_of_touchZoneLocalMin_18() { return &___touchZoneLocalMin_18; }
	inline void set_touchZoneLocalMin_18(float value)
	{
		___touchZoneLocalMin_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
