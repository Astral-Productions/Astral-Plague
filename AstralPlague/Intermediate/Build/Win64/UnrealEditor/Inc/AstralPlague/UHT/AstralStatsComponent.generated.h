// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AstralStatsComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralAbilitySystemComponent;
class UAstralStatsComponent;
#ifdef ASTRALPLAGUE_AstralStatsComponent_generated_h
#error "AstralStatsComponent.generated.h already included, missing '#pragma once' in AstralStatsComponent.h"
#endif
#define ASTRALPLAGUE_AstralStatsComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUninitializeFromAbilitySystem); \
	DECLARE_FUNCTION(execInitializeWithAbilitySystem); \
	DECLARE_FUNCTION(execFindHealthComponent);


#define FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralStatsComponent(); \
	friend struct Z_Construct_UClass_UAstralStatsComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralStatsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralStatsComponent)


#define FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralStatsComponent(UAstralStatsComponent&&); \
	UAstralStatsComponent(const UAstralStatsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralStatsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralStatsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralStatsComponent) \
	NO_API virtual ~UAstralStatsComponent();


#define FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_11_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralStatsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Public_AstralStatsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
