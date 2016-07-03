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

// AppleMusicController
struct AppleMusicController_t2416020743;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void AppleMusicController::.ctor()
extern "C"  void AppleMusicController__ctor_m429360500 (AppleMusicController_t2416020743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::.cctor()
extern "C"  void AppleMusicController__cctor_m4238144697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::Awake()
extern "C"  void AppleMusicController_Awake_m666965719 (AppleMusicController_t2416020743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::QueryAppleMusic(System.String)
extern "C"  void AppleMusicController_QueryAppleMusic_m4199287997 (AppleMusicController_t2416020743 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::StopAppleMusic()
extern "C"  void AppleMusicController_StopAppleMusic_m402436061 (AppleMusicController_t2416020743 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::DidReceiveResponse(System.String)
extern "C"  void AppleMusicController_DidReceiveResponse_m633120141 (AppleMusicController_t2416020743 * __this, String_t* ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractTitle(System.String)
extern "C"  void AppleMusicController_ExtractTitle_m468098939 (AppleMusicController_t2416020743 * __this, String_t* ___title0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractArtist(System.String)
extern "C"  void AppleMusicController_ExtractArtist_m1549744776 (AppleMusicController_t2416020743 * __this, String_t* ___artist0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractAlbumTitle(System.String)
extern "C"  void AppleMusicController_ExtractAlbumTitle_m2691449190 (AppleMusicController_t2416020743 * __this, String_t* ___albumTitle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractGenre(System.String)
extern "C"  void AppleMusicController_ExtractGenre_m1788157168 (AppleMusicController_t2416020743 * __this, String_t* ___genre0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractLyrics(System.String)
extern "C"  void AppleMusicController_ExtractLyrics_m3034194491 (AppleMusicController_t2416020743 * __this, String_t* ___lyrics0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AppleMusicController::ExtractDuration(System.String)
extern "C"  void AppleMusicController_ExtractDuration_m2901196059 (AppleMusicController_t2416020743 * __this, String_t* ___duration0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
