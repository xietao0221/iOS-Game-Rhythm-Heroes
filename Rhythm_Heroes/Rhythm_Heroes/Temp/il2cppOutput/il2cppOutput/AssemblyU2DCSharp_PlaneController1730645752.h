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
	GameObject_t4012695102 * ___prefabBlock_8;
	// UnityEngine.GameObject[] PlaneController::planeObj
	GameObjectU5BU5D_t3499186955* ___planeObj_9;

public:
	inline static int32_t get_offset_of_prefabBlock_8() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___prefabBlock_8)); }
	inline GameObject_t4012695102 * get_prefabBlock_8() const { return ___prefabBlock_8; }
	inline GameObject_t4012695102 ** get_address_of_prefabBlock_8() { return &___prefabBlock_8; }
	inline void set_prefabBlock_8(GameObject_t4012695102 * value)
	{
		___prefabBlock_8 = value;
		Il2CppCodeGenWriteBarrier(&___prefabBlock_8, value);
	}

	inline static int32_t get_offset_of_planeObj_9() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___planeObj_9)); }
	inline GameObjectU5BU5D_t3499186955* get_planeObj_9() const { return ___planeObj_9; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_planeObj_9() { return &___planeObj_9; }
	inline void set_planeObj_9(GameObjectU5BU5D_t3499186955* value)
	{
		___planeObj_9 = value;
		Il2CppCodeGenWriteBarrier(&___planeObj_9, value);
	}
};

