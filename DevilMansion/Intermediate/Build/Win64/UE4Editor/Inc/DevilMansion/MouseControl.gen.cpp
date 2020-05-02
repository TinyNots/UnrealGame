// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DevilMansion/MouseControl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMouseControl() {}
// Cross Module References
	DEVILMANSION_API UClass* Z_Construct_UClass_AMouseControl_NoRegister();
	DEVILMANSION_API UClass* Z_Construct_UClass_AMouseControl();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DevilMansion();
// End Cross Module References
	void AMouseControl::StaticRegisterNativesAMouseControl()
	{
	}
	UClass* Z_Construct_UClass_AMouseControl_NoRegister()
	{
		return AMouseControl::StaticClass();
	}
	struct Z_Construct_UClass_AMouseControl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMouseControl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DevilMansion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMouseControl_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MouseControl.h" },
		{ "ModuleRelativePath", "MouseControl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMouseControl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMouseControl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMouseControl_Statics::ClassParams = {
		&AMouseControl::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMouseControl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMouseControl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMouseControl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMouseControl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMouseControl, 1840147253);
	template<> DEVILMANSION_API UClass* StaticClass<AMouseControl>()
	{
		return AMouseControl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMouseControl(Z_Construct_UClass_AMouseControl, &AMouseControl::StaticClass, TEXT("/Script/DevilMansion"), TEXT("AMouseControl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMouseControl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
