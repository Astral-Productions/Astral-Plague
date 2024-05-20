// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Input/AstralInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FGameplayTag;
#ifdef ASTRALPLAGUE_AstralInputConfig_generated_h
#error "AstralInputConfig.generated.h already included, missing '#pragma once' in AstralInputConfig.h"
#endif
#define ASTRALPLAGUE_AstralInputConfig_generated_h

#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAstralInputAction_Statics; \
	ASTRALPLAGUE_API static class UScriptStruct* StaticStruct();


template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<struct FAstralInputAction>();

#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAbilityInputActionForTag); \
	DECLARE_FUNCTION(execFindNativeInputActionForTag);


#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralInputConfig(); \
	friend struct Z_Construct_UClass_UAstralInputConfig_Statics; \
public: \
	DECLARE_CLASS(UAstralInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralInputConfig)


#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralInputConfig(UAstralInputConfig&&); \
	UAstralInputConfig(const UAstralInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralInputConfig) \
	NO_API virtual ~UAstralInputConfig();


#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_38_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
