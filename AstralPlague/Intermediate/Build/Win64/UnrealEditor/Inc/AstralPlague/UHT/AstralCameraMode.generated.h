// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Camera/AstralCameraMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ASTRALPLAGUE_AstralCameraMode_generated_h
#error "AstralCameraMode.generated.h already included, missing '#pragma once' in AstralCameraMode.h"
#endif
#define ASTRALPLAGUE_AstralCameraMode_generated_h

#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCameraMode(); \
	friend struct Z_Construct_UClass_UAstralCameraMode_Statics; \
public: \
	DECLARE_CLASS(UAstralCameraMode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCameraMode)


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCameraMode(UAstralCameraMode&&); \
	UAstralCameraMode(const UAstralCameraMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCameraMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCameraMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UAstralCameraMode) \
	NO_API virtual ~UAstralCameraMode();


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_65_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_68_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCameraMode>();

#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAstralCameraModeStack(); \
	friend struct Z_Construct_UClass_UAstralCameraModeStack_Statics; \
public: \
	DECLARE_CLASS(UAstralCameraModeStack, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AstralPlague"), NO_API) \
	DECLARE_SERIALIZER(UAstralCameraModeStack)


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UAstralCameraModeStack(UAstralCameraModeStack&&); \
	UAstralCameraModeStack(const UAstralCameraModeStack&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAstralCameraModeStack); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAstralCameraModeStack); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UAstralCameraModeStack) \
	NO_API virtual ~UAstralCameraModeStack();


#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_160_PROLOG
#define FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_163_INCLASS_NO_PURE_DECLS \
	FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h_163_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ASTRALPLAGUE_API UClass* StaticClass<class UAstralCameraModeStack>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraMode_h


#define FOREACH_ENUM_EASTRALCAMERAMODEBLENDFUNCTION(op) \
	op(EAstralCameraModeBlendFunction::Linear) \
	op(EAstralCameraModeBlendFunction::EaseIn) \
	op(EAstralCameraModeBlendFunction::EaseOut) \
	op(EAstralCameraModeBlendFunction::EaseInOut) \
	op(EAstralCameraModeBlendFunction::COUNT) 

enum class EAstralCameraModeBlendFunction : uint8;
template<> struct TIsUEnumClass<EAstralCameraModeBlendFunction> { enum { Value = true }; };
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralCameraModeBlendFunction>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
