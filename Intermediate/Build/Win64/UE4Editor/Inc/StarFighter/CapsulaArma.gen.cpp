// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/CapsulaArma.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaArma() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsulaArma_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsulaArma();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ACapsulaArma::StaticRegisterNativesACapsulaArma()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaArma_NoRegister()
	{
		return ACapsulaArma::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaArma_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaArma_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaArma_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulaArma.h" },
		{ "ModuleRelativePath", "CapsulaArma.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaArma_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaArma>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaArma_Statics::ClassParams = {
		&ACapsulaArma::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaArma_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaArma_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaArma()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaArma_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaArma, 1584765553);
	template<> STARFIGHTER_API UClass* StaticClass<ACapsulaArma>()
	{
		return ACapsulaArma::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaArma(Z_Construct_UClass_ACapsulaArma, &ACapsulaArma::StaticClass, TEXT("/Script/StarFighter"), TEXT("ACapsulaArma"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaArma);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
