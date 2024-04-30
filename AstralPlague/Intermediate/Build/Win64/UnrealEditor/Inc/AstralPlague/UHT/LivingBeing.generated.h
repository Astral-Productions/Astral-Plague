// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LivingBeing.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_LivingBeing_generated_h
#error "LivingBeing.generated.h already included, missing '#pragma once' in LivingBeing.h"
#endif
#define ASTRALPLAGUE_LivingBeing_generated_h

#define FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALivingBeing(); \
	friend struct Z_Construct_UClass_ALivingBeing_Statics; \
public: \
	DECLARE_CLASS(ALivingBeing, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(ALivingBeing) \
	virtual UObject* _getUObject() const override { return const_cast<ALivingBeing*>(this); }


#define FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ALivingBeing(ALivingBeing&&); \
	ALivingBeing(const ALivingBeing&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALivingBeing); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALivingBeing); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALivingBeing) \
	NO_API virtual ~ALivingBeing();


#define FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_11_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_14_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class ALivingBeing>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Public_LivingBeing_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
