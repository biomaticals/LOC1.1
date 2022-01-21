#include "GameplayAbilitySystem/GameplayAbility/Public/GAGreystoneMakeWay.h"

UGAGreystoneMakeWay::UGAGreystoneMakeWay()
	:CurrentHitCount{}
	, TotalHitCount{}
	, SkillMontage{}
	, GEforTaget{}
	, GELevelforTaget{}
{																		
	static ConstructorHelpers::FObjectFinder<UAnimMontage> obj(TEXT("/Game/ParagonGreystone/Characters/Heroes/Greystone/Animations/AM_MakeWay.AM_MakeWay"));
	SkillMontage = obj.Object;
}

void UGAGreystoneMakeWay::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
	//ALOCCharacter* Owner = GetCharacterInfo();
	//FGameplayAbilityActivationInfo a;
	//Owner->AbilitySystemComponent->PlayMontage(nullptr,a,SkillMontage,1.0,"none",0.0);
	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}