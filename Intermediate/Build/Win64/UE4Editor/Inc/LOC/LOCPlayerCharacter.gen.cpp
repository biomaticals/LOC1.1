// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Character/Public/LOCPlayerCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLOCPlayerCharacter() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_ALOCPlayerCharacter_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ALOCPlayerCharacter();
	LOC_API UClass* Z_Construct_UClass_ALOCCharacter();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void ALOCPlayerCharacter::StaticRegisterNativesALOCPlayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_ALOCPlayerCharacter_NoRegister()
	{
		return ALOCPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ALOCPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALOCPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALOCCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALOCPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/Public/LOCPlayerCharacter.h" },
		{ "ModuleRelativePath", "Character/Public/LOCPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALOCPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALOCPlayerCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALOCPlayerCharacter_Statics::ClassParams = {
		&ALOCPlayerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALOCPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALOCPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALOCPlayerCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALOCPlayerCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALOCPlayerCharacter, 1939026564);
	template<> LOC_API UClass* StaticClass<ALOCPlayerCharacter>()
	{
		return ALOCPlayerCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALOCPlayerCharacter(Z_Construct_UClass_ALOCPlayerCharacter, &ALOCPlayerCharacter::StaticClass, TEXT("/Script/LOC"), TEXT("ALOCPlayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALOCPlayerCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
