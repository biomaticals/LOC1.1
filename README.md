# LOC1.1 

이 리포지터리는 저의 언리얼 엔진 4 기반의 게임 ; 격변의 땅을 위해 만들었습니다. ( LOC1.0은 프라이빗 입니다 )

비록 다른 사람은 게임을 대충 여길 수 있고, 이 코드들이 뛰어난 스킬들을 갖고 있진 않지만 저는 열렬히 애정합니다. 제 첫번째 프로젝트이기 때문입니다.

그 이유로, 누구든지 볼 수 있지만 이 코드 일부분을 복제하거나 수정해서는 안됩니다. 자칫 의도치 않은 충돌을 일으킬 수 있습니다.

더 좋은 코드를 위한 도움은 언제든지 환영합니다. 감사합니다.

# LOC1.1 

This repositery is made for my game based on Unreal Engine 4 ; Land Of Cataclysm. ( LOC1.0 is private )

Although you can take the game roughly and these codes have no such of high level of skills, I have strong passion. Because this is my first project.

For the reason, anyone can see this but cannot duplicate or modify any part of this code. It may occur unintended crash.

It would be really nice to give me a help for better codes anytime. Thakns.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

1.1.1 Ver - 2종의 신규 스킬과 스킬 레벨 커브테이블

기존의 일반 공격 3종류의 구조를 개선합니다. 이제 같은 GameplayAbility ; GA 이 아닌 개별의 GA 및 GE를 사용합니다. 부모는 같습니다.

새로운 스킬 "급속충전"을 추가 했습니다. 2.5초에 걸쳐 체력 25를 서서히 회복합니다. 마나 15를 소모하며, 15초의 재사용 대기시간을 갖습니다.

새로운 스킬 "접근금지"를 추가 합니다. 주변의 몬스터에게 0.5초마다 5의 데미지를 입히는 칼의 잔상이 5초동안 나타납니다. 마나 25를 소모하며, 25초의 재사용 대기시간을 갖습니다.

이제 모든 GA는 기본 효과인 GameplayEffect ; GE 와 소모량을 정의하는 GE_Cost, 재사용 대기시간을 정의하는 GE_Cooldown을 갖습니다.

이는 나중에 "회복량"에 투자하거나, "소모량"에 투자하는 등 자신의 취향에 따라 스킬을 구성있게 됩니다.

마치 롤에서의 공속원딜, 공격력원딜, 치명타원딜처럼 자신의 아이덴티티를 표현할 수 있습니다.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

1.1.2 Ver - 7개의 신규 편의성 함수

GameplayAbilitySysem 관련 신규 함수

CancelAbilityWithWithoutTags, InitializeAbilityMulti, RemoveAbilitWithTags, ChangeAbilityLevelWithTags, AddLooseGameplayTag, RemoveLooseGameplayTags, ApplyGEToTargetData 를 추가합니다.

플러그인 내부 함수에 비슷한 기능을 하는 함수가 이미 존재하나, 그 함수의 인자를 넣는 과정이 꽤 까다롭습니다.

또한 좀 더 간결하고 명시적인 함수들을 만들어서 편의성을 개선합니다.
 
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

1.1.3 Ver - 태그 부여

PostGameplayEffectExecute의 역할 추가

각 Attribute의 값이 변화하기 직전에 이 함수가 불리웁니다. 변화하는 값에 의거해 GameplayTag를 Grant 합니다. 

게임이 시작하며 캐릭터가 스폰하여 컨트롤러가 빙의한 이후에 저장된 Json 파일로부터 Attribute 값들을 불러옵니다. 

이 직후 불러온 Attribute 값들을 기반으로 GameplayTag를 Grant 하기 위해 함수 TryToGrantTags를 추가합니다.

우선, 현재체력이 최대체력과 같다면 ( 즉, 체력이 가득 찼다면 ) FullHealth 태그를 부여합니다.

이후 체력이 일정량 이하일 때 분노 태그, 스태미너가 0일 때 탈진 태그를 붙히는 것은 위의 PostGameplayEffectExecute와 TryToGrantTags에서 이뤄집니다.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





