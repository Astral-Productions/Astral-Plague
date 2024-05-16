// Copyright Astral Productions 2024


#include "AstralAnimInstance.h"
// Copyright Epic Games, Inc. All Rights Reserved.

#include "AstralAnimInstance.h"
#include "AbilitySystemGlobals.h"
#include "AstralPlague/Character/AstralCharacterMovementComponent.h"
#include "AstralPlague/Character/AstralPlagueCharacter.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif



#include UE_INLINE_GENERATED_CPP_BY_NAME(AstralAnimInstance)


UAstralAnimInstance::UAstralAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UAstralAnimInstance::InitializeWithAbilitySystem(UAbilitySystemComponent* ASC)
{
	check(ASC);

	GameplayTagPropertyMap.Initialize(this, ASC);
}

#if WITH_EDITOR
EDataValidationResult UAstralAnimInstance::IsDataValid(FDataValidationContext& Context) const
{
	Super::IsDataValid(Context);

	GameplayTagPropertyMap.IsDataValid(this, Context);

	return ((Context.GetNumErrors() > 0) ? EDataValidationResult::Invalid : EDataValidationResult::Valid);

	
}
#endif // WITH_EDITOR

void UAstralAnimInstance::NativeInitializeAnimation()
{
	Super::NativeInitializeAnimation();

	if (AActor* OwningActor = GetOwningActor())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(OwningActor))
		{
			InitializeWithAbilitySystem(ASC);
		}
	}
}

void UAstralAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	const AAstralPlagueCharacter* Character = Cast<AAstralPlagueCharacter>(GetOwningActor());
	if (!Character)
	{
		return;
	}

	UAstralCharacterMovementComponent* CharMoveComp = CastChecked<UAstralCharacterMovementComponent>(Character->GetCharacterMovement());
	const FAstralCharacterGroundInfo& GroundInfo = CharMoveComp->GetGroundInfo();
	GroundDistance = GroundInfo.GroundDistance;
}

