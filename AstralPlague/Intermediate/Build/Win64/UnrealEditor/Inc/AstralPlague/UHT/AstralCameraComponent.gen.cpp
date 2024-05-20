// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCameraComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraModeStack_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralCameraComponent Function FindCameraComponent
struct Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics
{
	struct AstralCameraComponent_eventFindCameraComponent_Parms
	{
		const AActor* Actor;
		UAstralCameraComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the camera component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "Camera/AstralCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the camera component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCameraComponent_eventFindCameraComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralCameraComponent_eventFindCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralCameraComponent, nullptr, "FindCameraComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::AstralCameraComponent_eventFindCameraComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::AstralCameraComponent_eventFindCameraComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralCameraComponent::execFindCameraComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralCameraComponent**)Z_Param__Result=UAstralCameraComponent::FindCameraComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralCameraComponent Function FindCameraComponent

// Begin Class UAstralCameraComponent
void UAstralCameraComponent::StaticRegisterNativesUAstralCameraComponent()
{
	UClass* Class = UAstralCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindCameraComponent", &UAstralCameraComponent::execFindCameraComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCameraComponent);
UClass* Z_Construct_UClass_UAstralCameraComponent_NoRegister()
{
	return UAstralCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralCameraComponent\n *\n *\x09The base camera component class used by this project.\n */" },
#endif
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/AstralCameraComponent.h" },
		{ "ModuleRelativePath", "Camera/AstralCameraComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralCameraComponent\n\n    The base camera component class used by this project." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraModeStack_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Stack used to blend the camera modes.\n" },
#endif
		{ "ModuleRelativePath", "Camera/AstralCameraComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stack used to blend the camera modes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraModeStack;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralCameraComponent_FindCameraComponent, "FindCameraComponent" }, // 3417131719
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralCameraComponent_Statics::NewProp_CameraModeStack = { "CameraModeStack", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralCameraComponent, CameraModeStack), Z_Construct_UClass_UAstralCameraModeStack_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraModeStack_MetaData), NewProp_CameraModeStack_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralCameraComponent_Statics::NewProp_CameraModeStack,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCameraComponent_Statics::ClassParams = {
	&UAstralCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCameraComponent()
{
	if (!Z_Registration_Info_UClass_UAstralCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCameraComponent.OuterSingleton, Z_Construct_UClass_UAstralCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCameraComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCameraComponent>()
{
	return UAstralCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCameraComponent);
UAstralCameraComponent::~UAstralCameraComponent() {}
// End Class UAstralCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCameraComponent, UAstralCameraComponent::StaticClass, TEXT("UAstralCameraComponent"), &Z_Registration_Info_UClass_UAstralCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCameraComponent), 3143376249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_3261508427(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
