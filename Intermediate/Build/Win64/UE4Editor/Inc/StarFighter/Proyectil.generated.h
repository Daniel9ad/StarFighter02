// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef STARFIGHTER_Proyectil_generated_h
#error "Proyectil.generated.h already included, missing '#pragma once' in Proyectil.h"
#endif
#define STARFIGHTER_Proyectil_generated_h

#define StarFighter_Source_StarFighter_Proyectil_h_12_SPARSE_DATA
#define StarFighter_Source_StarFighter_Proyectil_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define StarFighter_Source_StarFighter_Proyectil_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define StarFighter_Source_StarFighter_Proyectil_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AProyectil)


#define StarFighter_Source_StarFighter_Proyectil_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProyectil(); \
	friend struct Z_Construct_UClass_AProyectil_Statics; \
public: \
	DECLARE_CLASS(AProyectil, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AProyectil)


#define StarFighter_Source_StarFighter_Proyectil_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProyectil(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProyectil) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public:


#define StarFighter_Source_StarFighter_Proyectil_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProyectil(AProyectil&&); \
	NO_API AProyectil(const AProyectil&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProyectil); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProyectil); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProyectil)


#define StarFighter_Source_StarFighter_Proyectil_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProyectilMesh() { return STRUCT_OFFSET(AProyectil, ProyectilMesh); } \
	FORCEINLINE static uint32 __PPO__ProyectilMovement() { return STRUCT_OFFSET(AProyectil, ProyectilMovement); }


#define StarFighter_Source_StarFighter_Proyectil_h_9_PROLOG
#define StarFighter_Source_StarFighter_Proyectil_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Proyectil_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Proyectil_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_Proyectil_h_12_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Proyectil_h_12_INCLASS \
	StarFighter_Source_StarFighter_Proyectil_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Proyectil_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Proyectil_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Proyectil_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_Proyectil_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Proyectil_h_12_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Proyectil_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AProyectil>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Proyectil_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
