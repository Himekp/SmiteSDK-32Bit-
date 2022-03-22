/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgGameContent_classes.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TgGameContent.tgmenutransitionactor_pedestal
// 0x0000 (0x01FC - 0x01FC)
class Atgmenutransitionactor_pedestal : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 285240 );

		return pClassPointer;
	};

};

UClass* Atgmenutransitionactor_pedestal::pClassPointer = NULL;

// Class TgGameContent.tgmenutransitionactor_content
// 0x0000 (0x01FC - 0x01FC)
class Atgmenutransitionactor_content : public ATgMenuTransitionActor
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 285243 );

		return pClassPointer;
	};

};

UClass* Atgmenutransitionactor_content::pClassPointer = NULL;

// Class TgGameContent.tgmenucontentdataconsole_content
// 0x0000 (0x0048 - 0x0048)
class Utgmenucontentdataconsole_content : public UTgMenuContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 285258 );

		return pClassPointer;
	};

};

UClass* Utgmenucontentdataconsole_content::pClassPointer = NULL;

// Class TgGameContent.tgmenucontentdata_content
// 0x0000 (0x0048 - 0x0048)
class Utgmenucontentdata_content : public UTgMenuContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 285272 );

		return pClassPointer;
	};

};

UClass* Utgmenucontentdata_content::pClassPointer = NULL;

// Class TgGameContent.tgflagcontentdata_content
// 0x0000 (0x0048 - 0x0048)
class Utgflagcontentdata_content : public UTgFlagContentData
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 285307 );

		return pClassPointer;
	};

};

UClass* Utgflagcontentdata_content::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif