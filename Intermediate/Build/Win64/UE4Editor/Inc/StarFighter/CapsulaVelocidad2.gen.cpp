// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/CapsulaVelocidad2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCapsulaVelocidad2() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsulaVelocidad2_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsulaVelocidad2();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsula();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ACapsulaVelocidad2::StaticRegisterNativesACapsulaVelocidad2()
	{
	}
	UClass* Z_Construct_UClass_ACapsulaVelocidad2_NoRegister()
	{
		return ACapsulaVelocidad2::StaticClass();
	}
	struct Z_Construct_UClass_ACapsulaVelocidad2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACapsulaVelocidad2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACapsula,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACapsulaVelocidad2_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "CapsulaVelocidad2.h" },
		{ "ModuleRelativePath", "CapsulaVelocidad2.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACapsulaVelocidad2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACapsulaVelocidad2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACapsulaVelocidad2_Statics::ClassParams = {
		&ACapsulaVelocidad2::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACapsulaVelocidad2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACapsulaVelocidad2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACapsulaVelocidad2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACapsulaVelocidad2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACapsulaVelocidad2, 1092136521);
	template<> STARFIGHTER_API UClass* StaticClass<ACapsulaVelocidad2>()
	{
		return ACapsulaVelocidad2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACapsulaVelocidad2(Z_Construct_UClass_ACapsulaVelocidad2, &ACapsulaVelocidad2::StaticClass, TEXT("/Script/StarFighter"), TEXT("ACapsulaVelocidad2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACapsulaVelocidad2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif