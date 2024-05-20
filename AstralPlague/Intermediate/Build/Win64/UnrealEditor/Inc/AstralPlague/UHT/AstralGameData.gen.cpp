// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/System/AstralGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameData() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameData();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralGameData
void UAstralGameData::StaticRegisterNativesUAstralGameData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameData);
UClass* Z_Construct_UClass_UAstralGameData_NoRegister()
{
	return UAstralGameData::StaticClass();
}
struct Z_Construct_UClass_UAstralGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralGameData\n *\n *\x09Non-mutable data asset that contains global game data.\n */" },
#endif
		{ "DisplayName", "Astral Game Data" },
		{ "IncludePath", "System/AstralGameData.h" },
		{ "ModuleRelativePath", "System/AstralGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralGameData\n\n    Non-mutable data asset that contains global game data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude.\n" },
#endif
		{ "DisplayName", "Damage Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/AstralGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply damage.  Uses SetByCaller for the damage magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealGameplayEffect_SetByCaller_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude.\n" },
#endif
		{ "DisplayName", "Heal Gameplay Effect (SetByCaller)" },
		{ "ModuleRelativePath", "System/AstralGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to apply healing.  Uses SetByCaller for the healing magnitude." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicTagGameplayEffect_MetaData[] = {
		{ "Category", "Default Gameplay Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay effect used to add and remove dynamic tags.\n" },
#endif
		{ "ModuleRelativePath", "System/AstralGameData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay effect used to add and remove dynamic tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DamageGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_HealGameplayEffect_SetByCaller;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DynamicTagGameplayEffect;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAstralGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller = { "DamageGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameData, DamageGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageGameplayEffect_SetByCaller_MetaData), NewProp_DamageGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAstralGameData_Statics::NewProp_HealGameplayEffect_SetByCaller = { "HealGameplayEffect_SetByCaller", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameData, HealGameplayEffect_SetByCaller), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealGameplayEffect_SetByCaller_MetaData), NewProp_HealGameplayEffect_SetByCaller_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UAstralGameData_Statics::NewProp_DynamicTagGameplayEffect = { "DynamicTagGameplayEffect", nullptr, (EPropertyFlags)0x0014000000010011, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameData, DynamicTagGameplayEffect), Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicTagGameplayEffect_MetaData), NewProp_DynamicTagGameplayEffect_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralGameData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameData_Statics::NewProp_DamageGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameData_Statics::NewProp_HealGameplayEffect_SetByCaller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameData_Statics::NewProp_DynamicTagGameplayEffect,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralGameData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameData_Statics::ClassParams = {
	&UAstralGameData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralGameData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameData_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameData()
{
	if (!Z_Registration_Info_UClass_UAstralGameData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameData.OuterSingleton, Z_Construct_UClass_UAstralGameData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameData.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameData>()
{
	return UAstralGameData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameData);
UAstralGameData::~UAstralGameData() {}
// End Class UAstralGameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralGameData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameData, UAstralGameData::StaticClass, TEXT("UAstralGameData"), &Z_Registration_Info_UClass_UAstralGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameData), 237982488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralGameData_h_3058893157(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_System_AstralGameData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
