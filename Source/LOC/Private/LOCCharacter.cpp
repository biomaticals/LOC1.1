// Copyright Epic Games, Inc. All Rights Reserved.

#include "LOCCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"

/** Json */
#include "JsonObjectConverter.h"
#include "Misc/FileHelper.h"

/**  AbilitySystem 컴포넌트와 사용자정의 어트리뷰트세트 추가 */
#include "AbilitySystemComponent.h"
#include "LOCAttributeSet.h"


//////////////////////////////////////////////////////////////////////////
// ALOCCharacter

ALOCCharacter::ALOCCharacter()
{
	GetCapsuleComponent()->SetGenerateOverlapEvents(true);

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller
	

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation


	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	// AbilitySystem 컴포넌트를 추가해줍니다.
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability System Componenet"));
}

////////////////////////////////////////////////////////////////////////////////////
//////////////////////// 이하 Gameplay Ability System 함수 /////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void ALOCCharacter::CancelAbilityWithTags(const FGameplayTagContainer CancelWithTags)
{
	//The Ability System Component has multiple ways of cancelling and activating abilities. Using tags provides a generic means of categorizing different types of abilities without knowing what specific ability is active.
	AbilitySystemComponent->CancelAbilities(&CancelWithTags);
}

void ALOCCharacter::InitializeAbility(TSubclassOf<UGameplayAbility> AbilityToGet, int32 AbilityLevel)
{
	if (AbilitySystemComponent)
	{
		if (HasAuthority() && AbilityToGet)
		{
			AbilitySystemComponent->GiveAbility(FGameplayAbilitySpec(AbilityToGet, AbilityLevel, 0));
		}
		AbilitySystemComponent->InitAbilityActorInfo(this, this);
	}
}

void ALOCCharacter::BeginPlay()
{
	Super::BeginPlay();

	//Initializes the attribute set using a data table.
	if (IsValid(AbilitySystemComponent))
	{
		AttributeSet = AbilitySystemComponent->GetSet<ULOCAttributeSet>();

		//GetGameplayAttributeValueChangeDelegate를 통해 Attribute이 변화하면 내부 On#Property#ChangedInternal을 호출하도록 바인딩합니다.
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetLevelAttribute()).AddUObject(this, &ALOCCharacter::OnLevelChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetExperienceAttribute()).AddUObject(this, &ALOCCharacter::OnExperienceChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxExperienceAttribute()).AddUObject(this, &ALOCCharacter::OnMaxExperienceChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthAttribute()).AddUObject(this, &ALOCCharacter::OnHealthChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthAttribute()).AddUObject(this, &ALOCCharacter::OnMaxHealthChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetHealthRegenAttribute()).AddUObject(this, &ALOCCharacter::OnHealthRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxHealthRegenAttribute()).AddUObject(this, &ALOCCharacter::OnMaxHealthRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetManaAttribute()).AddUObject(this, &ALOCCharacter::OnManaChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxManaAttribute()).AddUObject(this, &ALOCCharacter::OnMaxManaChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetManaRegenAttribute()).AddUObject(this, &ALOCCharacter::OnManaRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxManaRegenAttribute()).AddUObject(this, &ALOCCharacter::OnMaxManaRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetStaminaAttribute()).AddUObject(this, &ALOCCharacter::OnStaminaChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStaminaAttribute()).AddUObject(this, &ALOCCharacter::OnMaxStaminaChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetStaminaRegenAttribute()).AddUObject(this, &ALOCCharacter::OnStaminaRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStaminaRegenAttribute()).AddUObject(this, &ALOCCharacter::OnMaxStaminaRegenChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCriticalAttribute()).AddUObject(this, &ALOCCharacter::OnCriticalChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxCriticalAttribute()).AddUObject(this, &ALOCCharacter::OnMaxCriticalChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetCriticalProbAttribute()).AddUObject(this, &ALOCCharacter::OnCriticalProbChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxCriticalProbAttribute()).AddUObject(this, &ALOCCharacter::OnMaxCriticalProbChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetStrengthAttribute()).AddUObject(this, &ALOCCharacter::OnStrengthChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxStrengthAttribute()).AddUObject(this, &ALOCCharacter::OnMaxStrengthChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetEnduranceAttribute()).AddUObject(this, &ALOCCharacter::OnEnduranceChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxEnduranceAttribute()).AddUObject(this, &ALOCCharacter::OnMaxEnduranceChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetIntellectAttribute()).AddUObject(this, &ALOCCharacter::OnIntellectChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxIntellectAttribute()).AddUObject(this, &ALOCCharacter::OnMaxIntellectChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetSpeedAttribute()).AddUObject(this, &ALOCCharacter::OnSpeedChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxSpeedAttribute()).AddUObject(this, &ALOCCharacter::OnMaxSpeedChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetWeaponDamageAttribute()).AddUObject(this, &ALOCCharacter::OnWeaponDamageChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxWeaponDamageAttribute()).AddUObject(this, &ALOCCharacter::OnMaxWeaponDamageChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetArmorAttribute()).AddUObject(this, &ALOCCharacter::OnArmorChangedInternal);
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(AttributeSet->GetMaxArmorAttribute()).AddUObject(this, &ALOCCharacter::OnMaxArmorChangedInternal);
	}
}

