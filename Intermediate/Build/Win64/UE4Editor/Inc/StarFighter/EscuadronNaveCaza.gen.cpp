// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EscuadronNaveCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronNaveCaza() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNaveCaza_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNaveCaza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UBuilderEscuadron_NoRegister();
// End Cross Module References
	void AEscuadronNaveCaza::StaticRegisterNativesAEscuadronNaveCaza()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronNaveCaza_NoRegister()
	{
		return AEscuadronNaveCaza::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronNaveCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronNaveCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronNaveCaza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronNaveCaza.h" },
		{ "ModuleRelativePath", "EscuadronNaveCaza.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEscuadronNaveCaza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilderEscuadron_NoRegister, (int32)VTABLE_OFFSET(AEscuadronNaveCaza, IBuilderEscuadron), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronNaveCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronNaveCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronNaveCaza_Statics::ClassParams = {
		&AEscuadronNaveCaza::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronNaveCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronNaveCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronNaveCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronNaveCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronNaveCaza, 1559146103);
	template<> STARFIGHTER_API UClass* StaticClass<AEscuadronNaveCaza>()
	{
		return AEscuadronNaveCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronNaveCaza(Z_Construct_UClass_AEscuadronNaveCaza, &AEscuadronNaveCaza::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEscuadronNaveCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronNaveCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
