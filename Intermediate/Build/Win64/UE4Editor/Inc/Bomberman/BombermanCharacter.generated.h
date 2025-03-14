// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOMBERMAN_BombermanCharacter_generated_h
#error "BombermanCharacter.generated.h already included, missing '#pragma once' in BombermanCharacter.h"
#endif
#define BOMBERMAN_BombermanCharacter_generated_h

#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_SPARSE_DATA
#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_RPC_WRAPPERS
#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABombermanCharacter(); \
	friend struct Z_Construct_UClass_ABombermanCharacter_Statics; \
public: \
	DECLARE_CLASS(ABombermanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanCharacter)


#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABombermanCharacter(); \
	friend struct Z_Construct_UClass_ABombermanCharacter_Statics; \
public: \
	DECLARE_CLASS(ABombermanCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bomberman"), NO_API) \
	DECLARE_SERIALIZER(ABombermanCharacter)


#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABombermanCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABombermanCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanCharacter(ABombermanCharacter&&); \
	NO_API ABombermanCharacter(const ABombermanCharacter&); \
public:


#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABombermanCharacter(ABombermanCharacter&&); \
	NO_API ABombermanCharacter(const ABombermanCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABombermanCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABombermanCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABombermanCharacter)


#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABombermanCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABombermanCharacter, FollowCamera); }


#define Bomberman_Source_Bomberman_BombermanCharacter_h_9_PROLOG
#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_SPARSE_DATA \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_RPC_WRAPPERS \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_INCLASS \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bomberman_Source_Bomberman_BombermanCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_SPARSE_DATA \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Bomberman_Source_Bomberman_BombermanCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOMBERMAN_API UClass* StaticClass<class ABombermanCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bomberman_Source_Bomberman_BombermanCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