void ALOCCharacter:: SaveAttributeSetToJson()
{
	FLOCAttributeDetailData Data;
	Data.AttributeName = TEXT("Level");
	Data.AttributeValue = GetLevel();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Experience");
	Data.AttributeValue = GetExperience();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxExperience");
	Data.AttributeValue = GetMaxExperience();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Health");
	Data.AttributeValue = GetHealth();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxHealth");
	Data.AttributeValue = GetMaxHealth();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("HealthRegen");
	Data.AttributeValue = GetHealthRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxHealthRegen");
	Data.AttributeValue = GetMaxHealthRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Mana");
	Data.AttributeValue = GetMana();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxMana");
	Data.AttributeValue = GetMaxMana();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("ManaRegen");
	Data.AttributeValue = GetManaRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxManaRegen");
	Data.AttributeValue = GetMaxManaRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Stamina");
	Data.AttributeValue = GetStamina();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxStamina");
	Data.AttributeValue = GetMaxStamina();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("StaminaRegen");
	Data.AttributeValue = GetStaminaRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxStaminaRegen");
	Data.AttributeValue = GetMaxStaminaRegen();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Critical");
	Data.AttributeValue = GetCritical();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxCritical");
	Data.AttributeValue = GetMaxCritical();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("CriticalProb");
	Data.AttributeValue = GetCriticalProb();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxCriticalProb");
	Data.AttributeValue = GetMaxCriticalProb();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Strength");
	Data.AttributeValue = GetStrength();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxStrength");
	Data.AttributeValue = GetMaxStrength();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Endurance");
	Data.AttributeValue = GetEndurance();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxEndurance");
	Data.AttributeValue = GetMaxEndurance();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Intellect");
	Data.AttributeValue = GetIntellect();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxIntellect");
	Data.AttributeValue = GetMaxIntellect();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Speed");
	Data.AttributeValue = GetSpeed();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxSpeed");
	Data.AttributeValue = GetMaxSpeed();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("WeaponDamage");
	Data.AttributeValue = GetWeaponDamage();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxWeaponDamage");
	Data.AttributeValue = GetMaxWeaponDamage();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("Armor");
	Data.AttributeValue = GetArmor();
	AttributeData.Details.Add(Data);
	Data.AttributeName = TEXT("MaxArmor");
	Data.AttributeValue = GetMaxArmor();
	AttributeData.Details.Add(Data);

	
	FString JsonString;
	FJsonObjectConverter::UStructToJsonObjectString(AttributeData, JsonString);
	FFileHelper::SaveStringToFile(*JsonString, *(FPaths::ProjectContentDir() + TEXT("/Json/AttributeSet.json")));

}

