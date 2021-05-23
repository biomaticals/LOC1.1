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

1.1.1 버전

기존의 일반 공격 3종류의 구조를 개선합니다. 이제 같은 GameplayAbility ; GA 이 아닌 개별의 GA 및 GE를 사용합니다. 부모는 같습니다.

새로운 스킬 "급속충전"을 추가 했습니다. 2.5초에 걸쳐 체력 25를 서서히 회복합니다. 마나 15를 소모하며, 15초의 재사용 대기시간을 갖습니다.

새로운 스킬 "접근금지"를 추가 합니다. 주변의 몬스터에게 0.5초마다 5의 데미지를 입히는 칼의 잔상이 5초동안 나타납니다. 마나 25를 소모하며, 25초의 재사용 대기시간을 갖습니다.

이제 모든 GA는 기본 효과인 GameplayEffect ; GE 와 소모량을 정의하는 GE_Cost, 재사용 대기시간을 정의하는 GE_Cooldown을 갖습니다.

이는 나중에 "회복량"에 투자하거나, "소모량"에 투자하는 등 자신의 취향에 따라 스킬을 구성있게 됩니다.

마치 롤에서의 공속원딜, 공격력원딜, 치명타원딜처럼 자신의 아이덴티티를 표현할 수 있습니다.

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
