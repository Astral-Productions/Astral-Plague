// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameModes/AstralGameState.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAstralAbilitySystemComponent;
#ifdef ASTRALPLAGUE_AstralGameState_generated_h
#error "AstralGameState.generated.h already included, missing '#pragma once' in AstralGameState.h"
#endif
#define ASTRALPLAGUE_AstralGameState_generated_h

#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAstralAbilitySystemComponent);


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAstralGameState(); \
	friend struct Z_Construct_UClass_AAstralGameState_Statics; \
public: \
	DECLARE_CLASS(AAstralGameState, AModularGameStateBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(AAstralGameState) \
	virtual UObject* _getUObject() const override { return const_cast<AAstralGameState*>(this); }


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAstralGameState(AAstralGameState&&); \
	AAstralGameState(const AAstralGameState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAstralGameState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAstralGameState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAstralGameState) \
	NO_API virtual ~AAstralGameState();


#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_24_PROLOG
#define FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class AAstralGameState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameState_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
