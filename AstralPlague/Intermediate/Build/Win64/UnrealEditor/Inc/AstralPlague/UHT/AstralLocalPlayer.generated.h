// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AstralLocalPlayer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAstralSettingsLocal;
struct FSwapAudioOutputResult;
#ifdef ASTRALPLAGUE_AstralLocalPlayer_generated_h
#error "AstralLocalPlayer.generated.h already included, missing '#pragma once' in AstralLocalPlayer.h"
#endif
#define ASTRALPLAGUE_AstralLocalPlayer_generated_h

#define FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompletedAudioDeviceSwap); \
	DECLARE_FUNCTION(execGetLocalSettings);


#define FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralLocalPlayer(); \
	friend struct Z_Construct_UClass_UAstralLocalPlayer_Statics; \
public: \
	DECLARE_CLASS(UAstralLocalPlayer, UCommonLocalPlayer, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralLocalPlayer)


#define FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralLocalPlayer(UAstralLocalPlayer&&); \
	UAstralLocalPlayer(const UAstralLocalPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralLocalPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralLocalPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAstralLocalPlayer) \
	NO_API virtual ~UAstralLocalPlayer();


#define FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_25_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h_28_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralLocalPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Player_AstralLocalPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
