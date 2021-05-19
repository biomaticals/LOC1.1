// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LOC/Public/MeleeHitboxData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeleeHitboxData() {}
// Cross Module References
	LOC_API UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitSphereDefinition();
	UPackage* Z_Construct_UPackage__Script_LOC();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LOC_API UClass* Z_Construct_UClass_UMeleeHitboxData_NoRegister();
	LOC_API UClass* Z_Construct_UClass_UMeleeHitboxData();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FMeleeHitSphereDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LOC_API uint32 Get_Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition, Z_Construct_UPackage__Script_LOC(), TEXT("MeleeHitSphereDefinition"), sizeof(FMeleeHitSphereDefinition), Get_Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Hash());
	}
	return Singleton;
}
template<> LOC_API UScriptStruct* StaticStruct<FMeleeHitSphereDefinition>()
{
	return FMeleeHitSphereDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMeleeHitSphereDefinition(FMeleeHitSphereDefinition::StaticStruct, TEXT("/Script/LOC"), TEXT("MeleeHitSphereDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_LOC_StaticRegisterNativesFMeleeHitSphereDefinition
{
	FScriptStruct_LOC_StaticRegisterNativesFMeleeHitSphereDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MeleeHitSphereDefinition")),new UScriptStruct::TCppStructOps<FMeleeHitSphereDefinition>);
	}
} ScriptStruct_LOC_StaticRegisterNativesFMeleeHitSphereDefinition;
	struct Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Nickname_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Nickname;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeleeHitSphereDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Nickname_MetaData[] = {
		{ "Category", "MeleeHitSphereDefinition" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Nickname = { "Nickname", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitSphereDefinition, Nickname), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Nickname_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Nickname_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "MeleeHitSphereDefinition" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitSphereDefinition, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "MeleeHitSphereDefinition" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMeleeHitSphereDefinition, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Nickname,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::NewProp_Radius,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
		nullptr,
		&NewStructOps,
		"MeleeHitSphereDefinition",
		sizeof(FMeleeHitSphereDefinition),
		alignof(FMeleeHitSphereDefinition),
		Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMeleeHitSphereDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LOC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MeleeHitSphereDefinition"), sizeof(FMeleeHitSphereDefinition), Get_Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMeleeHitSphereDefinition_Hash() { return 262574546U; }
	DEFINE_FUNCTION(UMeleeHitboxData::execGetMeleeHitSpheres)
	{
		P_GET_TARRAY(int32,Z_Param_indexes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMeleeHitSphereDefinition>*)Z_Param__Result=P_THIS->GetMeleeHitSpheres(Z_Param_indexes);
		P_NATIVE_END;
	}
	void UMeleeHitboxData::StaticRegisterNativesUMeleeHitboxData()
	{
		UClass* Class = UMeleeHitboxData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMeleeHitSpheres", &UMeleeHitboxData::execGetMeleeHitSpheres },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics
	{
		struct MeleeHitboxData_eventGetMeleeHitSpheres_Parms
		{
			TArray<int32> indexes;
			TArray<FMeleeHitSphereDefinition> ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_indexes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_indexes_Inner = { "indexes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_indexes = { "indexes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeHitboxData_eventGetMeleeHitSpheres_Parms, indexes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeleeHitSphereDefinition, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MeleeHitboxData_eventGetMeleeHitSpheres_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_indexes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_indexes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeleeHitboxData, nullptr, "GetMeleeHitSpheres", nullptr, nullptr, sizeof(MeleeHitboxData_eventGetMeleeHitSpheres_Parms), Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMeleeHitboxData_NoRegister()
	{
		return UMeleeHitboxData::StaticClass();
	}
	struct Z_Construct_UClass_UMeleeHitboxData_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeHitSpheres_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHitSpheres_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeleeHitSpheres;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeleeHitboxData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_LOC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeleeHitboxData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeleeHitboxData_GetMeleeHitSpheres, "GetMeleeHitSpheres" }, // 4029721434
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeHitboxData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MeleeHitboxData.h" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres_Inner = { "MeleeHitSpheres", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMeleeHitSphereDefinition, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres_MetaData[] = {
		{ "Category", "MeleeHitboxData" },
		{ "ModuleRelativePath", "Public/MeleeHitboxData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres = { "MeleeHitSpheres", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMeleeHitboxData, MeleeHitSpheres), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeleeHitboxData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeleeHitboxData_Statics::NewProp_MeleeHitSpheres,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeleeHitboxData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeleeHitboxData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMeleeHitboxData_Statics::ClassParams = {
		&UMeleeHitboxData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeleeHitboxData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitboxData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMeleeHitboxData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeleeHitboxData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeleeHitboxData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMeleeHitboxData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMeleeHitboxData, 1086507910);
	template<> LOC_API UClass* StaticClass<UMeleeHitboxData>()
	{
		return UMeleeHitboxData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMeleeHitboxData(Z_Construct_UClass_UMeleeHitboxData, &UMeleeHitboxData::StaticClass, TEXT("/Script/LOC"), TEXT("UMeleeHitboxData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeleeHitboxData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
