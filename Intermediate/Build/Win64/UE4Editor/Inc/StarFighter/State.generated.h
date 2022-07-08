// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_State_generated_h
#error "State.generated.h already included, missing '#pragma once' in State.h"
#endif
#define STARFIGHTER_State_generated_h

#define StarFighter_Source_StarFighter_State_h_13_SPARSE_DATA
#define StarFighter_Source_StarFighter_State_h_13_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_State_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UState(UState&&); \
	STARFIGHTER_API UState(const UState&); \
public:


#define StarFighter_Source_StarFighter_State_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UState(UState&&); \
	STARFIGHTER_API UState(const UState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UState); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UState)


#define StarFighter_Source_StarFighter_State_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUState(); \
	friend struct Z_Construct_UClass_UState_Statics; \
public: \
	DECLARE_CLASS(UState, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarFighter"), STARFIGHTER_API) \
	DECLARE_SERIALIZER(UState)


#define StarFighter_Source_StarFighter_State_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_State_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_State_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_State_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_State_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_State_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_State_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IState() {} \
public: \
	typedef UState UClassType; \
	typedef IState ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_State_h_10_PROLOG
#define StarFighter_Source_StarFighter_State_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_State_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_State_h_13_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_State_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_State_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_State_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_State_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_State_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class UState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_State_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
