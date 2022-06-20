// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/GeneradorCapsulasVida.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorCapsulasVida() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasVida_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasVida();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AGeneradorCapsulasVida::StaticRegisterNativesAGeneradorCapsulasVida()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorCapsulasVida_NoRegister()
	{
		return AGeneradorCapsulasVida::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorCapsulasVida_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorCapsulasVida_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorCapsulasVida_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorCapsulasVida.h" },
		{ "ModuleRelativePath", "GeneradorCapsulasVida.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorCapsulasVida_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorCapsulasVida>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorCapsulasVida_Statics::ClassParams = {
		&AGeneradorCapsulasVida::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorCapsulasVida_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorCapsulasVida_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorCapsulasVida()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorCapsulasVida_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorCapsulasVida, 2020205865);
	template<> STARFIGHTER_API UClass* StaticClass<AGeneradorCapsulasVida>()
	{
		return AGeneradorCapsulasVida::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorCapsulasVida(Z_Construct_UClass_AGeneradorCapsulasVida, &AGeneradorCapsulasVida::StaticClass, TEXT("/Script/StarFighter"), TEXT("AGeneradorCapsulasVida"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorCapsulasVida);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
