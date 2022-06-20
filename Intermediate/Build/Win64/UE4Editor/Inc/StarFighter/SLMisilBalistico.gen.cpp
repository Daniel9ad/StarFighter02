// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/SLMisilBalistico.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSLMisilBalistico() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMisilBalistico_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ASLMisilBalistico();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASLMisilBalistico::StaticRegisterNativesASLMisilBalistico()
	{
	}
	UClass* Z_Construct_UClass_ASLMisilBalistico_NoRegister()
	{
		return ASLMisilBalistico::StaticClass();
	}
	struct Z_Construct_UClass_ASLMisilBalistico_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshSLMB_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshSLMB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASLMisilBalistico_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASLMisilBalistico_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SLMisilBalistico.h" },
		{ "ModuleRelativePath", "SLMisilBalistico.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASLMisilBalistico_Statics::NewProp_MeshSLMB_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "Comment", "// Declaro la malla\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SLMisilBalistico.h" },
		{ "ToolTip", "Declaro la malla" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASLMisilBalistico_Statics::NewProp_MeshSLMB = { "MeshSLMB", nullptr, (EPropertyFlags)0x00400000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASLMisilBalistico, MeshSLMB), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASLMisilBalistico_Statics::NewProp_MeshSLMB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASLMisilBalistico_Statics::NewProp_MeshSLMB_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASLMisilBalistico_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASLMisilBalistico_Statics::NewProp_MeshSLMB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASLMisilBalistico_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASLMisilBalistico>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASLMisilBalistico_Statics::ClassParams = {
		&ASLMisilBalistico::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASLMisilBalistico_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASLMisilBalistico_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASLMisilBalistico_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASLMisilBalistico_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASLMisilBalistico()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASLMisilBalistico_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASLMisilBalistico, 3973613314);
	template<> STARFIGHTER_API UClass* StaticClass<ASLMisilBalistico>()
	{
		return ASLMisilBalistico::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASLMisilBalistico(Z_Construct_UClass_ASLMisilBalistico, &ASLMisilBalistico::StaticClass, TEXT("/Script/StarFighter"), TEXT("ASLMisilBalistico"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASLMisilBalistico);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
