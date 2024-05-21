// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AstralExperienceManagerComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralExperienceManagerComponent_generated_h
#error "AstralExperienceManagerComponent.generated.h already included, missing '#pragma once' in AstralExperienceManagerComponent.h"
#endif
#define ASTRALPLAGUE_AstralExperienceManagerComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_CurrentExperience);


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralExperienceManagerComponent(); \
	friend struct Z_Construct_UClass_UAstralExperienceManagerComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralExperienceManagerComponent, UGameStateComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralExperienceManagerComponent) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		CurrentExperience=NETFIELD_REP_START, \
		NETFIELD_REP_END=CurrentExperience	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralExperienceManagerComponent(UAstralExperienceManagerComponent&&); \
	UAstralExperienceManagerComponent(const UAstralExperienceManagerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralExperienceManagerComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralExperienceManagerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralExperienceManagerComponent) \
	NO_API virtual ~UAstralExperienceManagerComponent();


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_27_PROLOG
#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralExperienceManagerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
