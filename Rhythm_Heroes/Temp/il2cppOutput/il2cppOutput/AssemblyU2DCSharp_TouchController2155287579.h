#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Camera
struct Camera_t3533968274;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t2155287579  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Camera TouchController::myCamera
	Camera_t3533968274 * ___myCamera_2;
	// UnityEngine.LayerMask TouchController::touchInputMask
	LayerMask_t1862190090  ___touchInputMask_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> TouchController::touchList
	List_1_t514686775 * ___touchList_4;
	// UnityEngine.GameObject[] TouchController::touchesOld
	GameObjectU5BU5D_t3499186955* ___touchesOld_5;
	// UnityEngine.RaycastHit TouchController::hit
	RaycastHit_t46221527  ___hit_6;
	// System.Int32 TouchController::comboBonus
	int32_t ___comboBonus_7;
	// UnityEngine.GameObject[] TouchController::planeObj
	GameObjectU5BU5D_t3499186955* ___planeObj_8;
	// UnityEngine.GameObject[] TouchController::touchObj
	GameObjectU5BU5D_t3499186955* ___touchObj_9;
	// UnityEngine.GameObject TouchController::note
	GameObject_t4012695102 * ___note_10;
	// UnityEngine.GameObject TouchController::scoreTextObj
	GameObject_t4012695102 * ___scoreTextObj_11;
	// UnityEngine.GameObject TouchController::wordTextObj
	GameObject_t4012695102 * ___wordTextObj_12;
	// System.Int32 TouchController::channelNum
	int32_t ___channelNum_13;

