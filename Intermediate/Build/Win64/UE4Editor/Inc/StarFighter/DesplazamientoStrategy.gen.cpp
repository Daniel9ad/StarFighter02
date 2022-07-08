// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/DesplazamientoStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDesplazamientoStrategy() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ADesplazamientoStrategy_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ADesplazamientoStrategy();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UBattleNaveStrategy_NoRegister();
// End Cross Module References
	void ADesplazamientoStrategy::StaticRegisterNativesADesplazamientoStrategy()
	{
	}
	UClass* Z_Construct_UClass_ADesplazamientoStrategy_NoRegister()
	{
		return ADesplazamientoStrategy::StaticClass();
	}
	struct Z_Construct_UClass_ADesplazamientoStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADesplazamientoStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADesplazamientoStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DesplazamientoStrategy.h" },
		{ "ModuleRelativePath", "DesplazamientoStrategy.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADesplazamientoStrategy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBattleNaveStrategy_NoRegister, (int32)VTABLE_OFFSET(ADesplazamientoStrategy, IBattleNaveStrategy), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADesplazamientoStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADesplazamientoStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADesplazamientoStrategy_Statics::ClassParams = {
		&ADesplazamientoStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADesplazamientoStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADesplazamientoStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADesplazamientoStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADesplazamientoStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADesplazamientoStrategy, 2474531013);
	template<> STARFIGHTER_API UClass* StaticClass<ADesplazamientoStrategy>()
	{
		return ADesplazamientoStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADesplazamientoStrategy(Z_Construct_UClass_ADesplazamientoStrategy, &ADesplazamientoStrategy::StaticClass, TEXT("/Script/StarFighter"), TEXT("ADesplazamientoStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADesplazamientoStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
