// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/CamuflajeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamuflajeState() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ACamuflajeState_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACamuflajeState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void ACamuflajeState::StaticRegisterNativesACamuflajeState()
	{
	}
	UClass* Z_Construct_UClass_ACamuflajeState_NoRegister()
	{
		return ACamuflajeState::StaticClass();
	}
	struct Z_Construct_UClass_ACamuflajeState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamuflajeState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamuflajeState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CamuflajeState.h" },
		{ "ModuleRelativePath", "CamuflajeState.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACamuflajeState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(ACamuflajeState, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamuflajeState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamuflajeState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamuflajeState_Statics::ClassParams = {
		&ACamuflajeState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACamuflajeState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACamuflajeState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamuflajeState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamuflajeState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamuflajeState, 2567770147);
	template<> STARFIGHTER_API UClass* StaticClass<ACamuflajeState>()
	{
		return ACamuflajeState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamuflajeState(Z_Construct_UClass_ACamuflajeState, &ACamuflajeState::StaticClass, TEXT("/Script/StarFighter"), TEXT("ACamuflajeState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamuflajeState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
