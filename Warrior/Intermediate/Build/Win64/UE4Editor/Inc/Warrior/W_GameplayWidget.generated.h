// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_GameplayWidget_generated_h
#error "W_GameplayWidget.generated.h already included, missing '#pragma once' in W_GameplayWidget.h"
#endif
#define WARRIOR_W_GameplayWidget_generated_h

#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked); \
	DECLARE_FUNCTION(execOnReturnToTitleClicked); \
	DECLARE_FUNCTION(execOnResumeClicked);


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRetryGameClicked); \
	DECLARE_FUNCTION(execOnReturnToTitleClicked); \
	DECLARE_FUNCTION(execOnResumeClicked);


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_GameplayWidget(); \
	friend struct Z_Construct_UClass_UW_GameplayWidget_Statics; \
public: \
	DECLARE_CLASS(UW_GameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_GameplayWidget)


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUW_GameplayWidget(); \
	friend struct Z_Construct_UClass_UW_GameplayWidget_Statics; \
public: \
	DECLARE_CLASS(UW_GameplayWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_GameplayWidget)


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_GameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_GameplayWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_GameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_GameplayWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_GameplayWidget(UW_GameplayWidget&&); \
	NO_API UW_GameplayWidget(const UW_GameplayWidget&); \
public:


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_GameplayWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_GameplayWidget(UW_GameplayWidget&&); \
	NO_API UW_GameplayWidget(const UW_GameplayWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_GameplayWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_GameplayWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_GameplayWidget)


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ResumeButton() { return STRUCT_OFFSET(UW_GameplayWidget, ResumeButton); } \
	FORCEINLINE static uint32 __PPO__ReturnToTitleButton() { return STRUCT_OFFSET(UW_GameplayWidget, ReturnToTitleButton); } \
	FORCEINLINE static uint32 __PPO__RetryGameButton() { return STRUCT_OFFSET(UW_GameplayWidget, RetryGameButton); }


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_12_PROLOG
#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_INCLASS \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_GameplayWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UW_GameplayWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_GameplayWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
