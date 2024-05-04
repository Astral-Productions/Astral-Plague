// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AstralPlagueGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlagueGameMode() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueGameMode();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlagueGameMode
void AAstralPlagueGameMode::StaticRegisterNativesAAstralPlagueGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlagueGameMode);
UClass* Z_Construct_UClass_AAstralPlagueGameMode_NoRegister()
{
	return AAstralPlagueGameMode::StaticClass();
}
struct Z_Construct_UClass_AAstralPlagueGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AstralPlagueGameMode.h" },
		{ "ModuleRelativePath", "AstralPlagueGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlagueGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AAstralPlagueGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlagueGameMode_Statics::ClassParams = {
	&AAstralPlagueGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlagueGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlagueGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlagueGameMode()
{
	if (!Z_Registration_Info_UClass_AAstralPlagueGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlagueGameMode.OuterSingleton, Z_Construct_UClass_AAstralPlagueGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlagueGameMode.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlagueGameMode>()
{
	return AAstralPlagueGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlagueGameMode);
AAstralPlagueGameMode::~AAstralPlagueGameMode() {}
// End Class AAstralPlagueGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlagueGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlagueGameMode, AAstralPlagueGameMode::StaticClass, TEXT("AAstralPlagueGameMode"), &Z_Registration_Info_UClass_AAstralPlagueGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlagueGameMode), 831022670U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlagueGameMode_h_1639615886(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlagueGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AstralPlagueGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
