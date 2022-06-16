// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/BuilderMain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuilderMain() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ABuilderMain_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ABuilderMain();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_AConstructorNaves_NoRegister();
// End Cross Module References
	void ABuilderMain::StaticRegisterNativesABuilderMain()
	{
	}
	UClass* Z_Construct_UClass_ABuilderMain_NoRegister()
	{
		return ABuilderMain::StaticClass();
	}
	struct Z_Construct_UClass_ABuilderMain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cnaves_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cnaves;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuilderMain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderMain_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BuilderMain.h" },
		{ "ModuleRelativePath", "BuilderMain.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuilderMain_Statics::NewProp_cnaves_MetaData[] = {
		{ "Category", "Main" },
		{ "ModuleRelativePath", "BuilderMain.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuilderMain_Statics::NewProp_cnaves = { "cnaves", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABuilderMain, cnaves), Z_Construct_UClass_AConstructorNaves_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuilderMain_Statics::NewProp_cnaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderMain_Statics::NewProp_cnaves_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuilderMain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuilderMain_Statics::NewProp_cnaves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuilderMain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuilderMain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABuilderMain_Statics::ClassParams = {
		&ABuilderMain::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABuilderMain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderMain_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuilderMain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuilderMain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuilderMain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABuilderMain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABuilderMain, 417345411);
	template<> STARFIGHTER_API UClass* StaticClass<ABuilderMain>()
	{
		return ABuilderMain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABuilderMain(Z_Construct_UClass_ABuilderMain, &ABuilderMain::StaticClass, TEXT("/Script/StarFighter"), TEXT("ABuilderMain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuilderMain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