void  ALOCCharacter::LoadAttributeSetFromJson()
{
	FString JsonString;
	FFileHelper::LoadFileToString(JsonString, *(FPaths::ProjectContentDir() + TEXT("/Json/AttributeSet.json")));
	TSharedRef<TJsonReader<TCHAR>> JsonReader = TJsonReaderFactory<TCHAR>::Create(JsonString);
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());

	if (FJsonSerializer::Deserialize(JsonReader, JsonObject) && JsonObject.IsValid())
	{
		TArray<TSharedPtr<FJsonValue>> JsonValueArray = JsonObject->GetArrayField(TEXT("details"));
		
		TSharedPtr<FJsonValue> JsonValue;
		TSharedPtr<FJsonObject> JsonValueObject;		
		FLOCAttributeDetailData DetailData;

		
		JsonValue = JsonValueArray[0];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetLevel(DetailData.AttributeValue);

		JsonValue = JsonValueArray[1];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetExperience(DetailData.AttributeValue);

		JsonValue = JsonValueArray[2];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxExperience(DetailData.AttributeValue);

		JsonValue = JsonValueArray[3];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetHealth(DetailData.AttributeValue);

		JsonValue = JsonValueArray[4];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxHealth(DetailData.AttributeValue);

		JsonValue = JsonValueArray[5];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetHealthRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[6];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxHealthRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[7];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMana(DetailData.AttributeValue);

		JsonValue = JsonValueArray[8];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxMana(DetailData.AttributeValue);

		JsonValue = JsonValueArray[9];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetManaRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[10];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxManaRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[11];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetStamina(DetailData.AttributeValue);

		JsonValue = JsonValueArray[12];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxStamina(DetailData.AttributeValue);

		JsonValue = JsonValueArray[13];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetStaminaRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[14];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxStaminaRegen(DetailData.AttributeValue);

		JsonValue = JsonValueArray[15];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetCritical(DetailData.AttributeValue);

		JsonValue = JsonValueArray[16];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxCritical(DetailData.AttributeValue);

		JsonValue = JsonValueArray[17];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetCriticalProb(DetailData.AttributeValue);

		JsonValue = JsonValueArray[18];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxCriticalProb(DetailData.AttributeValue);

		JsonValue = JsonValueArray[19];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetStrength(DetailData.AttributeValue);

		JsonValue = JsonValueArray[20];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxStrength(DetailData.AttributeValue);

		JsonValue = JsonValueArray[21];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetEndurance(DetailData.AttributeValue);

		JsonValue = JsonValueArray[22];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxEndurance(DetailData.AttributeValue);

		JsonValue = JsonValueArray[23];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetIntellect(DetailData.AttributeValue);

		JsonValue = JsonValueArray[24];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxIntellect(DetailData.AttributeValue);

		JsonValue = JsonValueArray[25];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetSpeed(DetailData.AttributeValue);

		JsonValue = JsonValueArray[26];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxSpeed(DetailData.AttributeValue);

		JsonValue = JsonValueArray[27];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetWeaponDamage(DetailData.AttributeValue);

		JsonValue = JsonValueArray[28];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxWeaponDamage(DetailData.AttributeValue);

		JsonValue = JsonValueArray[29];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetArmor(DetailData.AttributeValue);

		JsonValue = JsonValueArray[30];
		JsonValueObject = JsonValue->AsObject();
		DetailData.AttributeValue = JsonValueObject->GetNumberField(TEXT("attributeValue"));
		SetMaxArmor(DetailData.AttributeValue);
	}
}


