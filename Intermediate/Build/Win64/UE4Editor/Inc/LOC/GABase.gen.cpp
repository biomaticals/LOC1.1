// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/GameplayAbilitySystem/GameplayAbility/Public/GABase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGABase() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_UGABase_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UGABase();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_LOC();
	LOC_API UClass* Z_Construct_UClass_ALOCCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGABase::execGetCharacterInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALOCCharacter**)Z_Param__Result=P_THIS->GetCharacterInfo();
		P_NATIVE_END;
	}
	void UGABase::StaticRegisterNativesUGABase()
	{
		UClass* Class = UGABase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCharacterInfo", &UGABase::execGetCharacterInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics
	{
		struct GABase_eventGetCharacterInfo_Parms
		{
			ALOCCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GABase_eventGetCharacterInfo_Parms, ReturnValue), Z_Construct_UClass_ALOCCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GABase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGABase, nullptr, "GetCharacterInfo", nullptr, nullptr, sizeof(GABase_eventGetCharacterInfo_Parms), Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGABase_GetCharacterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGABase_GetCharacterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGABase_NoRegister()
	{
		return UGABase::StaticClass();
	}
	struct Z_Construct_UClass_UGABase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGABase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGABase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGABase_GetCharacterInfo, "GetCharacterInfo" }, // 3375505782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGABase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayAbilitySystem/GameplayAbility/Public/GABase.h" },
		{ "ModuleRelativePath", "GameplayAbilitySystem/GameplayAbility/Public/GABase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGABase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGABase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGABase_Statics::ClassParams = {
		&UGABase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGABase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGABase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGABase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGABase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGABase, 4176687981);
	template<> LOC_API UClass* StaticClass<UGABase>()
	{
		return UGABase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGABase(Z_Construct_UClass_UGABase, &UGABase::StaticClass, TEXT("/Script/LOC"), TEXT("UGABase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGABase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
