// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/AstralSettingsLocal.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPlayerMappableInputConfig;
#ifdef ASTRALPLAGUE_AstralSettingsLocal_generated_h
#error "AstralSettingsLocal.generated.h already included, missing '#pragma once' in AstralSettingsLocal.h"
#endif
#define ASTRALPLAGUE_AstralSettingsLocal_generated_h

#define FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInputConfigByName);


#define FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralSettingsLocal(); \
	friend struct Z_Construct_UClass_UAstralSettingsLocal_Statics; \
public: \
	DECLARE_CLASS(UAstralSettingsLocal, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralSettingsLocal)


#define FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralSettingsLocal(UAstralSettingsLocal&&); \
	UAstralSettingsLocal(const UAstralSettingsLocal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralSettingsLocal); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralSettingsLocal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAstralSettingsLocal) \
	NO_API virtual ~UAstralSettingsLocal();


#define FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_19_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralSettingsLocal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Settings_AstralSettingsLocal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
