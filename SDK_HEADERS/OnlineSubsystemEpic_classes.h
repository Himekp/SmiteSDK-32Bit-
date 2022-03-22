/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemEpic_classes.h
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

// Class OnlineSubsystemEpic.OnlineGameInterfaceEpic
// 0x0048 (0x02B0 - 0x0268)
class UOnlineGameInterfaceEpic : public UOnlineGameInterfaceImpl
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0268 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1463 );

		return pClassPointer;
	};

};

UClass* UOnlineGameInterfaceEpic::pClassPointer = NULL;

// Class OnlineSubsystemEpic.OnlineSubsystemEpic
// 0x05CC (0x073C - 0x0170)
class UOnlineSubsystemEpic : public UOnlineSubsystemCommonImpl
{
public:
	unsigned char                                      UnknownData00[ 0x5CC ];                           		// 0x0170 (0x05CC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1464 );

		return pClassPointer;
	};

};

UClass* UOnlineSubsystemEpic::pClassPointer = NULL;

// Class OnlineSubsystemEpic.OnlineMarketplaceInterfaceEpic
// 0x05F8 (0x0634 - 0x003C)
class UOnlineMarketplaceInterfaceEpic : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x5F8 ];                           		// 0x003C (0x05F8) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1465 );

		return pClassPointer;
	};

};

UClass* UOnlineMarketplaceInterfaceEpic::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif