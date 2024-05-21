// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameModes/AstralExperienceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralExperienceManager() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceManager();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralExperienceManager
void UAstralExperienceManager::StaticRegisterNativesUAstralExperienceManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralExperienceManager);
UClass* Z_Construct_UClass_UAstralExperienceManager_NoRegister()
{
	return UAstralExperienceManager::StaticClass();
}
struct Z_Construct_UClass_UAstralExperienceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Manager for experiences - primarily for arbitration between multiple PIE sessions\n */" },
#endif
		{ "IncludePath", "GameModes/AstralExperienceManager.h" },
		{ "ModuleRelativePath", "GameModes/AstralExperienceManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager for experiences - primarily for arbitration between multiple PIE sessions" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralExperienceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAstralExperienceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralExperienceManager_Statics::ClassParams = {
	&UAstralExperienceManager::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralExperienceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralExperienceManager()
{
	if (!Z_Registration_Info_UClass_UAstralExperienceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralExperienceManager.OuterSingleton, Z_Construct_UClass_UAstralExperienceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralExperienceManager.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralExperienceManager>()
{
	return UAstralExperienceManager::StaticClass();
}
UAstralExperienceManager::UAstralExperienceManager() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralExperienceManager);
UAstralExperienceManager::~UAstralExperienceManager() {}
// End Class UAstralExperienceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralExperienceManager, UAstralExperienceManager::StaticClass, TEXT("UAstralExperienceManager"), &Z_Registration_Info_UClass_UAstralExperienceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralExperienceManager), 950552928U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManager_h_1957417451(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
