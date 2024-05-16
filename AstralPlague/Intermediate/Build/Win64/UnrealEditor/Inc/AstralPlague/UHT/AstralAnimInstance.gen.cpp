// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Animation/AstralAnimInstance.h"
#include "GameplayAbilities/Public/GameplayEffectTypes.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAnimInstance() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAnimInstance();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAnimInstance
void UAstralAnimInstance::StaticRegisterNativesUAstralAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAnimInstance);
UClass* Z_Construct_UClass_UAstralAnimInstance_NoRegister()
{
	return UAstralAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UAstralAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Animation/AstralAnimInstance.h" },
		{ "ModuleRelativePath", "Animation/AstralAnimInstance.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagPropertyMap_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\n// These should be used instead of manually querying for the gameplay tags.\n" },
#endif
		{ "ModuleRelativePath", "Animation/AstralAnimInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tags that can be mapped to blueprint variables. The variables will automatically update as the tags are added or removed.\nThese should be used instead of manually querying for the gameplay tags." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundDistance_MetaData[] = {
		{ "Category", "Character State Data" },
		{ "ModuleRelativePath", "Animation/AstralAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GameplayTagPropertyMap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralAnimInstance_Statics::NewProp_GameplayTagPropertyMap = { "GameplayTagPropertyMap", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAnimInstance, GameplayTagPropertyMap), Z_Construct_UScriptStruct_FGameplayTagBlueprintPropertyMap, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagPropertyMap_MetaData), NewProp_GameplayTagPropertyMap_MetaData) }; // 2674068477
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAstralAnimInstance_Statics::NewProp_GroundDistance = { "GroundDistance", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralAnimInstance, GroundDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundDistance_MetaData), NewProp_GroundDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAnimInstance_Statics::NewProp_GameplayTagPropertyMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAnimInstance_Statics::NewProp_GroundDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAnimInstance_Statics::ClassParams = {
	&UAstralAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAnimInstance()
{
	if (!Z_Registration_Info_UClass_UAstralAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAnimInstance.OuterSingleton, Z_Construct_UClass_UAstralAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAnimInstance.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAnimInstance>()
{
	return UAstralAnimInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAnimInstance);
UAstralAnimInstance::~UAstralAnimInstance() {}
// End Class UAstralAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Animation_AstralAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAnimInstance, UAstralAnimInstance::StaticClass, TEXT("UAstralAnimInstance"), &Z_Registration_Info_UClass_UAstralAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAnimInstance), 4266208054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Animation_AstralAnimInstance_h_3223175166(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Animation_AstralAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Animation_AstralAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
