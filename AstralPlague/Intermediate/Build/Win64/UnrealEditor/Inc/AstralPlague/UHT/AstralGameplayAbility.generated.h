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
class UAstralCharacterGameplayComponent;
#ifdef ASTRALPLAGUE_AstralGameplayAbility_generated_h
#error "AstralGameplayAbility.generated.h already included, missing '#pragma once' in AstralGameplayAbility.h"
#endif
#define ASTRALPLAGUE_AstralGameplayAbility_generated_h

#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_66_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics; \
	ASTRALPLAGUE_API static class UScriptStruct* StaticStruct();


template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<struct FAstralAbilityMontageFailureMessage>();

#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralCharacterGameplayComponent); \
	DECLARE_FUNCTION(execGetAstralCharacterFromActorInfo); \
	DECLARE_FUNCTION(execGetControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetAstralPlayerControllerFromActorInfo); \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponentFromActorInfo);


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_CALLBACK_WRAPPERS
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralGameplayAbility(); \
	friend struct Z_Construct_UClass_UAstralGameplayAbility_Statics; \
public: \
	DECLARE_CLASS(UAstralGameplayAbility, UGameplayAbility, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralGameplayAbility)


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralGameplayAbility(UAstralGameplayAbility&&); \
	UAstralGameplayAbility(const UAstralGameplayAbility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralGameplayAbility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralGameplayAbility); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralGameplayAbility) \
	NO_API virtual ~UAstralGameplayAbility();


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_84_PROLOG
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_CALLBACK_WRAPPERS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralGameplayAbility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h


#define FOREACH_ENUM_EASTRALABILITYACTIVATIONPOLICY(op) \
	op(EAstralAbilityActivationPolicy::OnInputTriggered) \
	op(EAstralAbilityActivationPolicy::WhileInputActive) \
	op(EAstralAbilityActivationPolicy::OnSpawn) 

enum class EAstralAbilityActivationPolicy : uint8;
template<> struct TIsUEnumClass<EAstralAbilityActivationPolicy> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityActivationPolicy>();

#define FOREACH_ENUM_EASTRALABILITYACTIVATIONGROUP(op) \
	op(EAstralAbilityActivationGroup::Independent) \
	op(EAstralAbilityActivationGroup::Exclusive_Replaceable) \
	op(EAstralAbilityActivationGroup::Exclusive_Blocking) 

enum class EAstralAbilityActivationGroup : uint8;
template<> struct TIsUEnumClass<EAstralAbilityActivationGroup> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityActivationGroup>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
