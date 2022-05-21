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
class ACapsula;
#ifdef STARFIGHTER_NaveJugador_generated_h
#error "NaveJugador.generated.h already included, missing '#pragma once' in NaveJugador.h"
#endif
#define STARFIGHTER_NaveJugador_generated_h

#define StarFighter_Source_StarFighter_NaveJugador_h_12_SPARSE_DATA
#define StarFighter_Source_StarFighter_NaveJugador_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEstado); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define StarFighter_Source_StarFighter_NaveJugador_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEstado); \
	DECLARE_FUNCTION(execNotifyHit); \
	DECLARE_FUNCTION(execTakeItem); \
	DECLARE_FUNCTION(execDropItem);


#define StarFighter_Source_StarFighter_NaveJugador_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveJugador(); \
	friend struct Z_Construct_UClass_ANaveJugador_Statics; \
public: \
	DECLARE_CLASS(ANaveJugador, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveJugador)


#define StarFighter_Source_StarFighter_NaveJugador_h_12_INCLASS \
private: \
	static void StaticRegisterNativesANaveJugador(); \
	friend struct Z_Construct_UClass_ANaveJugador_Statics; \
public: \
	DECLARE_CLASS(ANaveJugador, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveJugador)


#define StarFighter_Source_StarFighter_NaveJugador_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveJugador(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveJugador) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJugador); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJugador(ANaveJugador&&); \
	NO_API ANaveJugador(const ANaveJugador&); \
public:


#define StarFighter_Source_StarFighter_NaveJugador_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveJugador(ANaveJugador&&); \
	NO_API ANaveJugador(const ANaveJugador&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveJugador); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveJugador); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveJugador)


#define StarFighter_Source_StarFighter_NaveJugador_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComponent() { return STRUCT_OFFSET(ANaveJugador, CameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANaveJugador, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__InventarioJugador() { return STRUCT_OFFSET(ANaveJugador, InventarioJugador); }


#define StarFighter_Source_StarFighter_NaveJugador_h_9_PROLOG
#define StarFighter_Source_StarFighter_NaveJugador_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_NaveJugador_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_NaveJugador_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_NaveJugador_h_12_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_NaveJugador_h_12_INCLASS \
	StarFighter_Source_StarFighter_NaveJugador_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_NaveJugador_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_NaveJugador_h_12_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_NaveJugador_h_12_SPARSE_DATA \
	StarFighter_Source_StarFighter_NaveJugador_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_NaveJugador_h_12_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_NaveJugador_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANaveJugador>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_NaveJugador_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
