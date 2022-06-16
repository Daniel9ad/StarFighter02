// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/NaveJugador.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNaveJugador() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugador_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANaveJugador();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACapsula_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANaveJugador::execEstado)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Estado();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANaveJugador::execNotifyHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_MyComp);
		P_GET_OBJECT(AActor,Z_Param_Other);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_UBOOL(Z_Param_bSelfMoved);
		P_GET_STRUCT(FVector,Z_Param_HitLocation);
		P_GET_STRUCT(FVector,Z_Param_HitNormal);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyHit(Z_Param_MyComp,Z_Param_Other,Z_Param_OtherComp,Z_Param_bSelfMoved,Z_Param_HitLocation,Z_Param_HitNormal,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANaveJugador::execTakeItem)
	{
		P_GET_OBJECT(ACapsula,Z_Param_InventoryItem);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeItem(Z_Param_InventoryItem);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANaveJugador::execDropItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DropItem();
		P_NATIVE_END;
	}
	void ANaveJugador::StaticRegisterNativesANaveJugador()
	{
		UClass* Class = ANaveJugador::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DropItem", &ANaveJugador::execDropItem },
			{ "Estado", &ANaveJugador::execEstado },
			{ "NotifyHit", &ANaveJugador::execNotifyHit },
			{ "TakeItem", &ANaveJugador::execTakeItem },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANaveJugador_DropItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_DropItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveJugador_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveJugador, nullptr, "DropItem", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_DropItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_DropItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveJugador_DropItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveJugador_DropItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANaveJugador_Estado_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_Estado_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveJugador_Estado_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveJugador, nullptr, "Estado", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_Estado_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_Estado_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveJugador_Estado()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveJugador_Estado_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics
	{
		struct NaveJugador_eventNotifyHit_Parms
		{
			UPrimitiveComponent* MyComp;
			AActor* Other;
			UPrimitiveComponent* OtherComp;
			bool bSelfMoved;
			FVector HitLocation;
			FVector HitNormal;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static void NewProp_bSelfMoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSelfMoved;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_MyComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_MyComp = { "MyComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, MyComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_MyComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_MyComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Other = { "Other", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_OtherComp_MetaData)) };
	void Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_bSelfMoved_SetBit(void* Obj)
	{
		((NaveJugador_eventNotifyHit_Parms*)Obj)->bSelfMoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_bSelfMoved = { "bSelfMoved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NaveJugador_eventNotifyHit_Parms), &Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_bSelfMoved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventNotifyHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_MyComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_bSelfMoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_HitLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveJugador, nullptr, "NotifyHit", nullptr, nullptr, sizeof(NaveJugador_eventNotifyHit_Parms), Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveJugador_NotifyHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveJugador_NotifyHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANaveJugador_TakeItem_Statics
	{
		struct NaveJugador_eventTakeItem_Parms
		{
			ACapsula* InventoryItem;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryItem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::NewProp_InventoryItem = { "InventoryItem", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NaveJugador_eventTakeItem_Parms, InventoryItem), Z_Construct_UClass_ACapsula_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::NewProp_InventoryItem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANaveJugador, nullptr, "TakeItem", nullptr, nullptr, sizeof(NaveJugador_eventTakeItem_Parms), Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANaveJugador_TakeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANaveJugador_TakeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANaveJugador_NoRegister()
	{
		return ANaveJugador::StaticClass();
	}
	struct Z_Construct_UClass_ANaveJugador_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventarioJugador_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventarioJugador;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANaveJugador_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANaveJugador_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANaveJugador_DropItem, "DropItem" }, // 4277367275
		{ &Z_Construct_UFunction_ANaveJugador_Estado, "Estado" }, // 3691776357
		{ &Z_Construct_UFunction_ANaveJugador_NotifyHit, "NotifyHit" }, // 2569697582
		{ &Z_Construct_UFunction_ANaveJugador_TakeItem, "TakeItem" }, // 806551793
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "NaveJugador.h" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//La camara\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveJugador.h" },
		{ "ToolTip", "La camara" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveJugador, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "//Algo que coloca la camara sobre el personaje\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveJugador.h" },
		{ "ToolTip", "Algo que coloca la camara sobre el personaje" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveJugador, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANaveJugador_Statics::NewProp_InventarioJugador_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "NaveJugador.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANaveJugador_Statics::NewProp_InventarioJugador = { "InventarioJugador", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANaveJugador, InventarioJugador), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::NewProp_InventarioJugador_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::NewProp_InventarioJugador_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANaveJugador_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveJugador_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANaveJugador_Statics::NewProp_InventarioJugador,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANaveJugador_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANaveJugador>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANaveJugador_Statics::ClassParams = {
		&ANaveJugador::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANaveJugador_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANaveJugador_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANaveJugador()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANaveJugador_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANaveJugador, 262042937);
	template<> STARFIGHTER_API UClass* StaticClass<ANaveJugador>()
	{
		return ANaveJugador::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANaveJugador(Z_Construct_UClass_ANaveJugador, &ANaveJugador::StaticClass, TEXT("/Script/StarFighter"), TEXT("ANaveJugador"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANaveJugador);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
