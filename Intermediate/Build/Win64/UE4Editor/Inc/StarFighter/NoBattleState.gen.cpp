// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NoBattleState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoBattleState() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANoBattleState_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANoBattleState();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_UState_NoRegister();
// End Cross Module References
	void ANoBattleState::StaticRegisterNativesANoBattleState()
	{
	}
	UClass* Z_Construct_UClass_ANoBattleState_NoRegister()
	{
		return ANoBattleState::StaticClass();
	}
	struct Z_Construct_UClass_ANoBattleState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoBattleState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoBattleState_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoBattleState.h" },
		{ "ModuleRelativePath", "NoBattleState.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANoBattleState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UState_NoRegister, (int32)VTABLE_OFFSET(ANoBattleState, IState), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoBattleState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoBattleState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANoBattleState_Statics::ClassParams = {
		&ANoBattleState::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANoBattleState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANoBattleState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANoBattleState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANoBattleState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANoBattleState, 3230857844);
	template<> STARFIGHTER_API UClass* StaticClass<ANoBattleState>()
	{
		return ANoBattleState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANoBattleState(Z_Construct_UClass_ANoBattleState, &ANoBattleState::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANoBattleState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoBattleState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
