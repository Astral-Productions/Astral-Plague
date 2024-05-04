// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DefaultAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_DefaultAttributeSet_generated_h
#error "DefaultAttributeSet.generated.h already included, missing '#pragma once' in DefaultAttributeSet.h"
#endif
#define ASTRALPLAGUE_DefaultAttributeSet_generated_h

#define FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDefaultAttributeSet(); \
	friend struct Z_Construct_UClass_UDefaultAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UDefaultAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UDefaultAttributeSet)


#define FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDefaultAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDefaultAttributeSet(UDefaultAttributeSet&&); \
	UDefaultAttributeSet(const UDefaultAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDefaultAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDefaultAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDefaultAttributeSet) \
	NO_API virtual ~UDefaultAttributeSet();


#define FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_12_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UDefaultAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
