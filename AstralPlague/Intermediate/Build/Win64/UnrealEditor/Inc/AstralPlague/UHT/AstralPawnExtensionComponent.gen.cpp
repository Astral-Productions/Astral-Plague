// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/AstralPawnExtensionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPawnExtensionComponent() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnData_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnExtensionComponent();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralPawnExtensionComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister();
MODULARGAMEPLAY_API UClass* Z_Construct_UClass_UPawnComponent();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralPawnExtensionComponent Function FindPawnExtensionComponent
struct Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics
{
	struct AstralPawnExtensionComponent_eventFindPawnExtensionComponent_Parms
	{
		const AActor* Actor;
		UAstralPawnExtensionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the pawn extension component if one exists on the specified actor. */" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the pawn extension component if one exists on the specified actor." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPawnExtensionComponent_eventFindPawnExtensionComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralPawnExtensionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralPawnExtensionComponent, nullptr, "FindPawnExtensionComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::AstralPawnExtensionComponent_eventFindPawnExtensionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::AstralPawnExtensionComponent_eventFindPawnExtensionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralPawnExtensionComponent::execFindPawnExtensionComponent)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralPawnExtensionComponent**)Z_Param__Result=UAstralPawnExtensionComponent::FindPawnExtensionComponent(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class UAstralPawnExtensionComponent Function FindPawnExtensionComponent

// Begin Class UAstralPawnExtensionComponent Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPawnExtensionComponent_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current ability system component, which may be owned by a different actor */" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current ability system component, which may be owned by a different actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPawnExtensionComponent_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralPawnExtensionComponent, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::AstralPawnExtensionComponent_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::AstralPawnExtensionComponent_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralPawnExtensionComponent::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class UAstralPawnExtensionComponent Function GetAstralAbilitySystemComponent

// Begin Class UAstralPawnExtensionComponent Function OnRep_PawnData
struct Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralPawnExtensionComponent, nullptr, "OnRep_PawnData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralPawnExtensionComponent::execOnRep_PawnData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_PawnData();
	P_NATIVE_END;
}
// End Class UAstralPawnExtensionComponent Function OnRep_PawnData

// Begin Class UAstralPawnExtensionComponent
void UAstralPawnExtensionComponent::StaticRegisterNativesUAstralPawnExtensionComponent()
{
	UClass* Class = UAstralPawnExtensionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindPawnExtensionComponent", &UAstralPawnExtensionComponent::execFindPawnExtensionComponent },
		{ "GetAstralAbilitySystemComponent", &UAstralPawnExtensionComponent::execGetAstralAbilitySystemComponent },
		{ "OnRep_PawnData", &UAstralPawnExtensionComponent::execOnRep_PawnData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralPawnExtensionComponent);
UClass* Z_Construct_UClass_UAstralPawnExtensionComponent_NoRegister()
{
	return UAstralPawnExtensionComponent::StaticClass();
}
struct Z_Construct_UClass_UAstralPawnExtensionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Character/AstralPawnExtensionComponent.h" },
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnData_MetaData[] = {
		{ "Category", "Astral|Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn data used to create the pawn. Specified from a spawn function or on a placed instance. */" },
#endif
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
		{ "NativeConstTemplateArg", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used to create the pawn. Specified from a spawn function or on a placed instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the ability system component that is cached for convenience. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPawnExtensionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the ability system component that is cached for convenience." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralPawnExtensionComponent_FindPawnExtensionComponent, "FindPawnExtensionComponent" }, // 3544688463
		{ &Z_Construct_UFunction_UAstralPawnExtensionComponent_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 883778895
		{ &Z_Construct_UFunction_UAstralPawnExtensionComponent_OnRep_PawnData, "OnRep_PawnData" }, // 4282310657
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralPawnExtensionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::NewProp_PawnData = { "PawnData", "OnRep_PawnData", (EPropertyFlags)0x0124080100000821, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnExtensionComponent, PawnData), Z_Construct_UClass_UAstralPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnData_MetaData), NewProp_PawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralPawnExtensionComponent, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::NewProp_PawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::NewProp_AbilitySystemComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPawnComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameFrameworkInitStateInterface_NoRegister, (int32)VTABLE_OFFSET(UAstralPawnExtensionComponent, IGameFrameworkInitStateInterface), false },  // 363983679
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::ClassParams = {
	&UAstralPawnExtensionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralPawnExtensionComponent()
{
	if (!Z_Registration_Info_UClass_UAstralPawnExtensionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralPawnExtensionComponent.OuterSingleton, Z_Construct_UClass_UAstralPawnExtensionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralPawnExtensionComponent.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralPawnExtensionComponent>()
{
	return UAstralPawnExtensionComponent::StaticClass();
}
void UAstralPawnExtensionComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_PawnData(TEXT("PawnData"));
	const bool bIsValid = true
		&& Name_PawnData == ClassReps[(int32)ENetFields_Private::PawnData].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UAstralPawnExtensionComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralPawnExtensionComponent);
UAstralPawnExtensionComponent::~UAstralPawnExtensionComponent() {}
// End Class UAstralPawnExtensionComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralPawnExtensionComponent, UAstralPawnExtensionComponent::StaticClass, TEXT("UAstralPawnExtensionComponent"), &Z_Registration_Info_UClass_UAstralPawnExtensionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralPawnExtensionComponent), 3957449531U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_884379891(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPawnExtensionComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
