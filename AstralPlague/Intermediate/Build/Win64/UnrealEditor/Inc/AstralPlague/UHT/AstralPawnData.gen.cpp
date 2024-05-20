// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/AstralPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPawnData() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySet_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityTagRelationshipMapping_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCameraMode_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralInputConfig_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralPawnData
void UAstralPawnData::StaticRegisterNativesUAstralPawnData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralPawnData);
UClass* Z_Construct_UClass_UAstralPawnData_NoRegister()
{
	return UAstralPawnData::StaticClass();
}
struct Z_Construct_UClass_UAstralPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralPawnData\n *\n *\x09Non-mutable data asset that contains properties used to define a pawn.\n */" },
#endif
		{ "DisplayName", "Astral Pawn Data" },
		{ "IncludePath", "Character/AstralPawnData.h" },
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralPawnData\n\n    Non-mutable data asset that contains properties used to define a pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Astral|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class to instantiate for this pawn (should usually derive from AAstralPawn or AAstralCharacter).\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to instantiate for this pawn (should usually derive from AAstralPawn or AAstralCharacter)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySets_MetaData[] = {
		{ "Category", "Astral|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Ability sets to grant to this pawn's ability system.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Ability sets to grant to this pawn's ability system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagRelationshipMapping_MetaData[] = {
		{ "Category", "Astral|Abilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// What mapping of ability tags to use for actions taking by this pawn\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "What mapping of ability tags to use for actions taking by this pawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Astral|Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCameraMode_MetaData[] = {
		{ "Category", "Astral|Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default camera mode used by player controlled pawns.\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default camera mode used by player controlled pawns." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilitySets;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TagRelationshipMapping;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultCameraMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_AbilitySets_Inner = { "AbilitySets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAstralAbilitySet_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_AbilitySets = { "AbilitySets", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, AbilitySets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySets_MetaData), NewProp_AbilitySets_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_TagRelationshipMapping = { "TagRelationshipMapping", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, TagRelationshipMapping), Z_Construct_UClass_UAstralAbilityTagRelationshipMapping_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagRelationshipMapping_MetaData), NewProp_TagRelationshipMapping_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, InputConfig), Z_Construct_UClass_UAstralInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_DefaultCameraMode = { "DefaultCameraMode", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, DefaultCameraMode), Z_Construct_UClass_UClass, Z_Construct_UClass_UAstralCameraMode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCameraMode_MetaData), NewProp_DefaultCameraMode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_AbilitySets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_AbilitySets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_TagRelationshipMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_InputConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_DefaultCameraMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralPawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralPawnData_Statics::ClassParams = {
	&UAstralPawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralPawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralPawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralPawnData()
{
	if (!Z_Registration_Info_UClass_UAstralPawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralPawnData.OuterSingleton, Z_Construct_UClass_UAstralPawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralPawnData.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralPawnData>()
{
	return UAstralPawnData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralPawnData);
UAstralPawnData::~UAstralPawnData() {}
// End Class UAstralPawnData

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralPawnData, UAstralPawnData::StaticClass, TEXT("UAstralPawnData"), &Z_Registration_Info_UClass_UAstralPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralPawnData), 730242907U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_1333479225(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
