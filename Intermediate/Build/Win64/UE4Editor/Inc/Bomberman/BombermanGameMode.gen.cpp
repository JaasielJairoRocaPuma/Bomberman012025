// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bomberman/BombermanGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombermanGameMode() {}
// Cross Module References
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister();
	BOMBERMAN_API UClass* Z_Construct_UClass_ABombermanGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bomberman();
// End Cross Module References
	void ABombermanGameMode::StaticRegisterNativesABombermanGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABombermanGameMode_NoRegister()
	{
		return ABombermanGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABombermanGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABombermanGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bomberman,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BombermanGameMode.h" },
		{ "ModuleRelativePath", "BombermanGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABombermanGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABombermanGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABombermanGameMode_Statics::ClassParams = {
		&ABombermanGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABombermanGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABombermanGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABombermanGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABombermanGameMode, 3100590150);
	template<> BOMBERMAN_API UClass* StaticClass<ABombermanGameMode>()
	{
		return ABombermanGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABombermanGameMode(Z_Construct_UClass_ABombermanGameMode, &ABombermanGameMode::StaticClass, TEXT("/Script/Bomberman"), TEXT("ABombermanGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABombermanGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
