// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AstralGameplayAbility.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAstralPlagueCharacter;
class AAstralPlayerController;
class AController;
class UAstralAbilitySystemComponent;
#ifdef ASTRALPLAGUE_AstralGameplayAbility_generated_h
#error "AstralGameplayAbility.generated.h already included, missing '#pragma once' in AstralGameplayAbility.h"
#endif
#define ASTRALPLAGUE_AstralGameplayAbility_generated_h

#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetAstralPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponentFromActorInfo);


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_CALLBACK_WRAPPERS
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralGameplayAbility(); \
	friend struct Z_Construct_UClass_UAstralGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UAstralGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralGameplayAbility)


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralGameplayAbility(UAstralGameplayAbility&&); \
	UAstralGameplayAbility(const UAstralGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralGameplayAbility) \
	NO_API virtual ~UAstralGameplayAbility();


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_23_PROLOG
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_CALLBACK_WRAPPERS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
