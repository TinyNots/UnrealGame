// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevilMason/DevilMasonGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevilMasonGameModeBase() {}
// Cross Module References
	DEVILMASON_API UClass* Z_Construct_UClass_ADevilMasonGameModeBase_NoRegister();
	DEVILMASON_API UClass* Z_Construct_UClass_ADevilMasonGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DevilMason();
// End Cross Module References
	void ADevilMasonGameModeBase::StaticRegisterNativesADevilMasonGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADevilMasonGameModeBase_NoRegister()
	{
		return ADevilMasonGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADevilMasonGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevilMasonGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DevilMason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilMasonGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DevilMasonGameModeBase.h" },
		{ "ModuleRelativePath", "DevilMasonGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevilMasonGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevilMasonGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevilMasonGameModeBase_Statics::ClassParams = {
		&ADevilMasonGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADevilMasonGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevilMasonGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevilMasonGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevilMasonGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevilMasonGameModeBase, 3653438422);
	template<> DEVILMASON_API UClass* StaticClass<ADevilMasonGameModeBase>()
	{
		return ADevilMasonGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevilMasonGameModeBase(Z_Construct_UClass_ADevilMasonGameModeBase, &ADevilMasonGameModeBase::StaticClass, TEXT("/Script/DevilMason"), TEXT("ADevilMasonGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevilMasonGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
