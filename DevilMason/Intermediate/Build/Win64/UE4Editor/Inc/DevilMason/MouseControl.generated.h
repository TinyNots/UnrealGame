// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVILMASON_MouseControl_generated_h
#error "MouseControl.generated.h already included, missing '#pragma once' in MouseControl.h"
#endif
#define DEVILMASON_MouseControl_generated_h

#define DevilMason_Source_DevilMason_MouseControl_h_15_SPARSE_DATA
#define DevilMason_Source_DevilMason_MouseControl_h_15_RPC_WRAPPERS
#define DevilMason_Source_DevilMason_MouseControl_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define DevilMason_Source_DevilMason_MouseControl_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMouseControl(); \
	friend struct Z_Construct_UClass_AMouseControl_Statics; \
public: \
	DECLARE_CLASS(AMouseControl, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DevilMason"), NO_API) \
	DECLARE_SERIALIZER(AMouseControl)


#define DevilMason_Source_DevilMason_MouseControl_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMouseControl(); \
	friend struct Z_Construct_UClass_AMouseControl_Statics; \
public: \
	DECLARE_CLASS(AMouseControl, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DevilMason"), NO_API) \
	DECLARE_SERIALIZER(AMouseControl)


#define DevilMason_Source_DevilMason_MouseControl_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMouseControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMouseControl) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMouseControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMouseControl); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMouseControl(AMouseControl&&); \
	NO_API AMouseControl(const AMouseControl&); \
public:


#define DevilMason_Source_DevilMason_MouseControl_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMouseControl(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMouseControl(AMouseControl&&); \
	NO_API AMouseControl(const AMouseControl&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMouseControl); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMouseControl); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMouseControl)


#define DevilMason_Source_DevilMason_MouseControl_h_15_PRIVATE_PROPERTY_OFFSET
#define DevilMason_Source_DevilMason_MouseControl_h_12_PROLOG
#define DevilMason_Source_DevilMason_MouseControl_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevilMason_Source_DevilMason_MouseControl_h_15_PRIVATE_PROPERTY_OFFSET \
	DevilMason_Source_DevilMason_MouseControl_h_15_SPARSE_DATA \
	DevilMason_Source_DevilMason_MouseControl_h_15_RPC_WRAPPERS \
	DevilMason_Source_DevilMason_MouseControl_h_15_INCLASS \
	DevilMason_Source_DevilMason_MouseControl_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevilMason_Source_DevilMason_MouseControl_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevilMason_Source_DevilMason_MouseControl_h_15_PRIVATE_PROPERTY_OFFSET \
	DevilMason_Source_DevilMason_MouseControl_h_15_SPARSE_DATA \
	DevilMason_Source_DevilMason_MouseControl_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DevilMason_Source_DevilMason_MouseControl_h_15_INCLASS_NO_PURE_DECLS \
	DevilMason_Source_DevilMason_MouseControl_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVILMASON_API UClass* StaticClass<class AMouseControl>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevilMason_Source_DevilMason_MouseControl_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
