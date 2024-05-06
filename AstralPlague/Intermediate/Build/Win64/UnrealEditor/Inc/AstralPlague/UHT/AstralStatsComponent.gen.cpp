// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralStatsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralStatsComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralStatsComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralStatsComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralStatsComponent Function FindHealthComponent
struct Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics
{
	struct AstralStatsComponent_eventFindHealthComponent_Parms
	{
		const AActor* Actor;
		UAstralStatsComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the health component if one exists on the specified actor.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the health component if one exists on the specified actor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventFindHealthComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventFindHealthComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralStatsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "FindHealthComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::AstralStatsComponent_eventFindHealthComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::AstralStatsComponent_eventFindHealthComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execFindHealthComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralStatsComponent**)Z_Param__Result=UAstralStatsComponent::FindHealthComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function FindHealthComponent

// Begin Class UAstralStatsComponent Function InitializeWithAbilitySystem
struct Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics
{
	struct AstralStatsComponent_eventInitializeWithAbilitySystem_Parms
	{
		UAstralAbilitySystemComponent* InASC;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Initialize the component using an ability system component.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initialize the component using an ability system component." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InASC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InASC;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC = { "InASC", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralStatsComponent_eventInitializeWithAbilitySystem_Parms, InASC), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InASC_MetaData), NewProp_InASC_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::NewProp_InASC,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "InitializeWithAbilitySystem", nullptr, nullptr, Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::AstralStatsComponent_eventInitializeWithAbilitySystem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::AstralStatsComponent_eventInitializeWithAbilitySystem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execInitializeWithAbilitySystem)
{
	P_GET_OBJECT(UAstralAbilitySystemComponent,Z_Param_InASC);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWithAbilitySystem(Z_Param_InASC);
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function InitializeWithAbilitySystem

// Begin Class UAstralStatsComponent Function UninitializeFromAbilitySystem
struct Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Health" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Uninitialize the component, clearing any references to the ability system.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Uninitialize the component, clearing any references to the ability system." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralStatsComponent, nullptr, "UninitializeFromAbilitySystem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralStatsComponent::execUninitializeFromAbilitySystem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UninitializeFromAbilitySystem();
	P_NATIVE_END;
}
// End Class UAstralStatsComponent Function UninitializeFromAbilitySystem

// Begin Class UAstralStatsComponent
void UAstralStatsComponent::StaticRegisterNativesUAstralStatsComponent()
{
	UClass* Class = UAstralStatsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindHealthComponent", &UAstralStatsComponent::execFindHealthComponent },
		{ "InitializeWithAbilitySystem", &UAstralStatsComponent::execInitializeWithAbilitySystem },
		{ "UninitializeFromAbilitySystem", &UAstralStatsComponent::execUninitializeFromAbilitySystem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralStatsComponent);
UClass* Z_Construct_UClass_UAstralStatsComponent_NoRegister()
{
	return UAstralStatsComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralStatsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "AbilitySystem/AstralStatsComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatSet_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Health set used by this component.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AstralStatsComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Health set used by this component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralStatsComponent_FindHealthComponent, "FindHealthComponent" }, // 839291787
		{ &Z_Construct_UFunction_UAstralStatsComponent_InitializeWithAbilitySystem, "InitializeWithAbilitySystem" }, // 1517476895
		{ &Z_Construct_UFunction_UAstralStatsComponent_UninitializeFromAbilitySystem, "UninitializeFromAbilitySystem" }, // 2503533235
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralStatsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_StatSet = { "StatSet", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralStatsComponent, StatSet), Z_Construct_UClass_UDefaultAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatSet_MetaData), NewProp_StatSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralStatsComponent_Statics::NewProp_StatSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralStatsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralStatsComponent_Statics::ClassParams = {
	&UAstralStatsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralStatsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralStatsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralStatsComponent()
{
	if (!Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton, Z_Construct_UClass_UAstralStatsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralStatsComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralStatsComponent>()
{
	return UAstralStatsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralStatsComponent);
UAstralStatsComponent::~UAstralStatsComponent() {}
// End Class UAstralStatsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralStatsComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralStatsComponent, UAstralStatsComponent::StaticClass, TEXT("UAstralStatsComponent"), &Z_Registration_Info_UClass_UAstralStatsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralStatsComponent), 4086604376U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralStatsComponent_h_2384768770(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralStatsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralStatsComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
