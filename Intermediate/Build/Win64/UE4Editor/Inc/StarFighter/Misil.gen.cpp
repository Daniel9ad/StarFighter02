// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Misil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMisil() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMisil_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMisil();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void AMisil::StaticRegisterNativesAMisil()
	{
	}
	UClass* Z_Construct_UClass_AMisil_NoRegister()
	{
		return AMisil::StaticClass();
	}
	struct Z_Construct_UClass_AMisil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMisil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Misil.h" },
		{ "ModuleRelativePath", "Misil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMisil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMisil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMisil_Statics::ClassParams = {
		&AMisil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMisil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMisil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMisil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMisil, 202067411);
	template<> STARFIGHTER_API UClass* StaticClass<AMisil>()
	{
		return AMisil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMisil(Z_Construct_UClass_AMisil, &AMisil::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMisil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMisil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
