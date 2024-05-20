// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AstralPlague/AbilitySystem/AstralGameplayAbility.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAstralGameplayAbility() {}

// Begin Cross Module References
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlagueCharacter_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_AAstralPlayerController_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilityCost_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralAbilitySystemComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayAbility();
ASTRALPLAGUE_API UClass* Z_Construct_UClass_UAstralGameplayAbility_NoRegister();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup();
ASTRALPLAGUE_API UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy();
ASTRALPLAGUE_API UScriptStruct* Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_AstralPlague();
// End Cross Module References

// Begin Enum EAstralAbilityActivationPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy;
static UEnum* EAstralAbilityActivationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("EAstralAbilityActivationPolicy"));
	}
	return Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.OuterSingleton;
}
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityActivationPolicy>()
{
	return EAstralAbilityActivationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EAstralAbilityActivationPolicy\n *\n *\x09""Defines how an ability is meant to activate.\n */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
		{ "OnInputTriggered.Comment", "// Try to activate the ability when the input is triggered.\n" },
		{ "OnInputTriggered.Name", "EAstralAbilityActivationPolicy::OnInputTriggered" },
		{ "OnInputTriggered.ToolTip", "Try to activate the ability when the input is triggered." },
		{ "OnSpawn.Comment", "// Try to activate the ability when an avatar is assigned.\n" },
		{ "OnSpawn.Name", "EAstralAbilityActivationPolicy::OnSpawn" },
		{ "OnSpawn.ToolTip", "Try to activate the ability when an avatar is assigned." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EAstralAbilityActivationPolicy\n\n    Defines how an ability is meant to activate." },
#endif
		{ "WhileInputActive.Comment", "// Continually try to activate the ability while the input is active.\n" },
		{ "WhileInputActive.Name", "EAstralAbilityActivationPolicy::WhileInputActive" },
		{ "WhileInputActive.ToolTip", "Continually try to activate the ability while the input is active." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAstralAbilityActivationPolicy::OnInputTriggered", (int64)EAstralAbilityActivationPolicy::OnInputTriggered },
		{ "EAstralAbilityActivationPolicy::WhileInputActive", (int64)EAstralAbilityActivationPolicy::WhileInputActive },
		{ "EAstralAbilityActivationPolicy::OnSpawn", (int64)EAstralAbilityActivationPolicy::OnSpawn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	"EAstralAbilityActivationPolicy",
	"EAstralAbilityActivationPolicy",
	Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.InnerSingleton, Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy.InnerSingleton;
}
// End Enum EAstralAbilityActivationPolicy

// Begin Enum EAstralAbilityActivationGroup
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAstralAbilityActivationGroup;
static UEnum* EAstralAbilityActivationGroup_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("EAstralAbilityActivationGroup"));
	}
	return Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.OuterSingleton;
}
template<> ASTRALPLAGUE_API UEnum* StaticEnum<EAstralAbilityActivationGroup>()
{
	return EAstralAbilityActivationGroup_StaticEnum();
}
struct Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * EAstralAbilityActivationGroup\n *\n *\x09""Defines how an ability activates in relation to other abilities.\n */" },
#endif
		{ "Exclusive_Blocking.Comment", "// Ability blocks all other exclusive abilities from activating.\n" },
		{ "Exclusive_Blocking.Name", "EAstralAbilityActivationGroup::Exclusive_Blocking" },
		{ "Exclusive_Blocking.ToolTip", "Ability blocks all other exclusive abilities from activating." },
		{ "Exclusive_Replaceable.Comment", "// Ability is canceled and replaced by other exclusive abilities.\n" },
		{ "Exclusive_Replaceable.Name", "EAstralAbilityActivationGroup::Exclusive_Replaceable" },
		{ "Exclusive_Replaceable.ToolTip", "Ability is canceled and replaced by other exclusive abilities." },
		{ "Independent.Comment", "// Ability runs independently of all other abilities.\n" },
		{ "Independent.Name", "EAstralAbilityActivationGroup::Independent" },
		{ "Independent.ToolTip", "Ability runs independently of all other abilities." },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "EAstralAbilityActivationGroup::MAX" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EAstralAbilityActivationGroup\n\n    Defines how an ability activates in relation to other abilities." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAstralAbilityActivationGroup::Independent", (int64)EAstralAbilityActivationGroup::Independent },
		{ "EAstralAbilityActivationGroup::Exclusive_Replaceable", (int64)EAstralAbilityActivationGroup::Exclusive_Replaceable },
		{ "EAstralAbilityActivationGroup::Exclusive_Blocking", (int64)EAstralAbilityActivationGroup::Exclusive_Blocking },
		{ "EAstralAbilityActivationGroup::MAX", (int64)EAstralAbilityActivationGroup::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	"EAstralAbilityActivationGroup",
	"EAstralAbilityActivationGroup",
	Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup()
{
	if (!Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.InnerSingleton, Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAstralAbilityActivationGroup.InnerSingleton;
}
// End Enum EAstralAbilityActivationGroup

// Begin ScriptStruct FAstralAbilityMontageFailureMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage;
class UScriptStruct* FAstralAbilityMontageFailureMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage, (UObject*)Z_Construct_UPackage__Script_AstralPlague(), TEXT("AstralAbilityMontageFailureMessage"));
	}
	return Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.OuterSingleton;
}
template<> ASTRALPLAGUE_API UScriptStruct* StaticStruct<FAstralAbilityMontageFailureMessage>()
{
	return FAstralAbilityMontageFailureMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Failure reason that can be used to play an animation montage when a failure occurs */" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Failure reason that can be used to play an animation montage when a failure occurs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "AstralAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTags_MetaData[] = {
		{ "Category", "AstralAbilityMontageFailureMessage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// All the reasons why this ability has failed\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All the reasons why this ability has failed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureMontage_MetaData[] = {
		{ "Category", "AstralAbilityMontageFailureMessage" },
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTags;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAstralAbilityMontageFailureMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAbilityMontageFailureMessage, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_FailureTags = { "FailureTags", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAbilityMontageFailureMessage, FailureTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTags_MetaData), NewProp_FailureTags_MetaData) }; // 3352185621
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_FailureMontage = { "FailureMontage", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAstralAbilityMontageFailureMessage, FailureMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureMontage_MetaData), NewProp_FailureMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_FailureTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewProp_FailureMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AstralPlague,
	nullptr,
	&NewStructOps,
	"AstralAbilityMontageFailureMessage",
	Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::PropPointers),
	sizeof(FAstralAbilityMontageFailureMessage),
	alignof(FAstralAbilityMontageFailureMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage()
{
	if (!Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.InnerSingleton, Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage.InnerSingleton;
}
// End ScriptStruct FAstralAbilityMontageFailureMessage

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

// Begin Class UAstralGameplayAbility Function GetAstralCharacterGameplayComponent
struct Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics
{
	struct AstralGameplayAbility_eventGetAstralCharacterGameplayComponent_Parms
	{
		UAstralCharacterGameplayComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Lyra|Ability" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AstralGameplayAbility_eventGetAstralCharacterGameplayComponent_Parms, ReturnValue), Z_Construct_UClass_UAstralCharacterGameplayComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAstralGameplayAbility, nullptr, "GetAstralCharacterGameplayComponent", nullptr, nullptr, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::AstralGameplayAbility_eventGetAstralCharacterGameplayComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::AstralGameplayAbility_eventGetAstralCharacterGameplayComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAstralGameplayAbility::execGetAstralCharacterGameplayComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAstralCharacterGameplayComponent**)Z_Param__Result=P_THIS->GetAstralCharacterGameplayComponent();
	P_NATIVE_END;
}
// End Class UAstralGameplayAbility Function GetAstralCharacterGameplayComponent

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
		{ "GetAstralCharacterGameplayComponent", &UAstralGameplayAbility::execGetAstralCharacterGameplayComponent },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationPolicy_MetaData[] = {
		{ "Category", "Astral|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how this ability is meant to activate.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how this ability is meant to activate." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActivationGroup_MetaData[] = {
		{ "Category", "Astral|Ability Activation" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines the relationship between this ability activating and other abilities activating.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines the relationship between this ability activating and other abilities activating." },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToUserFacingMessages_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to simple error messages\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to simple error messages" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FailureTagToAnimMontage_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Map of failure tags to anim montages that should be played with them\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of failure tags to anim montages that should be played with them" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLogCancelation_MetaData[] = {
		{ "Category", "Advanced" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug.\n" },
#endif
		{ "ModuleRelativePath", "AbilitySystem/AstralGameplayAbility.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, extra information should be logged when this ability is canceled. This is temporary, used for tracking a bug." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActivationGroup_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActivationGroup;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdditionalCosts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalCosts;
	static const UECodeGen_Private::FTextPropertyParams NewProp_FailureTagToUserFacingMessages_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToUserFacingMessages_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToUserFacingMessages;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureTagToAnimMontage_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FailureTagToAnimMontage_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FailureTagToAnimMontage;
	static void NewProp_bLogCancelation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogCancelation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralAbilitySystemComponentFromActorInfo, "GetAstralAbilitySystemComponentFromActorInfo" }, // 643849834
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterFromActorInfo, "GetAstralCharacterFromActorInfo" }, // 1791217519
		{ &Z_Construct_UFunction_UAstralGameplayAbility_GetAstralCharacterGameplayComponent, "GetAstralCharacterGameplayComponent" }, // 76337321
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationPolicy = { "ActivationPolicy", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, ActivationPolicy), Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationPolicy_MetaData), NewProp_ActivationPolicy_MetaData) }; // 3629455750
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationGroup_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationGroup = { "ActivationGroup", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, ActivationGroup), Z_Construct_UEnum_AstralPlague_EAstralAbilityActivationGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActivationGroup_MetaData), NewProp_ActivationGroup_MetaData) }; // 1330867102
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts_Inner = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAstralAbilityCost_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_Inner_MetaData), NewProp_AdditionalCosts_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts = { "AdditionalCosts", nullptr, (EPropertyFlags)0x0124088000010009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, AdditionalCosts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdditionalCosts_MetaData), NewProp_AdditionalCosts_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp = { "FailureTagToUserFacingMessages_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages = { "FailureTagToUserFacingMessages", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, FailureTagToUserFacingMessages), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToUserFacingMessages_MetaData), NewProp_FailureTagToUserFacingMessages_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0104000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp = { "FailureTagToAnimMontage_Key", nullptr, (EPropertyFlags)0x0100000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage = { "FailureTagToAnimMontage", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAstralGameplayAbility, FailureTagToAnimMontage), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FailureTagToAnimMontage_MetaData), NewProp_FailureTagToAnimMontage_MetaData) }; // 1298103297
void Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_bLogCancelation_SetBit(void* Obj)
{
	((UAstralGameplayAbility*)Obj)->bLogCancelation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_bLogCancelation = { "bLogCancelation", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAstralGameplayAbility), &Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_bLogCancelation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLogCancelation_MetaData), NewProp_bLogCancelation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAstralGameplayAbility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationGroup_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_ActivationGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_AdditionalCosts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToUserFacingMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_FailureTagToAnimMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAstralGameplayAbility_Statics::NewProp_bLogCancelation,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAstralAbilityActivationPolicy_StaticEnum, TEXT("EAstralAbilityActivationPolicy"), &Z_Registration_Info_UEnum_EAstralAbilityActivationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3629455750U) },
		{ EAstralAbilityActivationGroup_StaticEnum, TEXT("EAstralAbilityActivationGroup"), &Z_Registration_Info_UEnum_EAstralAbilityActivationGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1330867102U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAstralAbilityMontageFailureMessage::StaticStruct, Z_Construct_UScriptStruct_FAstralAbilityMontageFailureMessage_Statics::NewStructOps, TEXT("AstralAbilityMontageFailureMessage"), &Z_Registration_Info_UScriptStruct_AstralAbilityMontageFailureMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAstralAbilityMontageFailureMessage), 2659600194U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAstralGameplayAbility, UAstralGameplayAbility::StaticClass, TEXT("UAstralGameplayAbility"), &Z_Registration_Info_UClass_UAstralGameplayAbility, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAstralGameplayAbility), 1809758436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_1115933658(TEXT("/Script/AstralPlague"),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AstralPlague_Source_AstralPlague_AbilitySystem_AstralGameplayAbility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
