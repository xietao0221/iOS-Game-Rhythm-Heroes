#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlaneController
struct PlaneController_t1730645752;
// System.Single[]
struct SingleU5BU5D_t1219431280;

#include "codegen/il2cpp-codegen.h"

// System.Void PlaneController::.ctor()
extern "C"  void PlaneController__ctor_m3938815859 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::.cctor()
extern "C"  void PlaneController__cctor_m1362111130 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::Awake()
extern "C"  void PlaneController_Awake_m4176421078 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::activeBeat()
extern "C"  void PlaneController_activeBeat_m1261013037 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::onOnbeatDetected()
extern "C"  void PlaneController_onOnbeatDetected_m359223623 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::onSpectrum(System.Single[])
extern "C"  void PlaneController_onSpectrum_m2039325128 (PlaneController_t1730645752 * __this, SingleU5BU5D_t1219431280* ___spectrum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::FixedUpdate()
extern "C"  void PlaneController_FixedUpdate_m932498094 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::calculatePosition()
extern "C"  void PlaneController_calculatePosition_m1891737504 (PlaneController_t1730645752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::initiateBlocks(System.Int32)
extern "C"  void PlaneController_initiateBlocks_m3082404449 (PlaneController_t1730645752 * __this, int32_t ___num0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaneController::generateBlocks(System.Int32)
extern "C"  void PlaneController_generateBlocks_m4172693309 (PlaneController_t1730645752 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