void ALOCCharacter::OnLevelChangedInternal(const FOnAttributeChangeData& Data)
{
	OnLevelChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnExperienceChangedInternal(const FOnAttributeChangeData& Data)
{
	OnExperienceChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxExperienceChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxExperienceChanged(Data.OldValue, Data.NewValue);
}   

void ALOCCharacter::OnHealthChangedInternal(const FOnAttributeChangeData& Data)
{
	OnHealthChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxHealthChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxHealthChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnHealthRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnHealthRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxHealthRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxHealthRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnManaChangedInternal(const FOnAttributeChangeData& Data)
{
	OnManaChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxManaChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxManaChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnManaRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnManaRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxManaRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxManaRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnStaminaChangedInternal(const FOnAttributeChangeData& Data)
{
	OnStaminaChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxStaminaChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxStaminaChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnStaminaRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnStaminaRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxStaminaRegenChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxStaminaRegenChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnCriticalChangedInternal(const FOnAttributeChangeData& Data)
{
	OnCriticalChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxCriticalChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxCriticalChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnCriticalProbChangedInternal(const FOnAttributeChangeData& Data)
{
	OnCriticalProbChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxCriticalProbChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxCriticalProbChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnStrengthChangedInternal(const FOnAttributeChangeData& Data)
{
	OnStrengthChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxStrengthChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxStrengthChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnEnduranceChangedInternal(const FOnAttributeChangeData& Data)
{
	OnEnduranceChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxEnduranceChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxEnduranceChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnIntellectChangedInternal(const FOnAttributeChangeData& Data)
{
	OnIntellectChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxIntellectChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxIntellectChanged(Data.OldValue, Data.NewValue);	
}

void ALOCCharacter::OnSpeedChangedInternal(const FOnAttributeChangeData& Data)
{
	OnSpeedChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxSpeedChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxSpeedChanged(Data.OldValue, Data.NewValue);
}


void ALOCCharacter::OnWeaponDamageChangedInternal(const FOnAttributeChangeData& Data)
{
	OnWeaponDamageChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxWeaponDamageChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxWeaponDamageChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnArmorChangedInternal(const FOnAttributeChangeData& Data)
{
	OnArmorChanged(Data.OldValue, Data.NewValue);
}

void ALOCCharacter::OnMaxArmorChangedInternal(const FOnAttributeChangeData& Data)
{
	OnMaxArmorChanged(Data.OldValue, Data.NewValue);
}

/** Getter for AttributeSet's Current Value. It will return 0 or -1 if AttributeSet is not valid. */

float ALOCCharacter::GetLevel() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetLevel();
	}

	return -1.0f;
}

float ALOCCharacter::GetExperience() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetExperience();
	}

	return -1.0f;
}

float ALOCCharacter::GetMaxExperience() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxExperience();
	}

	return 0.0f;
}

float ALOCCharacter::GetHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetHealth();
	}

	return -1.0f;
}

float ALOCCharacter::GetMaxHealth() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxHealth();
	}

	return 0.0f;
}

float ALOCCharacter::GetHealthRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetHealthRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxHealthRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxHealthRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetMana() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMana();
	}

	return -1.0f;
}

float ALOCCharacter::GetMaxMana() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxMana();
	}

	return 0.0f;
}

float ALOCCharacter::GetManaRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetManaRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxManaRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxManaRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetStamina() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetStamina();
	}

	return -1.0f;
}

float ALOCCharacter::GetMaxStamina() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxStamina();
	}

	return 0.0f;
}

float ALOCCharacter::GetStaminaRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetStaminaRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxStaminaRegen() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxStaminaRegen();
	}

	return 0.0f;
}

float ALOCCharacter::GetCritical() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetCritical();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxCritical() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxCritical();
	}

	return 0.0f;
}

float ALOCCharacter::GetCriticalProb() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetCriticalProb();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxCriticalProb() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxCriticalProb();
	}

	return 0.0f;
}

float ALOCCharacter::GetStrength() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetStrength();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxStrength() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxStrength();
	}

	return 0.0f;
}


float ALOCCharacter::GetEndurance() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetEndurance();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxEndurance() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxEndurance();
	}

	return 0.0f;
}

float ALOCCharacter::GetIntellect() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetIntellect();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxIntellect() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxIntellect();
	}

	return 0.0f;
}

float ALOCCharacter::GetSpeed() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetSpeed();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxSpeed() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxSpeed();
	}

	return 0.0f;
}


float ALOCCharacter::GetWeaponDamage() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetWeaponDamage();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxWeaponDamage() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxWeaponDamage();
	}

	return 0.0f;
}

