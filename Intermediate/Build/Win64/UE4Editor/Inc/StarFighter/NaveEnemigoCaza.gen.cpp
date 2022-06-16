// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NaveEnemigoCaza.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveEnemigoCaza() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveEnemigoCaza_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveEnemigoCaza();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveEnemiga_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UBuilder_NoRegister();
// End Cross Module References
	void ANaveEnemigoCaza::StaticRegisterNativesANaveEnemigoCaza()
	{
	}
	UClass* Z_Construct_UClass_ANaveEnemigoCaza_NoRegister()
	{
		return ANaveEnemigoCaza::StaticClass();
	}
	struct Z_Construct_UClass_ANaveEnemigoCaza_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nave_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_nave;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveEnemigoCaza_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoCaza_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NaveEnemigoCaza.h" },
		{ "ModuleRelativePath", "NaveEnemigoCaza.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveEnemigoCaza_Statics::NewProp_nave_MetaData[] = {
		{ "Category", "Nave" },
		{ "ModuleRelativePath", "NaveEnemigoCaza.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveEnemigoCaza_Statics::NewProp_nave = { "nave", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveEnemigoCaza, nave), Z_Construct_UClass_ANaveEnemiga_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoCaza_Statics::NewProp_nave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoCaza_Statics::NewProp_nave_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveEnemigoCaza_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveEnemigoCaza_Statics::NewProp_nave,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANaveEnemigoCaza_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBuilder_NoRegister, (int32)VTABLE_OFFSET(ANaveEnemigoCaza, IBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveEnemigoCaza_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveEnemigoCaza>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveEnemigoCaza_Statics::ClassParams = {
		&ANaveEnemigoCaza::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANaveEnemigoCaza_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoCaza_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveEnemigoCaza_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveEnemigoCaza_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveEnemigoCaza()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveEnemigoCaza_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveEnemigoCaza, 4007649224);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveEnemigoCaza>()
	{
		return ANaveEnemigoCaza::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveEnemigoCaza(Z_Construct_UClass_ANaveEnemigoCaza, &ANaveEnemigoCaza::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANaveEnemigoCaza"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveEnemigoCaza);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
