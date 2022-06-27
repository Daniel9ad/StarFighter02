// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_NaveEnemiga_generated_h
#error "NaveEnemiga.generated.h already included, missing '#pragma once' in NaveEnemiga.h"
#endif
#define STARFIGHTER_NaveEnemiga_generated_h

#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_SPARSE_DATA
#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga) \
	virtual UObject* _getUObject() const override { return const_cast<ANaveEnemiga*>(this); }


#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANaveEnemiga(); \
	friend struct Z_Construct_UClass_ANaveEnemiga_Statics; \
public: \
	DECLARE_CLASS(ANaveEnemiga, ANave, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ANaveEnemiga) \
	virtual UObject* _getUObject() const override { return const_cast<ANaveEnemiga*>(this); }


#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANaveEnemiga(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANaveEnemiga) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public:


#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANaveEnemiga(ANaveEnemiga&&); \
	NO_API ANaveEnemiga(const ANaveEnemiga&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANaveEnemiga); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANaveEnemiga); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANaveEnemiga)


#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_NaveEnemiga_h_13_PROLOG
#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_INCLASS \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_NaveEnemiga_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_NaveEnemiga_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ANaveEnemiga>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_NaveEnemiga_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
