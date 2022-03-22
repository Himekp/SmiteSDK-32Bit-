/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: BattleClient_classes.h
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

// Class BattleClient.BattleHUD
// 0x0000 (0x04C4 - 0x04C4)
class ABattleHUD : public ATgClientHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5347 );

		return pClassPointer;
	};

	void BattleHUDFunction ( );
};

UClass* ABattleHUD::pClassPointer = NULL;

// Class BattleClient.BattleLaunch
// 0x0000 (0x03B8 - 0x03B8)
class ABattleLaunch : public ATgGameLaunch
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5348 );

		return pClassPointer;
	};

};

UClass* ABattleLaunch::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif