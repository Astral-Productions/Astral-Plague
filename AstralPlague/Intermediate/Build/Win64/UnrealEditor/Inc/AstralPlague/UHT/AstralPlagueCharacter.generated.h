// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AstralPlagueCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAstralPlayerController;
class AAstralPlayerState;
class UAstralAbilitySystemComponent;
#ifdef ASTRALPLAGUE_AstralPlagueCharacter_generated_h
#error "AstralPlagueCharacter.generated.h already included, missing '#pragma once' in AstralPlagueCharacter.h"
#endif
#define ASTRALPLAGUE_AstralPlagueCharacter_generated_h

#define FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetAstralPlayerState); \
	DECLARE_FUNCTION(execGetAstralPlayerController);


#define FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralPlagueCharacter(); \
	friend struct Z_Construct_UClass_AAstralPlagueCharacter_Statics; \
public: \
	DECLARE_CLASS(AAstralPlagueCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralPlagueCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AAstralPlagueCharacter*>(this); }


#define FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralPlagueCharacter(AAstralPlagueCharacter&&); \
	AAstralPlagueCharacter(const AAstralPlagueCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralPlagueCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralPlagueCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAstralPlagueCharacter) \
	NO_API virtual ~AAstralPlagueCharacter();


#define FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_27_PROLOG
#define FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralPlagueCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AstralPlagueCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
