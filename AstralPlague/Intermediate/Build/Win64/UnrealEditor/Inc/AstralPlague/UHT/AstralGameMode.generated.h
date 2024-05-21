// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AstralGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
class UAstralPawnData;
#ifdef ASTRALPLAGUE_AstralGameMode_generated_h
#error "AstralGameMode.generated.h already included, missing '#pragma once' in AstralGameMode.h"
#endif
#define ASTRALPLAGUE_AstralGameMode_generated_h

#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestPlayerRestartNextFrame); \
	DECLARE_FUNCTION(execGetPawnDataForController);


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralGameMode(); \
	friend struct Z_Construct_UClass_AAstralGameMode_Statics; \
public: \
	DECLARE_CLASS(AAstralGameMode, AModularGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralGameMode)


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralGameMode(AAstralGameMode&&); \
	AAstralGameMode(const AAstralGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAstralGameMode) \
	NO_API virtual ~AAstralGameMode();


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_34_PROLOG
#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_37_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
