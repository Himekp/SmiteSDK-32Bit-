/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_classes.h
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

#define CONST_PLAYER_MATCH                                       0
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.ELinkMode
/*enum ELinkMode
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_MAX                                           = 3
};*/

// Enum IpDrv.InternetLink.EReceiveMode
/*enum EReceiveMode
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_MAX                                          = 2
};*/

// Enum IpDrv.InternetLink.ELineMode
/*enum ELineMode
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_MAX                                          = 4
};*/

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
/*enum McpChallengeFileStatus
{
	MCFS_NotStarted                                    = 0,
	MCFS_Pending                                       = 1,
	MCFS_Success                                       = 2,
	MCFS_Failed                                        = 3,
	MCFS_MAX                                           = 4
};*/

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
/*enum EMcpFileCompressionType
{
	MFCT_NONE                                          = 0,
	MFCT_ZLIB                                          = 1,
	MFCT_MAX                                           = 2
};*/

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
/*enum EMcpGroupAccessLevel
{
	MGAL_Owner                                         = 0,
	MGAL_Member                                        = 1,
	MGAL_Public                                        = 2,
	MGAL_MAX                                           = 3
};*/

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
/*enum EMcpGroupAcceptState
{
	MGAS_Error                                         = 0,
	MGAS_Pending                                       = 1,
	MGAS_Accepted                                      = 2,
	MGAS_MAX                                           = 3
};*/

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
/*enum EMcpMessageCompressionType
{
	MMCT_NONE                                          = 0,
	MMCT_LZO                                           = 1,
	MMCT_ZLIB                                          = 2,
	MMCT_MAX                                           = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
/*enum EMeshBeaconPacketType
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_MAX                                      = 11
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
/*enum EMeshBeaconConnectionResult
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_MAX                            = 4
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
/*enum EMeshBeaconBandwidthTestState
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_MAX                          = 8
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
/*enum EMeshBeaconBandwidthTestResult
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_MAX                         = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
/*enum EMeshBeaconBandwidthTestType
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_MAX                           = 3
};*/

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
/*enum EMeshBeaconClientState
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_MAX                                           = 6
};*/

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
/*enum EEventUploadType
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_MAX                                            = 4
};*/

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
/*enum EOnlineImageDownloadState
{
	PIDS_NotStarted                                    = 0,
	PIDS_Downloading                                   = 1,
	PIDS_Succeeded                                     = 2,
	PIDS_Failed                                        = 3,
	PIDS_MAX                                           = 4
};*/

// Enum IpDrv.PartyBeacon.EReservationPacketType
/*enum EReservationPacketType
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_MAX                                            = 10
};*/

// Enum IpDrv.PartyBeacon.EPartyReservationResult
/*enum EPartyReservationResult
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_MAX                                            = 8
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
/*enum EPartyBeaconClientRequest
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_MAX                                = 2
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
/*enum EPartyBeaconClientState
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_MAX                                           = 6
};*/

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
/*enum EPartyBeaconHostState
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_MAX                                           = 2
};*/

// Enum IpDrv.TcpLink.ELinkState
/*enum ELinkState
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_MAX                                          = 9
};*/

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
/*enum ETitleFileFileOp
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_MAX                                      = 3
};*/

