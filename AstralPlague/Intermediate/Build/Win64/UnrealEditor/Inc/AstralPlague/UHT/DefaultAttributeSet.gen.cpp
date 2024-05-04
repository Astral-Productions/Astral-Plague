// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Public/DefaultAttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultAttributeSet() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UDefaultAttributeSet
void UDefaultAttributeSet::StaticRegisterNativesUDefaultAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDefaultAttributeSet);
UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister()
{
	return UDefaultAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UDefaultAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "DefaultAttributeSet.h" },
		{ "ModuleRelativePath", "Public/DefaultAttributeSet.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDefaultAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDefaultAttributeSet_Statics::ClassParams = {
	&UDefaultAttributeSet::StaticClass,
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
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UDefaultAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDefaultAttributeSet()
{
	if (!Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton, Z_Construct_UClass_UDefaultAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDefaultAttributeSet.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UDefaultAttributeSet>()
{
	return UDefaultAttributeSet::StaticClass();
}
UDefaultAttributeSet::UDefaultAttributeSet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultAttributeSet);
UDefaultAttributeSet::~UDefaultAttributeSet() {}
// End Class UDefaultAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDefaultAttributeSet, UDefaultAttributeSet::StaticClass, TEXT("UDefaultAttributeSet"), &Z_Registration_Info_UClass_UDefaultAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDefaultAttributeSet), 1922151444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_822546314(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Public_DefaultAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
