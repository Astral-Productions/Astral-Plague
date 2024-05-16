// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AstralCharacterMovementComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAstralCharacterGroundInfo;
#ifdef ASTRALPLAGUE_AstralCharacterMovementComponent_generated_h
#error "AstralCharacterMovementComponent.generated.h already included, missing '#pragma once' in AstralCharacterMovementComponent.h"
#endif
#define ASTRALPLAGUE_AstralCharacterMovementComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAstralCharacterGroundInfo_Statics; \
	ASTRALPLAGUE_API static class UScriptStruct* StaticStruct();


template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<struct FAstralCharacterGroundInfo>();

#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetGroundInfo);


#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UAstralCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCharacterMovementComponent)


#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCharacterMovementComponent(UAstralCharacterMovementComponent&&); \
	UAstralCharacterMovementComponent(const UAstralCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCharacterMovementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCharacterMovementComponent) \
	NO_API virtual ~UAstralCharacterMovementComponent();


#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_46_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Character_AstralCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
