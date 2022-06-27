// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Subscriber_generated_h
#error "Subscriber.generated.h already included, missing '#pragma once' in Subscriber.h"
#endif
#define STARFIGHTER_Subscriber_generated_h

#define StarFighter_Source_StarFighter_Subscriber_h_13_SPARSE_DATA
#define StarFighter_Source_StarFighter_Subscriber_h_13_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Subscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Subscriber_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API USubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, USubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API USubscriber(USubscriber&&); \
	STARFIGHTER_API USubscriber(const USubscriber&); \
public:


#define StarFighter_Source_StarFighter_Subscriber_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API USubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API USubscriber(USubscriber&&); \
	STARFIGHTER_API USubscriber(const USubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, USubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriber)


#define StarFighter_Source_StarFighter_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubscriber(); \
	friend struct Z_Construct_UClass_USubscriber_Statics; \
public: \
	DECLARE_CLASS(USubscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarFighter"), STARFIGHTER_API) \
	DECLARE_SERIALIZER(USubscriber)


#define StarFighter_Source_StarFighter_Subscriber_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_Subscriber_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Subscriber_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_Subscriber_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_Subscriber_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Subscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubscriber() {} \
public: \
	typedef USubscriber UClassType; \
	typedef ISubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_Subscriber_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubscriber() {} \
public: \
	typedef USubscriber UClassType; \
	typedef ISubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_Subscriber_h_10_PROLOG
#define StarFighter_Source_StarFighter_Subscriber_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Subscriber_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_Subscriber_h_13_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Subscriber_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Subscriber_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Subscriber_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_Subscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Subscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class USubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Subscriber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
