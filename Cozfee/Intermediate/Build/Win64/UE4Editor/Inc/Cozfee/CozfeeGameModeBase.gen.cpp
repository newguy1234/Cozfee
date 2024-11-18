// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cozfee/CozfeeGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCozfeeGameModeBase() {}
// Cross Module References
	COZFEE_API UClass* Z_Construct_UClass_ACozfeeGameModeBase_NoRegister();
	COZFEE_API UClass* Z_Construct_UClass_ACozfeeGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Cozfee();
// End Cross Module References
	void ACozfeeGameModeBase::StaticRegisterNativesACozfeeGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ACozfeeGameModeBase_NoRegister()
	{
		return ACozfeeGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACozfeeGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACozfeeGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Cozfee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACozfeeGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "CozfeeGameModeBase.h" },
		{ "ModuleRelativePath", "CozfeeGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACozfeeGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACozfeeGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACozfeeGameModeBase_Statics::ClassParams = {
		&ACozfeeGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ACozfeeGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACozfeeGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACozfeeGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACozfeeGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACozfeeGameModeBase, 377176993);
	template<> COZFEE_API UClass* StaticClass<ACozfeeGameModeBase>()
	{
		return ACozfeeGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACozfeeGameModeBase(Z_Construct_UClass_ACozfeeGameModeBase, &ACozfeeGameModeBase::StaticClass, TEXT("/Script/Cozfee"), TEXT("ACozfeeGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACozfeeGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
