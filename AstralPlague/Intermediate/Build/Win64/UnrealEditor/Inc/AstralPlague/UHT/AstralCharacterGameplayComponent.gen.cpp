// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Components/AstralCharacterGameplayComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralCharacterGameplayComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralCharacterGameplayComponent
void UAstralCharacterGameplayComponent::StaticRegisterNativesUAstralCharacterGameplayComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralCharacterGameplayComponent);
UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister()
{
	return UAstralCharacterGameplayComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Components/AstralCharacterGameplayComponent.h" },
		{ "ModuleRelativePath", "Components/AstralCharacterGameplayComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralCharacterGameplayComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::ClassParams = {
	&UAstralCharacterGameplayComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent()
{
	if (!Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton, Z_Construct_UClass_UAstralCharacterGameplayComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralCharacterGameplayComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralCharacterGameplayComponent>()
{
	return UAstralCharacterGameplayComponent::StaticClass();
}
UAstralCharacterGameplayComponent::UAstralCharacterGameplayComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralCharacterGameplayComponent);
UAstralCharacterGameplayComponent::~UAstralCharacterGameplayComponent() {}
// End Class UAstralCharacterGameplayComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralCharacterGameplayComponent, UAstralCharacterGameplayComponent::StaticClass, TEXT("UAstralCharacterGameplayComponent"), &Z_Registration_Info_UClass_UAstralCharacterGameplayComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralCharacterGameplayComponent), 993146298U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_3864040170(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Components_AstralCharacterGameplayComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