struct PlaneController_t1730645752_StaticFields
{
public:
	// System.Boolean PlaneController::keepPlaying
	bool ___keepPlaying_2;
	// System.Int32 PlaneController::blockNumPerChannel
	int32_t ___blockNumPerChannel_3;
	// System.Int32[] PlaneController::blockSpeed
	Int32U5BU5D_t1809983122* ___blockSpeed_4;
	// System.Single PlaneController::blockTimeInterval
	float ___blockTimeInterval_5;
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInPool
	Queue_1U5BU5D_t3428488447* ___blocksInPool_6;
	// System.Collections.Generic.Queue`1<BlockWrapper>[] PlaneController::blocksInChannel
	Queue_1U5BU5D_t3428488447* ___blocksInChannel_7;
	// BlockWrapper[] PlaneController::blockClone
	BlockWrapperU5BU5D_t4016510019* ___blockClone_10;
	// UnityEngine.Vector3[] PlaneController::startingPoint
	Vector3U5BU5D_t3227571696* ___startingPoint_11;
	// UnityEngine.Vector3[] PlaneController::endingPoint
	Vector3U5BU5D_t3227571696* ___endingPoint_12;
	// System.Single PlaneController::endingPointLocalMin
	float ___endingPointLocalMin_13;
	// System.Single PlaneController::touchZoneLocalMin
	float ___touchZoneLocalMin_14;

public:
	inline static int32_t get_offset_of_keepPlaying_2() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___keepPlaying_2)); }
	inline bool get_keepPlaying_2() const { return ___keepPlaying_2; }
	inline bool* get_address_of_keepPlaying_2() { return &___keepPlaying_2; }
	inline void set_keepPlaying_2(bool value)
	{
		___keepPlaying_2 = value;
	}

	inline static int32_t get_offset_of_blockNumPerChannel_3() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockNumPerChannel_3)); }
	inline int32_t get_blockNumPerChannel_3() const { return ___blockNumPerChannel_3; }
	inline int32_t* get_address_of_blockNumPerChannel_3() { return &___blockNumPerChannel_3; }
	inline void set_blockNumPerChannel_3(int32_t value)
	{
		___blockNumPerChannel_3 = value;
	}

	inline static int32_t get_offset_of_blockSpeed_4() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockSpeed_4)); }
	inline Int32U5BU5D_t1809983122* get_blockSpeed_4() const { return ___blockSpeed_4; }
	inline Int32U5BU5D_t1809983122** get_address_of_blockSpeed_4() { return &___blockSpeed_4; }
	inline void set_blockSpeed_4(Int32U5BU5D_t1809983122* value)
	{
		___blockSpeed_4 = value;
		Il2CppCodeGenWriteBarrier(&___blockSpeed_4, value);
	}

	inline static int32_t get_offset_of_blockTimeInterval_5() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockTimeInterval_5)); }
	inline float get_blockTimeInterval_5() const { return ___blockTimeInterval_5; }
	inline float* get_address_of_blockTimeInterval_5() { return &___blockTimeInterval_5; }
	inline void set_blockTimeInterval_5(float value)
	{
		___blockTimeInterval_5 = value;
	}

	inline static int32_t get_offset_of_blocksInPool_6() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInPool_6)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInPool_6() const { return ___blocksInPool_6; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInPool_6() { return &___blocksInPool_6; }
	inline void set_blocksInPool_6(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInPool_6 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInPool_6, value);
	}

	inline static int32_t get_offset_of_blocksInChannel_7() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blocksInChannel_7)); }
	inline Queue_1U5BU5D_t3428488447* get_blocksInChannel_7() const { return ___blocksInChannel_7; }
	inline Queue_1U5BU5D_t3428488447** get_address_of_blocksInChannel_7() { return &___blocksInChannel_7; }
	inline void set_blocksInChannel_7(Queue_1U5BU5D_t3428488447* value)
	{
		___blocksInChannel_7 = value;
		Il2CppCodeGenWriteBarrier(&___blocksInChannel_7, value);
	}

	inline static int32_t get_offset_of_blockClone_10() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockClone_10)); }
	inline BlockWrapperU5BU5D_t4016510019* get_blockClone_10() const { return ___blockClone_10; }
	inline BlockWrapperU5BU5D_t4016510019** get_address_of_blockClone_10() { return &___blockClone_10; }
	inline void set_blockClone_10(BlockWrapperU5BU5D_t4016510019* value)
	{
		___blockClone_10 = value;
		Il2CppCodeGenWriteBarrier(&___blockClone_10, value);
	}

	inline static int32_t get_offset_of_startingPoint_11() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___startingPoint_11)); }
	inline Vector3U5BU5D_t3227571696* get_startingPoint_11() const { return ___startingPoint_11; }
	inline Vector3U5BU5D_t3227571696** get_address_of_startingPoint_11() { return &___startingPoint_11; }
	inline void set_startingPoint_11(Vector3U5BU5D_t3227571696* value)
	{
		___startingPoint_11 = value;
		Il2CppCodeGenWriteBarrier(&___startingPoint_11, value);
	}

	inline static int32_t get_offset_of_endingPoint_12() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___endingPoint_12)); }
	inline Vector3U5BU5D_t3227571696* get_endingPoint_12() const { return ___endingPoint_12; }
	inline Vector3U5BU5D_t3227571696** get_address_of_endingPoint_12() { return &___endingPoint_12; }
	inline void set_endingPoint_12(Vector3U5BU5D_t3227571696* value)
	{
		___endingPoint_12 = value;
		Il2CppCodeGenWriteBarrier(&___endingPoint_12, value);
	}

	inline static int32_t get_offset_of_endingPointLocalMin_13() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___endingPointLocalMin_13)); }
	inline float get_endingPointLocalMin_13() const { return ___endingPointLocalMin_13; }
	inline float* get_address_of_endingPointLocalMin_13() { return &___endingPointLocalMin_13; }
	inline void set_endingPointLocalMin_13(float value)
	{
		___endingPointLocalMin_13 = value;
	}

	inline static int32_t get_offset_of_touchZoneLocalMin_14() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZoneLocalMin_14)); }
	inline float get_touchZoneLocalMin_14() const { return ___touchZoneLocalMin_14; }
	inline float* get_address_of_touchZoneLocalMin_14() { return &___touchZoneLocalMin_14; }
	inline void set_touchZoneLocalMin_14(float value)
	{
		___touchZoneLocalMin_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
