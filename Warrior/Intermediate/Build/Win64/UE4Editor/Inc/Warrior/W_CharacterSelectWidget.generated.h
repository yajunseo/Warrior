// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WARRIOR_W_CharacterSelectWidget_generated_h
#error "W_CharacterSelectWidget.generated.h already included, missing '#pragma once' in W_CharacterSelectWidget.h"
#endif
#define WARRIOR_W_CharacterSelectWidget_generated_h

#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_SPARSE_DATA
#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked);


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnConfirmClicked);


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUW_CharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UW_CharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UW_CharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_CharacterSelectWidget)


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUW_CharacterSelectWidget(); \
	friend struct Z_Construct_UClass_UW_CharacterSelectWidget_Statics; \
public: \
	DECLARE_CLASS(UW_CharacterSelectWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Warrior"), NO_API) \
	DECLARE_SERIALIZER(UW_CharacterSelectWidget)


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_CharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_CharacterSelectWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_CharacterSelectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_CharacterSelectWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_CharacterSelectWidget(UW_CharacterSelectWidget&&); \
	NO_API UW_CharacterSelectWidget(const UW_CharacterSelectWidget&); \
public:


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UW_CharacterSelectWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UW_CharacterSelectWidget(UW_CharacterSelectWidget&&); \
	NO_API UW_CharacterSelectWidget(const UW_CharacterSelectWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UW_CharacterSelectWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UW_CharacterSelectWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UW_CharacterSelectWidget)


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(UW_CharacterSelectWidget, CurrentIndex); } \
	FORCEINLINE static uint32 __PPO__MaxIndex() { return STRUCT_OFFSET(UW_CharacterSelectWidget, MaxIndex); } \
	FORCEINLINE static uint32 __PPO__TextBox() { return STRUCT_OFFSET(UW_CharacterSelectWidget, TextBox); } \
	FORCEINLINE static uint32 __PPO__ConfirmButton() { return STRUCT_OFFSET(UW_CharacterSelectWidget, ConfirmButton); }


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_12_PROLOG
#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_RPC_WRAPPERS \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_INCLASS \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_SPARSE_DATA \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_INCLASS_NO_PURE_DECLS \
	Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> WARRIOR_API UClass* StaticClass<class UW_CharacterSelectWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Warrior_Source_Warrior_Public_W_CharacterSelectWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
