// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/System/AstralAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAssetManager() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAssetManager();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAssetManager_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameData_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAssetManager
void UAstralAssetManager::StaticRegisterNativesUAstralAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAssetManager);
UClass* Z_Construct_UClass_UAstralAssetManager_NoRegister()
{
	return UAstralAssetManager::StaticClass();
}
struct Z_Construct_UClass_UAstralAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralAssetManager\n *\n *\x09Game implementation of the asset manager that overrides functionality and stores game-specific types.\n *\x09It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n *\x09This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini.\n */" },
#endif
		{ "IncludePath", "System/AstralAssetManager.h" },
		{ "ModuleRelativePath", "System/AstralAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralAssetManager\n\n    Game implementation of the asset manager that overrides functionality and stores game-specific types.\n    It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n    This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AstralGameDataPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global game data asset to use.\n" },
#endif
		{ "ModuleRelativePath", "System/AstralAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global game data asset to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDataMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loaded version of the game data\n" },
#endif
		{ "ModuleRelativePath", "System/AstralAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded version of the game data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn data used when spawning player pawns if there isn't one set on the player state.\n" },
#endif
		{ "ModuleRelativePath", "System/AstralAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used when spawning player pawns if there isn't one set on the player state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assets loaded and tracked by the asset manager.\n" },
#endif
		{ "ModuleRelativePath", "System/AstralAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assets loaded and tracked by the asset manager." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AstralGameDataPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameDataMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GameDataMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_AstralGameDataPath = { "AstralGameDataPath", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAssetManager, AstralGameDataPath), Z_Construct_UClass_UAstralGameData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AstralGameDataPath_MetaData), NewProp_AstralGameDataPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap_ValueProp = { "GameDataMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp = { "GameDataMap_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap = { "GameDataMap", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAssetManager, GameDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDataMap_MetaData), NewProp_GameDataMap_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAssetManager, DefaultPawnData), Z_Construct_UClass_UAstralPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_LoadedAssets_ElementProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAssetManager, LoadedAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAssets_MetaData), NewProp_LoadedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_AstralGameDataPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_GameDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_LoadedAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAssetManager_Statics::NewProp_LoadedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAssetManager_Statics::ClassParams = {
	&UAstralAssetManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAssetManager_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAssetManager()
{
	if (!Z_Registration_Info_UClass_UAstralAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAssetManager.OuterSingleton, Z_Construct_UClass_UAstralAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAssetManager.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAssetManager>()
{
	return UAstralAssetManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAssetManager);
UAstralAssetManager::~UAstralAssetManager() {}
// End Class UAstralAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAssetManager, UAstralAssetManager::StaticClass, TEXT("UAstralAssetManager"), &Z_Registration_Info_UClass_UAstralAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAssetManager), 615524270U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralAssetManager_h_2714079103(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
