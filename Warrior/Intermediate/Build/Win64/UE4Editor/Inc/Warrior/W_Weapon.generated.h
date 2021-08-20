// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_Weapon_generated_h
#error "W_Weapon.generated.h already included, missing '#pragma once' in W_Weapon.h"
#endif
#define WARRIOR_W_Weapon_generated_h

#define Warrior_Source_Warrior_Public_W_Weapon_h_12_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_Weapon_h_12_RPC_WRAPPERS
#define Warrior_Source_Warrior_Public_W_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_Public_W_Weapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW_Weapon(); \
	friend struct Z_Construct_UClass_AW_Weapon_Statics; \
public: \
	DECLARE_CLASS(AW_Weapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_Weapon)


#define Warrior_Source_Warrior_Public_W_Weapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAW_Weapon(); \
	friend struct Z_Construct_UClass_AW_Weapon_Statics; \
public: \
	DECLARE_CLASS(AW_Weapon, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_Weapon)


#define Warrior_Source_Warrior_Public_W_Weapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_Weapon(AW_Weapon&&); \
	NO_API AW_Weapon(const AW_Weapon&); \
public:


#define Warrior_Source_Warrior_Public_W_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_Weapon(AW_Weapon&&); \
	NO_API AW_Weapon(const AW_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW_Weapon)


#define Warrior_Source_Warrior_Public_W_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AttackRange() { return STRUCT_OFFSET(AW_Weapon, AttackRange); }


#define Warrior_Source_Warrior_Public_W_Weapon_h_9_PROLOG
#define Warrior_Source_Warrior_Public_W_Weapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_INCLASS \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_Weapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AW_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
