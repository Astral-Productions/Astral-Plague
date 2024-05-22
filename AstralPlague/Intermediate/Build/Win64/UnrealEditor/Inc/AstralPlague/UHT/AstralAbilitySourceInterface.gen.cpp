// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySourceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAbilitySourceInterface() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySourceInterface();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySourceInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Interface UAstralAbilitySourceInterface
void UAstralAbilitySourceInterface::StaticRegisterNativesUAstralAbilitySourceInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAbilitySourceInterface);
UClass* Z_Construct_UClass_UAstralAbilitySourceInterface_NoRegister()
{
	return UAstralAbilitySourceInterface::StaticClass();
}
struct Z_Construct_UClass_UAstralAbilitySourceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilitySourceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAstralAbilitySourceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::ClassParams = {
	&UAstralAbilitySourceInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAbilitySourceInterface()
{
	if (!Z_Registration_Info_UClass_UAstralAbilitySourceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAbilitySourceInterface.OuterSingleton, Z_Construct_UClass_UAstralAbilitySourceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAbilitySourceInterface.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAbilitySourceInterface>()
{
	return UAstralAbilitySourceInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAbilitySourceInterface);
UAstralAbilitySourceInterface::~UAstralAbilitySourceInterface() {}
// End Interface UAstralAbilitySourceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAbilitySourceInterface, UAstralAbilitySourceInterface::StaticClass, TEXT("UAstralAbilitySourceInterface"), &Z_Registration_Info_UClass_UAstralAbilitySourceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAbilitySourceInterface), 2851148440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_424048704(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySourceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
