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
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAstralPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnData_Statics::NewProp_PawnClass,
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
		{ Z_Construct_UClass_UAstralPawnData, UAstralPawnData::StaticClass, TEXT("UAstralPawnData"), &Z_Registration_Info_UClass_UAstralPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralPawnData), 795083782U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_2612995981(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
