// Fill out your copyright notice in the Description page of Project Settings.


#include "..\public\LOCAttributeSet.h"
#include "GameplayEffect.h"
#include "..\..\..\Character\Public\LOCCharacter.h"
#include "GameplayEffectExtension.h"

// 이 함수는 이 Attribute를 소유하고 있는 액터가 Gameplay Effect가 AbilitySystem에 적용된 뒤 일어나는 이벤트를 구현할 수 있습니다. 
void ULOCAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	ALOCCharacter* OwnerCharacter = Cast<ALOCCharacter>(GetOwningActor());
	FGameplayTag FullHealthTag = FGameplayTag::RequestGameplayTag(FName("Attributes.FullHealth"));


	if (Data.EvaluatedData.Attribute == GetExperienceAttribute())
	{
		SetExperience(FMath::Clamp(GetExperience(), 0.f, GetMaxExperience()));
	}
	if (Data.EvaluatedData.Attribute == GetHealthAttribute())
	{
		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
		if (GetHealth() >= GetMaxHealth())
		{
			OwnerCharacter->AddLooseGameplayTag(FullHealthTag);
		}
		else
		{
			OwnerCharacter->RemoveLooseGameplayTags(FullHealthTag);
		}
	}
	if (Data.EvaluatedData.Attribute == GetHealthRegenAttribute())
	{
		SetHealthRegen(FMath::Clamp(GetHealthRegen(), 0.f, GetMaxHealthRegen()));
	}
	if (Data.EvaluatedData.Attribute == GetStaminaAttribute())
	{
		SetStamina(FMath::Clamp(GetStamina(), 0.f, GetMaxStamina()));
	}
	if (Data.EvaluatedData.Attribute == GetStaminaRegenAttribute())
	{
		SetStaminaRegen(FMath::Clamp(GetStaminaRegen(), 0.f, GetMaxStaminaRegen()));
	}
	if (Data.EvaluatedData.Attribute == GetManaAttribute())
	{
		SetMana(FMath::Clamp(GetMana(), 0.f, GetMaxMana()));
	}
	if (Data.EvaluatedData.Attribute == GetManaRegenAttribute())
	{
		SetManaRegen(FMath::Clamp(GetManaRegen(), 0.f, GetMaxManaRegen()));
	}
	if (Data.EvaluatedData.Attribute == GetCriticalAttribute())
	{
		SetCritical(FMath::Clamp(GetCritical(), 0.f, GetMaxCritical()));
	}
	if (Data.EvaluatedData.Attribute == GetCriticalProbAttribute())
	{
		SetCriticalProb(FMath::Clamp(GetCriticalProb(), 0.f, GetMaxCriticalProb()));
	}
	if (Data.EvaluatedData.Attribute == GetStrengthAttribute())
	{
		SetStrength(FMath::Clamp(GetStrength(), 0.f, GetMaxStrength()));
	}
	if (Data.EvaluatedData.Attribute == GetEnduranceAttribute())
	{
		SetEndurance(FMath::Clamp(GetEndurance(), 0.f, GetMaxEndurance()));
	}
	if (Data.EvaluatedData.Attribute == GetIntellectAttribute())
	{
		SetIntellect(FMath::Clamp(GetIntellect(), 0.f, GetMaxIntellect()));
	}
	if (Data.EvaluatedData.Attribute == GetSpeedAttribute())
	{
		SetSpeed(FMath::Clamp(GetSpeed(), 0.f, GetMaxSpeed()));
	}
	if (Data.EvaluatedData.Attribute == GetWeaponDamageAttribute())
	{
		SetWeaponDamage(FMath::Clamp(GetWeaponDamage(), 0.f, GetMaxWeaponDamage()));
	}
	if (Data.EvaluatedData.Attribute == GetArmorAttribute())
	{
		SetArmor(FMath::Clamp(GetArmor(), 0.f, GetMaxArmor()));
	}


}
