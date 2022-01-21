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

void UGAGreystoneMakeWay::K2_ActivateAbility()
{
	GetCharacterInfo();
}