// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGASelfCastBase() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGASelfCastBase_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGASelfCastBase();
	LOC_API UClass* Z_Construct_UClass_UGABase();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void UGASelfCastBase::StaticRegisterNativesUGASelfCastBase()
	{
	}
	UClass* Z_Construct_UClass_UGASelfCastBase_NoRegister()
	{
		return UGASelfCastBase::StaticClass();
	}
	struct Z_Construct_UClass_UGASelfCastBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGASelfCastBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGABase,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGASelfCastBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * ?\xda\xbd\xc5\xbf??? ?????\xcf\xb4? GameplayAbility?? ???? \xc5\xac???? \n */" },
		{ "IncludePath", "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GASelfCastBase.h" },
		{ "ToolTip", "?\xda\xbd\xc5\xbf??? ?????\xcf\xb4? GameplayAbility?? ???? \xc5\xac????" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGASelfCastBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGASelfCastBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGASelfCastBase_Statics::ClassParams = {
		&UGASelfCastBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGASelfCastBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGASelfCastBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGASelfCastBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGASelfCastBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGASelfCastBase, 359580246);
	template<> LOC_API UClass* StaticClass<UGASelfCastBase>()
	{
		return UGASelfCastBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGASelfCastBase(Z_Construct_UClass_UGASelfCastBase, &UGASelfCastBase::StaticClass, TEXT("/Script/LOC"), TEXT("UGASelfCastBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGASelfCastBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
