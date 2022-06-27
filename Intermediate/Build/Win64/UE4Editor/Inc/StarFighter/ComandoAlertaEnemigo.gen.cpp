// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/ComandoAlertaEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComandoAlertaEnemigo() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AComandoAlertaEnemigo_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AComandoAlertaEnemigo();
	STARFIGHTER_API UClass* Z_Construct_UClass_APublisher();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AComandoAlertaEnemigo::StaticRegisterNativesAComandoAlertaEnemigo()
	{
	}
	UClass* Z_Construct_UClass_AComandoAlertaEnemigo_NoRegister()
	{
		return AComandoAlertaEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AComandoAlertaEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AComandoAlertaEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APublisher,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AComandoAlertaEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ComandoAlertaEnemigo.h" },
		{ "ModuleRelativePath", "ComandoAlertaEnemigo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AComandoAlertaEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AComandoAlertaEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AComandoAlertaEnemigo_Statics::ClassParams = {
		&AComandoAlertaEnemigo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AComandoAlertaEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AComandoAlertaEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AComandoAlertaEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AComandoAlertaEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AComandoAlertaEnemigo, 2433372631);
	template<> STARFIGHTER_API UClass* StaticClass<AComandoAlertaEnemigo>()
	{
		return AComandoAlertaEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AComandoAlertaEnemigo(Z_Construct_UClass_AComandoAlertaEnemigo, &AComandoAlertaEnemigo::StaticClass, TEXT("/Script/StarFighter"), TEXT("AComandoAlertaEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AComandoAlertaEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
