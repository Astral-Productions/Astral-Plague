// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Input/AstralInputComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralInputComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralInputComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralInputComponent
void UAstralInputComponent::StaticRegisterNativesUAstralInputComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralInputComponent);
UClass* Z_Construct_UClass_UAstralInputComponent_NoRegister()
{
	return UAstralInputComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralInputComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralInputComponent\n *\n *\x09""Component used to manage input mappings and bindings using an input config data asset.\n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "Input/AstralInputComponent.h" },
		{ "ModuleRelativePath", "Input/AstralInputComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralInputComponent\n\n    Component used to manage input mappings and bindings using an input config data asset." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralInputComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralInputComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralInputComponent_Statics::ClassParams = {
	&UAstralInputComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00A000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralInputComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralInputComponent()
{
	if (!Z_Registration_Info_UClass_UAstralInputComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralInputComponent.OuterSingleton, Z_Construct_UClass_UAstralInputComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralInputComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralInputComponent>()
{
	return UAstralInputComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralInputComponent);
UAstralInputComponent::~UAstralInputComponent() {}
// End Class UAstralInputComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralInputComponent, UAstralInputComponent::StaticClass, TEXT("UAstralInputComponent"), &Z_Registration_Info_UClass_UAstralInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralInputComponent), 1420848411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputComponent_h_2619007283(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
