/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Vivox_classes.h
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

// Class Vivox.VivoxOSSConnectors
// 0x0014 (0x0050 - 0x003C)
class UVivoxOSSConnectors : public UObject
{
public:
	class UOnlineSubsystem*                            m_OnlineSub;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	TArray< class UVivoxClosure* >                     Closures;                                         		// 0x0040 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_VivoxInterface;                                 		// 0x004C (0x0004) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1457 );

		return pClassPointer;
	};

	void OnGameChatBlockedChanged ( unsigned long bIsActive );
	bool eventIsGameChatBlocked ( );
	void eventSignalGameChatStopping ( );
	void eventSignalGameChatAttempting ( );
	void OnPrivilegeCheckedForUsersByUniqueNetIds ( unsigned char LocalUserNum, unsigned char Privilege, TArray< struct FPermissionsResultByUniqueNetId > Results );
	bool eventCanCommunicateVoiceWithUsersByUniqueNetIds ( TArray< struct FUniqueNetId > Users );
	bool OnPrivilegeLevelChecked ( int ChannelJoinCount, unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	bool eventCanCommunicateVoice ( int ChannelJoinCount, unsigned char* PrivilegeLevelHint );
	void RemoveClosure ( class UVivoxClosure* Closure );
	void eventRegisterOnlineDelegates ( );
};

UClass* UVivoxOSSConnectors::pClassPointer = NULL;

// Class Vivox.VivoxClosure
// 0x0008 (0x0044 - 0x003C)
class UVivoxClosure : public UObject
{
public:
	class UVivoxOSSConnectors*                         m_Connector;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	class UOnlineSubsystem*                            m_OnlineSub;                                      		// 0x0040 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 138041 );

		return pClassPointer;
	};

	void ClearOnlineDelegates ( );
	void RegisterOnlineDelegates ( class UOnlineSubsystem* OnlineSub );
	void Init ( class UVivoxOSSConnectors* ParamConnector );
};

UClass* UVivoxClosure::pClassPointer = NULL;

// Class Vivox.VivoxClosureOnPrivilegeLevelChecked
// 0x0004 (0x0048 - 0x0044)
class UVivoxClosureOnPrivilegeLevelChecked : public UVivoxClosure
{
public:
	int                                                m_ChannelJoinCount;                               		// 0x0044 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 138050 );

		return pClassPointer;
	};

	void OnPrivilegeLevelChecked ( unsigned char LocalUserNum, unsigned char Privilege, unsigned char PrivilegeLevel, unsigned long bDiffersFromHint );
	void ClearOnlineDelegates ( );
	void RegisterOnlineDelegates ( class UOnlineSubsystem* OnlineSub );
	void InitClosure ( int ChannelJoinCount, class UVivoxOSSConnectors* Connector );
};

UClass* UVivoxClosureOnPrivilegeLevelChecked::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif