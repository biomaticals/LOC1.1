#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySystem/AttributeSet/Public/LOCAttributeSet.h"
#include "LOCCharacter.generated.h"

/*
// LOC에서 사용되는 모든 캐릭터들의 최상위 클래스
*/
UCLASS(config = Game)
class ALOCCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	ALOCCharacter();
	virtual void BeginPlay() override;

	FORCEINLINE virtual class UAbilitySystemComponent* GetAbilitySystemComponent() const { return AbilitySystemComponent; }

	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GrantAbility(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level, int32 InputCode);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ActivateAbility(int32 InputCode);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void CancelAbilityWithTags(const FGameplayTagContainer CancelWithTags);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void CancelAbilityWithWithoutTags(const FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void AddLooseGameplayTag(FGameplayTag TagsToAdd);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void RemoveLooseGameplayTags(FGameplayTag TagsToRemove);

	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ApplyGEToTargetData(const FGameplayEffectSpecHandle& GESpec, const FGameplayAbilityTargetDataHandle& TargetData);

	UFUNCTION(BlueprintCallable, Category = Json)
		void SaveAttributeSetToJson();

	UFUNCTION(BlueprintCallable, Category = Json)
		void LoadAttributeSetFromJson();

	/** On##Property##ChangedInternal */

#define GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(PropertyName) \
	FORCEINLINE void On##PropertyName##ChangedInternal(const FOnAttributeChangeData& Data) \
	{ \
		return On##PropertyName##Changed(Data.OldValue, Data.NewValue); \
	};

	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Level);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Experience);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxExperience);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Health);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxHealth);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(HealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxHealthRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Mana);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxMana);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(ManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxManaRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Stamina);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxStamina);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(StaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxStaminaRegen);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Critical);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxCritical);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(CriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxCriticalProb);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Strength);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxStrength);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Endurance);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxEndurance);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Intellect);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxIntellect);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Speed);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxSpeed);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(WeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxWeaponDamage);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(Armor);
	GAMEPLAYATTRIBUTE_VALUE_CHANGED_INTERNAL(MaxArmor);
	

	/** On"Property"Changed */
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnLevelChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnExperienceChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxExperienceChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnHealthChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxHealthChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnHealthRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxHealthRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnManaChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxManaChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnManaRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxManaRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnStaminaChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxStaminaChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnStaminaRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxStaminaRegenChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnCriticalChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxCriticalChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnCriticalProbChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxCriticalProbChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnStrengthChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxStrengthChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnEnduranceChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxEnduranceChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnIntellectChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxIntellectChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnSpeedChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxSpeedChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnWeaponDamageChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxWeaponDamageChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnArmorChanged(float oldValue, float newValue);
	UFUNCTION(BlueprintImplementableEvent, Category = "Abilities|Attributes")
		void OnMaxArmorChanged(float oldValue, float newValue);

	// Get"Property", 블루프린트용
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetLevel() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetExperience() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxExperience() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetHealth() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxHealth() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetHealthRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxHealthRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMana() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxMana() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetManaRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxManaRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetStamina() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxStamina() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetStaminaRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxStaminaRegen() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetCritical() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxCritical() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetCriticalProb() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxCriticalProb() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetStrength() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxStrength() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetEndurance() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxEndurance() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetIntellect() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxIntellect() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetSpeed() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxSpeed() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetWeaponDamage() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxWeaponDamage() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetArmor() const;
	UFUNCTION(BlueprintPure, Category = "Abilities|Attributes")
		float GetMaxArmor() const;

	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetLevel(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetExperience(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxExperience(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetHealth(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxHealth(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetHealthRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxHealthRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMana(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxMana(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetManaRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxManaRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetStamina(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxStamina(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetStaminaRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxStaminaRegen(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetCritical(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxCritical(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetCriticalProb(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxCriticalProb(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetStrength(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxStrength(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetEndurance(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxEndurance(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetIntellect(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxIntellect(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetSpeed(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxSpeed(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetWeaponDamage(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxWeaponDamage(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetArmor(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "Abilities|Attributes")
		void SetMaxArmor(float NewValue);

protected:
	UPROPERTY()
		const class ULOCAttributeSet* AttributeSet;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities")
		class UAbilitySystemComponent* AbilitySystemComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = JsonData)
		FLOCAttributeData AttributeData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void OnResetVR();

	void MoveForward(float Value);

	void MoveRight(float Value);

	void TurnAtRate(float Rate);

	void LookUpAtRate(float Rate);

	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	void MouseWheelUp();

	void MouseWheelDown();

};

