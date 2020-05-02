// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEVILMANSION_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define DEVILMANSION_MyPlayer_generated_h

#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_SPARSE_DATA
#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_RPC_WRAPPERS
#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DevilMansion"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
public: \
	DECLARE_CLASS(AMyPlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DevilMansion"), NO_API) \
	DECLARE_SERIALIZER(AMyPlayer)


#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public:


#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyPlayer(AMyPlayer&&); \
	NO_API AMyPlayer(const AMyPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer)


#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET
#define DevilMansion_Source_DevilMansion_MyPlayer_h_9_PROLOG
#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_SPARSE_DATA \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_RPC_WRAPPERS \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_INCLASS \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DevilMansion_Source_DevilMansion_MyPlayer_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_PRIVATE_PROPERTY_OFFSET \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_SPARSE_DATA \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_INCLASS_NO_PURE_DECLS \
	DevilMansion_Source_DevilMansion_MyPlayer_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEVILMANSION_API UClass* StaticClass<class AMyPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DevilMansion_Source_DevilMansion_MyPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
