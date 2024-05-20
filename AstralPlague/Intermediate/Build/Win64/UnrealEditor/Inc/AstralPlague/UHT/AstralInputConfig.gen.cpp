// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/Input/AstralInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralInputConfig() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralInputConfig();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralInputConfig_NoRegister();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralInputAction();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin ScriptStruct FAstralInputAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralInputAction;
class UScriptStruct* FAstralInputAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralInputAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralInputAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralInputAction, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralInputAction"));
	}
	return Z_Registration_Info_UScriptStruct_AstralInputAction.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralInputAction>()
{
	return FAstralInputAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralInputAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * FAstralInputAction\n *\n *\x09Struct used to map a input action to a gameplay input tag.\n */" },
#endif
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FAstralInputAction\n\n    Struct used to map a input action to a gameplay input tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "AstralInputAction" },
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "AstralInputAction" },
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralInputAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAstralInputAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralInputAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAstralInputAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralInputAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralInputAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralInputAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralInputAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralInputAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralInputAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralInputAction",
	Z_Construct_UScriptStruct_FAstralInputAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralInputAction_Statics::PropPointers),
	sizeof(FAstralInputAction),
	alignof(FAstralInputAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralInputAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralInputAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralInputAction()
{
	if (!Z_Registration_Info_UScriptStruct_AstralInputAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralInputAction.InnerSingleton, Z_Construct_UScriptStruct_FAstralInputAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralInputAction.InnerSingleton;
}
// End ScriptStruct FAstralInputAction

// Begin Class UAstralInputConfig Function FindAbilityInputActionForTag
struct Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics
{
	struct AstralInputConfig_eventFindAbilityInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralInputConfig_eventFindAbilityInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((AstralInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralInputConfig, nullptr, "FindAbilityInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::AstralInputConfig_eventFindAbilityInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::AstralInputConfig_eventFindAbilityInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralInputConfig::execFindAbilityInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class UAstralInputConfig Function FindAbilityInputActionForTag

// Begin Class UAstralInputConfig Function FindNativeInputActionForTag
struct Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics
{
	struct AstralInputConfig_eventFindNativeInputActionForTag_Parms
	{
		FGameplayTag InputTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralInputConfig_eventFindNativeInputActionForTag_Parms, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((AstralInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AstralInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralInputConfig, nullptr, "FindNativeInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::AstralInputConfig_eventFindNativeInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::AstralInputConfig_eventFindNativeInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralInputConfig::execFindNativeInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class UAstralInputConfig Function FindNativeInputActionForTag

// Begin Class UAstralInputConfig
void UAstralInputConfig::StaticRegisterNativesUAstralInputConfig()
{
	UClass* Class = UAstralInputConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAbilityInputActionForTag", &UAstralInputConfig::execFindAbilityInputActionForTag },
		{ "FindNativeInputActionForTag", &UAstralInputConfig::execFindNativeInputActionForTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralInputConfig);
UClass* Z_Construct_UClass_UAstralInputConfig_NoRegister()
{
	return UAstralInputConfig::StaticClass();
}
struct Z_Construct_UClass_UAstralInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UAstralInputConfig\n *\n *\x09Non-mutable data asset that contains input configuration properties.\n */" },
#endif
		{ "IncludePath", "Input/AstralInputConfig.h" },
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UAstralInputConfig\n\n    Non-mutable data asset that contains input configuration properties." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "AstralInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound.\n" },
#endif
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and must be manually bound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "AstralInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags.\n" },
#endif
		{ "ModuleRelativePath", "Input/AstralInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of input actions used by the owner.  These input actions are mapped to a gameplay tag and are automatically bound to abilities with matching input tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 1153278308
		{ &Z_Construct_UFunction_UAstralInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 3436638021
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAstralInputAction, METADATA_PARAMS(0, nullptr) }; // 1034590911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 1034590911
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAstralInputAction, METADATA_PARAMS(0, nullptr) }; // 1034590911
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 1034590911
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralInputConfig_Statics::ClassParams = {
	&UAstralInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputConfig_Statics::PropPointers),
	0,
	0x000100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralInputConfig()
{
	if (!Z_Registration_Info_UClass_UAstralInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralInputConfig.OuterSingleton, Z_Construct_UClass_UAstralInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralInputConfig.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralInputConfig>()
{
	return UAstralInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralInputConfig);
UAstralInputConfig::~UAstralInputConfig() {}
// End Class UAstralInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralInputAction::StaticStruct, Z_Construct_UScriptStruct_FAstralInputAction_Statics::NewStructOps, TEXT("AstralInputAction"), &Z_Registration_Info_UScriptStruct_AstralInputAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralInputAction), 1034590911U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralInputConfig, UAstralInputConfig::StaticClass, TEXT("UAstralInputConfig"), &Z_Registration_Info_UClass_UAstralInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralInputConfig), 3050185103U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_2082504864(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_Input_AstralInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
