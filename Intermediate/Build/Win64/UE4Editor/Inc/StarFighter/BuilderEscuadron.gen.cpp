// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/BuilderEscuadron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderEscuadron() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UBuilderEscuadron_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UBuilderEscuadron();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UBuilderEscuadron::StaticRegisterNativesUBuilderEscuadron()
	{
	}
	UClass* Z_Construct_UClass_UBuilderEscuadron_NoRegister()
	{
		return UBuilderEscuadron::StaticClass();
	}
	struct Z_Construct_UClass_UBuilderEscuadron_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBuilderEscuadron_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBuilderEscuadron_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "BuilderEscuadron.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBuilderEscuadron_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBuilderEscuadron>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBuilderEscuadron_Statics::ClassParams = {
		&UBuilderEscuadron::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBuilderEscuadron_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBuilderEscuadron_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBuilderEscuadron()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBuilderEscuadron_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBuilderEscuadron, 2094597455);
	template<> STARFIGHTER_API UClass* StaticClass<UBuilderEscuadron>()
	{
		return UBuilderEscuadron::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBuilderEscuadron(Z_Construct_UClass_UBuilderEscuadron, &UBuilderEscuadron::StaticClass, TEXT("/Script/StarFighter"), TEXT("UBuilderEscuadron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBuilderEscuadron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
