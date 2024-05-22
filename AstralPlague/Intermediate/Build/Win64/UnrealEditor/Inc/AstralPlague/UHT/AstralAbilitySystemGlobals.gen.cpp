// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralAbilitySystemGlobals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAbilitySystemGlobals() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemGlobals();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemGlobals_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemGlobals();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAbilitySystemGlobals
void UAstralAbilitySystemGlobals::StaticRegisterNativesUAstralAbilitySystemGlobals()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAbilitySystemGlobals);
UClass* Z_Construct_UClass_UAstralAbilitySystemGlobals_NoRegister()
{
	return UAstralAbilitySystemGlobals::StaticClass();
}
struct Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AbilitySystem/AstralAbilitySystemGlobals.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilitySystemGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAbilitySystemGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemGlobals,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::ClassParams = {
	&UAstralAbilitySystemGlobals::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAbilitySystemGlobals()
{
	if (!Z_Registration_Info_UClass_UAstralAbilitySystemGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAbilitySystemGlobals.OuterSingleton, Z_Construct_UClass_UAstralAbilitySystemGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAbilitySystemGlobals.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAbilitySystemGlobals>()
{
	return UAstralAbilitySystemGlobals::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAbilitySystemGlobals);
UAstralAbilitySystemGlobals::~UAstralAbilitySystemGlobals() {}
// End Class UAstralAbilitySystemGlobals

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySystemGlobals_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAbilitySystemGlobals, UAstralAbilitySystemGlobals::StaticClass, TEXT("UAstralAbilitySystemGlobals"), &Z_Registration_Info_UClass_UAstralAbilitySystemGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAbilitySystemGlobals), 963946552U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySystemGlobals_h_719476859(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySystemGlobals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilitySystemGlobals_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