public:
	inline static int32_t get_offset_of_myCamera_2() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___myCamera_2)); }
	inline Camera_t3533968274 * get_myCamera_2() const { return ___myCamera_2; }
	inline Camera_t3533968274 ** get_address_of_myCamera_2() { return &___myCamera_2; }
	inline void set_myCamera_2(Camera_t3533968274 * value)
	{
		___myCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___myCamera_2, value);
	}

	inline static int32_t get_offset_of_touchInputMask_3() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___touchInputMask_3)); }
	inline LayerMask_t1862190090  get_touchInputMask_3() const { return ___touchInputMask_3; }
	inline LayerMask_t1862190090 * get_address_of_touchInputMask_3() { return &___touchInputMask_3; }
	inline void set_touchInputMask_3(LayerMask_t1862190090  value)
	{
		___touchInputMask_3 = value;
	}

	inline static int32_t get_offset_of_touchList_4() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___touchList_4)); }
	inline List_1_t514686775 * get_touchList_4() const { return ___touchList_4; }
	inline List_1_t514686775 ** get_address_of_touchList_4() { return &___touchList_4; }
	inline void set_touchList_4(List_1_t514686775 * value)
	{
		___touchList_4 = value;
		Il2CppCodeGenWriteBarrier(&___touchList_4, value);
	}

	inline static int32_t get_offset_of_touchesOld_5() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___touchesOld_5)); }
	inline GameObjectU5BU5D_t3499186955* get_touchesOld_5() const { return ___touchesOld_5; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_touchesOld_5() { return &___touchesOld_5; }
	inline void set_touchesOld_5(GameObjectU5BU5D_t3499186955* value)
	{
		___touchesOld_5 = value;
		Il2CppCodeGenWriteBarrier(&___touchesOld_5, value);
	}

	inline static int32_t get_offset_of_hit_6() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___hit_6)); }
	inline RaycastHit_t46221527  get_hit_6() const { return ___hit_6; }
	inline RaycastHit_t46221527 * get_address_of_hit_6() { return &___hit_6; }
	inline void set_hit_6(RaycastHit_t46221527  value)
	{
		___hit_6 = value;
	}

	inline static int32_t get_offset_of_comboBonus_7() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___comboBonus_7)); }
	inline int32_t get_comboBonus_7() const { return ___comboBonus_7; }
	inline int32_t* get_address_of_comboBonus_7() { return &___comboBonus_7; }
	inline void set_comboBonus_7(int32_t value)
	{
		___comboBonus_7 = value;
	}

	inline static int32_t get_offset_of_planeObj_8() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___planeObj_8)); }
	inline GameObjectU5BU5D_t3499186955* get_planeObj_8() const { return ___planeObj_8; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_planeObj_8() { return &___planeObj_8; }
	inline void set_planeObj_8(GameObjectU5BU5D_t3499186955* value)
	{
		___planeObj_8 = value;
		Il2CppCodeGenWriteBarrier(&___planeObj_8, value);
	}

	inline static int32_t get_offset_of_touchObj_9() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___touchObj_9)); }
	inline GameObjectU5BU5D_t3499186955* get_touchObj_9() const { return ___touchObj_9; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_touchObj_9() { return &___touchObj_9; }
	inline void set_touchObj_9(GameObjectU5BU5D_t3499186955* value)
	{
		___touchObj_9 = value;
		Il2CppCodeGenWriteBarrier(&___touchObj_9, value);
	}

	inline static int32_t get_offset_of_note_10() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___note_10)); }
	inline GameObject_t4012695102 * get_note_10() const { return ___note_10; }
	inline GameObject_t4012695102 ** get_address_of_note_10() { return &___note_10; }
	inline void set_note_10(GameObject_t4012695102 * value)
	{
		___note_10 = value;
		Il2CppCodeGenWriteBarrier(&___note_10, value);
	}

	inline static int32_t get_offset_of_scoreTextObj_11() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___scoreTextObj_11)); }
	inline GameObject_t4012695102 * get_scoreTextObj_11() const { return ___scoreTextObj_11; }
	inline GameObject_t4012695102 ** get_address_of_scoreTextObj_11() { return &___scoreTextObj_11; }
	inline void set_scoreTextObj_11(GameObject_t4012695102 * value)
	{
		___scoreTextObj_11 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTextObj_11, value);
	}

	inline static int32_t get_offset_of_wordTextObj_12() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___wordTextObj_12)); }
	inline GameObject_t4012695102 * get_wordTextObj_12() const { return ___wordTextObj_12; }
	inline GameObject_t4012695102 ** get_address_of_wordTextObj_12() { return &___wordTextObj_12; }
	inline void set_wordTextObj_12(GameObject_t4012695102 * value)
	{
		___wordTextObj_12 = value;
		Il2CppCodeGenWriteBarrier(&___wordTextObj_12, value);
	}

	inline static int32_t get_offset_of_channelNum_13() { return static_cast<int32_t>(offsetof(TouchController_t2155287579, ___channelNum_13)); }
	inline int32_t get_channelNum_13() const { return ___channelNum_13; }
	inline int32_t* get_address_of_channelNum_13() { return &___channelNum_13; }
	inline void set_channelNum_13(int32_t value)
	{
		___channelNum_13 = value;
	}
};

struct TouchController_t2155287579_StaticFields
{
public:
	// System.Int32 TouchController::comboCount
	int32_t ___comboCount_14;
	// System.Boolean TouchController::hasChanged
	bool ___hasChanged_15;

public:
	inline static int32_t get_offset_of_comboCount_14() { return static_cast<int32_t>(offsetof(TouchController_t2155287579_StaticFields, ___comboCount_14)); }
	inline int32_t get_comboCount_14() const { return ___comboCount_14; }
	inline int32_t* get_address_of_comboCount_14() { return &___comboCount_14; }
	inline void set_comboCount_14(int32_t value)
	{
		___comboCount_14 = value;
	}

	inline static int32_t get_offset_of_hasChanged_15() { return static_cast<int32_t>(offsetof(TouchController_t2155287579_StaticFields, ___hasChanged_15)); }
	inline bool get_hasChanged_15() const { return ___hasChanged_15; }
	inline bool* get_address_of_hasChanged_15() { return &___hasChanged_15; }
	inline void set_hasChanged_15(bool value)
	{
		___hasChanged_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
