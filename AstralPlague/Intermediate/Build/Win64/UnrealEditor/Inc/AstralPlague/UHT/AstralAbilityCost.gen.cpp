// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralAbilityCost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralAbilityCost() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralAbilityCost
void UAstralAbilityCost::StaticRegisterNativesUAstralAbilityCost()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralAbilityCost);
UClass* Z_Construct_UClass_UAstralAbilityCost_NoRegister()
{
	return UAstralAbilityCost::StaticClass();
}
struct Z_Construct_UClass_UAstralAbilityCost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AstralAbilityCost.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilityCost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyApplyCostOnHit_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, this cost should only be applied if this ability hits successfully */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralAbilityCost.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, this cost should only be applied if this ability hits successfully" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyApplyCostOnHit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralAbilityCost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAstralAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit(void* Obj)
{
	((UAstralAbilityCost*)Obj)->bOnlyApplyCostOnHit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAstralAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit = { "bOnlyApplyCostOnHit", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAstralAbilityCost), &Z_Construct_UClass_UAstralAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyApplyCostOnHit_MetaData), NewProp_bOnlyApplyCostOnHit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralAbilityCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralAbilityCost_Statics::NewProp_bOnlyApplyCostOnHit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralAbilityCost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralAbilityCost_Statics::ClassParams = {
	&UAstralAbilityCost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAstralAbilityCost_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralAbilityCost_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralAbilityCost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralAbilityCost()
{
	if (!Z_Registration_Info_UClass_UAstralAbilityCost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralAbilityCost.OuterSingleton, Z_Construct_UClass_UAstralAbilityCost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralAbilityCost.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralAbilityCost>()
{
	return UAstralAbilityCost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralAbilityCost);
UAstralAbilityCost::~UAstralAbilityCost() {}
// End Class UAstralAbilityCost

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralAbilityCost, UAstralAbilityCost::StaticClass, TEXT("UAstralAbilityCost"), &Z_Registration_Info_UClass_UAstralAbilityCost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralAbilityCost), 3489158988U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_h_626889436(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralAbilityCost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
