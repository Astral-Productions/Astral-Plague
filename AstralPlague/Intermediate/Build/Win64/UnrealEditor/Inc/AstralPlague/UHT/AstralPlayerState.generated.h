// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AstralPlayerState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAstralPlayerController;
class UAstralAbilitySystemComponent;
#ifdef ASTRALPLAGUE_AstralPlayerState_generated_h
#error "AstralPlayerState.generated.h already included, missing '#pragma once' in AstralPlayerState.h"
#endif
#define ASTRALPLAGUE_AstralPlayerState_generated_h

#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent); \
	DECLARE_FUNCTION(execGetAstralPlayerController);


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralPlayerState(); \
	friend struct Z_Construct_UClass_AAstralPlayerState_Statics; \
public: \
	DECLARE_CLASS(AAstralPlayerState, AModularPlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralPlayerState) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<AAstralPlayerState*>(this); }


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralPlayerState(AAstralPlayerState&&); \
	AAstralPlayerState(const AAstralPlayerState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralPlayerState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralPlayerState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAstralPlayerState) \
	NO_API virtual ~AAstralPlayerState();


#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_18_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralPlayerState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Player_AstralPlayerState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