float ALOCCharacter::GetArmor() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetArmor();
	}

	return 0.0f;
}

float ALOCCharacter::GetMaxArmor() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->GetMaxArmor();
	}

	return 0.0f;
}

void ALOCCharacter::SetLevel(float NewValue)
{
	if (IsValid(AttributeSet))
	AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetLevelAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetExperience(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetExperienceAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxExperience(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxExperienceAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetHealth(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetHealthAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxHealth(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxHealthAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetHealthRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetHealthRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxHealthRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxHealthRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMana(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetManaAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxMana(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxManaAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetManaRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetManaRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxManaRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxManaRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetStamina(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetStaminaAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxStamina(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxStaminaAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetStaminaRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetStaminaRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxStaminaRegen(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxStaminaRegenAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetCritical(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetCriticalAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxCritical(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxCriticalAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetCriticalProb(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetCriticalProbAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxCriticalProb(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxCriticalProbAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetStrength(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetStrengthAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxStrength(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxStrengthAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetEndurance(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetEnduranceAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxEndurance(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxEnduranceAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetIntellect(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetIntellectAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxIntellect(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxIntellectAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetSpeed(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetSpeedAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxSpeed(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxSpeedAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetWeaponDamage(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetWeaponDamageAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxWeaponDamage(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxWeaponDamageAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetArmor(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetArmorAttribute(), EGameplayModOp::Override, NewValue);
}

void ALOCCharacter::SetMaxArmor(float NewValue)
{
	if (IsValid(AttributeSet))
		AbilitySystemComponent->ApplyModToAttribute(AttributeSet->GetMaxArmorAttribute(), EGameplayModOp::Override, NewValue);
}

//Create an instance of an Ability and add it to the Ability System Component.
void ALOCCharacter::GrantAbility(TSubclassOf<UGameplayAbility> AbilityClass, int32 Level, int32 InputCode)
{
	if (GetLocalRole() == ROLE_Authority && IsValid(AbilitySystemComponent) && IsValid(AbilityClass))
	{
		UGameplayAbility* Ability = AbilityClass->GetDefaultObject<UGameplayAbility>();

		if (IsValid(Ability))
		{
			// create the new ability spec struct. Ability specs contain metadata about the ability, like what level they're set to, as well as a reference to the ability.
			FGameplayAbilitySpec AbilitySpec(
				Ability,
				Level,
				InputCode
			);

			AbilitySystemComponent->GiveAbility(AbilitySpec);
		}
	}
}

void ALOCCharacter::ActivateAbility(int32 InputCode)
{
	if (IsValid(AbilitySystemComponent))
	{
		AbilitySystemComponent->AbilityLocalInputPressed(InputCode);
	}
}

	/** 이상 Gameplay Ability System 함수 */
	////////////////////////////////////////

void ALOCCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	PlayerInputComponent->BindAxis("MoveForward", this, &ALOCCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ALOCCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ALOCCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ALOCCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ALOCCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ALOCCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ALOCCharacter::OnResetVR);

	// 마우스 휠 업에 따라 카메라 붐은 가까워지고 시야각이 캐릭터의 눈 각도에 가까워집니다.
	PlayerInputComponent->BindAction("MouseWheelUp",IE_Pressed,this,&ALOCCharacter::MouseWheelUp);

	// 마우스 휠 다운에 따라 카메라 붐은 멀어지고 시야각이 탑 뷰에 가까워집니다.
	PlayerInputComponent->BindAction("MouseWheelDown", IE_Pressed, this, &ALOCCharacter::MouseWheelDown);
}


void ALOCCharacter::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ALOCCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
	Jump();
}

void ALOCCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
	StopJumping();
}

void ALOCCharacter::MouseWheelUp()
{
}

void ALOCCharacter::MouseWheelDown()
{
}

void ALOCCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ALOCCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ALOCCharacter::MoveForward(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ALOCCharacter::MoveRight(float Value)
{
	if ((Controller != NULL) && (Value != 0.0f))
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}
