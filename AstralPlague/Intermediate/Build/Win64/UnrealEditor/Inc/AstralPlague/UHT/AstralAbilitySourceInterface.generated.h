// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AstralAbilitySourceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralAbilitySourceInterface_generated_h
#error "AstralAbilitySourceInterface.generated.h already included, missing '#pragma once' in AstralAbilitySourceInterface.h"
#endif
#define ASTRALPLAGUE_AstralAbilitySourceInterface_generated_h

#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAstralAbilitySourceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralAbilitySourceInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralAbilitySourceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralAbilitySourceInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralAbilitySourceInterface(UAstralAbilitySourceInterface&&); \
	UAstralAbilitySourceInterface(const UAstralAbilitySourceInterface&); \
public: \
	NO_API virtual ~UAstralAbilitySourceInterface();


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAstralAbilitySourceInterface(); \
	friend struct Z_Construct_UClass_UAstralAbilitySourceInterface_Statics; \
public: \
	DECLARE_CLASS(UAstralAbilitySourceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralAbilitySourceInterface)


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_INCLASS_IINTERFACE \
protected: \
	virtual ~IAstralAbilitySourceInterface() {} \
public: \
	typedef UAstralAbilitySourceInterface UClassType; \
	typedef IAstralAbilitySourceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_14_PROLOG
#define FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_17_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralAbilitySourceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
