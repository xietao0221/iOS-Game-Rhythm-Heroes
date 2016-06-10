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
// BlockWrapper[]
struct BlockWrapperU5BU5D_t4016510019;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t3227571696;
// System.Single[,]
struct SingleU5BU2CU5D_t1219431281;

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
	// System.Boolean PlaneController::keepPlaying
	bool ___keepPlaying_2;
	// UnityEngine.GameObject PlaneController::prefabBlock
	GameObject_t4012695102 * ___prefabBlock_8;
	// UnityEngine.Vector3[] PlaneController::startingPoints
	Vector3U5BU5D_t3227571696* ___startingPoints_10;
	// UnityEngine.Vector3[] PlaneController::endingPoints
	Vector3U5BU5D_t3227571696* ___endingPoints_11;
	// UnityEngine.GameObject PlaneController::wordTextObj
	GameObject_t4012695102 * ___wordTextObj_12;

public:
	inline static int32_t get_offset_of_keepPlaying_2() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___keepPlaying_2)); }
	inline bool get_keepPlaying_2() const { return ___keepPlaying_2; }
	inline bool* get_address_of_keepPlaying_2() { return &___keepPlaying_2; }
	inline void set_keepPlaying_2(bool value)
	{
		___keepPlaying_2 = value;
	}

	inline static int32_t get_offset_of_prefabBlock_8() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___prefabBlock_8)); }
	inline GameObject_t4012695102 * get_prefabBlock_8() const { return ___prefabBlock_8; }
	inline GameObject_t4012695102 ** get_address_of_prefabBlock_8() { return &___prefabBlock_8; }
	inline void set_prefabBlock_8(GameObject_t4012695102 * value)
	{
		___prefabBlock_8 = value;
		Il2CppCodeGenWriteBarrier(&___prefabBlock_8, value);
	}

	inline static int32_t get_offset_of_startingPoints_10() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___startingPoints_10)); }
	inline Vector3U5BU5D_t3227571696* get_startingPoints_10() const { return ___startingPoints_10; }
	inline Vector3U5BU5D_t3227571696** get_address_of_startingPoints_10() { return &___startingPoints_10; }
	inline void set_startingPoints_10(Vector3U5BU5D_t3227571696* value)
	{
		___startingPoints_10 = value;
		Il2CppCodeGenWriteBarrier(&___startingPoints_10, value);
	}

	inline static int32_t get_offset_of_endingPoints_11() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___endingPoints_11)); }
	inline Vector3U5BU5D_t3227571696* get_endingPoints_11() const { return ___endingPoints_11; }
	inline Vector3U5BU5D_t3227571696** get_address_of_endingPoints_11() { return &___endingPoints_11; }
	inline void set_endingPoints_11(Vector3U5BU5D_t3227571696* value)
	{
		___endingPoints_11 = value;
		Il2CppCodeGenWriteBarrier(&___endingPoints_11, value);
	}

	inline static int32_t get_offset_of_wordTextObj_12() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752, ___wordTextObj_12)); }
	inline GameObject_t4012695102 * get_wordTextObj_12() const { return ___wordTextObj_12; }
	inline GameObject_t4012695102 ** get_address_of_wordTextObj_12() { return &___wordTextObj_12; }
	inline void set_wordTextObj_12(GameObject_t4012695102 * value)
	{
		___wordTextObj_12 = value;
		Il2CppCodeGenWriteBarrier(&___wordTextObj_12, value);
	}
};

struct PlaneController_t1730645752_StaticFields
{
public:
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
	BlockWrapperU5BU5D_t4016510019* ___blockClone_9;
	// System.Single PlaneController::endingPointLocalMin
	float ___endingPointLocalMin_13;
	// System.Single PlaneController::touchZoneLocalMin
	float ___touchZoneLocalMin_14;
	// System.Int32 PlaneController::score
	int32_t ___score_15;
	// System.Single[,] PlaneController::touchZone
	SingleU5BU2CU5D_t1219431281* ___touchZone_16;

public:
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

	inline static int32_t get_offset_of_blockClone_9() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___blockClone_9)); }
	inline BlockWrapperU5BU5D_t4016510019* get_blockClone_9() const { return ___blockClone_9; }
	inline BlockWrapperU5BU5D_t4016510019** get_address_of_blockClone_9() { return &___blockClone_9; }
	inline void set_blockClone_9(BlockWrapperU5BU5D_t4016510019* value)
	{
		___blockClone_9 = value;
		Il2CppCodeGenWriteBarrier(&___blockClone_9, value);
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

	inline static int32_t get_offset_of_score_15() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___score_15)); }
	inline int32_t get_score_15() const { return ___score_15; }
	inline int32_t* get_address_of_score_15() { return &___score_15; }
	inline void set_score_15(int32_t value)
	{
		___score_15 = value;
	}

	inline static int32_t get_offset_of_touchZone_16() { return static_cast<int32_t>(offsetof(PlaneController_t1730645752_StaticFields, ___touchZone_16)); }
	inline SingleU5BU2CU5D_t1219431281* get_touchZone_16() const { return ___touchZone_16; }
	inline SingleU5BU2CU5D_t1219431281** get_address_of_touchZone_16() { return &___touchZone_16; }
	inline void set_touchZone_16(SingleU5BU2CU5D_t1219431281* value)
	{
		___touchZone_16 = value;
		Il2CppCodeGenWriteBarrier(&___touchZone_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
