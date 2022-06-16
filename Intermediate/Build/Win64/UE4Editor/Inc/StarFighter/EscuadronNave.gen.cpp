// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EscuadronNave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscuadronNave() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNave_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEscuadronNave();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AEscuadronNave::StaticRegisterNativesAEscuadronNave()
	{
	}
	UClass* Z_Construct_UClass_AEscuadronNave_NoRegister()
	{
		return AEscuadronNave::StaticClass();
	}
	struct Z_Construct_UClass_AEscuadronNave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscuadronNave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscuadronNave_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscuadronNave.h" },
		{ "ModuleRelativePath", "EscuadronNave.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscuadronNave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscuadronNave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscuadronNave_Statics::ClassParams = {
		&AEscuadronNave::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEscuadronNave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscuadronNave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscuadronNave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscuadronNave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscuadronNave, 1842964129);
	template<> STARFIGHTER_API UClass* StaticClass<AEscuadronNave>()
	{
		return AEscuadronNave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscuadronNave(Z_Construct_UClass_AEscuadronNave, &AEscuadronNave::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEscuadronNave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscuadronNave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
