// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/GeneradorCapsulasArma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorCapsulasArma() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasArma_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasArma();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AGeneradorCapsulasArma::StaticRegisterNativesAGeneradorCapsulasArma()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorCapsulasArma_NoRegister()
	{
		return AGeneradorCapsulasArma::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorCapsulasArma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorCapsulasArma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorCapsulasArma_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorCapsulasArma.h" },
		{ "ModuleRelativePath", "GeneradorCapsulasArma.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorCapsulasArma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorCapsulasArma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorCapsulasArma_Statics::ClassParams = {
		&AGeneradorCapsulasArma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorCapsulasArma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorCapsulasArma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorCapsulasArma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorCapsulasArma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorCapsulasArma, 3473498618);
	template<> STARFIGHTER_API UClass* StaticClass<AGeneradorCapsulasArma>()
	{
		return AGeneradorCapsulasArma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorCapsulasArma(Z_Construct_UClass_AGeneradorCapsulasArma, &AGeneradorCapsulasArma::StaticClass, TEXT("/Script/StarFighter"), TEXT("AGeneradorCapsulasArma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorCapsulasArma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
