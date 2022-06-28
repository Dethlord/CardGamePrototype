// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASpawner;
#ifdef LOGICGAMEGEOM_GameLogic_generated_h
#error "GameLogic.generated.h already included, missing '#pragma once' in GameLogic.h"
#endif
#define LOGICGAMEGEOM_GameLogic_generated_h

#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_SPARSE_DATA
#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execValidateMove); \
	DECLARE_FUNCTION(execGetDebugSuitsAndValues);


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execValidateMove); \
	DECLARE_FUNCTION(execGetDebugSuitsAndValues);


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameLogic(); \
	friend struct Z_Construct_UClass_AGameLogic_Statics; \
public: \
	DECLARE_CLASS(AGameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogicGameGeom"), NO_API) \
	DECLARE_SERIALIZER(AGameLogic)


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGameLogic(); \
	friend struct Z_Construct_UClass_AGameLogic_Statics; \
public: \
	DECLARE_CLASS(AGameLogic, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LogicGameGeom"), NO_API) \
	DECLARE_SERIALIZER(AGameLogic)


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameLogic(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameLogic) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLogic); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLogic(AGameLogic&&); \
	NO_API AGameLogic(const AGameLogic&); \
public:


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameLogic(AGameLogic&&); \
	NO_API AGameLogic(const AGameLogic&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameLogic); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameLogic); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameLogic)


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_PRIVATE_PROPERTY_OFFSET
#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_10_PROLOG
#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_PRIVATE_PROPERTY_OFFSET \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_SPARSE_DATA \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_RPC_WRAPPERS \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_INCLASS \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_PRIVATE_PROPERTY_OFFSET \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_SPARSE_DATA \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_INCLASS_NO_PURE_DECLS \
	LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LOGICGAMEGEOM_API UClass* StaticClass<class AGameLogic>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID LogicGameGeom_TEST_Source_LogicGameGeom_GameLogic_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
