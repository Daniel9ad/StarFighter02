// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/SLMBAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLMBAdapter() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMBAdapter_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMBAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UInterfaceSLMB_NoRegister();
// End Cross Module References
	void ASLMBAdapter::StaticRegisterNativesASLMBAdapter()
	{
	}
	UClass* Z_Construct_UClass_ASLMBAdapter_NoRegister()
	{
		return ASLMBAdapter::StaticClass();
	}
	struct Z_Construct_UClass_ASLMBAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASLMBAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASLMBAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLMBAdapter.h" },
		{ "ModuleRelativePath", "SLMBAdapter.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASLMBAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceSLMB_NoRegister, (int32)VTABLE_OFFSET(ASLMBAdapter, IInterfaceSLMB), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASLMBAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASLMBAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASLMBAdapter_Statics::ClassParams = {
		&ASLMBAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASLMBAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASLMBAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASLMBAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASLMBAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASLMBAdapter, 2636563616);
	template<> STARFIGHTER_API UClass* StaticClass<ASLMBAdapter>()
	{
		return ASLMBAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASLMBAdapter(Z_Construct_UClass_ASLMBAdapter, &ASLMBAdapter::StaticClass, TEXT("/Script/StarFighter"), TEXT("ASLMBAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASLMBAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
