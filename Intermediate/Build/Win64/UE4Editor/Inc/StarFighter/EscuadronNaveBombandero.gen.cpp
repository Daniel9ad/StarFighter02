// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EscuadronNaveBombandero.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronNaveBombandero() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNaveBombandero_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNaveBombandero();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEscuadronNaveBombandero::StaticRegisterNativesAEscuadronNaveBombandero()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronNaveBombandero_NoRegister()
	{
		return AEscuadronNaveBombandero::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronNaveBombandero_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronNaveBombandero_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronNaveBombandero_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronNaveBombandero.h" },
		{ "ModuleRelativePath", "EscuadronNaveBombandero.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronNaveBombandero_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronNaveBombandero>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronNaveBombandero_Statics::ClassParams = {
		&AEscuadronNaveBombandero::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronNaveBombandero_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronNaveBombandero_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronNaveBombandero()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronNaveBombandero_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronNaveBombandero, 2316605168);
	template<> STARFIGHTER_API UClass* StaticClass<AEscuadronNaveBombandero>()
	{
		return AEscuadronNaveBombandero::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronNaveBombandero(Z_Construct_UClass_AEscuadronNaveBombandero, &AEscuadronNaveBombandero::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEscuadronNaveBombandero"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronNaveBombandero);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
