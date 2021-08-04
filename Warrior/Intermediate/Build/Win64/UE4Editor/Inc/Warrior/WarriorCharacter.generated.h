// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_WarriorCharacter_generated_h
#error "WarriorCharacter.generated.h already included, missing '#pragma once' in WarriorCharacter.h"
#endif
#define WARRIOR_WarriorCharacter_generated_h

#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_SPARSE_DATA
#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_RPC_WRAPPERS
#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWarriorCharacter(); \
	friend struct Z_Construct_UClass_AWarriorCharacter_Statics; \
public: \
	DECLARE_CLASS(AWarriorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorCharacter)


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWarriorCharacter(); \
	friend struct Z_Construct_UClass_AWarriorCharacter_Statics; \
public: \
	DECLARE_CLASS(AWarriorCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AWarriorCharacter)


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWarriorCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWarriorCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarriorCharacter(AWarriorCharacter&&); \
	NO_API AWarriorCharacter(const AWarriorCharacter&); \
public:


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWarriorCharacter(AWarriorCharacter&&); \
	NO_API AWarriorCharacter(const AWarriorCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWarriorCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWarriorCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWarriorCharacter)


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AWarriorCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AWarriorCharacter, FollowCamera); }


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_9_PROLOG
#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_SPARSE_DATA \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_INCLASS \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_WarriorCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_SPARSE_DATA \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_WarriorCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AWarriorCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_WarriorCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
