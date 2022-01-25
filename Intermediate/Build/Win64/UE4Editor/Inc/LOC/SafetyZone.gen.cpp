// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Zone/Public/SafetyZone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafetyZone() {}
// Cross Module References
	LOC_API UClass* Z_Construct_UClass_ASafetyZone_NoRegister();
	LOC_API UClass* Z_Construct_UClass_ASafetyZone();
	LOC_API UClass* Z_Construct_UClass_AZone();
	UPackage* Z_Construct_UPackage__Script_LOC();
// End Cross Module References
	void ASafetyZone::StaticRegisterNativesASafetyZone()
	{
	}
	UClass* Z_Construct_UClass_ASafetyZone_NoRegister()
	{
		return ASafetyZone::StaticClass();
	}
	struct Z_Construct_UClass_ASafetyZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASafetyZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AZone,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASafetyZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Zone/Public/SafetyZone.h" },
		{ "ModuleRelativePath", "Zone/Public/SafetyZone.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASafetyZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASafetyZone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASafetyZone_Statics::ClassParams = {
		&ASafetyZone::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ASafetyZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASafetyZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASafetyZone()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASafetyZone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASafetyZone, 1063392971);
	template<> LOC_API UClass* StaticClass<ASafetyZone>()
	{
		return ASafetyZone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASafetyZone(Z_Construct_UClass_ASafetyZone, &ASafetyZone::StaticClass, TEXT("/Script/LOC"), TEXT("ASafetyZone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASafetyZone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
