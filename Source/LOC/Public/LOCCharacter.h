// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

/** Gameplay Ability System */
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "GameplayEffectTypes.h"

#include "LOCCharacter.generated.h"

USTRUCT(BlueprintType)
struct FLOCAttributeDetailData
{
	GENERATED_BODY();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = JsonData)
		FString AttributeName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = JsonData)
		float AttributeValue;
};

USTRUCT(BlueprintType)
struct FLOCAttributeData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = JsonData)
		TArray<FLOCAttributeDetailData> Details;
};

UCLASS(config = Game)
class ALOCCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

		/** Camera boom positioning the camera behind the character */
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UCameraComponent* FollowCamera;
public:
	ALOCCharacter();

	/** Gameplay Ability System Component */
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Abilities")
		class UAbilitySystemComponent* AbilitySystemComponent;

	/** Struct for save attributeset */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = JsonData)
		FLOCAttributeData AttributeData;

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera)
		float BaseLookUpRate;

	virtual void BeginPlay() override;



	////////////////////////////////////////
	/** 이하 Gameplay Ability System 함수 */
	////////////////////////////////////////

	/** Ability System Interface getter. */
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override
	{
		return AbilitySystemComponent;
	}

	/** Grants an ability at the given level, with an input code used to pick and choose which ability should be triggered. */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void GrantAbility(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level, int32 InputCode);

	/** Activates an ability with a matching input code */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ActivateAbility(int32 InputCode);

	/** Cancels abilities with specific Gameplay Tags applied to them.*/
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void CancelAbilityWithTags(const FGameplayTagContainer CancelWithTags);

	/** Cancels abilities with specific Gameplay Tags and without specific Gameplay Tags */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void CancelAbilityWithWithoutTags(const FGameplayTagContainer WithTags, FGameplayTagContainer WithoutTags);

	/** initialize Ability with level*/
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel);

	/** Initialize Multiple Abilities with level*/
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void InitializeAbilityMulti(TArray<TSubclassOf<UGameplayAbility>> AbilitiesToAcquire, int32 AbilityLevel);

	/** Remove Multiple Abilities with Tag*/
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void RemoveAbilityWithTags(FGameplayTagContainer TagContainer);

	/** Change Ability Level with Tag, which is already acquire or initialized */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ChangeAbilityLevelWithTags(FGameplayTagContainer TagContainer, int32 NewLevel);

	/** Add Loose Gameplay Tag */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void AddLooseGameplayTag(FGameplayTag TagsToAdd);

	/** Remove Loose Gamplay Tag */
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void RemoveLooseGameplayTags(FGameplayTag TagsToRemove);

	/** Apply GameplayEffect To Target Data*/
	UFUNCTION(BlueprintCallable, Category = "Abilities")
		void ApplyGETOTargetData(const FGameplayEffectSpecHandle& GESpec, const FGameplayAbilityTargetDataHandle& TargetData);

	UFUNCTION(BlueprintCallable, Category = Json)
		void SaveAttributeSetToJson();

	UFUNCTION(BlueprintCallable, Category = Json)
		void LoadAttributeSetFromJson();



	/** On#Property#ChangedInternal Function. */
	void OnLevelChangedInternal(const FOnAttributeChangeData& Data);
	void OnExperienceChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxExperienceChangedInternal(const FOnAttributeChangeData& Data);
	void OnHealthChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxHealthChangedInternal(const FOnAttributeChangeData& Data);
	void OnHealthRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxHealthRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnManaChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxManaChangedInternal(const FOnAttributeChangeData& Data);
	void OnManaRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxManaRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnStaminaChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxStaminaChangedInternal(const FOnAttributeChangeData& Data);
	void OnStaminaRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxStaminaRegenChangedInternal(const FOnAttributeChangeData& Data);
	void OnCriticalChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxCriticalChangedInternal(const FOnAttributeChangeData& Data);
	void OnCriticalProbChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxCriticalProbChangedInternal(const FOnAttributeChangeData& Data);
	void OnStrengthChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxStrengthChangedInternal(const FOnAttributeChangeData& Data);
	void OnEnduranceChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxEnduranceChangedInternal(const FOnAttributeChangeData& Data);
	void OnIntellectChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxIntellectChangedInternal(const FOnAttributeChangeData& Data);
	void OnSpeedChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxSpeedChangedInternal(const FOnAttributeChangeData& Data);
	void OnWeaponDamageChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxWeaponDamageChangedInternal(const FOnAttributeChangeData& Data);
	void OnArmorChangedInternal(const FOnAttributeChangeData& Data);
	void OnMaxArmorChangedInternal(const FOnAttributeChangeData& Data);

	/** On"Property"Changed Function */
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

	//블루프린트에서 해당 능력치를 얻어오는 게터 함수입니다.
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

	/** 이상 Gameplay Ability System 함수 */
	////////////////////////////////////////



protected:
	/** AttributeSet을 선언해줍니다.*/
	UPROPERTY()
		const class ULOCAttributeSet* AttributeSet;


	/** Resets HMD orientation in VR. */
	void OnResetVR();

	/** Called for forwards/backward input */
	void MoveForward(float Value);

	/** Called for side to side input */
	void MoveRight(float Value);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	/** Handler for when a touch input begins. */
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);

	/** Handler for when a touch input stops. */
	void TouchStopped(ETouchIndex::Type FingerIndex, FVector Location);

	// 마우스 휠 업 이벤트
	void MouseWheelUp();

	// 마우스 휠 다운 이벤트
	void MouseWheelDown();

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	// End of APawn interface

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

};

