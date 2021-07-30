// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimMontage;
#ifdef WARRIOR_W_Character_generated_h
#error "W_Character.generated.h already included, missing '#pragma once' in W_Character.h"
#endif
#define WARRIOR_W_Character_generated_h

#define Warrior_Source_Warrior_W_Character_h_14_SPARSE_DATA
#define Warrior_Source_Warrior_W_Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Warrior_Source_Warrior_W_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAttackMontageEnded);


#define Warrior_Source_Warrior_W_Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAW_Character(); \
	friend struct Z_Construct_UClass_AW_Character_Statics; \
public: \
	DECLARE_CLASS(AW_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_Character)


#define Warrior_Source_Warrior_W_Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAW_Character(); \
	friend struct Z_Construct_UClass_AW_Character_Statics; \
public: \
	DECLARE_CLASS(AW_Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(AW_Character)


#define Warrior_Source_Warrior_W_Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AW_Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AW_Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_Character(AW_Character&&); \
	NO_API AW_Character(const AW_Character&); \
public:


#define Warrior_Source_Warrior_W_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AW_Character(AW_Character&&); \
	NO_API AW_Character(const AW_Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AW_Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AW_Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AW_Character)


#define Warrior_Source_Warrior_W_Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AW_Anim() { return STRUCT_OFFSET(AW_Character, AW_Anim); } \
	FORCEINLINE static uint32 __PPO__IsAttacking() { return STRUCT_OFFSET(AW_Character, IsAttacking); } \
	FORCEINLINE static uint32 __PPO__CanNextCombo() { return STRUCT_OFFSET(AW_Character, CanNextCombo); } \
	FORCEINLINE static uint32 __PPO__IsComboInputOn() { return STRUCT_OFFSET(AW_Character, IsComboInputOn); } \
	FORCEINLINE static uint32 __PPO__CurrentCombo() { return STRUCT_OFFSET(AW_Character, CurrentCombo); } \
	FORCEINLINE static uint32 __PPO__MaxCombo() { return STRUCT_OFFSET(AW_Character, MaxCombo); }


#define Warrior_Source_Warrior_W_Character_h_11_PROLOG
#define Warrior_Source_Warrior_W_Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_W_Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_W_Character_h_14_SPARSE_DATA \
	Warrior_Source_Warrior_W_Character_h_14_RPC_WRAPPERS \
	Warrior_Source_Warrior_W_Character_h_14_INCLASS \
	Warrior_Source_Warrior_W_Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_W_Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_W_Character_h_14_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_W_Character_h_14_SPARSE_DATA \
	Warrior_Source_Warrior_W_Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_W_Character_h_14_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_W_Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class AW_Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_W_Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
