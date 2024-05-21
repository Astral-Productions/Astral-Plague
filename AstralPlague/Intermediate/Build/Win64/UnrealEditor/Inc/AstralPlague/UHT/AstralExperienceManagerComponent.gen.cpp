// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/GameModes/AstralExperienceManagerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralExperienceManagerComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceDefinition_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceManagerComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralExperienceManagerComponent_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameStateComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralExperienceManagerComponent Function OnRep_CurrentExperience
struct Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameModes/AstralExperienceManagerComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralExperienceManagerComponent, nullptr, "OnRep_CurrentExperience", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralExperienceManagerComponent::execOnRep_CurrentExperience)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_CurrentExperience();
	P_NATIVE_END;
}
// End Class UAstralExperienceManagerComponent Function OnRep_CurrentExperience

// Begin Class UAstralExperienceManagerComponent
void UAstralExperienceManagerComponent::StaticRegisterNativesUAstralExperienceManagerComponent()
{
	UClass* Class = UAstralExperienceManagerComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_CurrentExperience", &UAstralExperienceManagerComponent::execOnRep_CurrentExperience },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralExperienceManagerComponent);
UClass* Z_Construct_UClass_UAstralExperienceManagerComponent_NoRegister()
{
	return UAstralExperienceManagerComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralExperienceManagerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "GameModes/AstralExperienceManagerComponent.h" },
		{ "ModuleRelativePath", "GameModes/AstralExperienceManagerComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentExperience_MetaData[] = {
		{ "ModuleRelativePath", "GameModes/AstralExperienceManagerComponent.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentExperience;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralExperienceManagerComponent_OnRep_CurrentExperience, "OnRep_CurrentExperience" }, // 2688296474
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralExperienceManagerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::NewProp_CurrentExperience = { "CurrentExperience", "OnRep_CurrentExperience", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralExperienceManagerComponent, CurrentExperience), Z_Construct_UClass_UAstralExperienceDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentExperience_MetaData), NewProp_CurrentExperience_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::NewProp_CurrentExperience,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameStateComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::ClassParams = {
	&UAstralExperienceManagerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::PropPointers),
	0,
	0x00A000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralExperienceManagerComponent()
{
	if (!Z_Registration_Info_UClass_UAstralExperienceManagerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralExperienceManagerComponent.OuterSingleton, Z_Construct_UClass_UAstralExperienceManagerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralExperienceManagerComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralExperienceManagerComponent>()
{
	return UAstralExperienceManagerComponent::StaticClass();
}
void UAstralExperienceManagerComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_CurrentExperience(TEXT("CurrentExperience"));
	const bool bIsValid = true
		&& Name_CurrentExperience == ClassReps[(int32)ENetFields_Private::CurrentExperience].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAstralExperienceManagerComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralExperienceManagerComponent);
UAstralExperienceManagerComponent::~UAstralExperienceManagerComponent() {}
// End Class UAstralExperienceManagerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralExperienceManagerComponent, UAstralExperienceManagerComponent::StaticClass, TEXT("UAstralExperienceManagerComponent"), &Z_Registration_Info_UClass_UAstralExperienceManagerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralExperienceManagerComponent), 1564406134U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_2846277086(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_GameModes_AstralExperienceManagerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
