// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/SLMB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLMB() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMB_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMB();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UInterfaceSLMB_NoRegister();
// End Cross Module References
	void ASLMB::StaticRegisterNativesASLMB()
	{
	}
	UClass* Z_Construct_UClass_ASLMB_NoRegister()
	{
		return ASLMB::StaticClass();
	}
	struct Z_Construct_UClass_ASLMB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASLMB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASLMB_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLMB.h" },
		{ "ModuleRelativePath", "SLMB.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASLMB_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterfaceSLMB_NoRegister, (int32)VTABLE_OFFSET(ASLMB, IInterfaceSLMB), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASLMB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASLMB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASLMB_Statics::ClassParams = {
		&ASLMB::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASLMB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASLMB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASLMB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASLMB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASLMB, 2923390711);
	template<> STARFIGHTER_API UClass* StaticClass<ASLMB>()
	{
		return ASLMB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASLMB(Z_Construct_UClass_ASLMB, &ASLMB::StaticClass, TEXT("/Script/StarFighter"), TEXT("ASLMB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASLMB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
