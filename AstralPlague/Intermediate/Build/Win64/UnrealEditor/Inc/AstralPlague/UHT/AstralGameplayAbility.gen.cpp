// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralGameplayAbility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameplayAbility() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayAbility();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayAbility_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Class UAstralGameplayAbility Function GetAstralAbilitySystemComponentFromActorInfo
struct Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics
{
	struct AstralGameplayAbility_eventGetAstralAbilitySystemComponentFromActorInfo_Parms
	{
		UAstralAbilitySystemComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameplayAbility_eventGetAstralAbilitySystemComponentFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "GetAstralAbilitySystemComponentFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralAbilitySystemComponentFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralAbilitySystemComponentFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralGameplayAbility::execGetAstralAbilitySystemComponentFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralAbilitySystemComponent**)Z_Param__Result=P_THIS->GetAstralAbilitySystemComponentFromActorInfo();
	P_NATIVE_END;
}
// End Class UAstralGameplayAbility Function GetAstralAbilitySystemComponentFromActorInfo

// Begin Class UAstralGameplayAbility Function GetAstralCharacterFromActorInfo
struct Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics
{
	struct AstralGameplayAbility_eventGetAstralCharacterFromActorInfo_Parms
	{
		AAstralPlagueCharacter* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameplayAbility_eventGetAstralCharacterFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AAstralPlagueCharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "GetAstralCharacterFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralCharacterFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralCharacterFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralGameplayAbility::execGetAstralCharacterFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlagueCharacter**)Z_Param__Result=P_THIS->GetAstralCharacterFromActorInfo();
	P_NATIVE_END;
}
// End Class UAstralGameplayAbility Function GetAstralCharacterFromActorInfo

// Begin Class UAstralGameplayAbility Function GetAstralPlayerControllerFromActorInfo
struct Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics
{
	struct AstralGameplayAbility_eventGetAstralPlayerControllerFromActorInfo_Parms
	{
		AAstralPlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameplayAbility_eventGetAstralPlayerControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AAstralPlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "GetAstralPlayerControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralPlayerControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::AstralGameplayAbility_eventGetAstralPlayerControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralGameplayAbility::execGetAstralPlayerControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AAstralPlayerController**)Z_Param__Result=P_THIS->GetAstralPlayerControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UAstralGameplayAbility Function GetAstralPlayerControllerFromActorInfo

// Begin Class UAstralGameplayAbility Function GetControllerFromActorInfo
struct Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics
{
	struct AstralGameplayAbility_eventGetControllerFromActorInfo_Parms
	{
		AController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Astral|Ability" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameplayAbility_eventGetControllerFromActorInfo_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "GetControllerFromActorInfo", nullptr, nullptr, Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::AstralGameplayAbility_eventGetControllerFromActorInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::AstralGameplayAbility_eventGetControllerFromActorInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralGameplayAbility::execGetControllerFromActorInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AController**)Z_Param__Result=P_THIS->GetControllerFromActorInfo();
	P_NATIVE_END;
}
// End Class UAstralGameplayAbility Function GetControllerFromActorInfo

// Begin Class UAstralGameplayAbility Function K2_OnAbilityAdded
static FName NAME_UAstralGameplayAbility_K2_OnAbilityAdded = FName(TEXT("K2_OnAbilityAdded"));
void UAstralGameplayAbility::K2_OnAbilityAdded()
{
	ProcessEvent(FindFunctionChecked(NAME_UAstralGameplayAbility_K2_OnAbilityAdded),NULL);
}
struct Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is granted to the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityAdded" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is granted to the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "K2_OnAbilityAdded", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralGameplayAbility Function K2_OnAbilityAdded

// Begin Class UAstralGameplayAbility Function K2_OnAbilityRemoved
static FName NAME_UAstralGameplayAbility_K2_OnAbilityRemoved = FName(TEXT("K2_OnAbilityRemoved"));
void UAstralGameplayAbility::K2_OnAbilityRemoved()
{
	ProcessEvent(FindFunctionChecked(NAME_UAstralGameplayAbility_K2_OnAbilityRemoved),NULL);
}
struct Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when this ability is removed from the ability system component. */" },
#endif
		{ "DisplayName", "OnAbilityRemoved" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when this ability is removed from the ability system component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "K2_OnAbilityRemoved", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralGameplayAbility Function K2_OnAbilityRemoved

// Begin Class UAstralGameplayAbility Function K2_OnPawnAvatarSet
static FName NAME_UAstralGameplayAbility_K2_OnPawnAvatarSet = FName(TEXT("K2_OnPawnAvatarSet"));
void UAstralGameplayAbility::K2_OnPawnAvatarSet()
{
	ProcessEvent(FindFunctionChecked(NAME_UAstralGameplayAbility_K2_OnPawnAvatarSet),NULL);
}
struct Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Ability" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the ability system is initialized with a pawn avatar. */" },
#endif
		{ "DisplayName", "OnPawnAvatarSet" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the ability system is initialized with a pawn avatar." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "K2_OnPawnAvatarSet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAstralGameplayAbility Function K2_OnPawnAvatarSet

// Begin Class UAstralGameplayAbility
void UAstralGameplayAbility::StaticRegisterNativesUAstralGameplayAbility()
{
	UClass* Class = UAstralGameplayAbility::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAstralAbilitySystemComponentFromActorInfo", &UAstralGameplayAbility::execGetAstralAbilitySystemComponentFromActorInfo },
		{ "GetAstralCharacterFromActorInfo", &UAstralGameplayAbility::execGetAstralCharacterFromActorInfo },
		{ "GetAstralPlayerControllerFromActorInfo", &UAstralGameplayAbility::execGetAstralPlayerControllerFromActorInfo },
		{ "GetControllerFromActorInfo", &UAstralGameplayAbility::execGetControllerFromActorInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAstralGameplayAbility);
UClass* Z_Construct_UClass_UAstralGameplayAbility_NoRegister()
{
	return UAstralGameplayAbility::StaticClass();
}
struct Z_Construct_UClass_UAstralGameplayAbility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AbilitySystem/AstralGameplayAbility.h" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_Inner_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalCosts_MetaData[] = {
		{ "Category", "Costs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Additional costs that must be paid to activate this ability\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional costs that must be paid to activate this ability" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo, "GetAstralAbilitySystemComponentFromActorInfo" }, // 643849834
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo, "GetAstralCharacterFromActorInfo" }, // 1791217519
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralPlayerControllerFromActorInfo, "GetAstralPlayerControllerFromActorInfo" }, // 297426697
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetControllerFromActorInfo, "GetControllerFromActorInfo" }, // 1334968853
		{ &Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityAdded, "K2_OnAbilityAdded" }, // 2599326410
		{ &Z_Construct_UFunction_UAstralGameplayAbility_K2_OnAbilityRemoved, "K2_OnAbilityRemoved" }, // 4186965558
		{ &Z_Construct_UFunction_UAstralGameplayAbility_K2_OnPawnAvatarSet, "K2_OnPawnAvatarSet" }, // 1113492189
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAstralGameplayAbility>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAstralAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayAbility_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAstralGameplayAbility_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayAbility_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAstralGameplayAbility_Statics::ClassParams = {
	&UAstralGameplayAbility::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAstralGameplayAbility_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayAbility_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAstralGameplayAbility_Statics::Class_MetaDataParams), Z_Construct_UClass_UAstralGameplayAbility_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAstralGameplayAbility()
{
	if (!Z_Registration_Info_UClass_UAstralGameplayAbility.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAstralGameplayAbility.OuterSingleton, Z_Construct_UClass_UAstralGameplayAbility_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAstralGameplayAbility.OuterSingleton;
}
template<> ASTRALPLAGUE_API UClass* StaticClass<UAstralGameplayAbility>()
{
	return UAstralGameplayAbility::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAstralGameplayAbility);
UAstralGameplayAbility::~UAstralGameplayAbility() {}
// End Class UAstralGameplayAbility

// Begin Registration
struct Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameplayAbility, UAstralGameplayAbility::StaticClass, TEXT("UAstralGameplayAbility"), &Z_Registration_Info_UClass_UAstralGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameplayAbility), 667808633U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_2268536926(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
