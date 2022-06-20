// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/GeneradorCapsulasVelocidad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeneradorCapsulasVelocidad() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasVelocidad_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulasVelocidad();
	STARFIGHTER_API UClass* Z_Construct_UClass_AGeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AGeneradorCapsulasVelocidad::StaticRegisterNativesAGeneradorCapsulasVelocidad()
	{
	}
	UClass* Z_Construct_UClass_AGeneradorCapsulasVelocidad_NoRegister()
	{
		return AGeneradorCapsulasVelocidad::StaticClass();
	}
	struct Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GeneradorCapsulasVelocidad.h" },
		{ "ModuleRelativePath", "GeneradorCapsulasVelocidad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeneradorCapsulasVelocidad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::ClassParams = {
		&AGeneradorCapsulasVelocidad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeneradorCapsulasVelocidad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeneradorCapsulasVelocidad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeneradorCapsulasVelocidad, 616792375);
	template<> STARFIGHTER_API UClass* StaticClass<AGeneradorCapsulasVelocidad>()
	{
		return AGeneradorCapsulasVelocidad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeneradorCapsulasVelocidad(Z_Construct_UClass_AGeneradorCapsulasVelocidad, &AGeneradorCapsulasVelocidad::StaticClass, TEXT("/Script/StarFighter"), TEXT("AGeneradorCapsulasVelocidad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeneradorCapsulasVelocidad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