// Enum IpDrv.WebRequest.ERequestType
/*enum ERequestType
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_MAX                                        = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x0048 - 0x003C)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                       		// 0x003C (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0040 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1402 );

		return pClassPointer;
	};

};

UClass* UClientBeaconAddressResolver::pClassPointer = NULL;

// Class IpDrv.HTTPDownload
// 0x010C (0x0B7C - 0x0A70)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                  		// 0x0A70 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                ProxyServerPort;                                  		// 0x0A7C (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      MaxRedirection : 1;                               		// 0x0A80 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	float                                              ConnectionTimeout;                                		// 0x0A84 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned char                                      UnknownData00[ 0xF4 ];                            		// 0x0A88 (0x00F4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1403 );

		return pClassPointer;
	};

};

UClass* UHTTPDownload::pClassPointer = NULL;

// Class IpDrv.InternetLink
// 0x0018 (0x0208 - 0x01F0)
class AInternetLink : public AInfo
{
public:
	unsigned char                                      LinkMode;                                         		// 0x01F0 (0x0001) [0x0000000000000000]              
	unsigned char                                      InLineMode;                                       		// 0x01F1 (0x0001) [0x0000000000000000]              
	unsigned char                                      OutLineMode;                                      		// 0x01F2 (0x0001) [0x0000000000000000]              
	unsigned char                                      ReceiveMode;                                      		// 0x01F3 (0x0001) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x01F4 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                Port;                                             		// 0x01F8 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    RemoteSocket;                                     		// 0x01FC (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FPointer                                    PrivateResolveInfo;                               		// 0x0200 (0x0004) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	int                                                DataPending;                                      		// 0x0204 (0x0004) [0x0000000000000002]              ( CPF_Const )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1404 );

		return pClassPointer;
	};

	void eventResolveFailed ( );
	void eventResolved ( struct FIpAddr Addr );
	void GetLocalIP ( struct FIpAddr* Arg );
	bool StringToIpAddr ( struct FString Str, struct FIpAddr* Addr );
	struct FString IpAddrToString ( struct FIpAddr Arg );
	int GetLastError ( );
	void Resolve ( struct FString Domain );
	bool ParseURL ( struct FString URL, struct FString* Addr, int* PortNum, struct FString* LevelName, struct FString* EntryName );
	bool IsDataPending ( );
};

UClass* AInternetLink::pClassPointer = NULL;

// Class IpDrv.TcpLink
// 0x0034 (0x023C - 0x0208)
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      LinkState;                                        		// 0x0208 (0x0001) [0x0000000000000000]              
	struct FIpAddr                                     RemoteAddr;                                       		// 0x020C (0x0014) [0x0000000000000000]              
	class UClass*                                      AcceptClass;                                      		// 0x0220 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            SendFIFO;                                         		// 0x0224 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     RecvBuf;                                          		// 0x0230 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1405 );

		return pClassPointer;
	};

	void eventReceivedBinary ( int Count, unsigned char* B );
	void eventReceivedLine ( struct FString Line );
	void eventReceivedText ( struct FString Text );
	void eventClosed ( );
	void eventOpened ( );
	void eventAccepted ( );
	int ReadBinary ( int Count, unsigned char* B );
	int ReadText ( struct FString* Str );
	int SendBinary ( int Count, unsigned char* B );
	int SendText ( struct FString Str );
	bool IsConnected ( );
	bool Close ( );
	bool Open ( struct FIpAddr Addr );
	bool Listen ( );
	int BindPort ( int PortNum, unsigned long bUseNextAvailable );
};

UClass* ATcpLink::pClassPointer = NULL;

// Class IpDrv.McpServiceBase
// 0x0010 (0x004C - 0x003C)
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                               		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UMcpServiceConfig*                           McpConfig;                                        		// 0x0048 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1406 );

		return pClassPointer;
	};

	struct FString GetUserAuthURL ( struct FString McpId );
	struct FString GetAppAccessURL ( );
	struct FString GetBaseURL ( );
	void eventInit ( );
};

UClass* UMcpServiceBase::pClassPointer = NULL;

// Class IpDrv.MCPBase
// 0x0004 (0x0050 - 0x004C)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x004C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1407 );

		return pClassPointer;
	};

};

UClass* UMCPBase::pClassPointer = NULL;

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0028 (0x0078 - 0x0050)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FEventUploadConfig >                EventUploadConfigs;                               		// 0x0050 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	TArray< struct FPointer >                          MCPEventPostObjects;                              		// 0x005C (0x000C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< unsigned char >                            DisabledUploadTypes;                              		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bBinaryStats : 1;                                 		// 0x0074 (0x0004) [0x0000000000004002] [0x00000001] ( CPF_Const | CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1408 );

		return pClassPointer;
	};

	bool UploadMatchmakingStats ( struct FUniqueNetId UniqueId, class UOnlineMatchmakingStats* MMStats );
	bool UpdatePlaylistPopulation ( int PlaylistId, int NumPlayers );
	bool UploadGameplayEventsData ( struct FUniqueNetId UniqueId, TArray< unsigned char >* Payload );
	bool UploadPlayerData ( struct FUniqueNetId UniqueId, struct FString PlayerNick, class UOnlineProfileSettings* ProfileSettings, class UOnlinePlayerStorage* PlayerStorage );
};

UClass* UOnlineEventsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0028 (0x0078 - 0x0050)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FNewsCacheEntry >                   NewsItems;                                        		// 0x0050 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadNewsDelegates;                                		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bNeedsTicking : 1;                                		// 0x0068 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                  		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1409 );

		return pClassPointer;
	};

	struct FString GetNews ( unsigned char LocalUserNum, unsigned char NewsType );
	void ClearReadNewsCompletedDelegate ( struct FScriptDelegate ReadGameNewsDelegate );
	void AddReadNewsCompletedDelegate ( struct FScriptDelegate ReadNewsDelegate );
	void OnReadNewsCompleted ( unsigned long bWasSuccessful, unsigned char NewsType );
	bool ReadNews ( unsigned char LocalUserNum, unsigned char NewsType );
};

UClass* UOnlineNewsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0064 (0x00B4 - 0x0050)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RequestTitleFileListCompleteDelegates;            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseUrl;                                          		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RequestFileListURL;                               		// 0x0074 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RequestFileURL;                                   		// 0x0080 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	float                                              TimeOut;                                          		// 0x008C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FFileNameToURLMapping >             FilesToUrls;                                      		// 0x0090 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;       		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1410 );

		return pClassPointer;
	};

	struct FString GetUrlForFile ( struct FString Filename );
	void ClearRequestTitleFileListCompleteDelegate ( struct FScriptDelegate RequestTitleFileListDelegate );
	void AddRequestTitleFileListCompleteDelegate ( struct FScriptDelegate RequestTitleFileListDelegate );
	void OnRequestTitleFileListComplete ( unsigned long bWasSuccessful, TArray< struct FString > FilePaths );
	bool RequestTitleFileList ( );
	bool ClearDownloadedFile ( struct FString Filename );
	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	void AddReadTitleFileCompleteDelegate ( struct FScriptDelegate ReadTitleFileCompleteDelegate );
	bool ReadTitleFile ( struct FString FileToRead, unsigned char FileType );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
};

UClass* UOnlineTitleFileDownloadBase::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0010 (0x00C4 - 0x00B4)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray< struct FTitleFileMcp >                     TitleFiles;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DownloadCount;                                    		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1411 );

		return pClassPointer;
	};

	bool ClearDownloadedFile ( struct FString Filename );
	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	bool ReadTitleFile ( struct FString FileToRead, unsigned char FileType );
};

UClass* UOnlineTitleFileDownloadMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x000C (0x00C0 - 0x00B4)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray< struct FTitleFileWeb >                     TitleFiles;                                       		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1412 );

		return pClassPointer;
	};

	struct FString GetUrlForFile ( struct FString Filename );
	void OnFileListReceived ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	bool RequestTitleFileList ( );
	bool ClearDownloadedFile ( struct FString Filename );
	bool ClearDownloadedFiles ( );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void TriggerDelegates ( unsigned long bSuccess, struct FString FileRead );
	void OnFileDownloadComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	bool ReadTitleFile ( struct FString FileToRead, unsigned char FileType );
	bool UncompressTitleFileContents ( unsigned char FileCompressionType, TArray< unsigned char >* CompressedFileContents, TArray< unsigned char >* UncompressedFileContents );
};

UClass* UOnlineTitleFileDownloadWeb::pClassPointer = NULL;

// Class IpDrv.TitleFileDownloadCache
// 0x003C (0x008C - 0x0050)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray< struct FTitleFileCacheEntry >              TitleFiles;                                       		// 0x0050 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   LoadCompleteDelegates;                            		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   SaveCompleteDelegates;                            		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;              		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;              		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1413 );

		return pClassPointer;
	};

	bool DeleteTitleFile ( struct FString Filename );
	bool DeleteTitleFiles ( float MaxAgeSeconds );
	bool ClearCachedFile ( struct FString Filename );
	bool ClearCachedFiles ( );
	struct FString GetTitleFileLogicalName ( struct FString Filename );
	struct FString GetTitleFileHash ( struct FString Filename );
	unsigned char GetTitleFileState ( struct FString Filename );
	bool GetTitleFileContents ( struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearSaveTitleFileCompleteDelegate ( struct FScriptDelegate SaveCompleteDelegate );
	void AddSaveTitleFileCompleteDelegate ( struct FScriptDelegate SaveCompleteDelegate );
	void OnSaveTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	bool SaveTitleFile ( struct FString Filename, struct FString LogicalName, TArray< unsigned char > FileContents );
	void ClearLoadTitleFileCompleteDelegate ( struct FScriptDelegate LoadCompleteDelegate );
	void AddLoadTitleFileCompleteDelegate ( struct FScriptDelegate LoadCompleteDelegate );
	void OnLoadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	bool LoadTitleFile ( struct FString Filename );
};

UClass* UTitleFileDownloadCache::pClassPointer = NULL;

// Class IpDrv.McpMessageBase
// 0x0058 (0x00A4 - 0x004C)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                       		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned char                                      CompressionType;                                  		// 0x0058 (0x0001) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FMcpMessageContents >               MessageContentsList;                              		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpMessageList >                   MessageLists;                                     		// 0x0068 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;              		// 0x0074 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;              		// 0x0080 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;              		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;       		// 0x0098 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1414 );

		return pClassPointer;
	};

	bool CacheMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents );
	void CacheMessage ( struct FMcpMessage Message );
	bool GetMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents );
	void OnQueryMessageContentsComplete ( struct FString MessageId, unsigned long bWasSuccessful, struct FString Error );
	void QueryMessageContents ( struct FString MessageId );
	void GetMessageList ( struct FString ToUniqueUserId, struct FMcpMessageList* MessageList );
	void OnQueryMessagesComplete ( struct FString UserId, unsigned long bWasSuccessful, struct FString Error );
	void QueryMessages ( struct FString ToUniqueUserId, struct FString TitleId );
	void OnDeleteMessageComplete ( struct FString MessageId, unsigned long bWasSuccessful, struct FString Error );
	void DeleteMessage ( struct FString MessageId );
	void OnCreateMessageComplete ( struct FMcpMessage Message, unsigned long bWasSuccessful, struct FString Error );
	void CreateMessage ( struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString TitleId, struct FString PushMessage, struct FString ValidUntil, TArray< struct FString >* ToUniqueUserIds, TArray< unsigned char >* MessageContents );
	class UMcpMessageBase* CreateInstance ( );
};

UClass* UMcpMessageBase::pClassPointer = NULL;

// Class IpDrv.McpMessageManager
// 0x0058 (0x00FC - 0x00A4)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00A4 (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	struct FString                                     CreateMessageUrl;                                 		// 0x00A8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteMessageUrl;                                 		// 0x00B4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryMessagesUrl;                                 		// 0x00C0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryMessageContentsUrl;                          		// 0x00CC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteAllMessagesUrl;                             		// 0x00D8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMcpCompressMessageRequest >        CompressMessageRequests;                          		// 0x00E4 (0x000C) [0x0000000000001000]              ( CPF_Native )
	TArray< struct FMcpUncompressMessageRequest >      UncompressMessageRequests;                        		// 0x00F0 (0x000C) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1415 );

		return pClassPointer;
	};

	bool CacheMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents );
	bool GetMessageById ( struct FString MessageId, struct FMcpMessage* Message );
	void CacheMessage ( struct FMcpMessage Message );
	bool GetMessageContents ( struct FString MessageId, TArray< unsigned char >* MessageContents );
	void OnQueryMessageContentsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void QueryMessageContents ( struct FString MessageId );
	void GetMessageList ( struct FString ToUniqueUserId, struct FMcpMessageList* MessageList );
	void OnQueryMessagesRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void QueryMessages ( struct FString ToUniqueUserId, struct FString TitleId );
	void OnDeleteMessageRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void DeleteMessage ( struct FString MessageId );
	void OnCreateMessageRequestComplete ( class UHttpRequestInterface* CreateMessageRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void CreateMessage ( struct FString FromUniqueUserId, struct FString FromFriendlyName, struct FString MessageType, struct FString TitleId, struct FString PushMessage, struct FString ValidUntil, TArray< struct FString >* ToUniqueUserIds, TArray< unsigned char >* MessageContents );
	void eventFinishedAsyncUncompression ( unsigned long bWasSuccessful, struct FString MessageId, TArray< unsigned char >* UncompressedMessageContents );
	bool StartAsyncUncompression ( struct FString MessageId, unsigned char MessageCompressionType, TArray< unsigned char >* MessageContent );
	bool StartAsyncCompression ( unsigned char MessageCompressionType, class UHttpRequestInterface* Request, TArray< unsigned char >* MessageContent );
};

UClass* UMcpMessageManager::pClassPointer = NULL;

// Class IpDrv.McpUserCloudFileDownload
// 0x009C (0x00E8 - 0x004C)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                           		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ReadCloudFileUrl;                                 		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     WriteCloudFileUrl;                                		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteCloudFileUrl;                               		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMcpUserCloudFilesEntry >           UserCloudFileRequests;                            		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1416 );

		return pClassPointer;
	};

	void ClearAllDelegates ( );
	void ClearDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	void AddDeleteUserFileCompleteDelegate ( struct FScriptDelegate DeleteUserFileCompleteDelegate );
	void CallDeleteUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnDeleteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnHTTPRequestDeleteUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	bool DeleteUserFile ( struct FString UserId, struct FString Filename, unsigned long bShouldCloudDelete, unsigned long bShouldLocallyDelete );
	void ClearWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	void AddWriteUserFileCompleteDelegate ( struct FScriptDelegate WriteUserFileCompleteDelegate );
	void CallWriteUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnWriteUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnHTTPRequestWriteUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void GetUserFileIndexForRequest ( class UHttpRequestInterface* Request, int* UserIdx, int* FileIdx );
	bool WriteUserFile ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
	void ClearReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	void AddReadUserFileCompleteDelegate ( struct FScriptDelegate ReadUserFileCompleteDelegate );
	void CallReadUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnReadUserFileComplete ( unsigned long bWasSuccessful, struct FString UserId, struct FString Filename );
	void OnHTTPRequestReadUserFileComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	bool ReadUserFile ( struct FString UserId, struct FString Filename );
	void GetUserFileList ( struct FString UserId, TArray< struct FEmsFile >* UserFiles );
	void ClearEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void AddEnumerateUserFileCompleteDelegate ( struct FScriptDelegate EnumerateUserFileCompleteDelegate );
	void CallEnumerateUserFileCompleteDelegates ( unsigned long bWasSuccessful, struct FString UserId );
	void OnEnumerateUserFilesComplete ( unsigned long bWasSuccessful, struct FString UserId );
	void OnHTTPRequestEnumerateUserFilesComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void EnumerateUserFiles ( struct FString UserId );
	bool ClearFile ( struct FString UserId, struct FString Filename );
	bool ClearFiles ( struct FString UserId );
	bool GetFileContents ( struct FString UserId, struct FString Filename, TArray< unsigned char >* FileContents );
};

UClass* UMcpUserCloudFileDownload::pClassPointer = NULL;

// Class IpDrv.MeshBeacon
// 0x003C (0x0078 - 0x003C)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                MeshBeaconPort;                                   		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0044 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0048 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0048 (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bShouldTick : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0054 (0x0008) [0x0000000000000000]              
	int                                                SocketSendBufferSize;                             		// 0x005C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SocketReceiveBufferSize;                          		// 0x0060 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthTestBufferSize;                       		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinBandwidthTestBufferSize;                       		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestSendTime;                         		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              MaxBandwidthTestReceiveTime;                      		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxBandwidthHistoryEntries;                       		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1417 );

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
};

UClass* UMeshBeacon::pClassPointer = NULL;

// Class IpDrv.MeshBeaconClient
// 0x00A0 (0x0118 - 0x0078)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x0078 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FClientConnectionRequest                    ClientPendingRequest;                             		// 0x0080 (0x0024) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                             		// 0x00A4 (0x0014) [0x0000000000000000]              
	unsigned char                                      ClientBeaconState;                                		// 0x00B8 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x00B9 (0x0001) [0x0000000000000000]              
	float                                              ConnectionRequestTimeout;                         		// 0x00BC (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ConnectionRequestElapsedTime;                     		// 0x00C0 (0x0004) [0x0000000000000000]              
	struct FString                                     ResolverClassName;                                		// 0x00C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x00D0 (0x0004) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00D4 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsingRegisteredAddr : 1;                         		// 0x00D8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;            		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;       		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;       		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;    		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1418 );

		return pClassPointer;
	};

	bool SendHostNewGameSessionResponse ( unsigned long bSuccess, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnCreateNewSessionRequestReceived ( struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players );
	void OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnReceivedBandwidthTestResults ( unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats );
	void OnReceivedBandwidthTestRequest ( unsigned char TestType );
	void OnConnectionRequestResult ( unsigned char ConnectionResult );
	bool BeginBandwidthTest ( unsigned char TestType, int TestBufferSize );
	bool RequestConnection ( unsigned long bRegisterSecureAddress, struct FOnlineGameSearchResult* DesiredHost, struct FClientConnectionRequest* ClientRequest );
	void eventDestroyBeacon ( );
};

UClass* UMeshBeaconClient::pClassPointer = NULL;

// Class IpDrv.MeshBeaconHost
// 0x0064 (0x00DC - 0x0078)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray< struct FClientMeshBeaconConnection >       ClientConnections;                                		// 0x0078 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< struct FUniqueNetId >                      PendingPlayerConnections;                         		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FUniqueNetId                                OwningPlayerId;                                   		// 0x0090 (0x0008) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bAllowBandwidthTesting : 1;                       		// 0x0098 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ConnectionBacklog;                                		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;    		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;               		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;              		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1419 );

		return pClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult ( unsigned long bSucceeded, struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	bool RequestClientCreateNewSession ( struct FUniqueNetId PlayerNetId, struct FName SessionName, class UClass* SearchClass, TArray< struct FPlayerMember >* Players );
	void TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnAllPendingPlayersConnected ( );
	bool AllPlayersConnected ( TArray< struct FUniqueNetId >* Players );
	int GetConnectionIndexForPlayer ( struct FUniqueNetId PlayerNetId );
	void SetPendingPlayerConnections ( TArray< struct FUniqueNetId >* Players );
	void OnFinishedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, unsigned char TestResult, struct FConnectionBandwidthStats* BandwidthStats );
	void OnStartedBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType );
	void OnReceivedClientConnectionRequest ( struct FClientMeshBeaconConnection* NewClientConnection );
	void AllowBandwidthTesting ( unsigned long bEnabled );
	void CancelPendingBandwidthTests ( );
	bool HasPendingBandwidthTest ( );
	void CancelInProgressBandwidthTests ( );
	bool HasInProgressBandwidthTest ( );
	bool RequestClientBandwidthTest ( struct FUniqueNetId PlayerNetId, unsigned char TestType, int TestBufferSize );
	void eventDestroyBeacon ( );
	bool InitHostBeacon ( struct FUniqueNetId InOwningPlayerId );
};

UClass* UMeshBeaconHost::pClassPointer = NULL;

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0018 (0x0170 - 0x0158)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                      		// 0x0158 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	int                                                MaxLocalTalkers;                                  		// 0x015C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxRemoteTalkers;                                 		// 0x0160 (0x0004) [0x0000000000004000]              ( CPF_Config )
	unsigned long                                      bIsUsingSpeechRecognition : 1;                    		// 0x0164 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                		// 0x0168 (0x0004) [0x0000000000000000]              
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                		// 0x016C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1420 );

		return pClassPointer;
	};

	void GetRegisteredPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* OutRegisteredPlayers );
	bool IsPlayerInSession ( struct FName SessionName, struct FUniqueNetId PlayerID );
	struct FString eventGetPlayerNicknameFromIndex ( int UserIndex );
};

UClass* UOnlineSubsystemCommonImpl::pClassPointer = NULL;

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x0234 (0x0270 - 0x003C)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                     		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAuthReady : 1;                                   		// 0x0044 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	struct FSparseArray_Mirror                         ClientAuthSessions;                               		// 0x0048 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FSparseArray_Mirror                         ServerAuthSessions;                               		// 0x0078 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FSparseArray_Mirror                         PeerAuthSessions;                                 		// 0x00A8 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                          		// 0x00D8 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                          		// 0x0108 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                            		// 0x0138 (0x0030) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FScriptDelegate >                   AuthReadyDelegates;                               		// 0x0168 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientAuthRequestDelegates;                       		// 0x0174 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerAuthRequestDelegates;                       		// 0x0180 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientAuthResponseDelegates;                      		// 0x018C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerAuthResponseDelegates;                      		// 0x0198 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientAuthCompleteDelegates;                      		// 0x01A4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerAuthCompleteDelegates;                      		// 0x01B0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientAuthEndSessionRequestDelegates;             		// 0x01BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerAuthRetryRequestDelegates;                  		// 0x01C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ClientConnectionCloseDelegates;                   		// 0x01D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   ServerConnectionCloseDelegates;                   		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAuthReady__Delegate;                          		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;                  		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;                  		// 0x0204 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;                 		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;                 		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;                 		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;                 		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;        		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;             		// 0x024C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;              		// 0x0258 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;              		// 0x0264 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1421 );

		return pClassPointer;
	};

	bool GetServerAddr ( struct FIpAddr* OutServerIP, int* OutServerPort );
	bool GetServerUniqueId ( struct FUniqueNetId* OutServerUID );
	bool FindLocalServerAuthSession ( class UPlayer* ClientConnection, struct FLocalAuthSession* OutSessionInfo );
	bool FindServerAuthSession ( class UPlayer* ServerConnection, struct FAuthSession* OutSessionInfo );
	bool FindLocalClientAuthSession ( class UPlayer* ServerConnection, struct FLocalAuthSession* OutSessionInfo );
	bool FindClientAuthSession ( class UPlayer* ClientConnection, struct FAuthSession* OutSessionInfo );
	void AllLocalServerAuthSessions ( struct FLocalAuthSession* OutSessionInfo );
	void AllServerAuthSessions ( struct FAuthSession* OutSessionInfo );
	void AllLocalClientAuthSessions ( struct FLocalAuthSession* OutSessionInfo );
	void AllClientAuthSessions ( struct FAuthSession* OutSessionInfo );
	void EndAllRemoteServerAuthSessions ( );
	void EndAllLocalServerAuthSessions ( );
	void EndRemoteServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP );
	void EndLocalServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP );
	bool VerifyServerAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID );
	bool CreateServerAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int* OutAuthTicketUID );
	void EndAllRemoteClientAuthSessions ( );
	void EndAllLocalClientAuthSessions ( );
	void EndRemoteClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP );
	void EndLocalClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort );
	bool VerifyClientAuthSession ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort, int AuthTicketUID );
	bool CreateClientAuthSession ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure, int* OutAuthTicketUID );
	bool SendServerAuthRetryRequest ( );
	bool SendClientAuthEndSessionRequest ( class UPlayer* ClientConnection );
	bool SendServerAuthResponse ( class UPlayer* ClientConnection, int AuthTicketUID );
	bool SendClientAuthResponse ( int AuthTicketUID );
	bool SendServerAuthRequest ( struct FUniqueNetId ServerUID );
	bool SendClientAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID );
	void ClearServerConnectionCloseDelegate ( struct FScriptDelegate ServerConnectionCloseDelegate );
	void AddServerConnectionCloseDelegate ( struct FScriptDelegate ServerConnectionCloseDelegate );
	void OnServerConnectionClose ( class UPlayer* ServerConnection );
	void ClearClientConnectionCloseDelegate ( struct FScriptDelegate ClientConnectionCloseDelegate );
	void AddClientConnectionCloseDelegate ( struct FScriptDelegate ClientConnectionCloseDelegate );
	void OnClientConnectionClose ( class UPlayer* ClientConnection );
	void ClearServerAuthRetryRequestDelegate ( struct FScriptDelegate ServerAuthRetryRequestDelegate );
	void AddServerAuthRetryRequestDelegate ( struct FScriptDelegate ServerAuthRetryRequestDelegate );
	void OnServerAuthRetryRequest ( class UPlayer* ClientConnection );
	void ClearClientAuthEndSessionRequestDelegate ( struct FScriptDelegate ClientAuthEndSessionRequestDelegate );
	void AddClientAuthEndSessionRequestDelegate ( struct FScriptDelegate ClientAuthEndSessionRequestDelegate );
	void OnClientAuthEndSessionRequest ( class UPlayer* ServerConnection );
	void ClearServerAuthCompleteDelegate ( struct FScriptDelegate ServerAuthCompleteDelegate );
	void AddServerAuthCompleteDelegate ( struct FScriptDelegate ServerAuthCompleteDelegate );
	void OnServerAuthComplete ( unsigned long bSuccess, struct FUniqueNetId ServerUID, class UPlayer* ServerConnection, struct FString ExtraInfo );
	void ClearClientAuthCompleteDelegate ( struct FScriptDelegate ClientAuthCompleteDelegate );
	void AddClientAuthCompleteDelegate ( struct FScriptDelegate ClientAuthCompleteDelegate );
	void OnClientAuthComplete ( unsigned long bSuccess, struct FUniqueNetId ClientUID, class UPlayer* ClientConnection, struct FString ExtraInfo );
	void ClearServerAuthResponseDelegate ( struct FScriptDelegate ServerAuthResponseDelegate );
	void AddServerAuthResponseDelegate ( struct FScriptDelegate ServerAuthResponseDelegate );
	void OnServerAuthResponse ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int AuthTicketUID );
	void ClearClientAuthResponseDelegate ( struct FScriptDelegate ClientAuthResponseDelegate );
	void AddClientAuthResponseDelegate ( struct FScriptDelegate ClientAuthResponseDelegate );
	void OnClientAuthResponse ( struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int AuthTicketUID );
	void ClearServerAuthRequestDelegate ( struct FScriptDelegate ServerAuthRequestDelegate );
	void AddServerAuthRequestDelegate ( struct FScriptDelegate ServerAuthRequestDelegate );
	void OnServerAuthRequest ( class UPlayer* ClientConnection, struct FUniqueNetId ClientUID, struct FIpAddr ClientIP, int ClientPort );
	void ClearClientAuthRequestDelegate ( struct FScriptDelegate ClientAuthRequestDelegate );
	void AddClientAuthRequestDelegate ( struct FScriptDelegate ClientAuthRequestDelegate );
	void OnClientAuthRequest ( struct FUniqueNetId ServerUID, struct FIpAddr ServerIP, int ServerPort, unsigned long bSecure );
	void ClearAuthReadyDelegate ( struct FScriptDelegate AuthReadyDelegate );
	void AddAuthReadyDelegate ( struct FScriptDelegate AuthReadyDelegate );
	void OnAuthReady ( );
	bool IsReady ( );
};

UClass* UOnlineAuthInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlineGameInterfaceImpl
// 0x022C (0x0268 - 0x003C)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0040 (0x0004) [0x0000000000000002]              ( CPF_Const )
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0044 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   MigrateOnlineGameCompleteDelegates;               		// 0x0078 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   JoinMigratedOnlineGameCompleteDelegates;          		// 0x0084 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   RecalculateSkillRatingCompleteDelegates;          		// 0x0090 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x009C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      LanBeaconState;                                   		// 0x00CC (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      LanNonce[ 0x8 ];                                  		// 0x00CD (0x0008) [0x0000000000000002]              ( CPF_Const )
	int                                                LanAnnouncePort;                                  		// 0x00D8 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanGameUniqueId;                                  		// 0x00DC (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	int                                                LanPacketPlatformMask;                            		// 0x00E0 (0x0004) [0x0000000000004002]              ( CPF_Const | CPF_Config )
	float                                              LanQueryTimeLeft;                                 		// 0x00E4 (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeout;                                  		// 0x00E8 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    LanBeacon;                                        		// 0x00EC (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FPointer                                    SessionInfo;                                      		// 0x00F0 (0x0004) [0x0000000000003002]              ( CPF_Const | CPF_Native | CPF_Transient )
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x00F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0100 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x010C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0118 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0124 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x0130 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateOnlineGameWithPartyComplete__Delegate;  		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMatchmakeOnlineGameWithPartyComplete__Delegate;		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddSessionMemberComplete__Delegate;           		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMultiplayerSessionChange__Delegate;           		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateSessionPropertiesComplete__Delegate;    		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameSessionReady__Delegate;                   		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAcceptPendingGameSessionComplete__Delegate;   		// 0x0184 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGamePlayersChanged__Delegate;                 		// 0x0190 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMatchStatusChanged__Delegate;                 		// 0x019C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQuerySessionsForUserComplete__Delegate;       		// 0x01A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x01B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x01C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRetrievedGameSettingsForIP__Delegate;         		// 0x01CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x01D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;     		// 0x0208 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;          		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;     		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                   		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetNumberOfCurrentPlayersComplete__Delegate;  		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetRoomIdFromTitleService__Delegate;          		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetSessionMemberInfoComplete__Delegate;       		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnGetUserConnectionInfoComplete__Delegate;      		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1422 );

		return pClassPointer;
	};

	void ClearGetUserConnectionInfoCompleteDelegate ( struct FScriptDelegate GetUserConnectionInfoCompleteDelegate );
	void AddGetUserConnectionInfoCompleteDelegate ( struct FScriptDelegate GetUserConnectionInfoCompleteDelegate );
	void OnGetUserConnectionInfoComplete ( TArray< struct FSessionMemberInfo > OutMemberInfo, unsigned long bWasSuccessful );
	bool GetUserConnectionInfoAsync ( TArray< struct FString > UserNames );
	void ClearGetSessionMemberInfoCompleteDelegate ( struct FScriptDelegate GetSessionMemberInfoCompleteDelegate );
	void AddGetSessionMemberInfoCompleteDelegate ( struct FScriptDelegate GetSessionMemberInfoCompleteDelegate );
	void OnGetSessionMemberInfoComplete ( TArray< struct FSessionMemberInfo > OutMemberInfo, unsigned long bWasSuccessful );
	bool GetCurrentSessionMemberInfo ( struct FName SessionName, TArray< struct FSessionMemberInfo >* OutMemberInfo );
	bool GetCurrentSessionMemberInfoAsync ( unsigned char LocalUserNum, struct FName SessionName );
	void RunBandwidthTest ( );
	bool IsAllowedToNetworkHost ( );
	void ClearGetRoomIdFromTitleServiceDelegate ( struct FScriptDelegate InDelegate );
	void AddGetRoomIdFromTitleServiceDelegate ( struct FScriptDelegate InDelegate );
	void GetRoomIdFromSessionId ( struct FString SessionId );
	void GetRoomIdFromTitleService ( struct FQWord DataId );
	void OnGetRoomIdFromTitleService ( struct FQWord RoomId );
	struct FString GetRoomId ( );
	bool SendPlayerList ( TArray< class APlayerReplicationInfo* > Players );
	void ClearGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void AddGetNumberOfCurrentPlayersCompleteDelegate ( struct FScriptDelegate GetNumberOfCurrentPlayersCompleteDelegate );
	void OnGetNumberOfCurrentPlayersComplete ( int TotalPlayers );
	int GetNumberOfCurrentPlayersCached ( );
	bool GetNumberOfCurrentPlayers ( );
	void ClearQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate );
	void AddQosStatusChangedDelegate ( struct FScriptDelegate QosStatusChangedDelegate );
	void OnQosStatusChanged ( int NumComplete, int NumTotal );
	bool BindPlatformSpecificSessionToSearch ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfoBySessionName ( struct FName SessionName, unsigned char* PlatformSpecificInfo );
	bool ReadPlatformSpecificSessionInfo ( struct FOnlineGameSearchResult* DesiredGame, unsigned char* PlatformSpecificInfo );
	bool QueryNonAdvertisedData ( int StartAt, int NumberToQuery );
	void ClearJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate );
	void AddJoinMigratedOnlineGameCompleteDelegate ( struct FScriptDelegate JoinMigratedOnlineGameCompleteDelegate );
	void OnJoinMigratedOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool JoinMigratedOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	void ClearMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate );
	void AddMigrateOnlineGameCompleteDelegate ( struct FScriptDelegate MigrateOnlineGameCompleteDelegate );
	void OnMigrateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool MigrateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName );
	void ClearRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingGameCompleteDelegate );
	void AddRecalculateSkillRatingCompleteDelegate ( struct FScriptDelegate RecalculateSkillRatingCompleteDelegate );
	void OnRecalculateSkillRatingComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RecalculateSkillRating ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool AcceptGameInvite ( unsigned char LocalUserNum, struct FName SessionName );
	void ClearGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void AddGameInviteAcceptedDelegate ( unsigned char LocalUserNum, struct FScriptDelegate GameInviteAcceptedDelegate );
	void OnGameInviteAccepted ( struct FOnlineGameSearchResult* InviteResult );
	TArray< struct FOnlineArbitrationRegistrant > GetArbitratedPlayers ( struct FName SessionName );
	void ClearArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void AddArbitrationRegistrationCompleteDelegate ( struct FScriptDelegate ArbitrationRegistrationCompleteDelegate );
	void OnArbitrationRegistrationComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool RegisterForArbitration ( struct FName SessionName );
	void ClearEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void AddEndOnlineGameCompleteDelegate ( struct FScriptDelegate EndOnlineGameCompleteDelegate );
	void OnEndOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool EndOnlineGame ( struct FName SessionName );
	void ClearStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void AddStartOnlineGameCompleteDelegate ( struct FScriptDelegate StartOnlineGameCompleteDelegate );
	void OnStartOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool StartOnlineGame ( struct FName SessionName );
	void RetrieveGameSettingsForIP ( struct FString IPAddress );
	void ClearOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate RetrieveIPDelegate );
	void AddOnRetrieveGameSettingsForIPDelegate ( struct FScriptDelegate NewRetrieveIPDelegate );
	void OnRetrievedGameSettingsForIP ( unsigned long bSuccessful, struct FOnlineGameSearchResult* ConnectResult );
	void ClearUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void AddUnregisterPlayerCompleteDelegate ( struct FScriptDelegate UnregisterPlayerCompleteDelegate );
	void OnUnregisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool UnregisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool UnregisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID );
	void ClearRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void AddRegisterPlayerCompleteDelegate ( struct FScriptDelegate RegisterPlayerCompleteDelegate );
	void OnRegisterPlayerComplete ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasSuccessful );
	bool RegisterPlayers ( struct FName SessionName, TArray< struct FUniqueNetId >* Players );
	bool RegisterPlayer ( struct FName SessionName, struct FUniqueNetId PlayerID, unsigned long bWasInvited );
	bool GetResolvedConnectString ( struct FName SessionName, struct FString* ConnectInfo );
	void ClearQuerySessionsForUserCompleteDelegate ( struct FScriptDelegate QuerySessionsForUserCompleteDelegate );
	void AddQuerySessionsForUserCompleteDelegate ( struct FScriptDelegate QuerySessionsForUserCompleteDelegate );
	void OnQuerySessionsForUserComplete ( unsigned char LocalPlayerNum, unsigned long bWasSuccessful );
	bool QuerySessionsByKeyword ( unsigned char LocalPlayerNum, struct FString Keyword, class UOnlineGameSearch* SearchSettings );
	bool QuerySessionsForUser ( unsigned char LocalPlayerNum );
	void LeaveAllOnlineSessions ( unsigned long bClearSessionIfHost );
	bool LeaveOnlineSession ( unsigned char LocalPlayerNum, struct FName SessionName, unsigned long bClearSessionIfHost );
	void ClearMatchStatusChangedDelegate ( struct FScriptDelegate MatchStatusChangedDelegate );
	void AddMatchStatusChangedDelegate ( struct FScriptDelegate MatchStatusChangedDelegate );
	void OnMatchStatusChanged ( struct FName SessionName, unsigned char Status );
	void ClearGamePlayersChangedDelegate ( struct FScriptDelegate GamePlayersChangedDelegate );
	void AddGamePlayersChangedDelegate ( struct FScriptDelegate GamePlayersChangedDelegate );
	void OnGamePlayersChanged ( struct FName SessionName, TArray< struct FUniqueNetId > Players );
	void ClearAcceptPendingGameSessionCompleteDelegate ( struct FScriptDelegate AcceptPendingGameSessionCompleteDelegate );
	void AddAcceptPendingGameSessionCompleteDelegate ( struct FScriptDelegate AcceptPendingGameSessionCompleteDelegate );
	void OnAcceptPendingGameSessionComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	void AcceptPendingGameSession ( struct FName SessionName );
	void ClearGameSessionReadyDelegate ( struct FScriptDelegate GameSessionReadyDelegate );
	void AddGameSessionReadyDelegate ( struct FScriptDelegate GameSessionReadyDelegate );
	void OnGameSessionReady ( struct FName SessionName );
	void ClearUpdateSessionPropertiesCompleteDelegate ( struct FScriptDelegate UpdateSessionPropertiesCompleteDelegate );
	void AddUpdateSessionPropertiesCompleteDelegate ( struct FScriptDelegate UpdateSessionPropertiesCompleteDelegate );
	void OnUpdateSessionPropertiesComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateSessionProperties ( unsigned char ScoutingUserNum, struct FName SessionName );
	bool DeleteCustomMemberProperty ( struct FName SessionName, struct FString PropertyName );
	bool SetCustomMemberProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue );
	bool DeleteCustomSessionProperty ( struct FName SessionName, struct FString PropertyName );
	bool SetCustomSessionProperty ( struct FName SessionName, struct FString PropertyName, struct FString PropertyValue );
	void ClearMultiplayerSessionChangeDelegate ( struct FScriptDelegate MultiplayerSessionChangeDelegate );
	void AddMultiplayerSessionChangeDelegate ( struct FScriptDelegate MultiplayerSessionChangeDelegate );
	void OnMultiplayerSessionChange ( struct FName SessionName, struct FSessionUpdateInfo SessionChanges );
	void ClearAddSessionMemberCompleteDelegate ( struct FScriptDelegate AddSessionMemberCompleteDelegate );
	void AddAddSessionMemberCompleteDelegate ( struct FScriptDelegate AddSessionMemberCompleteDelegate );
	void OnAddSessionMemberComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool AddSessionMembers ( unsigned char ScoutingPlayerNum, struct FName SessionName, TArray< struct FUniqueNetId > Members );
	bool AddSessionMember ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FUniqueNetId Member );
	bool AddSessionMemberByString ( unsigned char ScoutingPlayerNum, struct FName SessionName, struct FString Member );
	bool CreateOnlineSessionWithTemplate ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings, struct FString TemplateName, struct FString SessionKeyword );
	bool InitiatedSessionSearch ( struct FName SessionName );
	bool IsHostOfSession ( struct FName SessionName );
	void ClearMatchmakeOnlineGameWithPartyCompleteDelegate ( struct FScriptDelegate MatchmakeOnlineGameWithPartyCompleteDelegate );
	void AddMatchmakeOnlineGameWithPartyCompleteDelegate ( struct FScriptDelegate MatchmakeOnlineGameWithPartyCompleteDelegate );
	void OnMatchmakeOnlineGameWithPartyComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool MatchmakeOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	void ClearCreateOnlineGameWithPartyCompleteDelegate ( struct FScriptDelegate CreateOnlineGameWithPartyCompleteDelegate );
	void AddCreateOnlineGameWithPartyCompleteDelegate ( struct FScriptDelegate CreateOnlineGameWithPartyCompleteDelegate );
	void OnCreateOnlineGameWithPartyComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGameWithParty ( unsigned char ScoutingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	void ClearJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void AddJoinOnlineGameCompleteDelegate ( struct FScriptDelegate JoinOnlineGameCompleteDelegate );
	void OnJoinOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool IsCurrentRoomOwner ( );
	bool SetRankedReadyStatus ( unsigned long bReady );
	bool IsJoinOperationInProgress ( );
	bool JoinOnlineGameByMatchingParams ( struct FQWord RoomId, class UOnlineGameSettings** JoinedGameSettings );
	void OnMapChangeComplete ( );
	void OnMapChangePending ( );
	bool JoinOnlineGameBySessionHandle ( unsigned char PlayerNum, struct FName SessionName, struct FString InSessionGuid );
	bool JoinOnlineGame ( unsigned char PlayerNum, struct FName SessionName, struct FOnlineGameSearchResult* DesiredGame );
	bool FreeSearchResults ( class UOnlineGameSearch* Search );
	void ClearCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void AddCancelFindOnlineGamesCompleteDelegate ( struct FScriptDelegate CancelFindOnlineGamesCompleteDelegate );
	void OnCancelFindOnlineGamesComplete ( unsigned long bWasSuccessful );
	bool CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	void AddFindOnlineGamesCompleteDelegate ( struct FScriptDelegate FindOnlineGamesCompleteDelegate );
	bool FindOnlineGames ( unsigned char SearchingPlayerNum, class UOnlineGameSearch* SearchSettings );
	void ClearDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void AddDestroyOnlineGameCompleteDelegate ( struct FScriptDelegate DestroyOnlineGameCompleteDelegate );
	void OnDestroyOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool DestroyOnlineGame ( struct FName SessionName );
	void ClearUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void AddUpdateOnlineGameCompleteDelegate ( struct FScriptDelegate UpdateOnlineGameCompleteDelegate );
	void OnUpdateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool UpdateOnlineGame ( struct FName SessionName, class UOnlineGameSettings* UpdatedGameSettings, unsigned long bShouldRefreshOnlineData );
	void ClearCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void AddCreateOnlineGameCompleteDelegate ( struct FScriptDelegate CreateOnlineGameCompleteDelegate );
	void OnCreateOnlineGameComplete ( struct FName SessionName, unsigned long bWasSuccessful );
	bool CreateOnlineGame ( unsigned char HostingPlayerNum, struct FName SessionName, class UOnlineGameSettings* NewGameSettings );
	class UOnlineGameSearch* GetGameSearch ( );
	class UOnlineGameSettings* GetGameSettings ( struct FName SessionName );
	void OnFindOnlineGamesComplete ( unsigned long bWasSuccessful );
};

UClass* UOnlineGameInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlineImageDownloaderWebHelper
// 0x0000 (0x003C - 0x003C)
class UOnlineImageDownloaderWebHelper : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1423 );

		return pClassPointer;
	};

	bool SaveImageToTempDir ( struct FString Filename, TArray< unsigned char > ImageData );
	bool LoadImageFromTempDir ( struct FString Filename, TArray< unsigned char >* ImageData );
};

UClass* UOnlineImageDownloaderWebHelper::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistManager
// 0x00A4 (0x00E0 - 0x003C)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	TArray< struct FPlaylist >                         Playlists;                                        		// 0x0040 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           PlaylistFileNames;                                		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FName >                             DatastoresToRefresh;                              		// 0x0058 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                DownloadCount;                                    		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                SuccessfulCount;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                VersionNumber;                                    		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FPlaylistPopulation >               PopulationData;                                   		// 0x0070 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                WorldwideTotalPlayers;                            		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                RegionTotalPlayers;                               		// 0x0080 (0x0004) [0x0000000000000000]              
	class UOnlineTitleFileInterface*                   TitleFileInterface;                               		// 0x0084 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0088 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FString                                     PopulationFileName;                               		// 0x008C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              NextPlaylistPopulationUpdateTime;                 		// 0x0098 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PlaylistPopulationUpdateInterval;                 		// 0x009C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MinPlaylistIdToReport;                            		// 0x00A0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                CurrentPlaylistId;                                		// 0x00A4 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       EventsInterfaceName;                              		// 0x00A8 (0x0008) [0x0000000000004000]              ( CPF_Config )
	int                                                DataCenterId;                                     		// 0x00B0 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     DataCenterFileName;                               		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              LastPlaylistDownloadTime;                         		// 0x00C0 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              PlaylistRefreshInterval;                          		// 0x00C4 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;               		// 0x00C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;      		// 0x00D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1424 );

		return pClassPointer;
	};

	void ParseDataCenterId ( TArray< unsigned char >* Data );
	void OnReadDataCenterIdComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ReadDataCenterId ( );
	void eventSendPlaylistPopulationUpdate ( int NumPlayers );
	void GetPopulationInfoFromPlaylist ( int PlaylistId, int* WorldwideTotal, int* RegionTotal );
	void ParsePlaylistPopulationData ( TArray< unsigned char >* Data );
	void OnPlaylistPopulationDataUpdated ( );
	void OnReadPlaylistPopulationComplete ( unsigned long bWasSuccessful, struct FString Filename );
	void ReadPlaylistPopulation ( );
	void Reset ( );
	void GetContentIdsFromPlaylist ( int PlaylistId, TArray< int >* ContentIds );
	class UClass* GetInventorySwapFromPlaylist ( int PlaylistId, class UClass* SourceInventory );
	void GetMapCycleFromPlaylist ( int PlaylistId, TArray< struct FName >* MapCycle );
	struct FString GetUrlFromPlaylist ( int PlaylistId );
	int GetMatchType ( int PlaylistId );
	bool IsPlaylistArbitrated ( int PlaylistId );
	void GetLoadBalanceIdFromPlaylist ( int PlaylistId, int* LoadBalanceId );
	void GetTeamInfoFromPlaylist ( int PlaylistId, int* TeamSize, int* TeamCount, int* MaxPartySize );
	bool PlaylistSupportsDedicatedServers ( int PlaylistId );
	bool HasAnyGameSettings ( int PlaylistId );
	class UOnlineGameSettings* GetGameSettings ( int PlaylistId, int GameSettingsId );
	void FinalizePlaylistObjects ( );
	void OnReadTitleFileComplete ( unsigned long bWasSuccessful, struct FString Filename );
	bool ShouldRefreshPlaylists ( );
	void DetermineFilesToDownload ( );
	void DownloadPlaylist ( );
	void OnReadPlaylistComplete ( unsigned long bWasSuccessful );
};

UClass* UOnlinePlaylistManager::pClassPointer = NULL;

// Class IpDrv.PartyBeacon
// 0x002C (0x0068 - 0x003C)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x003C (0x0004) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	int                                                PartyBeaconPort;                                  		// 0x0040 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FPointer                                    Socket;                                           		// 0x0044 (0x0004) [0x0000000000003000]              ( CPF_Native | CPF_Transient )
	unsigned long                                      bIsInTick : 1;                                    		// 0x0048 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0048 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                                  		// 0x0048 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x004C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ElapsedHeartbeatTime;                             		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0054 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                    		// 0x005C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1425 );

		return pClassPointer;
	};

	void OnDestroyComplete ( );
	void eventDestroyBeacon ( );
};

UClass* UPartyBeacon::pClassPointer = NULL;

// Class IpDrv.PartyBeaconClient
// 0x007C (0x00E4 - 0x0068)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x0068 (0x0008) [0x0000000000000002]              ( CPF_Const )
	struct FPartyReservation                           PendingRequest;                                   		// 0x0070 (0x0018) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ClientBeaconState;                                		// 0x0088 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x0089 (0x0001) [0x0000000000000000]              
	float                                              ReservationRequestTimeout;                        		// 0x008C (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              ReservationRequestElapsedTime;                    		// 0x0090 (0x0004) [0x0000000000000000]              
	struct FString                                     ResolverClassName;                                		// 0x0094 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ResolverClass;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00A4 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;         		// 0x00A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;            		// 0x00B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x00C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                        		// 0x00CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                   		// 0x00D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1426 );

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
	bool CancelReservation ( struct FUniqueNetId CancellingPartyLeader );
	bool RequestReservationUpdate ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* PlayersToAdd );
	bool RequestReservation ( struct FUniqueNetId RequestingPartyLeader, struct FOnlineGameSearchResult* DesiredHost, TArray< struct FPlayerReservation >* Players );
	void OnHostHasCancelled ( );
	void OnHostIsReady ( );
	void OnTravelRequestReceived ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void OnReservationCountUpdated ( int ReservationRemaining );
	void OnReservationRequestComplete ( unsigned char ReservationResult );
};

UClass* UPartyBeaconClient::pClassPointer = NULL;

// Class IpDrv.PartyBeaconHost
// 0x0068 (0x00D0 - 0x0068)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray< struct FClientBeaconConnection >           Clients;                                          		// 0x0068 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                NumTeams;                                         		// 0x0074 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumPlayersPerTeam;                                		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumReservations;                                  		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                NumConsumedReservations;                          		// 0x0080 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FPartyReservation >                 Reservations;                                     		// 0x0084 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FName                                       OnlineSessionName;                                		// 0x0090 (0x0008) [0x0000000000000000]              
	int                                                ConnectionBacklog;                                		// 0x0098 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ForceTeamNum;                                     		// 0x009C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ReservedHostTeamNum;                              		// 0x00A0 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bBestFitTeamAssignment : 1;                       		// 0x00A4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      BeaconState;                                      		// 0x00A8 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FScriptDelegate                             __OnReservationChange__Delegate;                  		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                   		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;         		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1427 );

		return pClassPointer;
	};

	int GetMaxAvailableTeamSize ( );
	void GetPartyLeaders ( TArray< struct FUniqueNetId >* PartyLeaders );
	void GetPlayers ( TArray< struct FUniqueNetId >* Players );
	void AppendReservationSkillsToSearch ( class UOnlineGameSearch* Search );
	void eventUnregisterParty ( struct FUniqueNetId PartyLeader );
	void eventUnregisterPartyMembers ( );
	void eventRegisterPartyMembers ( );
	bool AreReservationsFull ( );
	void TellClientsHostHasCancelled ( );
	void TellClientsHostIsReady ( );
	void TellClientsToTravel ( struct FName SessionName, class UClass* SearchClass, unsigned char* PlatformSpecificInfo );
	void eventDestroyBeacon ( );
	void OnClientCancellationReceived ( struct FUniqueNetId PartyLeader );
	void OnReservationsFull ( );
	void OnReservationChange ( );
	void HandlePlayerLogout ( struct FUniqueNetId PlayerID, unsigned long bMaintainParty );
	int GetExistingReservation ( struct FUniqueNetId* PartyLeader );
	unsigned char UpdatePartyReservationEntry ( struct FUniqueNetId PartyLeader, TArray< struct FPlayerReservation >* PlayerMembers );
	unsigned char AddPartyReservationEntry ( struct FUniqueNetId PartyLeader, int TeamNum, unsigned long bIsHost, TArray< struct FPlayerReservation >* PlayerMembers );
	bool InitHostBeacon ( int InNumTeams, int InNumPlayersPerTeam, int InNumReservations, struct FName InSessionName, int InForceTeamNum );
	void PauseReservationRequests ( unsigned long bPause );
};

UClass* UPartyBeaconHost::pClassPointer = NULL;

// Class IpDrv.TcpipConnection
// 0x0024 (0x9068 - 0x9044)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x9044 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1428 );

		return pClassPointer;
	};

};

UClass* UTcpipConnection::pClassPointer = NULL;

// Class IpDrv.TcpNetDriver
// 0x001C (0x01C0 - 0x01A4)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                       		// 0x01A4 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned long                                      LogPortUnreach : 1;                               		// 0x01A8 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	unsigned char                                      UnknownData00[ 0x14 ];                            		// 0x01AC (0x0014) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1429 );

		return pClassPointer;
	};

};

UClass* UTcpNetDriver::pClassPointer = NULL;

// Class IpDrv.WebRequest
// 0x00BC (0x00F8 - 0x003C)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                       		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     URI;                                              		// 0x0048 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     UserName;                                         		// 0x0054 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Password;                                         		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ContentLength;                                    		// 0x006C (0x0004) [0x0000000000000000]              
	struct FString                                     ContentType;                                      		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      RequestType;                                      		// 0x007C (0x0001) [0x0000000000000000]              
	struct FMap_Mirror                                 HeaderMap;                                        		// 0x0080 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FMap_Mirror                                 VariableMap;                                      		// 0x00BC (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1430 );

		return pClassPointer;
	};

	int GetHexDigit ( struct FString D );
	void DecodeFormData ( struct FString Data, int MaxValueLength, int MaxLineLength );
	void ProcessHeaderString ( struct FString S );
	void Dump ( );
	void GetVariables ( TArray< struct FString >* varNames );
	struct FString GetVariableNumber ( struct FString VariableName, int Number, struct FString DefaultValue );
	int GetVariableCount ( struct FString VariableName );
	struct FString GetVariable ( struct FString VariableName, struct FString DefaultValue );
	void AddVariable ( struct FString VariableName, struct FString Value );
	void GetHeaders ( TArray< struct FString >* Headers );
	struct FString GetHeader ( struct FString HeaderName, struct FString DefaultValue );
	void AddHeader ( struct FString HeaderName, struct FString Value );
	struct FString EncodeBase64 ( struct FString Decoded );
	struct FString DecodeBase64 ( struct FString Encoded );
};

UClass* UWebRequest::pClassPointer = NULL;

// Class IpDrv.WebResponse
// 0x0068 (0x00A4 - 0x003C)
class UWebResponse : public UObject
{
public:
	TArray< struct FString >                           Headers;                                          		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMap_Mirror                                 ReplacementMap;                                   		// 0x0048 (0x003C) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FString                                     IncludePath;                                      		// 0x0084 (0x000C) [0x0000000000404002]              ( CPF_Const | CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CharSet;                                          		// 0x0090 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class AWebConnection*                              Connection;                                       		// 0x009C (0x0004) [0x0000000000000000]              
	unsigned long                                      bSentText : 1;                                    		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1431 );

		return pClassPointer;
	};

	bool SentResponse ( );
	bool SentText ( );
	void Redirect ( struct FString URL );
	void SendStandardHeaders ( struct FString ContentType, unsigned long bCache );
	void HTTPError ( int ErrorNum, struct FString Data );
	void SendHeaders ( );
	void AddHeader ( struct FString Header, unsigned long bReplace );
	void HTTPHeader ( struct FString Header );
	void HttpResponse ( struct FString Header );
	void FailAuthentication ( struct FString Realm );
	bool SendCachedFile ( struct FString Filename, struct FString ContentType );
	void eventSendBinary ( int Count, unsigned char* B );
	void eventSendText ( struct FString Text, unsigned long bNoCRLF );
	void Dump ( );
	struct FString GetHTTPExpiration ( int OffsetSeconds );
	struct FString LoadParsedUHTM ( struct FString Filename );
	bool IncludeBinaryFile ( struct FString Filename );
	bool IncludeUHTM ( struct FString Filename );
	void ClearSubst ( );
	void Subst ( struct FString Variable, struct FString Value, unsigned long bClear );
	bool FileExists ( struct FString Filename );
};

UClass* UWebResponse::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistProvider
// 0x0020 (0x0084 - 0x0064)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                       		// 0x0064 (0x0004) [0x0000000000004000]              ( CPF_Config )
	TArray< struct FName >                             PlaylistGameTypeNames;                            		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0074 (0x000C) [0x000000000040C002]              ( CPF_Const | CPF_Config | CPF_Localized | CPF_NeedCtorLink )
	int                                                Priority;                                         		// 0x0080 (0x0004) [0x0000000000004000]              ( CPF_Config )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1432 );

		return pClassPointer;
	};

};

UClass* UOnlinePlaylistProvider::pClassPointer = NULL;

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0044 (0x00AC - 0x0068)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                                		// 0x0068 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UClass*                                      ProviderClass;                                    		// 0x0074 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< class UUIResourceDataProvider* >           RankedDataProviders;                              		// 0x0078 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           UnrankedDataProviders;                            		// 0x0084 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           RecModeDataProviders;                             		// 0x0090 (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UUIResourceDataProvider* >           PrivateDataProviders;                             		// 0x009C (0x000C) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	class UOnlinePlaylistManager*                      PlaylistMan;                                      		// 0x00A8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 1433 );

		return pClassPointer;
	};

	int eventGetMatchTypeForPlaylistId ( int PlaylistId );
	class UOnlinePlaylistProvider* GetOnlinePlaylistProvider ( struct FName ProviderTag, int PlaylistId, int* ProviderIndex );
	bool GetPlaylistProvider ( struct FName ProviderTag, int ProviderIndex, class UUIResourceDataProvider** out_Provider );
	bool GetResourceProviders ( struct FName ProviderTag, TArray< class UUIResourceDataProvider* >* out_Providers );
	void eventInit ( );
};

UClass* UUIDataStore_OnlinePlaylists::pClassPointer = NULL;

// Class IpDrv.WebApplication
// 0x0014 (0x0050 - 0x003C)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                        		// 0x003C (0x0004) [0x0000000000000000]              
	class AWebServer*                                  WebServer;                                        		// 0x0040 (0x0004) [0x0000000000000000]              
	struct FString                                     Path;                                             		// 0x0044 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38014 );

		return pClassPointer;
	};

	void PostQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Query ( class UWebRequest* Request, class UWebResponse* Response );
	bool PreQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void CleanupApp ( );
	void Cleanup ( );
	void Init ( );
};

UClass* UWebApplication::pClassPointer = NULL;

// Class IpDrv.WebServer
// 0x014C (0x0388 - 0x023C)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                       		// 0x023C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Applications[ 0xA ];                              		// 0x0248 (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ApplicationPaths[ 0xA ];                          		// 0x02C0 (0x0078) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	unsigned long                                      bEnabled : 1;                                     		// 0x0338 (0x0004) [0x0000000000004000] [0x00000001] ( CPF_Config )
	int                                                ListenPort;                                       		// 0x033C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxConnections;                                   		// 0x0340 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                DefaultApplication;                               		// 0x0344 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ExpirationSeconds;                                		// 0x0348 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     ServerURL;                                        		// 0x034C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebApplication*                             ApplicationObjects[ 0xA ];                        		// 0x0358 (0x0028) [0x0000000000000000]              
	int                                                ConnectionCount;                                  		// 0x0380 (0x0004) [0x0000000000000000]              
	int                                                ConnID;                                           		// 0x0384 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38017 );

		return pClassPointer;
	};

	class UWebApplication* GetApplication ( struct FString URI, struct FString* SubURI );
	void eventLostChild ( class AActor* C );
	void eventGainedChild ( class AActor* C );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* AWebServer::pClassPointer = NULL;

// Class IpDrv.HelloWeb
// 0x0000 (0x0050 - 0x0050)
class UHelloWeb : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38033 );

		return pClassPointer;
	};

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
	void Init ( );
};

UClass* UHelloWeb::pClassPointer = NULL;

// Class IpDrv.ImageServer
// 0x0000 (0x0050 - 0x0050)
class UImageServer : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38052 );

		return pClassPointer;
	};

	void eventQuery ( class UWebRequest* Request, class UWebResponse* Response );
};

UClass* UImageServer::pClassPointer = NULL;

// Class IpDrv.McpServiceConfig
// 0x003C (0x0078 - 0x003C)
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                         		// 0x003C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     Domain;                                           		// 0x0048 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TitleId;                                          		// 0x0054 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AppKey;                                           		// 0x0060 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AppSecret;                                        		// 0x006C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38100 );

		return pClassPointer;
	};

	struct FString GetUserAuthTicket ( struct FString McpId );
};

UClass* UMcpServiceConfig::pClassPointer = NULL;

// Class IpDrv.McpClashMobBase
// 0x0054 (0x00A0 - 0x004C)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                             		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;         		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;      		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;            		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;   		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;  		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38120 );

		return pClassPointer;
	};

	void UpdateChallengeUserReward ( struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward );
	void OnUpdateChallengeUserRewardComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error );
	void UpdateChallengeUserProgress ( struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress );
	void OnUpdateChallengeUserProgressComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error );
	void GetChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus );
	void QueryChallengeMultiUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, TArray< struct FString >* UserIdsToRead );
	void QueryChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId );
	void OnQueryChallengeUserStatusComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error );
	void AcceptChallenge ( struct FString UniqueChallengeId, struct FString UniqueUserId );
	void OnAcceptChallengeComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString UniqueUserId, struct FString Error );
	void DeleteCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void ClearCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void GetChallengeFileContents ( struct FString UniqueChallengeId, struct FString DLName, TArray< unsigned char >* OutFileContents );
	void DownloadChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void GetChallengeFileList ( struct FString UniqueChallengeId, TArray< struct FMcpClashMobChallengeFile >* OutChallengeFiles );
	void OnDownloadChallengeFileComplete ( unsigned long bWasSuccessful, struct FString UniqueChallengeId, struct FString DLName, struct FString Filename, struct FString Error );
	void GetChallengeList ( TArray< struct FMcpClashMobChallengeEvent >* OutChallengeEvents );
	void QueryChallengeList ( );
	void OnQueryChallengeListComplete ( unsigned long bWasSuccessful, struct FString Error );
	class UMcpClashMobBase* CreateInstance ( );
};

UClass* UMcpClashMobBase::pClassPointer = NULL;

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x00C0 - 0x00C0)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38404 );

		return pClassPointer;
	};

	struct FString GetUrlForFile ( struct FString Filename );
};

UClass* UMcpClashMobFileDownload::pClassPointer = NULL;

// Class IpDrv.McpClashMobManager
// 0x00F0 (0x0190 - 0x00A0)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                                 		// 0x00A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ChallengeStatusUrl;                               		// 0x00AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ChallengeMultiStatusUrl;                          		// 0x00B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AcceptChallengeUrl;                               		// 0x00C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     UpdateChallengeProgressUrl;                       		// 0x00D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     UpdateRewardProgressUrl;                          		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                         		// 0x00E8 (0x0004) [0x0000000000000000]              
	TArray< struct FMcpChallengeUserRequest >          ChallengeUserRequests;                            		// 0x00EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpClashMobChallengeEvent >        ChallengeEvents;                                  		// 0x00F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpClashMobChallengeUserStatus >   ChallengeUserStatus;                              		// 0x0104 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                          		// 0x0110 (0x0068) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMcpClashMobChallengeUserStatus >   TempChallengeUserStatusArray;                     		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UOnlineTitleFileCacheInterface*              FileCache;                                        		// 0x0184 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0188 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UMcpClashMobFileDownload*                    FileDownloader;                                   		// 0x018C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38410 );

		return pClassPointer;
	};

	void OnUpdateChallengeUserRewardHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void UpdateChallengeUserReward ( struct FString UniqueChallengeId, struct FString UniqueUserId, int UserReward );
	void OnUpdateChallengeUserProgressHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void UpdateChallengeUserProgress ( struct FString UniqueChallengeId, struct FString UniqueUserId, unsigned long bDidComplete, int GoalProgress );
	void GetChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, struct FMcpClashMobChallengeUserStatus* OutChallengeUserStatus );
	void OnQueryChallengeMultiStatusHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryChallengeMultiUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId, TArray< struct FString >* UserIdsToRead );
	void OnQueryChallengeStatusHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryChallengeUserStatus ( struct FString UniqueChallengeId, struct FString UniqueUserId );
	void OnAcceptChallengeHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void AcceptChallenge ( struct FString UniqueChallengeId, struct FString UniqueUserId );
	void DeleteCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void ClearCachedChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void GetChallengeFileContents ( struct FString UniqueChallengeId, struct FString DLName, TArray< unsigned char >* OutFileContents );
	void OnDownloadMcpFileComplete ( unsigned long bWasSuccessful, struct FString DLName );
	void OnLoadCachedFileComplete ( unsigned long bWasSuccessful, struct FString DLName );
	void DownloadChallengeFile ( struct FString UniqueChallengeId, struct FString DLName );
	void GetChallengeFileList ( struct FString UniqueChallengeId, TArray< struct FMcpClashMobChallengeFile >* OutChallengeFiles );
	void GetChallengeList ( TArray< struct FMcpClashMobChallengeEvent >* OutChallengeEvents );
	void OnQueryChallengeListHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryChallengeList ( );
	void Init ( );
};

UClass* UMcpClashMobManager::pClassPointer = NULL;

// Class IpDrv.McpGroupsBase
// 0x0084 (0x00D0 - 0x004C)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                        		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMcpGroupList >                     GroupLists;                                       		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;                		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;                		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;                		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;          		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;            		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;         		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;            		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;          		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;          		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38619 );

		return pClassPointer;
	};

	void OnAcceptGroupInviteComplete ( struct FString GroupID, unsigned long bWasSuccessful, struct FString Error );
	void AcceptGroupInvite ( struct FString UniqueUserId, struct FString GroupID, unsigned long bShouldAccept );
	void GetGroupInviteList ( struct FString UserId, struct FMcpGroupList* InviteList );
	void OnQueryGroupInvitesComplete ( unsigned long bWasSuccessful, struct FString Error );
	void QueryGroupInvites ( struct FString UniqueUserId );
	void OnDeleteAllGroupsComplete ( struct FString RequesterId, unsigned long bWasSuccessful, struct FString Error );
	void DeleteAllGroups ( struct FString OwnerId );
	void OnRemoveGroupMembersComplete ( struct FString GroupID, unsigned long bWasSuccessful, struct FString Error );
	void RemoveGroupMembers ( struct FString OwnerId, struct FString GroupID, TArray< struct FString >* MemberIds );
	void OnAddGroupMembersComplete ( struct FString GroupID, unsigned long bWasSuccessful, struct FString Error );
	void AddGroupMembers ( struct FString OwnerId, struct FString GroupID, unsigned long bRequiresAcceptance, TArray< struct FString >* MemberIds );
	void GetGroupMembers ( struct FString GroupID, TArray< struct FMcpGroupMember >* GroupMembers );
	void OnQueryGroupMembersComplete ( struct FString GroupID, unsigned long bWasSuccessful, struct FString Error );
	void QueryGroupMembers ( struct FString UniqueUserId, struct FString GroupID );
	void GetGroupList ( struct FString UserId, struct FMcpGroupList* GroupList );
	void OnQueryGroupsComplete ( struct FString UserId, unsigned long bWasSuccessful, struct FString Error );
	void QueryGroups ( struct FString RequesterId );
	void OnDeleteGroupComplete ( struct FString GroupID, unsigned long bWasSuccessful, struct FString Error );
	void DeleteGroup ( struct FString UniqueUserId, struct FString GroupID );
	void OnCreateGroupComplete ( struct FMcpGroup Group, unsigned long bWasSuccessful, struct FString Error );
	void CreateGroup ( struct FString OwnerId, struct FString GroupName );
	class UMcpGroupsBase* CreateInstance ( );
};

UClass* UMcpGroupsBase::pClassPointer = NULL;

// Class IpDrv.McpGroupsManager
// 0x009C (0x016C - 0x00D0)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                   		// 0x00D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteGroupUrl;                                   		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryGroupsUrl;                                   		// 0x00E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryGroupMembersUrl;                             		// 0x00F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AddGroupMembersUrl;                               		// 0x0100 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RemoveGroupMembersUrl;                            		// 0x010C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteAllGroupsUrl;                               		// 0x0118 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     AcceptGroupInviteUrl;                             		// 0x0124 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RejectGroupInviteUrl;                             		// 0x0130 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;         		// 0x013C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;   		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;     		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;   		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38728 );

		return pClassPointer;
	};

	void CacheGroupMember ( struct FString MemberId, struct FString GroupID, unsigned char AcceptState );
	void CacheGroup ( struct FString RequesterId, struct FMcpGroup Group );
	void OnAcceptGroupInviteRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void AcceptGroupInvite ( struct FString UniqueUserId, struct FString GroupID, unsigned long bShouldAccept );
	void OnDeleteAllGroupsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void DeleteAllGroups ( struct FString UniqueUserId );
	void OnRemoveGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void RemoveGroupMembers ( struct FString UniqueUserId, struct FString GroupID, TArray< struct FString >* MemberIds );
	void OnAddGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void AddGroupMembers ( struct FString UniqueUserId, struct FString GroupID, unsigned long bRequiresAcceptance, TArray< struct FString >* MemberIds );
	void GetGroupMembers ( struct FString GroupID, TArray< struct FMcpGroupMember >* GroupMembers );
	void OnQueryGroupMembersRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void QueryGroupMembers ( struct FString UniqueUserId, struct FString GroupID );
	void GetGroupList ( struct FString UserId, struct FMcpGroupList* GroupList );
	void OnQueryGroupsRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void QueryGroups ( struct FString RequesterId );
	void OnDeleteGroupRequestComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void DeleteGroup ( struct FString UniqueUserId, struct FString GroupID );
	void OnCreateGroupRequestComplete ( class UHttpRequestInterface* CreateGroupRequest, class UHttpResponseInterface* HttpResponse, unsigned long bWasSuccessful );
	void CreateGroup ( struct FString UniqueUserId, struct FString GroupName );
};

UClass* UMcpGroupsManager::pClassPointer = NULL;

// Class IpDrv.McpIdMappingBase
// 0x0024 (0x0070 - 0x004C)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                            		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;                 		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;              		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38888 );

		return pClassPointer;
	};

	void GetIdMappings ( struct FString ExternalType, TArray< struct FMcpIdMapping >* IDMappings );
	void OnQueryMappingsComplete ( struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error );
	void QueryMappings ( struct FString ExternalType, TArray< struct FString >* ExternalIds );
	void OnAddMappingComplete ( struct FString McpId, struct FString ExternalId, struct FString ExternalType, unsigned long bWasSuccessful, struct FString Error );
	void AddMapping ( struct FString McpId, struct FString ExternalId, struct FString ExternalType );
	class UMcpIdMappingBase* CreateInstance ( );
};

UClass* UMcpIdMappingBase::pClassPointer = NULL;

// Class IpDrv.McpIdMappingManager
// 0x003C (0x00AC - 0x0070)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray< struct FMcpIdMapping >                     AccountMappings;                                  		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddMappingUrl;                                    		// 0x007C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryMappingUrl;                                  		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FAddMappingRequest >                AddMappingRequests;                               		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FQueryMappingRequest >              QueryMappingRequests;                             		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38923 );

		return pClassPointer;
	};

	void GetIdMappings ( struct FString ExternalType, TArray< struct FMcpIdMapping >* IDMappings );
	void OnQueryMappingsRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryMappings ( struct FString ExternalType, TArray< struct FString >* ExternalIds );
	void OnAddMappingRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void AddMapping ( struct FString McpId, struct FString ExternalId, struct FString ExternalType );
};

UClass* UMcpIdMappingManager::pClassPointer = NULL;

// Class IpDrv.McpManagedValueManagerBase
// 0x003C (0x0088 - 0x004C)
class UMcpManagedValueManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpManagedValueManagerClassName;                  		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;             		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnReadSaveSlotComplete__Delegate;               		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnUpdateValueComplete__Delegate;                		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteValueComplete__Delegate;                		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 38986 );

		return pClassPointer;
	};

	void OnDeleteValueComplete ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, unsigned long bWasSuccessful, struct FString Error );
	void DeleteValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId );
	void OnUpdateValueComplete ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value, unsigned long bWasSuccessful, struct FString Error );
	void UpdateValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value );
	int GetValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId );
	TArray< struct FManagedValue > GetValues ( struct FString McpId, struct FString SaveSlot );
	void OnReadSaveSlotComplete ( struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error );
	void ReadSaveSlot ( struct FString McpId, struct FString SaveSlot );
	void OnCreateSaveSlotComplete ( struct FString McpId, struct FString SaveSlot, unsigned long bWasSuccessful, struct FString Error );
	void CreateSaveSlot ( struct FString McpId, struct FString SaveSlot );
	class UMcpManagedValueManagerBase* CreateInstance ( );
};

UClass* UMcpManagedValueManagerBase::pClassPointer = NULL;

// Class IpDrv.McpManagedValueManager
// 0x006C (0x00F4 - 0x0088)
class UMcpManagedValueManager : public UMcpManagedValueManagerBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ReadSaveSlotUrl;                                  		// 0x0094 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     UpdateValueUrl;                                   		// 0x00A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteValueUrl;                                   		// 0x00AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FManagedValueSaveSlot >             SaveSlots;                                        		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UMcpManagedValueManager_FSaveSlotRequestState > CreateSaveSlotRequests;                           		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UMcpManagedValueManager_FSaveSlotRequestState > ReadSaveSlotRequests;                             		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FValueRequestState >                UpdateValueRequests;                              		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FValueRequestState >                DeleteValueRequests;                              		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 39053 );

		return pClassPointer;
	};

	void OnDeleteValueRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void DeleteValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId );
	void OnUpdateValueRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void UpdateValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId, int Value );
	int GetValue ( struct FString McpId, struct FString SaveSlot, struct FName ValueId );
	TArray< struct FManagedValue > GetValues ( struct FString McpId, struct FString SaveSlot );
	void OnReadSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void ReadSaveSlot ( struct FString McpId, struct FString SaveSlot );
	void ParseValuesForSaveSlot ( struct FString McpId, struct FString SaveSlot, struct FString JsonPayload );
	int FindSaveSlotIndex ( struct FString McpId, struct FString SaveSlot );
	void OnCreateSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void CreateSaveSlot ( struct FString McpId, struct FString SaveSlot );
};

UClass* UMcpManagedValueManager::pClassPointer = NULL;

// Class IpDrv.McpServerTimeBase
// 0x0018 (0x0064 - 0x004C)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                           		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;            		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 39382 );

		return pClassPointer;
	};

	struct FString GetLastServerTime ( );
	void OnQueryServerTimeComplete ( unsigned long bWasSuccessful, struct FString DateTimeStr, struct FString Error );
	void QueryServerTime ( );
	class UMcpServerTimeBase* CreateInstance ( );
};

UClass* UMcpServerTimeBase::pClassPointer = NULL;

// Class IpDrv.McpServerTimeManager
// 0x001C (0x0080 - 0x0064)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                     		// 0x0064 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     LastTimeStamp;                                    		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UHttpRequestInterface*                       HTTPRequestServerTime;                            		// 0x007C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 39397 );

		return pClassPointer;
	};

	struct FString GetLastServerTime ( );
	void OnQueryServerTimeHTTPRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryServerTime ( );
};

UClass* UMcpServerTimeManager::pClassPointer = NULL;

// Class IpDrv.McpUserInventoryBase
// 0x0084 (0x00D0 - 0x004C)
class UMcpUserInventoryBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserInventoryClassName;                        		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnCreateSaveSlotComplete__Delegate;             		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteSaveSlotComplete__Delegate;             		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQuerySaveSlotListComplete__Delegate;          		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryInventoryItemsComplete__Delegate;        		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnPurchaseItemComplete__Delegate;               		// 0x0088 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnSellItemComplete__Delegate;                   		// 0x0094 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnEarnItemComplete__Delegate;                   		// 0x00A0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnConsumeItemComplete__Delegate;                		// 0x00AC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteItemComplete__Delegate;                 		// 0x00B8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRecordIapComplete__Delegate;                  		// 0x00C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 39611 );

		return pClassPointer;
	};

	void OnRecordIapComplete ( struct FString McpId, struct FString SaveSlotId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error );
	void RecordIap ( struct FString McpId, struct FString SaveSlotId, struct FString Receipt );
	void OnDeleteItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, unsigned long bWasSuccessful, struct FString Error );
	void DeleteItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion );
	void OnConsumeItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error );
	void ConsumeItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion );
	void OnEarnItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error );
	void EarnItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion );
	void OnSellItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error );
	void SellItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray< struct FMcpInventoryItemContainer >* ExpectedResultItems );
	void OnPurchaseItemComplete ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > UpdatedItemIds, unsigned long bWasSuccessful, struct FString Error );
	void PurchaseItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > PurchaseItemIds, int Quantity, int StoreVersion, float Scalar );
	bool GetInventoryItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem* OutInventoryItem );
	void GetInventoryItems ( struct FString McpId, struct FString SaveSlotId, TArray< struct FMcpInventoryItem >* OutInventoryItems );
	void OnQueryInventoryItemsComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error );
	void QueryInventoryItems ( struct FString McpId, struct FString SaveSlotId );
	void OnQuerySaveSlotListComplete ( struct FString McpId, unsigned long bWasSuccessful, struct FString Error );
	TArray< struct FString > GetSaveSlotList ( struct FString McpId );
	void QuerySaveSlotList ( struct FString McpId );
	void OnDeleteSaveSlotComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error );
	void DeleteSaveSlot ( struct FString McpId, struct FString SaveSlotId );
	void OnCreateSaveSlotComplete ( struct FString McpId, struct FString SaveSlotId, unsigned long bWasSuccessful, struct FString Error );
	void CreateSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId );
	class UMcpUserInventoryBase* CreateInstance ( );
};

UClass* UMcpUserInventoryBase::pClassPointer = NULL;

// Class IpDrv.McpUserInventoryManager
// 0x00B4 (0x0184 - 0x00D0)
class UMcpUserInventoryManager : public UMcpUserInventoryBase
{
public:
	struct FString                                     CreateSaveSlotUrl;                                		// 0x00D0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteSaveSlotUrl;                                		// 0x00DC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ListSaveSlotUrl;                                  		// 0x00E8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ListItemsUrl;                                     		// 0x00F4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     PurchaseItemUrl;                                  		// 0x0100 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     SellItemUrl;                                      		// 0x010C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     EarnItemUrl;                                      		// 0x0118 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     ConsumeItemUrl;                                   		// 0x0124 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteItemUrl;                                    		// 0x0130 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     IapRecordUrl;                                     		// 0x013C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FMcpInventorySaveSlot >             SaveSlots;                                        		// 0x0148 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState > SaveSlotRequests;                                 		// 0x0154 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState > ListSaveSlotRequests;                             		// 0x0160 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState > ListItemsRequests;                                		// 0x016C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FInventoryItemRequestState >        ItemRequests;                                     		// 0x0178 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 39777 );

		return pClassPointer;
	};

	void OnRecordIapRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void RecordIap ( struct FString McpId, struct FString SaveSlotId, struct FString Receipt );
	void OnDeleteItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void DeleteItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int StoreVersion );
	void OnConsumeItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void ConsumeItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion );
	void OnEarnItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void EarnItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, int Quantity, int StoreVersion );
	void OnSellItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void SellItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, int Quantity, int StoreVersion, TArray< struct FMcpInventoryItemContainer >* ExpectedResultItems );
	void OnPurchaseItemRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void PurchaseItem ( struct FString McpId, struct FString SaveSlotId, struct FString GlobalItemId, TArray< struct FString > PurchaseItemIds, int Quantity, int StoreVersion, float Scalar );
	int FindItemRequest ( struct FString McpId, struct FString SaveSlotId, struct FString ItemId, TArray< struct FInventoryItemRequestState >* InItemRequests );
	int FindSaveSlotRequest ( struct FString McpId, struct FString SaveSlotId, TArray< struct UMcpUserInventoryManager_FSaveSlotRequestState >* InSaveSlotRequests );
	int FindSaveSlotIndex ( struct FString McpId, struct FString SaveSlotId );
	void ParseSaveSlotList ( struct FString McpId, struct FString JsonPayload );
	TArray< struct FString > ParseInventoryForSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString JsonPayload );
	bool GetInventoryItem ( struct FString McpId, struct FString SaveSlotId, struct FString InstanceItemId, struct FMcpInventoryItem* OutInventoryItem );
	void GetInventoryItems ( struct FString McpId, struct FString SaveSlotId, TArray< struct FMcpInventoryItem >* OutInventoryItems );
	void OnQueryInventoryItemsRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryInventoryItems ( struct FString McpId, struct FString SaveSlotId );
	TArray< struct FString > GetSaveSlotList ( struct FString McpId );
	void OnQuerySaveSlotListRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QuerySaveSlotList ( struct FString McpId );
	void OnDeleteSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void DeleteSaveSlot ( struct FString McpId, struct FString SaveSlotId );
	void OnCreateSaveSlotRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void CreateSaveSlot ( struct FString McpId, struct FString SaveSlotId, struct FString ParentSaveSlotId );
};

UClass* UMcpUserInventoryManager::pClassPointer = NULL;

// Class IpDrv.McpUserManagerBase
// 0x0030 (0x007C - 0x004C)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                          		// 0x004C (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;               		// 0x0058 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;                 		// 0x0064 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;                 		// 0x0070 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 40054 );

		return pClassPointer;
	};

	void OnDeleteUserComplete ( unsigned long bWasSuccessful, struct FString Error );
	void DeleteUser ( struct FString McpId );
	bool GetUser ( struct FString McpId, struct FMcpUserStatus* User );
	void GetUsers ( TArray< struct FMcpUserStatus >* Users );
	void OnQueryUsersComplete ( unsigned long bWasSuccessful, struct FString Error );
	void QueryUsers ( TArray< struct FString >* McpIds );
	void QueryUser ( struct FString McpId, unsigned long bShouldUpdateLastActive );
	void OnRegisterUserComplete ( struct FString McpId, struct FString UDID, unsigned long bWasSuccessful, struct FString Error );
	void RegisterUserFacebook ( struct FString FacebookId, struct FString FacebookAuthToken, struct FString UDID, struct FString ExistingMcpAuth );
	void RegisterUserEmail ( struct FString Email, struct FString PasswordHash, struct FString UDID, struct FString ExistingMcpAuth );
	void RegisterUserGenerated ( struct FString UDID, struct FString ExistingMcpAuth );
	class UMcpUserManagerBase* CreateInstance ( );
};

UClass* UMcpUserManagerBase::pClassPointer = NULL;

// Class IpDrv.McpUserManager
// 0x0078 (0x00F4 - 0x007C)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray< struct FMcpUserStatus >                    UserStatuses;                                     		// 0x007C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RegisterUserMcpUrl;                               		// 0x0088 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RegisterUserEmailUrl;                             		// 0x0094 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     RegisterUserFacebookUrl;                          		// 0x00A0 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryUserUrl;                                     		// 0x00AC (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     QueryUsersUrl;                                    		// 0x00B8 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     DeleteUserUrl;                                    		// 0x00C4 (0x000C) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FRegisterUserRequest >              RegisterUserRequests;                             		// 0x00D0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UHttpRequestInterface* >             QueryUsersRequests;                               		// 0x00DC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UHttpRequestInterface* >             DeleteUserRequests;                               		// 0x00E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 40110 );

		return pClassPointer;
	};

	void OnDeleteUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void DeleteUser ( struct FString McpId );
	void GetUsers ( TArray< struct FMcpUserStatus >* Users );
	void OnQueryUsersRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryUsers ( TArray< struct FString >* McpIds );
	void OnQueryUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void QueryUser ( struct FString McpId, unsigned long bShouldUpdateLastActive );
	void OnRegisterUserFacebookRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void RegisterUserFacebook ( struct FString FacebookId, struct FString FacebookAuthToken, struct FString UDID, struct FString ExistingMcpAuth );
	void OnRegisterUserEmailRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void RegisterUserEmail ( struct FString Email, struct FString PasswordHash, struct FString UDID, struct FString ExistingMcpAuth );
	void OnRegisterUserRequestComplete ( class UHttpRequestInterface* Request, class UHttpResponseInterface* Response, unsigned long bWasSuccessful );
	void RegisterUserGenerated ( struct FString UDID, struct FString ExistingMcpAuth );
};

UClass* UMcpUserManager::pClassPointer = NULL;

// Class IpDrv.OnlineImageDownloaderWeb
// 0x001C (0x0058 - 0x003C)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	TArray< struct FOnlineImageDownload >              DownloadImages;                                   		// 0x003C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MaxSimultaneousDownloads;                         		// 0x0048 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;              		// 0x004C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 41197 );

		return pClassPointer;
	};

	void DebugDraw ( class UCanvas* Canvas );
	void OnDownloadComplete ( class UHttpRequestInterface* OriginalRequest, class UHttpResponseInterface* Response, unsigned long bDidSucceed );
	void DownloadNextImage ( );
	void ClearAllDownloads ( );
	void ClearDownloads ( TArray< struct FString > URLs );
	int GetNumPendingDownloads ( );
	void RequestOnlineImages ( TArray< struct FString > URLs );
	int GetOpenDownloadImagesSlot ( );
	class UTexture* GetOnlineImageTexture ( struct FString URL );
	void OnOnlineImageDownloaded ( struct FOnlineImageDownload CachedEntry );
};

UClass* UOnlineImageDownloaderWeb::pClassPointer = NULL;

// Class IpDrv.WebConnection
// 0x0030 (0x026C - 0x023C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                        		// 0x023C (0x0004) [0x0000000000000000]              
	struct FString                                     ReceivedData;                                     		// 0x0240 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UWebRequest*                                 Request;                                          		// 0x024C (0x0004) [0x0000000000000000]              
	class UWebResponse*                                Response;                                         		// 0x0250 (0x0004) [0x0000000000000000]              
	class UWebApplication*                             Application;                                      		// 0x0254 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDelayCleanup : 1;                                		// 0x0258 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RawBytesExpecting;                                		// 0x025C (0x0004) [0x0000000000000000]              
	int                                                MaxValueLength;                                   		// 0x0260 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxLineLength;                                    		// 0x0264 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                ConnID;                                           		// 0x0268 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 41814 );

		return pClassPointer;
	};

	bool IsHanging ( );
	void Cleanup ( );
	void CheckRawBytes ( );
	void EndOfHeaders ( );
	void CreateResponseObject ( );
	void ProcessPost ( struct FString S );
	void ProcessGet ( struct FString S );
	void ProcessHead ( struct FString S );
	void ReceivedLine ( struct FString S );
	void eventReceivedText ( struct FString Text );
	void eventTimer ( );
	void eventClosed ( );
	void eventAccepted ( );
};

UClass* AWebConnection::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif