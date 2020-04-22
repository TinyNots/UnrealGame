// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevilMansion/DevilMansionGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDevilMansionGameModeBase() {}
// Cross Module References
	DEVILMANSION_API UClass* Z_Construct_UClass_ADevilMansionGameModeBase_NoRegister();
	DEVILMANSION_API UClass* Z_Construct_UClass_ADevilMansionGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DevilMansion();
// End Cross Module References
	void ADevilMansionGameModeBase::StaticRegisterNativesADevilMansionGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADevilMansionGameModeBase_NoRegister()
	{
		return ADevilMansionGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADevilMansionGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADevilMansionGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DevilMansion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADevilMansionGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DevilMansionGameModeBase.h" },
		{ "ModuleRelativePath", "DevilMansionGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADevilMansionGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADevilMansionGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADevilMansionGameModeBase_Statics::ClassParams = {
		&ADevilMansionGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADevilMansionGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADevilMansionGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADevilMansionGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADevilMansionGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADevilMansionGameModeBase, 2094700766);
	template<> DEVILMANSION_API UClass* StaticClass<ADevilMansionGameModeBase>()
	{
		return ADevilMansionGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADevilMansionGameModeBase(Z_Construct_UClass_ADevilMansionGameModeBase, &ADevilMansionGameModeBase::StaticClass, TEXT("/Script/DevilMansion"), TEXT("ADevilMansionGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADevilMansionGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
