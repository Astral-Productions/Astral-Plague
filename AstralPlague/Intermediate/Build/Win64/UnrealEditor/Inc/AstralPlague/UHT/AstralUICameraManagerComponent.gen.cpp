// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Camera/AstralUICameraManagerComponent.h"
#include "AstralPlague/Camera/AstralPlayerCameraManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralUICameraManagerComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralUICameraManagerComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralUICameraManagerComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralUICameraManagerComponent
void UAstralUICameraManagerComponent::StaticRegisterNativesUAstralUICameraManagerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralUICameraManagerComponent);
UClass* Z_Construct_UClass_UAstralUICameraManagerComponent_NoRegister()
{
	return UAstralUICameraManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralUICameraManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/AstralUICameraManagerComponent.h" },
		{ "ModuleRelativePath", "Camera/AstralUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/AstralUICameraManagerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdatingViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Camera/AstralUICameraManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewTarget;
	static void NewProp_bUpdatingViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdatingViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralUICameraManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_ViewTarget = { "ViewTarget", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralUICameraManagerComponent, ViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewTarget_MetaData), NewProp_ViewTarget_MetaData) };
void Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit(void* Obj)
{
	((UAstralUICameraManagerComponent*)Obj)->bUpdatingViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget = { "bUpdatingViewTarget", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAstralUICameraManagerComponent), &Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdatingViewTarget_MetaData), NewProp_bUpdatingViewTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_ViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::NewProp_bUpdatingViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::ClassParams = {
	&UAstralUICameraManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::PropPointers),
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralUICameraManagerComponent()
{
	if (!Z_Registration_Info_UClass_UAstralUICameraManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralUICameraManagerComponent.OuterSingleton, Z_Construct_UClass_UAstralUICameraManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralUICameraManagerComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralUICameraManagerComponent>()
{
	return UAstralUICameraManagerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralUICameraManagerComponent);
UAstralUICameraManagerComponent::~UAstralUICameraManagerComponent() {}
// End Class UAstralUICameraManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralUICameraManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralUICameraManagerComponent, UAstralUICameraManagerComponent::StaticClass, TEXT("UAstralUICameraManagerComponent"), &Z_Registration_Info_UClass_UAstralUICameraManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralUICameraManagerComponent), 553830414U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralUICameraManagerComponent_h_3900828370(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralUICameraManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Camera_AstralUICameraManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
