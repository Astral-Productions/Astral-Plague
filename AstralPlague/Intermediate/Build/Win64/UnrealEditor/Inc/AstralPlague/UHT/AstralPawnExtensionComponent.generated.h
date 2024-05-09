// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AstralPawnExtensionComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralAbilitySystemComponent;
class UAstralPawnExtensionComponent;
#ifdef ASTRALPLAGUE_AstralPawnExtensionComponent_generated_h
#error "AstralPawnExtensionComponent.generated.h already included, missing '#pragma once' in AstralPawnExtensionComponent.h"
#endif
#define ASTRALPLAGUE_AstralPawnExtensionComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnRep_PawnData); \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execFindPawnExtensionComponent);


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralPawnExtensionComponent(); \
	friend struct Z_Construct_UClass_UAstralPawnExtensionComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralPawnExtensionComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralPawnExtensionComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAstralPawnExtensionComponent*>(this); } \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PawnData=NETFIELD_REP_START, \
		NETFIELD_REP_END=PawnData	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralPawnExtensionComponent(UAstralPawnExtensionComponent&&); \
	UAstralPawnExtensionComponent(const UAstralPawnExtensionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralPawnExtensionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralPawnExtensionComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralPawnExtensionComponent) \
	NO_API virtual ~UAstralPawnExtensionComponent();


#define FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_18_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralPawnExtensionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
