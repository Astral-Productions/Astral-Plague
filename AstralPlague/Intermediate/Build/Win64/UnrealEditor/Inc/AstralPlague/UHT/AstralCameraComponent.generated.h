// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/AstralCameraComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UAstralCameraComponent;
#ifdef ASTRALPLAGUE_AstralCameraComponent_generated_h
#error "AstralCameraComponent.generated.h already included, missing '#pragma once' in AstralCameraComponent.h"
#endif
#define ASTRALPLAGUE_AstralCameraComponent_generated_h

#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindCameraComponent);


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCameraComponent(); \
	friend struct Z_Construct_UClass_UAstralCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UAstralCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCameraComponent)


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCameraComponent(UAstralCameraComponent&&); \
	UAstralCameraComponent(const UAstralCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCameraComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCameraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAstralCameraComponent) \
	NO_API virtual ~UAstralCameraComponent();


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_27_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
