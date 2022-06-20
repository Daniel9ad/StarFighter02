// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_InterfaceSLMB_generated_h
#error "InterfaceSLMB.generated.h already included, missing '#pragma once' in InterfaceSLMB.h"
#endif
#define STARFIGHTER_InterfaceSLMB_generated_h

#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_SPARSE_DATA
#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UInterfaceSLMB(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceSLMB) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UInterfaceSLMB); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceSLMB); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UInterfaceSLMB(UInterfaceSLMB&&); \
	STARFIGHTER_API UInterfaceSLMB(const UInterfaceSLMB&); \
public:


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UInterfaceSLMB(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UInterfaceSLMB(UInterfaceSLMB&&); \
	STARFIGHTER_API UInterfaceSLMB(const UInterfaceSLMB&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UInterfaceSLMB); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInterfaceSLMB); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInterfaceSLMB)


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInterfaceSLMB(); \
	friend struct Z_Construct_UClass_UInterfaceSLMB_Statics; \
public: \
	DECLARE_CLASS(UInterfaceSLMB, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarFighter"), STARFIGHTER_API) \
	DECLARE_SERIALIZER(UInterfaceSLMB)


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInterfaceSLMB() {} \
public: \
	typedef UInterfaceSLMB UClassType; \
	typedef IInterfaceSLMB ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInterfaceSLMB() {} \
public: \
	typedef UInterfaceSLMB UClassType; \
	typedef IInterfaceSLMB ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_10_PROLOG
#define StarFighter_Source_StarFighter_InterfaceSLMB_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_InterfaceSLMB_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_InterfaceSLMB_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class UInterfaceSLMB>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_InterfaceSLMB_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
