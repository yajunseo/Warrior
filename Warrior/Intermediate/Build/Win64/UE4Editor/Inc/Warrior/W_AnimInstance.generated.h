// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_AnimInstance_generated_h
#error "W_AnimInstance.generated.h already included, missing '#pragma once' in W_AnimInstance.h"
#endif
#define WARRIOR_W_AnimInstance_generated_h

#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck);


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_NextAttackCheck); \
	DECLARE_FUNCTION(execAnimNotify_AttackHitCheck);


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_AnimInstance(); \
	friend struct Z_Construct_UClass_UW_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UW_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_AnimInstance)


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUW_AnimInstance(); \
	friend struct Z_Construct_UClass_UW_AnimInstance_Statics; \
public: \
	DECLARE_CLASS(UW_AnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_AnimInstance)


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_AnimInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_AnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_AnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_AnimInstance(UW_AnimInstance&&); \
	NO_API UW_AnimInstance(const UW_AnimInstance&); \
public:


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_AnimInstance(UW_AnimInstance&&); \
	NO_API UW_AnimInstance(const UW_AnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_AnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_AnimInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UW_AnimInstance)


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentPawnSpeed() { return STRUCT_OFFSET(UW_AnimInstance, CurrentPawnSpeed); } \
	FORCEINLINE static uint32 __PPO__IsInAir() { return STRUCT_OFFSET(UW_AnimInstance, IsInAir); } \
	FORCEINLINE static uint32 __PPO__IsAttack() { return STRUCT_OFFSET(UW_AnimInstance, IsAttack); } \
	FORCEINLINE static uint32 __PPO__IsDead() { return STRUCT_OFFSET(UW_AnimInstance, IsDead); } \
	FORCEINLINE static uint32 __PPO__AttackMontage() { return STRUCT_OFFSET(UW_AnimInstance, AttackMontage); }


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_15_PROLOG
#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_INCLASS \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_AnimInstance_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_AnimInstance_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UW_AnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_AnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
