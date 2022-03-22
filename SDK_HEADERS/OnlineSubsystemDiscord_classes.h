/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemDiscord_classes.h
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

// Class OnlineSubsystemDiscord.OnlineGameInterfaceDiscord
// 0x0048 (0x02B0 - 0x0268)
class UOnlineGameInterfaceDiscord : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0268 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1466 );

		return pClassPointer;
	};

};

UClass* UOnlineGameInterfaceDiscord::pClassPointer = NULL;

// Class OnlineSubsystemDiscord.OnlineSubsystemDiscord
// 0x05D8 (0x0748 - 0x0170)
class UOnlineSubsystemDiscord : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[ 0x5D8 ];                           		// 0x0170 (0x05D8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1467 );

		return pClassPointer;
	};

};

UClass* UOnlineSubsystemDiscord::pClassPointer = NULL;

// Class OnlineSubsystemDiscord.OnlineMarketplaceInterfaceDiscord
// 0x05F8 (0x0634 - 0x003C)
class UOnlineMarketplaceInterfaceDiscord : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x5F8 ];                           		// 0x003C (0x05F8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1468 );

		return pClassPointer;
	};

};

UClass* UOnlineMarketplaceInterfaceDiscord::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif