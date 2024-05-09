// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Character/AstralPlayerState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralPlayerState() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UDefaultAttributeSet_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class AAstralPlayerState Function GetAstralAbilitySystemComponent
struct Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics
{
	struct AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Gets the ability system component used for game wide things\n" },
#endif
		{ "ModuleRelativePath", "Character/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the ability system component used for game wide things" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetAstralAbilitySystemComponent", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::AstralPlayerState_eventGetAstralAbilitySystemComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetAstralAbilitySystemComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponent();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetAstralAbilitySystemComponent

// Begin Class AAstralPlayerState Function GetAstralPlayerController
struct Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics
{
	struct AstralPlayerState_eventGetAstralPlayerController_Parms
	{
		AAstralPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|PlayerState" },
		{ "ModuleRelativePath", "Character/AstralPlayerState.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralPlayerState_eventGetAstralPlayerController_Parms, ReturnValue), Z_Construct_UClass_AAstralPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAstralPlayerState, nullptr, "GetAstralPlayerController", nullptr, nullptr, Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::AstralPlayerState_eventGetAstralPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::AstralPlayerState_eventGetAstralPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAstralPlayerState::execGetAstralPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlayerController**)Z_Param__Result=P_THIS->GetAstralPlayerController();
	P_NATIVE_END;
}
// End Class AAstralPlayerState Function GetAstralPlayerController

// Begin Class AAstralPlayerState
void AAstralPlayerState::StaticRegisterNativesAAstralPlayerState()
{
	UClass* Class = AAstralPlayerState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponent", &AAstralPlayerState::execGetAstralAbilitySystemComponent },
		{ "GetAstralPlayerController", &AAstralPlayerState::execGetAstralPlayerController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAstralPlayerState);
UClass* Z_Construct_UClass_AAstralPlayerState_NoRegister()
{
	return AAstralPlayerState::StaticClass();
}
struct Z_Construct_UClass_AAstralPlayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Character/AstralPlayerState.h" },
		{ "ModuleRelativePath", "Character/AstralPlayerState.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Astral|PlayerState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The ability system component subobject for game-wide things (primarily gameplay cues)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlayerState.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ability system component subobject for game-wide things (primarily gameplay cues)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsSet_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AstralPlayerState.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAstralPlayerState_GetAstralAbilitySystemComponent, "GetAstralAbilitySystemComponent" }, // 4136490119
		{ &Z_Construct_UFunction_AAstralPlayerState_GetAstralPlayerController, "GetAstralPlayerController" }, // 1508858949
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAstralPlayerState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, AbilitySystemComponent), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_StatsSet = { "StatsSet", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAstralPlayerState, StatsSet), Z_Construct_UClass_UDefaultAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsSet_MetaData), NewProp_StatsSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAstralPlayerState_Statics::NewProp_StatsSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerState,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAstralPlayerState_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AAstralPlayerState, IAbilitySystemInterface), false },  // 2272790346
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams = {
	&AAstralPlayerState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams), Z_Construct_UClass_AAstralPlayerState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAstralPlayerState()
{
	if (!Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton, Z_Construct_UClass_AAstralPlayerState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAstralPlayerState.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<AAstralPlayerState>()
{
	return AAstralPlayerState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAstralPlayerState);
AAstralPlayerState::~AAstralPlayerState() {}
// End Class AAstralPlayerState

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlayerState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAstralPlayerState, AAstralPlayerState::StaticClass, TEXT("AAstralPlayerState"), &Z_Registration_Info_UClass_AAstralPlayerState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAstralPlayerState), 3991485662U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlayerState_h_1477485253(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlayerState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Character_AstralPlayerState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
