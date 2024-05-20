// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/AstralCharacterGameplayComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralCharacterGameplayComponent;
#ifdef ASTRALPLAGUE_AstralCharacterGameplayComponent_generated_h
#error "AstralCharacterGameplayComponent.generated.h already included, missing '#pragma once' in AstralCharacterGameplayComponent.h"
#endif
#define ASTRALPLAGUE_AstralCharacterGameplayComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindGameplayComponent);


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCharacterGameplayComponent(); \
	friend struct Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralCharacterGameplayComponent, UPawnComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCharacterGameplayComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UAstralCharacterGameplayComponent*>(this); }


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCharacterGameplayComponent(UAstralCharacterGameplayComponent&&); \
	UAstralCharacterGameplayComponent(const UAstralCharacterGameplayComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCharacterGameplayComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCharacterGameplayComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCharacterGameplayComponent) \
	NO_API virtual ~UAstralCharacterGameplayComponent();


#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_28_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCharacterGameplayComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
