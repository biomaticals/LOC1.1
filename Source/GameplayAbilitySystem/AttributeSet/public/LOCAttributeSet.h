#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "LOCAttributeSet.generated.h"

USTRUCT(BlueprintType)
struct FLOCAttributeDetailData
{
	GENERATED_BODY();

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AttributeData)
		FString AttributeName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AttributeData)
		float AttributeValue;
};

USTRUCT(BlueprintType)
struct FLOCAttributeData
{
	GENERATED_BODY()
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AttributeData)
		TArray<FLOCAttributeDetailData> Details;
};

UCLASS()
class LOC_API ULOCAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:

	void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;

	/* ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Level;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Level);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Level);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Level);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Level);

	/* ����ġ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Experience;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Experience);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Experience);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Experience);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Experience);

	/* �ִ� ����ġ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxExperience;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxExperience);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxExperience);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxExperience);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxExperience);

	/* ü�� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Health;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Health);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Health);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Health);

	/* �ִ� ü�� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxHealth;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealth);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxHealth);

	/* ü�� ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData HealthRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(HealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(HealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(HealthRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, HealthRegen);

	/* �ִ� ü�� ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxHealthRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxHealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxHealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxHealthRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxHealthRegen);

	/* ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Mana;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Mana);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Mana);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Mana);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Mana);

	/* �ִ� ���� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxMana;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxMana);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxMana);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxMana);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxMana);

	/* ���� ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData ManaRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(ManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(ManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(ManaRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, ManaRegen);

	/* �ִ� ���� ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxManaRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxManaRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxManaRegen);
	
	/* ������ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Stamina;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Stamina);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Stamina);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Stamina);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Stamina);

	/* �ִ� ������ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxStamina;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxStamina);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxStamina);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxStamina);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxStamina);

	/* ������ ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData StaminaRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(StaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(StaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(StaminaRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, StaminaRegen);

	/* �ִ� ������ ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxStaminaRegen;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxStaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxStaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxStaminaRegen);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxStaminaRegen);
	
	/* ġ��Ÿ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Critical;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Critical);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Critical);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Critical);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Critical);

	/* �ִ� ġ��Ÿ */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxCritical;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxCritical);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxCritical);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxCritical);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxCritical);

	/* ġ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData CriticalProb;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(CriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(CriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(CriticalProb);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, CriticalProb);

	/* �ִ� ġ��� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxCriticalProb;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxCriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxCriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxCriticalProb);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxCriticalProb);

	/* �� ( MeleeAttack �� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Strength;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Strength);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Strength);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Strength);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Strength);

	/* �ִ� �� ( MeleeAttack �� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxStrength;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxStrength);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxStrength);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxStrength);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxStrength);

	/* �γ� ( ����� MeleeAttack �� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Endurance;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Endurance);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Endurance);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Endurance);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Endurance);

	/* �ִ� �γ� ( ����� MeleeAttack �� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxEndurance;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxEndurance);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxEndurance);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxEndurance);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxEndurance);

	/* ���� ( ���Ÿ� ���� ���ݿ� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Intellect;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Intellect);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Intellect);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Intellect);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Intellect);

	/* �ִ� ���� ( ����� MeleeAttack �� ���� ) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxIntellect;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxIntellect);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxIntellect);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxIntellect);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxIntellect);
	
	/* �̵� �ӵ� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Speed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Speed);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Speed);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Speed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Speed);

	/* �ִ� �̵� �ӵ� */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxSpeed;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxSpeed);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxSpeed);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxSpeed);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxSpeed);

	/* ���� ���ݷ�  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData WeaponDamage;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(WeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(WeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(WeaponDamage);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, WeaponDamage);

	/* �ִ� ���� ���ݷ�  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxWeaponDamage;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxWeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxWeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxWeaponDamage);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxWeaponDamage);

	/* ����  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData Armor;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(Armor);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(Armor);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(Armor);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, Armor);

	/* �ִ� ����  */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Abilities|Attributes")
		FGameplayAttributeData MaxArmor;
	GAMEPLAYATTRIBUTE_VALUE_GETTER(MaxArmor);
	GAMEPLAYATTRIBUTE_VALUE_SETTER(MaxArmor);
	GAMEPLAYATTRIBUTE_VALUE_INITTER(MaxArmor);
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ULOCAttributeSet, MaxArmor);

};
