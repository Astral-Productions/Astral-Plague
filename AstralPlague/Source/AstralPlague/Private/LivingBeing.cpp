// Fill out your copyright notice in the Description page of Project Settings.


#include "LivingBeing.h"
#include "AbilitySystemComponent.h"
#include "DefaultAttributeSet.h"

// Sets default values
ALivingBeing::ALivingBeing()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
}

// Called when the game starts or when spawned
void ALivingBeing::BeginPlay()
{
	Super::BeginPlay();

	if(IsValid(AbilitySystemComponent))
	{
		DefaultAttributes = AbilitySystemComponent->GetSet<UDefaultAttributeSet>();
	}
	
}

// Called every frame
void ALivingBeing::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ALivingBeing::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

