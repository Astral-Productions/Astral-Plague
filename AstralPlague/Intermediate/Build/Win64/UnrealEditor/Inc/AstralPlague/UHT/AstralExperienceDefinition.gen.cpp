// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameModes/AstralExperienceDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralExperienceDefinition() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceActionSet_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceDefinition();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceDefinition_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralExperienceDefinition
void UAstralExperienceDefinition::StaticRegisterNativesUAstralExperienceDefinition()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralExperienceDefinition);
UClass* Z_Construct_UClass_UAstralExperienceDefinition_NoRegister()
{
	return UAstralExperienceDefinition::StaticClass();
}
struct Z_Construct_UClass_UAstralExperienceDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Definition of an experience\n */" },
#endif
		{ "IncludePath", "GameModes/AstralExperienceDefinition.h" },
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definition of an experience" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameFeaturesToEnable_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of Game Feature Plugins this experience wants to have active\n" },
#endif
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Game Feature Plugins this experience wants to have active" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The default pawn class to spawn for players *///@TODO: Make soft?\n" },
#endif
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The default pawn class to spawn for players //@TODO: Make soft?" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Actions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of actions to perform as this experience is loaded/activated/deactivated/unloaded\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of actions to perform as this experience is loaded/activated/deactivated/unloaded" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionSets_MetaData[] = {
		{ "Category", "Gameplay" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of additional action sets to compose into this experience\n" },
#endif
		{ "ModuleRelativePath", "GameModes/AstralExperienceDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of additional action sets to compose into this experience" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameFeaturesToEnable_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameFeaturesToEnable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionSets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralExperienceDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_GameFeaturesToEnable = { "GameFeaturesToEnable", nullptr, (EPropertyFlags)0x0010000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralExperienceDefinition, GameFeaturesToEnable), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameFeaturesToEnable_MetaData), NewProp_GameFeaturesToEnable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0114000000010011, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralExperienceDefinition, DefaultPawnData), Z_Construct_UClass_UAstralPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameFeatureAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114008000010019, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralExperienceDefinition, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_ActionSets_Inner = { "ActionSets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAstralExperienceActionSet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_ActionSets = { "ActionSets", nullptr, (EPropertyFlags)0x0114000000010011, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralExperienceDefinition, ActionSets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionSets_MetaData), NewProp_ActionSets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralExperienceDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_GameFeaturesToEnable_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_GameFeaturesToEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_ActionSets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceDefinition_Statics::NewProp_ActionSets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceDefinition_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralExperienceDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralExperienceDefinition_Statics::ClassParams = {
	&UAstralExperienceDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralExperienceDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceDefinition_Statics::PropPointers),
	0,
	0x008100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralExperienceDefinition_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralExperienceDefinition()
{
	if (!Z_Registration_Info_UClass_UAstralExperienceDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralExperienceDefinition.OuterSingleton, Z_Construct_UClass_UAstralExperienceDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralExperienceDefinition.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralExperienceDefinition>()
{
	return UAstralExperienceDefinition::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralExperienceDefinition);
UAstralExperienceDefinition::~UAstralExperienceDefinition() {}
// End Class UAstralExperienceDefinition

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceDefinition_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralExperienceDefinition, UAstralExperienceDefinition::StaticClass, TEXT("UAstralExperienceDefinition"), &Z_Registration_Info_UClass_UAstralExperienceDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralExperienceDefinition), 4253313831U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceDefinition_h_3548453781(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceDefinition_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
