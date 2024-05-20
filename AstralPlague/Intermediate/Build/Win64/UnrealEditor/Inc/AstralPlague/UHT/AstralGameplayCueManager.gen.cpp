// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralGameplayCueManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameplayCueManager() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayCueManager();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayCueManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayCueManager();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralGameplayCueManager
void UAstralGameplayCueManager::StaticRegisterNativesUAstralGameplayCueManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameplayCueManager);
UClass* Z_Construct_UClass_UAstralGameplayCueManager_NoRegister()
{
	return UAstralGameplayCueManager::StaticClass();
}
struct Z_Construct_UClass_UAstralGameplayCueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralGameplayCueManager\n *\n * Game-specific manager for gameplay cues\n */" },
#endif
		{ "IncludePath", "AbilitySystem/AstralGameplayCueManager.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayCueManager.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralGameplayCueManager\n\nGame-specific manager for gameplay cues" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreloadedCues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cues that were preloaded on the client due to being referenced by content\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cues that were preloaded on the client due to being referenced by content" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlwaysLoadedCues_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayCueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cues that were preloaded on the client and will always be loaded (code referenced or explicitly always loaded)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PreloadedCues_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_PreloadedCues;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AlwaysLoadedCues_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_AlwaysLoadedCues;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameplayCueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp = { "PreloadedCues", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_PreloadedCues = { "PreloadedCues", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayCueManager, PreloadedCues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreloadedCues_MetaData), NewProp_PreloadedCues_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_AlwaysLoadedCues = { "AlwaysLoadedCues", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayCueManager, AlwaysLoadedCues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlwaysLoadedCues_MetaData), NewProp_AlwaysLoadedCues_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralGameplayCueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_PreloadedCues_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_PreloadedCues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_AlwaysLoadedCues_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayCueManager_Statics::NewProp_AlwaysLoadedCues,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayCueManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralGameplayCueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayCueManager,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayCueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameplayCueManager_Statics::ClassParams = {
	&UAstralGameplayCueManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralGameplayCueManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayCueManager_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayCueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameplayCueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameplayCueManager()
{
	if (!Z_Registration_Info_UClass_UAstralGameplayCueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameplayCueManager.OuterSingleton, Z_Construct_UClass_UAstralGameplayCueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameplayCueManager.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameplayCueManager>()
{
	return UAstralGameplayCueManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameplayCueManager);
UAstralGameplayCueManager::~UAstralGameplayCueManager() {}
// End Class UAstralGameplayCueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayCueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameplayCueManager, UAstralGameplayCueManager::StaticClass, TEXT("UAstralGameplayCueManager"), &Z_Registration_Info_UClass_UAstralGameplayCueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameplayCueManager), 763507640U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayCueManager_h_4117043849(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayCueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayCueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
