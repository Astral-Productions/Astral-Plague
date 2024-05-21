// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameModes/AstralGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameMode() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralGameMode();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralGameMode_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
MODULARGAMEPLAYACTORS_API UClass* Z_Construct_UClass_AModularGameModeBase();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralGameMode Function GetPawnDataForController
struct Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics
{
	struct AstralGameMode_eventGetPawnDataForController_Parms
	{
		const AController* InController;
		const UAstralPawnData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Pawn" },
		{ "ModuleRelativePath", "GameModes/AstralGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InController_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::NewProp_InController = { "InController", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameMode_eventGetPawnDataForController_Parms, InController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InController_MetaData), NewProp_InController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameMode_eventGetPawnDataForController_Parms, ReturnValue), Z_Construct_UClass_UAstralPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::NewProp_InController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralGameMode, nullptr, "GetPawnDataForController", nullptr, nullptr, Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::AstralGameMode_eventGetPawnDataForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::AstralGameMode_eventGetPawnDataForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralGameMode::execGetPawnDataForController)
{
	P_GET_OBJECT(AController,Z_Param_InController);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAstralPawnData**)Z_Param__Result=P_THIS->GetPawnDataForController(Z_Param_InController);
	P_NATIVE_END;
}
// End Class AAstralGameMode Function GetPawnDataForController

// Begin Class AAstralGameMode Function RequestPlayerRestartNextFrame
struct Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics
{
	struct AstralGameMode_eventRequestPlayerRestartNextFrame_Parms
	{
		AController* Controller;
		bool bForceReset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Restart (respawn) the specified player or bot next frame\n// - If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)\n" },
#endif
		{ "CPP_Default_bForceReset", "false" },
		{ "ModuleRelativePath", "GameModes/AstralGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Restart (respawn) the specified player or bot next frame\n- If bForceReset is true, the controller will be reset this frame (abandoning the currently possessed pawn, if any)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static void NewProp_bForceReset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceReset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameMode_eventRequestPlayerRestartNextFrame_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit(void* Obj)
{
	((AstralGameMode_eventRequestPlayerRestartNextFrame_Parms*)Obj)->bForceReset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset = { "bForceReset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralGameMode_eventRequestPlayerRestartNextFrame_Parms), &Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::NewProp_bForceReset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralGameMode, nullptr, "RequestPlayerRestartNextFrame", nullptr, nullptr, Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::AstralGameMode_eventRequestPlayerRestartNextFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::AstralGameMode_eventRequestPlayerRestartNextFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralGameMode::execRequestPlayerRestartNextFrame)
{
	P_GET_OBJECT(AController,Z_Param_Controller);
	P_GET_UBOOL(Z_Param_bForceReset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestPlayerRestartNextFrame(Z_Param_Controller,Z_Param_bForceReset);
	P_NATIVE_END;
}
// End Class AAstralGameMode Function RequestPlayerRestartNextFrame

// Begin Class AAstralGameMode
void AAstralGameMode::StaticRegisterNativesAAstralGameMode()
{
	UClass* Class = AAstralGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPawnDataForController", &AAstralGameMode::execGetPawnDataForController },
		{ "RequestPlayerRestartNextFrame", &AAstralGameMode::execRequestPlayerRestartNextFrame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralGameMode);
UClass* Z_Construct_UClass_AAstralGameMode_NoRegister()
{
	return AAstralGameMode::StaticClass();
}
struct Z_Construct_UClass_AAstralGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * AAstralGameMode\n *\n *\x09The base game mode class used by this project.\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameModes/AstralGameMode.h" },
		{ "ModuleRelativePath", "GameModes/AstralGameMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "The base game mode class used by this project." },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AAstralGameMode\n\n    The base game mode class used by this project." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralGameMode_GetPawnDataForController, "GetPawnDataForController" }, // 3454764293
		{ &Z_Construct_UFunction_AAstralGameMode_RequestPlayerRestartNextFrame, "RequestPlayerRestartNextFrame" }, // 3007746483
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAstralGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AModularGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralGameMode_Statics::ClassParams = {
	&AAstralGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralGameMode()
{
	if (!Z_Registration_Info_UClass_AAstralGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralGameMode.OuterSingleton, Z_Construct_UClass_AAstralGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralGameMode.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralGameMode>()
{
	return AAstralGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralGameMode);
AAstralGameMode::~AAstralGameMode() {}
// End Class AAstralGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralGameMode, AAstralGameMode::StaticClass, TEXT("AAstralGameMode"), &Z_Registration_Info_UClass_AAstralGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralGameMode), 427790822U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_816053883(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
