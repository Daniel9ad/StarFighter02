// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/InterfaceSLMB.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterfaceSLMB() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UInterfaceSLMB_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UInterfaceSLMB();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UInterfaceSLMB::StaticRegisterNativesUInterfaceSLMB()
	{
	}
	UClass* Z_Construct_UClass_UInterfaceSLMB_NoRegister()
	{
		return UInterfaceSLMB::StaticClass();
	}
	struct Z_Construct_UClass_UInterfaceSLMB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterfaceSLMB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterfaceSLMB_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "InterfaceSLMB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterfaceSLMB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInterfaceSLMB>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInterfaceSLMB_Statics::ClassParams = {
		&UInterfaceSLMB::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInterfaceSLMB_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterfaceSLMB_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterfaceSLMB()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInterfaceSLMB_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInterfaceSLMB, 3395057759);
	template<> STARFIGHTER_API UClass* StaticClass<UInterfaceSLMB>()
	{
		return UInterfaceSLMB::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInterfaceSLMB(Z_Construct_UClass_UInterfaceSLMB, &UInterfaceSLMB::StaticClass, TEXT("/Script/StarFighter"), TEXT("UInterfaceSLMB"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterfaceSLMB);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
