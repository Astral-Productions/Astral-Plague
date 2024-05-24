// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AstralPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAstralPlayerState;
class UAstralAbilitySystemComponent;
#ifdef ASTRALPLAGUE_AstralPlayerController_generated_h
#error "AstralPlayerController.generated.h already included, missing '#pragma once' in AstralPlayerController.h"
#endif
#define ASTRALPLAGUE_AstralPlayerController_generated_h

#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetIsAutoRunning); \
	DECLARE_FUNCTION(execSetIsAutoRunning); \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetAstralPlayerState);


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralPlayerController(); \
	friend struct Z_Construct_UClass_AAstralPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAstralPlayerController, ACommonPlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralPlayerController)


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralPlayerController(AAstralPlayerController&&); \
	AAstralPlayerController(const AAstralPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAstralPlayerController) \
	NO_API virtual ~AAstralPlayerController();


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_13_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
