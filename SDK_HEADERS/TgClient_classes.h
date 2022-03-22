/*
#############################################################################################
# Smite (9.3.7020.3) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: TgClient_classes.h
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

#define CONST_DCCLAN_MAX_MEMBERS                                 1000
#define CONST_CLAN_RANK_GROUP                                    96
#define CONST_MAX_BROWSER_TEXTURES                               12
#define CONST_RATATOSKR_BOT_ID                                   2063
#define CONST_RATATOSKR_ACORN_DEVICE_ID                          18703
#define CONST_RECOMMEND_ITEM_CATEGORY_STARTER                    10772
#define CONST_STORE_HEAD_COUNT                                   4
#define CONST_STORE_LIST_COUNT                                   12
#define CONST_STORE_GRID_COUNT                                   16
#define CONST_STORE_ITEMS_PER_LINE_MAX                           4
#define CONST_NUM_ITEM_TIERS                                     3
#define CONST_NUM_ITEMS_IN_BUILD                                 6
#define CONST_NUM_ACTIVES_IN_BUILD                               2
#define CONST_NUM_CONSUMABLES_IN_BUILD                           2
#define CONST_NUM_ABILITIES                                      5
#define CONST_NUM_UPGRADEABLE_ABILITIES                          4
#define CONST_NUM_BUILDER_TABS                                   2
#define CONST_MAX_ABILITIES_PER_LEVEL                            2
#define CONST_NUM_ABILITY_ROWS                                   20
#define CONST_MAX_ABILITY_LEVEL                                  5
#define CONST_BITS_PER_ABILITY_LEVEL                             5
#define CONST_NUM_STAR_RATINGS                                   5
#define CONST_ITEM_COUNT                                         56
#define CONST_SKIN_COUNT                                         6
#define CONST_GOD_CARD_COUNT                                     16
#define CONST_WARD_COL_COUNT                                     8
#define CONST_QUEUE_TYPE_ALL                                     0
#define CONST_INVALID_GOD_ID                                     -1
#define CONST_HUD_ITEM_COUNT                                     6
#define CONST_ICON_COUNT                                         5
#define CONST_LOADOUT_CHOICE_COUNT                               45
#define CONST_LOADOUT_COL_COUNT                                  9
#define CONST_PLAYERS_COUNT                                      4
#define CONST_MAX_PARTY_COUNT                                    5

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum TgClient.TgClanDC_Roster.TG_CLAN_ACTION
/*enum TG_CLAN_ACTION
{
	CLAN_KICK                                          = 0,
	CLAN_PROMOTE                                       = 1,
	CLAN_DEMOTE                                        = 2,
	CLAN_MAX                                           = 3
};*/

// Enum TgClient.TgGfxAdventureProgressFox.EAdventureProgressFoxActions
/*enum EAdventureProgressFoxActions
{
	EAPFA_PurchaseAdventure                            = 0,
	EAPFA_PurchasePoints                               = 1,
	EAPFA_ClaimChest                                   = 2,
	EAPFA_MAX                                          = 3
};*/

// Enum TgClient.TgGfxAdventuresHub.EAdventureHub
/*enum EAdventureHub
{
	EAHEA_JoinQueue                                    = 0,
	EAHEA_UnlockBundle                                 = 1,
	EAHEA_VaultOver                                    = 2,
	EAHEA_VaultOut                                     = 3,
	EAHEA_VaultIn                                      = 4,
	EAHEA_GoalData                                     = 5,
	EAHEA_LeaveQueue                                   = 6,
	EAHEA_MAX                                          = 7
};*/

// Enum TgClient.TgGfxCharacterBuilder.TipType
/*enum TipType
{
	ETT_GridTip                                        = 0,
	ETT_ListTip                                        = 1,
	ETT_PreviewTip                                     = 2,
	ETT_ConsumableTip                                  = 3,
	ETT_ActiveTip                                      = 4,
	ETT_AbilityTip                                     = 5,
	ETT_MAX                                            = 6
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderActions
/*enum CharacterBuilderActions
{
	ECBA_None                                          = 0,
	ECBA_ClearItems                                    = 1,
	ECBA_SaveProfile                                   = 2,
	ECBA_SetLevel                                      = 3,
	ECBA_ListScroll                                    = 4,
	ECBA_ListItem                                      = 5,
	ECBA_GridItem                                      = 6,
	ECBA_RoleChanged                                   = 7,
	ECBA_SelectItem                                    = 8,
	ECBA_ListTip                                       = 9,
	ECBA_GridTip                                       = 10,
	ECBA_HideTip                                       = 11,
	ECBA_RemoveItem                                    = 12,
	ECBA_BuildCheckbox                                 = 13,
	ECBA_PreviewTip                                    = 14,
	ECBA_PreviewItem                                   = 15,
	ECBA_ConsumableTip                                 = 16,
	ECBA_ConsumableItem                                = 17,
	ECBA_ActiveTip                                     = 18,
	ECBA_ActiveItem                                    = 19,
	ECBA_QtyChange                                     = 20,
	ECBA_AbilityTip                                    = 21,
	ECBA_AbilityItem                                   = 22,
	ECBA_Tab                                           = 23,
	ECBA_SetAbility                                    = 24,
	ECBA_SetAbilitySlot                                = 25,
	ECBA_SetClass                                      = 26,
	ECBA_SetAbilityActive                              = 27,
	ECBA_MAX                                           = 28
};*/

// Enum TgClient.TgGfxCharacterBuilder.CharacterBuilderTabs
/*enum CharacterBuilderTabs
{
	ECBT_Items                                         = 0,
	ECBT_Abilities                                     = 1,
	ECBT_MAX                                           = 2
};*/

// Enum TgClient.TgGfxChatInput.EChatInputActions
/*enum EChatInputActions
{
	ECIA_None                                          = 0,
	ECIA_Focus                                         = 1,
	ECIA_Input                                         = 2,
	ECIA_SetPlayerSelection                            = 3,
	ECIA_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEOMLobby.EOMLEventAction
/*enum EOMLEventAction
{
	EOMLEA_SendGiftPoints                              = 0,
	EOMLEA_UnlockTriumpChest                           = 1,
	EOMLEA_UnlockAdventure                             = 2,
	EOMLEA_Facebook                                    = 3,
	EOMLEA_Twitter                                     = 4,
	EOMLEA_Stats                                       = 5,
	EOMLEA_Feedback                                    = 6,
	EOMLEA_MAX                                         = 7
};*/

// Enum TgClient.TgGfxEventLeaderboard.EEventLeaderboardTypes
/*enum EEventLeaderboardTypes
{
	EELT_NONE                                          = 0,
	EELT_XingMountain                                  = 1,
	EELT_FafMountNorm                                  = 2,
	EELT_FafMountHard                                  = 3,
	EELT_MAX                                           = 4
};*/

// Enum TgClient.TgGfxEventPurchase.EEventPurchaseActions
/*enum EEventPurchaseActions
{
	EVTPA_GetItemInfo                                  = 0,
	EVTPA_SubmitPurchase                               = 1,
	EVTPA_MAX                                          = 2
};*/

// Enum TgClient.TgGFxEventQuestNotification.EventQuestNotificationAction
/*enum EventQuestNotificationAction
{
	EVQNA_CancelSubmit                                 = 0,
	EVQNA_RedirectPlayNow                              = 1,
	EVQNA_RedirectQuestList                            = 2,
	EVQNA_MAX                                          = 3
};*/

// Enum TgClient.TgGfxFeedback.EFeedbackPopupActions
/*enum EFeedbackPopupActions
{
	EFPA_None                                          = 0,
	EFPA_Close                                         = 1,
	EFPA_SetStar                                       = 2,
	EFPA_Submit                                        = 3,
	EFPA_MAX                                           = 4
};*/

// Enum TgClient.TgGfxGods.EGodsTagMode
/*enum EGodsTagMode
{
	EGTM_None                                          = 0,
	EGTM_New                                           = 1,
	EGTM_Sale                                          = 2,
	EGTM_MAX                                           = 3
};*/

// Enum TgClient.TgGfxGods.EGodsViewPageActions
/*enum EGodsViewPageActions
{
	EGVPA_None                                         = 0,
	EGVPA_ItemScroll                                   = 1,
	EGVPA_ItemSelect                                   = 2,
	EGVPA_ItemToolTip                                  = 3,
	EGVPA_OnTabSelected                                = 4,
	EGVPA_SetPrice                                     = 5,
	EGVPA_Unlock                                       = 6,
	EGVPA_SkinScroll                                   = 7,
	EGVPA_SkinSelect                                   = 8,
	EGVPA_SkinToolTip                                  = 9,
	EGVPA_OnFilterchange                               = 10,
	EGVPA_UnlockItem                                   = 11,
	EGVPA_OnGodBuilder                                 = 12,
	EGVPA_GodSelect                                    = 13,
	EGVPA_GodScroll                                    = 14,
	EGVPA_SetGodOwned                                  = 15,
	EGVPA_SetSkinOwned                                 = 16,
	EGVPA_OnVoiceSkin                                  = 17,
	EGVPA_GotoItem                                     = 18,
	EGVPA_GodGridSelect                                = 19,
	EGVPA_SwapGodView                                  = 20,
	EGVPA_RefreshUnlock                                = 21,
	EGVPA_RefreshUGPRefund                             = 22,
	EGVPA_OpenLegendaryBundle                          = 23,
	EGVPA_MAX                                          = 24
};*/

// Enum TgClient.TgGfxGods.EGodsSkinTypeId
/*enum EGodsSkinTypeId
{
	EGSTI_Default                                      = 0,
	EGSTI_Other                                        = 1,
	EGSTI_Golden                                       = 2,
	EGSTI_Legendary                                    = 3,
	EGSTI_Diamond                                      = 4,
	EGSTI_MAX                                          = 5
};*/

// Enum TgClient.TgGfxGods.EGodsViewTabs
/*enum EGodsViewTabs
{
	EGVT_GODS                                          = 0,
	EGVT_ABOUT                                         = 1,
	EGVT_ABILITIES                                     = 2,
	EGVT_SKINS                                         = 3,
	EGVT_STATS                                         = 4,
	EGVT_ACHIEVE                                       = 5,
	EGVT_LORE                                          = 6,
	EGVT_EXTRAS                                        = 7,
	EGVT_HISTORY                                       = 8,
	EGVT_WARDS                                         = 9,
	EGVT_VOICE                                         = 10,
	EGVT_MAX                                           = 11
};*/

// Enum TgClient.TgGfxGods.EGodFilters
/*enum EGodFilters
{
	EGF_None                                           = 0,
	EGF_Owned                                          = 1,
	EGF_Assassin                                       = 2,
	EGF_Guardian                                       = 3,
	EGF_Hunter                                         = 4,
	EGF_Mage                                           = 5,
	EGF_Warrior                                        = 6,
	EGF_Mastered                                       = 7,
	EGF_Not_Mastered                                   = 8,
	EGF_Purchasable                                    = 9,
	EGF_MAX                                            = 10
};*/

// Enum TgClient.TgGfxHudNotify.NotifyType
/*enum NotifyType
{
	NT_Alert                                           = 0,
	NT_Accolade                                        = 1,
	NT_Kill                                            = 2,
	NT_MAX                                             = 3
};*/

// Enum TgClient.TgGfxHudNotify.NotifySubTypeAccolade
/*enum NotifySubTypeAccolade
{
	NSTA_Aced                                          = 0,
	NSTA_GoldFury                                      = 1,
	NSTA_Wild_Juggernaut                               = 2,
	NSTA_Siege_Juggernaut                              = 3,
	NSTA_FireGiant                                     = 4,
	NSTA_TowerKill                                     = 5,
	NSTA_PhoenixKill                                   = 6,
	NSTA_CapturedPoint                                 = 7,
	NSTA_ObjectiveSteal                                = 8,
	NSTA_NoScope                                       = 9,
	NSTA_HoldTheLine                                   = 10,
	NSTA_TowerDive                                     = 11,
	NSTA_Revenge                                       = 12,
	NSTA_Assist                                        = 13,
	NSTA_KillStreak_Basic                              = 14,
	NSTA_KillStreak_Breaker                            = 15,
	NSTA_Ganesha_Kill                                  = 16,
	NSTA_Ganesha_Assist                                = 17,
	NSTA_KillCombo                                     = 18,
	NSTA_KillStreak                                    = 19,
	NSTA_KillStreak01                                  = 20,
	NSTA_KillStreak02                                  = 21,
	NSTA_KillStreak03                                  = 22,
	NSTA_KillStreak04                                  = 23,
	NSTA_KillStreak05                                  = 24,
	NSTA_KillStreak06                                  = 25,
	NSTA_KillStreak07                                  = 26,
	NSTA_KillCombo01                                   = 27,
	NSTA_KillCombo02                                   = 28,
	NSTA_KillCombo03                                   = 29,
	NSTA_KillCombo04                                   = 30,
	NSTA_FirstBlood                                    = 31,
	NSTA_BullDemonKing                                 = 32,
	NSTA_Apophis                                       = 33,
	NSTA_Pyromancer                                    = 34,
	NSTA_Slash_Juggernaut                              = 35,
	NSTA_MAX                                           = 36
};*/

// Enum TgClient.TgGfxLeaderboard.ELeaderboardTypes
/*enum ELeaderboardTypes
{
	LBT_RANKED_GOD                                     = 0,
	LBT_RANKED_MAX                                     = 1
};*/

// Enum TgClient.TgGfxPartyManagement.EPartyManagementView
/*enum EPartyManagementView
{
	EPMV_Friends                                       = 0,
	EPMV_Clans                                         = 1,
	EPMV_RecentlyPlayed                                = 2,
	EPMV_MAX                                           = 3
};*/

// Enum TgClient.TgGfxPartyManagement.PartyManagementActions
/*enum PartyManagementActions
{
	PMA_None                                           = 0,
	PMA_SelectTab                                      = 1,
	PMA_Search                                         = 2,
	PMA_Invite                                         = 3,
	PMA_ViewProfile                                    = 4,
	PMA_PromoteLeader                                  = 5,
	PMA_PromoteInvite                                  = 6,
	PMA_Kick                                           = 7,
	PMA_Leave                                          = 8,
	PMA_UpdateInviteList                               = 9,
	PMA_InviteListToggle                               = 10,
	PMA_UpdateTab                                      = 11,
	PMA_UpdateInviteListDisabled                       = 12,
	PMA_MAX                                            = 13
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileFilter
/*enum EPlayerProfileFilter
{
	PPF_YOURSELF                                       = 0,
	PPF_FRIENDS                                        = 1,
	PPF_CLAN                                           = 2,
	PPF_RECENTLY_PLAYED                                = 3,
	PPF_MAX                                            = 4
};*/

// Enum TgClient.TgGfxPlayerProfile.EPlayerProfileTab
/*enum EPlayerProfileTab
{
	PPT_OVERVIEW                                       = 0,
	PPT_MATCHES                                        = 1,
	PPT_GODS                                           = 2,
	PPT_RECORDS                                        = 3,
	PPT_MAX                                            = 4
};*/

// Enum TgClient.TgGfxProfileWorshiper.EGodMasteryFilter
/*enum EGodMasteryFilter
{
	GMS_ALL                                            = 0,
	GMS_MASTERED                                       = 1,
	GMS_IN_PROGRESS                                    = 2,
	GMS_NOT_MASTERED                                   = 3,
	GMS_NOT_PLAYED                                     = 4,
	GMS_MAX                                            = 5
};*/

// Enum TgClient.TgGfxRacerDispatcher.TgRacerDispatcherEvent
/*enum TgRacerDispatcherEvent
{
	TGRDE_PlacementChange                              = 0,
	TGRDE_WeaponChange                                 = 1,
	TGRDE_LapChange                                    = 2,
	TGRDE_MAX                                          = 3
};*/

// Enum TgClient.TgGfxStoreChestPC.EStoreChestPCActions
/*enum EStoreChestPCActions
{
	ESCPCA_None                                        = 0,
	ESCPCA_ItemUnlock                                  = 1,
	ESCPCA_RefreshItems                                = 2,
	ESCPCA_ChestIndex                                  = 3,
	ESCPCA_MAX                                         = 4
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class TgClient.TgGameLaunch
// 0x0000 (0x03B8 - 0x03B8)
class ATgGameLaunch : public ATgGameLaunchBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5282 );

		return pClassPointer;
	};

};

UClass* ATgGameLaunch::pClassPointer = NULL;

// Class TgClient.TgGameViewportClient
// 0x0000 (0x014C - 0x014C)
class UTgGameViewportClient : public UTgGameViewportClientBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5283 );

		return pClassPointer;
	};

};

UClass* UTgGameViewportClient::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementPopup
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxAchievementPopup : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5284 );

		return pClassPointer;
	};

	void eventQueueAchievement ( );
	void asc_QueueAchievement ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxAchievementPopup::pClassPointer = NULL;

// Class TgClient.TgGfxAchievementSelection
// 0x0010 (0x01F0 - 0x01E0)
class UTgGfxAchievementSelection : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x01E0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_ApplySelections_Delegate__Delegate;         		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5285 );

		return pClassPointer;
	};

	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventUpdateScreen ( );
	void ASC_UpdateScreen ( );
	void USC_ApplySelections ( int as1, int as2, int as3, int as4 );
	void USC_ApplySelections_Delegate ( int as1, int as2, int as3, int as4 );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAchievementSelection::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgress
// 0x0008 (0x01E8 - 0x01E0)
class UTgGfxAdventureProgress : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nVictoryLaps;                                   		// 0x01E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5286 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgress::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressDungeon2
// 0x0014 (0x01F4 - 0x01E0)
class UTgGfxAdventureProgressDungeon2 : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_nStatueActivityId;                              		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                m_nStatueGoalId;                                  		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                m_nStatueCompleteGoalId;                          		// 0x01F0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5287 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressDungeon2::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressFox
// 0x0034 (0x0214 - 0x01E0)
class UTgGfxAdventureProgressFox : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleId;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                m_nFox1LTI;                                       		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                m_nFox2LTI;                                       		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                m_nFox3LTI;                                       		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                m_nFox4LTI;                                       		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                m_nFox1ItemId;                                    		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                m_nFox2ItemId;                                    		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                m_nFox3ItemId;                                    		// 0x0208 (0x0004) [0x0000000000000000]              
	int                                                m_nFox4ItemId;                                    		// 0x020C (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x0210 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x0210 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5288 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void SetupChestPurchaseFox ( );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressFox::pClassPointer = NULL;

// Class TgClient.TgGfxAdventureProgressMMO
// 0x0008 (0x01E8 - 0x01E0)
class UTgGfxAdventureProgressMMO : public UTgGfxScene
{
public:
	int                                                m_nActivityId;                                    		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nBundleId;                                      		// 0x01E4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5289 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxAdventureProgressMMO::pClassPointer = NULL;

// Class TgClient.TgGfxAdventuresHub
// 0x0064 (0x0244 - 0x01E0)
class UTgGfxAdventuresHub : public UTgGfxScene
{
public:
	int                                                m_nBundleId;                                      		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nChestItemId;                                   		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_nPointBundleLTI;                                		// 0x01E8 (0x0004) [0x0000000000000000]              
	unsigned long                                      b_chestPurchaseLock : 1;                          		// 0x01EC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      b_requestedChestPurchase : 1;                     		// 0x01EC (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nCurrentQueueId;                                		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                m_nChestLTI;                                      		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                m_nPointLTI;                                      		// 0x01F8 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI1;                                      		// 0x01FC (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI2;                                      		// 0x0200 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI3;                                      		// 0x0204 (0x0004) [0x0000000000000000]              
	int                                                m_nItemLTI4;                                      		// 0x0208 (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentAdventureItem;                          		// 0x020C (0x0004) [0x0000000000000000]              
	int                                                m_nActivityId;                                    		// 0x0210 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SetUserViewedEvent_Delegate__Delegate;      		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetAdventureLeaderboard_Delegate__Delegate; 		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GotoVault_Delegate__Delegate;               		// 0x022C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OpenEventCam_Delegate__Delegate;            		// 0x0238 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5290 );

		return pClassPointer;
	};

	void eventSceneTick ( float Delta );
	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void SetBundleOwnership ( );
	void TriggerLobbyEventHub ( int nType, int nTarget );
	void TriggerLobbyCamEvent ( int nType, int nTarget );
	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void LeaveQueue ( );
	void PopulateGoalData ( );
	void USC_OpenEventCam ( unsigned long isSmall );
	void USC_GotoVault ( unsigned long bIsSmall );
	void USC_SetUserViewedEvent ( );
	void USC_GetAdventureLeaderboard ( int nEventId );
	void USC_OpenEventCam_Delegate ( );
	void USC_GotoVault_Delegate ( );
	void USC_GetAdventureLeaderboard_Delegate ( );
	void USC_SetUserViewedEvent_Delegate ( );
};

UClass* UTgGfxAdventuresHub::pClassPointer = NULL;

// Class TgClient.TgGfxBooster
// 0x000C (0x01EC - 0x01E0)
class UTgGfxBooster : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_ShowPurchasePopup_Delegate__Delegate;       		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5291 );

		return pClassPointer;
	};

	void UpdateBoosterTime ( );
	void USC_ShowPurchasePopup ( int ItemId, int nQuantity );
	void USC_ShowPurchasePopup_Delegate ( int ItemId, int nQuantity );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxBooster::pClassPointer = NULL;

// Class TgClient.TgGfxCharacterBuilder
// 0x0C40 (0x0E20 - 0x01E0)
class UTgGfxCharacterBuilder : public UTgGfxScene
{
public:
	struct FString                                     m_lsItems;                                        		// 0x01E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActives;                                      		// 0x01EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsConsumables;                                  		// 0x01F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsPassive;                                      		// 0x0204 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsActivated;                                    		// 0x0210 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsAbilities;                                    		// 0x021C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSkip;                                         		// 0x0228 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveItems;                                    		// 0x0234 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSaveAbilities;                                		// 0x0240 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	int                                                m_playerClassId;                                  		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedTab;                                   		// 0x0250 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Tabs[ 0x2 ];                                    		// 0x0254 (0x0008) [0x0000000000000000]              
	class UTgGFxObject*                                m_SaveButton;                                     		// 0x025C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ClearButton;                                    		// 0x0260 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItem;                                  		// 0x0264 (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x0268 (0x0004) [0x0000000000000000]              
	int                                                m_nItemScrollIndex;                               		// 0x026C (0x0004) [0x0000000000000000]              
	TArray< struct FItemBuilderCategory >              m_Categories;                                     		// 0x0270 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemBuilderCategory >              m_CustomCategories;                               		// 0x027C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownList;                                      		// 0x0288 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_ShownGrid;                                      		// 0x0294 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nRoleIndex;                                     		// 0x02A0 (0x0004) [0x0000000000000000]              
	unsigned char                                      m_TipType;                                        		// 0x02A4 (0x0001) [0x0000000000000000]              
	int                                                m_nPreviewTipIndex;                               		// 0x02A8 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x02AC (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x02B0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsCustomRole : 1;                              		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIsSubFilter : 1;                               		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bProfileModified : 1;                           		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_bAbilitiesModified : 1;                         		// 0x02B4 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                m_nCustomRoleIndex;                               		// 0x02B8 (0x0004) [0x0000000000000000]              
	TArray< struct FPreviewItem >                      m_PreviewItemData;                                		// 0x02BC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewActiveData;                              		// 0x02C8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPreviewItem >                      m_PreviewConsumableData;                          		// 0x02D4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nFilterIndex;                                   		// 0x02E0 (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemIndex;                              		// 0x02E4 (0x0004) [0x0000000000000000]              
	int                                                m_nFocusedItemCategory;                           		// 0x02E8 (0x0004) [0x0000000000000000]              
	int                                                m_bIsFocusingGridItem;                            		// 0x02EC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemView;                                       		// 0x02F0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BuildPreview;                                   		// 0x02F4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RoleDropDown;                                   		// 0x02F8 (0x0004) [0x0000000000000000]              
	struct FItemDisplay                                m_ListItem[ 0xC ];                                		// 0x02FC (0x0300) [0x0000000000000000]              
	struct FItemDisplay                                m_GridItem[ 0x10 ];                               		// 0x05FC (0x0400) [0x0000000000000000]              
	class UTgGFxObject*                                m_Header[ 0x4 ];                                  		// 0x09FC (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderTF[ 0x4 ];                                		// 0x0A0C (0x0010) [0x0000000000000000]              
	class UTgGFxObject*                                m_HeaderBlock[ 0x4 ];                             		// 0x0A1C (0x0010) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewItems[ 0x6 ];                            		// 0x0A2C (0x0030) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewActives[ 0x2 ];                          		// 0x0A5C (0x0010) [0x0000000000000000]              
	struct FBuildItemDisplay                           m_PreviewConsumables[ 0x2 ];                      		// 0x0A6C (0x0010) [0x0000000000000000]              
	int                                                m_nSelectedLevel;                                 		// 0x0A7C (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedAbility;                               		// 0x0A80 (0x0004) [0x0000000000000000]              
	struct FLevelInfo                                  m_nLevelAbilities[ 0x14 ];                        		// 0x0A84 (0x00A0) [0x0000000000000000]              
	int                                                m_nAbilityLevels[ 0x4 ];                          		// 0x0B24 (0x0010) [0x0000000000000000]              
	struct FString                                     m_AbilityIcons[ 0x4 ];                            		// 0x0B34 (0x0030) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_AbilityPreview;                                 		// 0x0B64 (0x0004) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_PreviewAbilities[ 0x5 ];                        		// 0x0B68 (0x00A0) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitiesView;                                  		// 0x0C08 (0x0004) [0x0000000000000000]              
	struct FAbilitySelectionButton                     m_AbilityBtns[ 0x4 ];                             		// 0x0C0C (0x0080) [0x0000000000000000]              
	struct FAbilityRow                                 m_AbilityRows[ 0x14 ];                            		// 0x0C8C (0x0190) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilitySkip;                                    		// 0x0E1C (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5292 );

		return pClassPointer;
	};

	bool HasVendorData ( );
	class UTgVendorData* GetVendorData ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxCharacterBuilder::pClassPointer = NULL;

// Class TgClient.TgGfxClanIconPicker
// 0x000C (0x01EC - 0x01E0)
class UTgGfxClanIconPicker : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SelectIcon_Delegate__Delegate;              		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5293 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* pMP );
	void USC_SelectIcon ( int nIconItemId );
	void USC_SelectIcon_Delegate ( );
};

UClass* UTgGfxClanIconPicker::pClassPointer = NULL;

// Class TgClient.TgGFxDungeonCurrencies
// 0x0000 (0x01E0 - 0x01E0)
class UTgGFxDungeonCurrencies : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5294 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxDungeonCurrencies::pClassPointer = NULL;

// Class TgClient.TgGfxEOMLobby
// 0x0010 (0x01F0 - 0x01E0)
class UTgGfxEOMLobby : public UTgGfxScene
{
public:
	struct FString                                     m_sGiftedPlayerName;                              		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nGiftedPlayerId;                                		// 0x01EC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5295 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void OnStats ( struct FString instanceId );
	void OnFeedback ( );
	void OnTwitter ( struct FString instanceId );
	void OnFacebook ( struct FString instanceId );
	void OnSendPlayerGift ( class UTgEventDataItem* pEvent );
	void OnSendGiftPoints ( class UGFxObject* pData );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void USC_SendPlayerGift ( struct FString PlayerName, struct FString nPlayerId );
	void eventReceiveGiftedPoints ( class UGFxObject* Data );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxEOMLobby::pClassPointer = NULL;

// Class TgClient.TgGfxEventAchievements
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxEventAchievements : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5296 );

		return pClassPointer;
	};

	void CheckBundleOwned ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventAchievements::pClassPointer = NULL;

// Class TgClient.TgGfxEventLeaderboard
// 0x0018 (0x01F8 - 0x01E0)
class UTgGfxEventLeaderboard : public UTgGfxScene
{
public:
	unsigned long                                      requestingData : 1;                               		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      gotFriendsData : 1;                               		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      gotPersonalData : 1;                              		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      gotWorldData : 1;                                 		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     dataIndex;                                        		// 0x01E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                nCurrentEventId;                                  		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  cachedBoards;                                     		// 0x01F4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5297 );

		return pClassPointer;
	};

	void USC_RequestEventLeaderboard ( int EventIdx );
	class UGFxObject* Chunk ( struct FString dataIdx );
	class UGFxObject* CreateChunk ( struct FString dataIdx );
	bool UpdateFromChunk ( struct FString dataIdx );
	void OnReceivePlayerNames ( );
	void ReceivedAllData ( );
	void PopulateDropdown ( TArray< int > arrEventIds );
	void ShowLeaderboard ( int nStartIndex, int nEndIndex );
	void RequestFriendAndWorldPlayerNames ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventLeaderboard::pClassPointer = NULL;

// Class TgClient.TgGfxFeedback
// 0x0074 (0x0254 - 0x01E0)
class UTgGfxFeedback : public UTgGfxScene
{
public:
	struct FString                                     m_lsHeaderServerStability;                        		// 0x01E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsHeaderMatchmaking;                            		// 0x01EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionServerStability;                   		// 0x01F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDescriptionMatchmaking;                       		// 0x0204 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsSubmit;                                       		// 0x0210 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsComments;                                     		// 0x021C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnrated;                                      		// 0x0228 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Comments;                                       		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingBtns[ 0x5 ];                              		// 0x0238 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_RatingTF;                                       		// 0x024C (0x0004) [0x0000000000000000]              
	int                                                m_nStarRating;                                    		// 0x0250 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5298 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxFeedback::pClassPointer = NULL;

// Class TgClient.TgGfxGlossary
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxGlossary : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5299 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxGlossary::pClassPointer = NULL;

// Class TgClient.TgGfxGods
// 0x0D4C (0x0F2C - 0x01E0)
class UTgGfxGods : public UTgGfxScene
{
public:
	struct FString                                     m_lsStandard;                                     		// 0x01E0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsOwned;                                        		// 0x01EC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     rented_label;                                     		// 0x01F8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsCurrentRentalExpiresIn;                       		// 0x0204 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond;                                      		// 0x0210 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsDiamond_description;                          		// 0x021C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive;                                    		// 0x0228 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusive_description;                        		// 0x0234 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest;                               		// 0x0240 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveChest_description;                   		// 0x024C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan;                                		// 0x0258 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveClan_description;                    		// 0x0264 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo;                               		// 0x0270 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusivePromo_description;                   		// 0x027C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports;                             		// 0x0288 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveEsports_description;                 		// 0x0294 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal;                            		// 0x02A0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsExclusiveSeasonal_description;                		// 0x02AC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold;                                         		// 0x02B8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsGold_description;                             		// 0x02C4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary;                                    		// 0x02D0 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLegendary_description;                        		// 0x02DC (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited;                                      		// 0x02E8 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimited_description;                          		// 0x02F4 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest;                                 		// 0x0300 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedChest_description;                     		// 0x030C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan;                                  		// 0x0318 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedClan_description;                      		// 0x0324 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo;                                 		// 0x0330 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedPromo_description;                     		// 0x033C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports;                               		// 0x0348 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedEsports_description;                   		// 0x0354 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal;                              		// 0x0360 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsLimitedSeasonal_description;                  		// 0x036C (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlimited;                                    		// 0x0378 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsUnlimited_description;                        		// 0x0384 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     m_lsClan;                                         		// 0x0390 (0x000C) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     days_label;                                       		// 0x039C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     day_label;                                        		// 0x03A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hours_label;                                      		// 0x03B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     hour_label;                                       		// 0x03C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minutes_label;                                    		// 0x03CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     minute_label;                                     		// 0x03D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     seconds_label;                                    		// 0x03E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     second_label;                                     		// 0x03F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      god_ids;                                          		// 0x03FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FGFxItem                                    m_ItemBtn[ 0x38 ];                                		// 0x0408 (0x0460) [0x0000000000000000]              
	struct FGFxSkinBtn                                 m_SkinBtn[ 0x6 ];                                 		// 0x0868 (0x0150) [0x0000000000000000]              
	struct FGFxGodBtn                                  m_GodCardBtn[ 0x10 ];                             		// 0x09B8 (0x0340) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x0CF8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x0CFC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGrid;                                        		// 0x0D00 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardCheckbox;                                		// 0x0D04 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodGridScrollbar;                               		// 0x0D08 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GodCardScrollbar;                               		// 0x0D0C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_UGPIconsBtn;                                    		// 0x0D10 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_UGPCardsBtn;                                    		// 0x0D14 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCall;                                       		// 0x0D18 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinCallTF;                                     		// 0x0D1C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCall;                                      		// 0x0D20 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraCallTF;                                    		// 0x0D24 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCall;                                      		// 0x0D28 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceCallTF;                                    		// 0x0D2C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VPContainer;                                    		// 0x0D30 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinGoto;                                       		// 0x0D34 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RentalInfo;                                     		// 0x0D38 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkinInfo;                                       		// 0x0D3C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SideSkinInfo;                                   		// 0x0D40 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_UnlockBtn;                                      		// 0x0D44 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_EmoteLabel;                                     		// 0x0D48 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightGodsText;                                  		// 0x0D4C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RightGodsText2;                                 		// 0x0D50 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AbilityScreen;                                  		// 0x0D54 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AboutScreen;                                    		// 0x0D58 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoreScreen;                                     		// 0x0D5C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_StatScreen;                                     		// 0x0D60 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ExtraScreen;                                    		// 0x0D64 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HistoryScreen;                                  		// 0x0D68 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VoiceScreen;                                    		// 0x0D6C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AchieveScreen;                                  		// 0x0D70 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x0D74 (0x0004) [0x0000000000000000]              
	int                                                m_nScrollIndex;                                   		// 0x0D78 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x0D7C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x0D88 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_RentalGodsIndex;                                		// 0x0D94 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearchField;                                   		// 0x0DA0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x0DAC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	float                                              m_fTipWaitTimer;                                  		// 0x0DB8 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x0DBC (0x0004) [0x0000000000000000]              
	float                                              m_fRentalTimer;                                   		// 0x0DC0 (0x0004) [0x0000000000000000]              
	int                                                m_nHighlightIndex;                                		// 0x0DC4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bHasGodPack : 1;                                		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bShouldUpdateCall : 1;                          		// 0x0DC8 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nSelectedTab;                                   		// 0x0DCC (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedGodId;                                 		// 0x0DD0 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedSkinId;                                		// 0x0DD4 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedWardSkinId;                            		// 0x0DD8 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterType;                                    		// 0x0DDC (0x0004) [0x0000000000000000]              
	int                                                m_nPrevGodScrollIndex;                            		// 0x0DE0 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevWardScrollIndex;                           		// 0x0DE4 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPLow;                                    		// 0x0DE8 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsHPHigh;                                   		// 0x0DEC (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaLow;                                  		// 0x0DF0 (0x0004) [0x0000000000000000]              
	int                                                m_nStatsManaHigh;                                 		// 0x0DF4 (0x0004) [0x0000000000000000]              
	int                                                m_nCachedGodsTabSelection;                        		// 0x0DF8 (0x0004) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x0DFC (0x0004) [0x0000000000000000]              
	int                                                m_nColCount;                                      		// 0x0E00 (0x0004) [0x0000000000000000]              
	struct FItemData_GodPage                           m_SelectedGod;                                    		// 0x0E04 (0x00C4) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_GodData;                                        		// 0x0EC8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_WardData;                                       		// 0x0ED4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_GodPage >                 m_SkinData;                                       		// 0x0EE0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FStreamData_Gods >                  m_StreamData;                                     		// 0x0EEC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FAchievementData_GodsAchievements > m_achievementDatas;                               		// 0x0EF8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x0F04 (0x0004) [0x0000000000000000]              
	TArray< struct FVendorItemUIHint >                 m_vendorUiHints;                                  		// 0x0F08 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateEmoteSelection_Delegate__Delegate;    		// 0x0F14 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_PlayGodVideo_Delegate__Delegate;            		// 0x0F20 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5300 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void UpdateUGPValue ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void USC_PlayGodVideo ( int abilityNumber );
	void USC_PlayGodVideo_Delegate ( );
	void USC_UpdateEmoteSelection ( struct FString emoteName );
	void USC_UpdateEmoteSelection_Delegate ( struct FString emoteName );
};

UClass* UTgGfxGods::pClassPointer = NULL;

// Class TgClient.TgGfxGodsHistory
// 0x002C (0x020C - 0x01E0)
class UTgGfxGodsHistory : public UTgGfxScene
{
public:
	int                                                m_godId;                                          		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_updatedQueues : 1;                              		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __USC_GetQueuesDropdown_Delegate__Delegate;       		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_GetHistoryData_Delegate__Delegate;          		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowMatchDetails_Delegate__Delegate;        		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5301 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateGodHistory ( );
	void ASC_UpdateGodHistory ( );
	void eventUpdateQueueData ( );
	void ASC_UpdateQueueData ( );
	void USC_ShowMatchDetails ( int pMatchID );
	void USC_GetHistoryData ( int queueId );
	void USC_GetQueuesDropdown ( int godId );
	void USC_ShowMatchDetails_Delegate ( int pMatchID );
	void USC_GetHistoryData_Delegate ( int queueId );
	void USC_GetQueuesDropdown_Delegate ( int godId );
};

UClass* UTgGfxGodsHistory::pClassPointer = NULL;

// Class TgClient.TgGfxGuides
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxGuides : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5302 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxGuides::pClassPointer = NULL;

// Class TgClient.TgGfxHudItems
// 0x002C (0x020C - 0x01E0)
class UTgGfxHudItems : public UTgGfxScene
{
public:
	class UTgVendorData*                               m_VendorData;                                     		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nPlayerClass;                                   		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Item[ 0x6 ];                                    		// 0x01E8 (0x0018) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_SetupItemDisplay_Delegate__Delegate;        		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5303 );

		return pClassPointer;
	};

	void eventUpdateGlow ( int Index, unsigned long Visibility );
	void ASC_UpdateGlow ( int Index, unsigned long Visibility );
	void USC_SetupItemDisplay ( );
	void USC_SetupItemDisplay_Delegate ( );
	void CheckCurrency ( class UTgEventDataItem* pEvent );
	void CheckWishList ( unsigned long bPurge );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxHudItems::pClassPointer = NULL;

// Class TgClient.TgGfxHudNotify
// 0x0164 (0x0344 - 0x01E0)
class UTgGfxHudNotify : public UTgGfxScene
{
public:
	float                                              m_fKillDuration;                                  		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              m_fKillTimer;                                     		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeAccumulateDuration;                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeDuration;                              		// 0x01EC (0x0004) [0x0000000000000000]              
	float                                              m_fAccoladeTimer;                                 		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                m_nEnemyIconIndex;                                		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                m_nFriendIconIndex;                               		// 0x01F8 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bKillInterrupt : 1;                             		// 0x01FC (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              m_fIconDuration;                                  		// 0x0200 (0x0004) [0x0000000000000000]              
	float                                              m_fEnemyIconTimer;                                		// 0x0204 (0x0004) [0x0000000000000000]              
	float                                              m_fFriendIconTimer;                               		// 0x0208 (0x0004) [0x0000000000000000]              
	float                                              m_fObjectiveDuration;                             		// 0x020C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillMC;                                         		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerName;                                     		// 0x0214 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerIcon;                                     		// 0x0218 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerGlow;                                     		// 0x021C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_KillerFrame;                                    		// 0x0220 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimName;                                     		// 0x0224 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimIcon;                                     		// 0x0228 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimGlow;                                     		// 0x022C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_VictimFrame;                                    		// 0x0230 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_RedSlash;                                       		// 0x0234 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BlueSlash;                                      		// 0x0238 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyMC[ 0x5 ];                                 		// 0x023C (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_EnemyIcon[ 0x5 ];                               		// 0x0250 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendMC[ 0x5 ];                                		// 0x0264 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_FriendIcon[ 0x5 ];                              		// 0x0278 (0x0014) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeMC;                                     		// 0x028C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_AccoladeName;                                   		// 0x0290 (0x0004) [0x0000000000000000]              
	struct FNotifyData                                 m_NewData;                                        		// 0x0294 (0x0098) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FNotifyData >                       m_Notifications;                                  		// 0x032C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FEventLogData >                     m_EventLog;                                       		// 0x0338 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5304 );

		return pClassPointer;
	};

	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudNotify::pClassPointer = NULL;

// Class TgClient.TgGfxHudUpgrade
// 0x0048 (0x0228 - 0x01E0)
class UTgGfxHudUpgrade : public UTgGfxScene
{
public:
	float                                              m_fItemTimer;                                     		// 0x01E0 (0x0004) [0x0000000000000000]              
	float                                              m_fSkillTimer;                                    		// 0x01E4 (0x0004) [0x0000000000000000]              
	float                                              m_fItemDuration;                                  		// 0x01E8 (0x0004) [0x0000000000000000]              
	float                                              m_fSkillDuration;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_Items;                                          		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_Skills;                                         		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_ItemMC;                                         		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemType;                                       		// 0x020C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemName;                                       		// 0x0210 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemIcon;                                       		// 0x0214 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillMC;                                        		// 0x0218 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillType;                                      		// 0x021C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillName;                                      		// 0x0220 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SkillIcon;                                      		// 0x0224 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5305 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* pMP );
	void ReceiveGFxData ( class UGFxObject* pObj );
};

UClass* UTgGfxHudUpgrade::pClassPointer = NULL;

// Class TgClient.TgGfxIntro
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxIntro : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5306 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxIntro::pClassPointer = NULL;

// Class TgClient.TgGfxItemToast
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxItemToast : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5307 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventToastItem ( int ItemId );
	void ASC_ToastItem ( int ItemId );
};

UClass* UTgGfxItemToast::pClassPointer = NULL;

// Class TgClient.TgGfxLeaderboard
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxLeaderboard : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5308 );

		return pClassPointer;
	};

	void RequestCharacterLeaderboard ( int classId, int rankType );
	void ShowLeaderboard ( struct FString boardName, int aValue, int Option );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLeaderboard::pClassPointer = NULL;

// Class TgClient.TgGfxLoadouts
// 0x044C (0x0650 - 0x0204)
class UTgGfxLoadouts : public UTgGfxLoadoutsBase
{
public:
	struct FGFxLoadoutItem                             m_ItemBtn[ 0x2D ];                                		// 0x0204 (0x02D0) [0x0000000000000000]              
	class UTgGFxObject*                                m_UseClanBtn;                                     		// 0x04D4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutEquipBtn;                                		// 0x04D8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutEquipBtnBanner;                          		// 0x04DC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutUnlockBtn;                               		// 0x04E0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutFavoritesBtn;                            		// 0x04E4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutFavoritesCloseBtn;                       		// 0x04E8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_EquipItemScrollBar;                             		// 0x04EC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_LoadoutInsetBg;                                 		// 0x04F0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideStatsBtn;                                   		// 0x04F4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_ItemSelection;                                  		// 0x04F8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoostSelection;                                 		// 0x04FC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterBtn;                                     		// 0x0500 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterTitleTF;                                 		// 0x0504 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_BoosterTimeTF;                                  		// 0x0508 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_TextAudioBtn;                                   		// 0x050C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SelectedTitleTF;                                		// 0x0510 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_SearchField;                                    		// 0x0514 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FilterDropdown;                                 		// 0x0518 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemObject;                                      		// 0x051C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_GemTF;                                          		// 0x0520 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorObject;                                    		// 0x0524 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavorTF;                                        		// 0x0528 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_FavoritesInfoPanel;                             		// 0x052C (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItemId;                                		// 0x0530 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedItemType;                              		// 0x0534 (0x0004) [0x0000000000000000]              
	int                                                m_nSelectedIndex;                                 		// 0x0538 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bScrollToSelection : 1;                         		// 0x053C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bFavoritesMode : 1;                             		// 0x053C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nScrollIndex;                                   		// 0x0540 (0x0004) [0x0000000000000000]              
	int                                                m_nFilterId;                                      		// 0x0544 (0x0004) [0x0000000000000000]              
	TArray< int >                                      m_nShownItems;                                    		// 0x0548 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      m_nUnsortedItems;                                 		// 0x0554 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nHighlightIndex;                                		// 0x0560 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitTimer;                                  		// 0x0564 (0x0004) [0x0000000000000000]              
	float                                              m_fTipWaitDuration;                               		// 0x0568 (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickTimer;                              		// 0x056C (0x0004) [0x0000000000000000]              
	float                                              m_fDoubleClickDuration;                           		// 0x0570 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearchField;                                   		// 0x0574 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sSearch;                                        		// 0x0580 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     m_sBoosterTitle;                                  		// 0x058C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_nCachedMusicThemePreview;                       		// 0x0598 (0x0004) [0x0000000000000000]              
	TArray< struct FItemData_LoadoutsPage >            m_AvatarData;                                     		// 0x059C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_WardData;                                       		// 0x05A8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_PedestalData;                                   		// 0x05B4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_AnnouncerData;                                  		// 0x05C0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_FrameData;                                      		// 0x05CC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_JumpStampData;                                  		// 0x05D8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_GlobalEmoteData;                                		// 0x05E4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_MusicThemeData;                                 		// 0x05F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_RecallSkinData;                                 		// 0x05FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_HudThemeData;                                   		// 0x0608 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_LoadingBackgroundData;                          		// 0x0614 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_FountainFXData;                                 		// 0x0620 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_LevelUpFXData;                                  		// 0x062C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_DeathStampData;                                 		// 0x0638 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FItemData_LoadoutsPage >            m_PlayerTitleData;                                		// 0x0644 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5309 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void RefreshBoosterTimer ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLoadouts::pClassPointer = NULL;

// Class TgClient.TgGfxLobbyMain
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxLobbyMain : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5310 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxLobbyMain::pClassPointer = NULL;

// Class TgClient.TgGfxMatchDetails
// 0x000C (0x01EC - 0x01E0)
class UTgGfxMatchDetails : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SearchByMatchId_Delegate__Delegate;         		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5311 );

		return pClassPointer;
	};

	void eventMatchDataUpdated ( );
	void ASC_MatchDataUpdated ( );
	void USC_SearchByMatchId ( struct FString matchId );
	void USC_SearchByMatchId_Delegate ( struct FString matchId );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxMatchDetails::pClassPointer = NULL;

// Class TgClient.TgGfxPartyManagement
// 0x0098 (0x0278 - 0x01E0)
class UTgGfxPartyManagement : public UTgGfxScene
{
public:
	struct FPlayerBtn                                  m_PlayerBtns[ 0x4 ];                              		// 0x01E0 (0x0050) [0x0000000000000000]              
	struct FPlayerBtn                                  m_LocalPlayer;                                    		// 0x0230 (0x0014) [0x0000000000000000]              
	TArray< struct FListPlayerData >                   m_FriendList;                                     		// 0x0244 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_RecentlyPlayedList;                             		// 0x0250 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FListPlayerData >                   m_ClanList;                                       		// 0x025C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FPointer                                    m_CurrentList;                                    		// 0x0268 (0x0004) [0x0000000000001000]              ( CPF_Native )
	int                                                m_nCurrentView;                                   		// 0x026C (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_InviteList;                                     		// 0x0270 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bIsViewingInvite : 1;                           		// 0x0274 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5312 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxPartyManagement::pClassPointer = NULL;

// Class TgClient.TgGfxPlayerProfile
// 0x0024 (0x0134 - 0x0110)
class UTgGfxPlayerProfile : public UTgGFxEventObject
{
public:
	unsigned long                                      m_receivedPlayerActivities : 1;                   		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_receivedHistory : 1;                            		// 0x0110 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_receivedProfileInfo : 1;                        		// 0x0110 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      m_receivedMatchHistory : 1;                       		// 0x0110 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      m_updatedProfileData : 1;                         		// 0x0110 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      m_initializedFirstFilter : 1;                     		// 0x0110 (0x0004) [0x0000000000000000] [0x00000020] 
	int                                                m_playerId;                                       		// 0x0114 (0x0004) [0x0000000000000000]              
	TArray< class UTgGFxPlayerData* >                  m_arrPendingSelector;                             		// 0x0118 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_recentMatchesFilter;                            		// 0x0124 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchMembersFilter >               m_matchMembersFilter;                             		// 0x0128 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5313 );

		return pClassPointer;
	};

	void OnFriendSelector ( class UTgEventDataItem* pBaseEvent );
	void eventPlayerNameUpdated ( );
	void ASC_PlayerNameUpdated ( );
	void eventDropDownUpdated ( int Index );
	void ASC_DropDownUpdated ( int Index );
	void USC_TabSelected ( int Index );
	void USC_SearchByName ( struct FString PlayerName );
	void USC_SetFilter ( int filterIndex, int val );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxPlayerProfile::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAccolade
// 0x0004 (0x01E4 - 0x01E0)
class UTgGfxProfileAccolade : public UTgGfxScene
{
public:
	int                                                m_nPlayerId;                                      		// 0x01E0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5314 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventAccoladeDataUpdated ( );
	void ASC_AccoladeDataUpdated ( );
};

UClass* UTgGfxProfileAccolade::pClassPointer = NULL;

// Class TgClient.TgGfxProfileAchievements
// 0x001C (0x01FC - 0x01E0)
class UTgGfxProfileAchievements : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x01E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FAchievementData_ProfileAchievements > m_achievementDatas;                               		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  m_achievementDatasArray;                          		// 0x01F8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5315 );

		return pClassPointer;
	};

	void eventCheckIfHasMasterList ( );
	void ASC_CheckIfHasMasterList ( );
	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileAchievements::pClassPointer = NULL;

// Class TgClient.TgGfxProfileHistory
// 0x0038 (0x0218 - 0x01E0)
class UTgGfxProfileHistory : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                s_lastFilterQueueId;                              		// 0x01E4 (0x0004) [0x0000000000000000]              
	struct FString                                     s_GodFilter;                                      		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodsFilter_Delegate__Delegate;           		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetQueueFilter_Delegate__Delegate;          		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_ShowDetails_Delegate__Delegate;             		// 0x020C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5316 );

		return pClassPointer;
	};

	void eventQueueDataUpdated ( );
	void ASC_QueueDataUpdated ( );
	void eventMatchesDataUpdated ( );
	void ASC_MatchesDataUpdated ( );
	void USC_ShowDetails ( struct FString matchId );
	void USC_SetQueueFilter ( int queueId );
	void USC_SetGodsFilter ( struct FString sFilterGod );
	void USC_ShowDetails_Delegate ( struct FString matchId );
	void USC_SetQueueFilter_Delegate ( int queueId );
	void USC_SetGodsFilter_Delegate ( struct FString sFilterGod );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileHistory::pClassPointer = NULL;

// Class TgClient.TgGfxProfileLeagueStats
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxProfileLeagueStats : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5317 );

		return pClassPointer;
	};

	void eventUpdateLeagueStats ( );
	void ASC_UpdateLeagueStats ( );
	void UpdateQueueLeagues ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileLeagueStats::pClassPointer = NULL;

// Class TgClient.TgGfxProfileMastery
// 0x000C (0x01EC - 0x01E0)
class UTgGfxProfileMastery : public UTgGfxScene
{
public:
	int                                                m_playerId;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_searchedPlayerId;                               		// 0x01E4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_gotAllActivities : 1;                           		// 0x01E8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5318 );

		return pClassPointer;
	};

	void eventUpdateAll ( );
	void asc_updateAll ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileMastery::pClassPointer = NULL;

// Class TgClient.TgGfxProfileOverview
// 0x0028 (0x0208 - 0x01E0)
class UTgGfxProfileOverview : public UTgGfxScene
{
public:
	int                                                m_requestedPlayerId;                              		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_cachedUpdatedPlayerId;                          		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal1;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal2;                                 		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal3;                                 		// 0x01F4 (0x0004) [0x0000000000000000]              
	int                                                m_nOverrideGoal4;                                 		// 0x01F8 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_NavigateToClan_Delegate__Delegate;          		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5319 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateSelectedAchievements ( );
	void ASC_UpdateSelectedAchievements ( );
	void eventLeagueDataUpdated ( );
	void ASC_LeagueDataUpdated ( );
	void eventProfileDataUpdated ( );
	void ASC_ProfileDataUpdated ( );
	void USC_NavigateToClan ( );
	void USC_NavigateToClan_Delegate ( );
};

UClass* UTgGfxProfileOverview::pClassPointer = NULL;

// Class TgClient.TgGfxProfilePage
// 0x0028 (0x0208 - 0x01E0)
class UTgGfxProfilePage : public UTgGfxScene
{
public:
	int                                                cachedPlayerId;                                   		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_CurrentSelectedTab;                             		// 0x01E4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_HideProfile;                                    		// 0x01E8 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_supportIdLabel;                                 		// 0x01EC (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_supportIdTF;                                    		// 0x01F0 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_gameVersionLabel;                               		// 0x01F4 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_gameVersionTF;                                  		// 0x01F8 (0x0004) [0x0000000000000000]              
	TArray< class UTgGFxPlayerData* >                  m_arrPendingSelector;                             		// 0x01FC (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5320 );

		return pClassPointer;
	};

	void OnFriendSelector ( class UTgEventDataItem* pBaseEvent );
	void eventUpdateAvailable ( unsigned long vis );
	void ASC_UpdateAvailable ( unsigned long vis );
	void eventUpdateCallout ( );
	void ASC_UpdateCallout ( );
	void eventUpdatePlayer ( );
	void ASC_UpdatePlayer ( );
	void eventUpdateTab ( );
	void ASC_UpdateTab ( );
	void USC_GiftPlayer ( unsigned long isYourself );
	void USC_TwitchLink ( );
	void USC_UpdatePrivacy ( );
	void USC_AddFriend ( );
	void USC_TabSelected ( int tabId );
	void USC_SearchPlayerByName ( struct FString PlayerName );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfilePage::pClassPointer = NULL;

// Class TgClient.TgGfxProfileWorshiper
// 0x002C (0x020C - 0x01E0)
class UTgGfxProfileWorshiper : public UTgGfxScene
{
public:
	unsigned char                                      m_filterId;                                       		// 0x01E0 (0x0001) [0x0000000000000000]              
	int                                                m_playerId;                                       		// 0x01E4 (0x0004) [0x0000000000000000]              
	struct FString                                     m_sSearch;                                        		// 0x01E8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetGodMasteryFilter_Delegate__Delegate;     		// 0x01F4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_Search_Delegate__Delegate;                  		// 0x0200 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5321 );

		return pClassPointer;
	};

	void eventFilterDataUpdated ( );
	void ASC_FilterDataUpdated ( );
	void eventGodMasteryUpdated ( );
	void ASC_GodMasteryUpdated ( );
	void USC_Search ( struct FString searchText );
	void USC_Search_Delegate ( struct FString searchText );
	void USC_SetGodMasteryFilter ( int filterId );
	void USC_SetGodMasteryFilter_Delegate ( int filterId );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxProfileWorshiper::pClassPointer = NULL;

// Class TgClient.TgGfxQuestWindow
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxQuestWindow : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5322 );

		return pClassPointer;
	};

	void eventUpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void ASC_UpdateQuest ( int Id, int Count, int Goal, struct FString msg );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxQuestWindow::pClassPointer = NULL;

// Class TgClient.TgGfxRacerDispatcher
// 0x0018 (0x01F8 - 0x01E0)
class UTgGfxRacerDispatcher : public UTgGfxScene
{
public:
	struct FRacerDispatcherState                       lastState;                                        		// 0x01E0 (0x000C) [0x0000000000000000]              
	struct FScriptDelegate                             __USC_CheckForUpdates_Delegate__Delegate;         		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5323 );

		return pClassPointer;
	};

	void USC_CheckForUpdates ( );
	void USC_CheckForUpdates_Delegate ( );
	void eventDataChange ( class UGFxObject* Data );
	void ASC_DataChange ( class UGFxObject* Obj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxRacerDispatcher::pClassPointer = NULL;

// Class TgClient.TgGfxReferralPopup
// 0x000C (0x01EC - 0x01E0)
class UTgGfxReferralPopup : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_SendFriendReferral_Delegate__Delegate;      		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5324 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SendFriendReferral ( struct FString sQQId, struct FString sMessage, struct FString sPlayerName );
	void USC_SendFriendReferral_Delegate ( );
};

UClass* UTgGfxReferralPopup::pClassPointer = NULL;

// Class TgClient.TgGfxReferralReward
// 0x000C (0x01EC - 0x01E0)
class UTgGfxReferralReward : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenReferFriendReward_Delegate__Delegate;   		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5325 );

		return pClassPointer;
	};

	void USC_OpenReferFriendReward ( );
	void USC_OpenReferFriendReward_Delegate ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxReferralReward::pClassPointer = NULL;

// Class TgClient.TgGfxReferrals
// 0x0024 (0x0204 - 0x01E0)
class UTgGfxReferrals : public UTgGfxScene
{
public:
	TArray< struct FLevelRewardData >                  m_levelRewardDatas;                               		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayedRewardData >                 m_playedRewardDatas;                              		// 0x01EC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_OpenReferFriend_Delegate__Delegate;         		// 0x01F8 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5326 );

		return pClassPointer;
	};

	void eventUpdateAchievements ( );
	void ASC_UpdateAchievements ( );
	void eventUpdatePlayerList ( );
	void ASC_UpdatePlayerList ( );
	void USC_OpenReferFriend ( );
	void USC_OpenReferFriend_Delegate ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxReferrals::pClassPointer = NULL;

// Class TgClient.TgGfxReferralSelector
// 0x001C (0x01FC - 0x01E0)
class UTgGfxReferralSelector : public UTgGfxScene
{
public:
	float                                              m_nTimeout;                                       		// 0x01E0 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bTimeoutActive : 1;                             		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FPointer                                    pFriendMarshal;                                   		// 0x01E8 (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FPointer                                    pReferralMarshal;                                 		// 0x01EC (0x0004) [0x0000000000001000]              ( CPF_Native )
	struct FScriptDelegate                             __USC_SelectReferral_Delegate__Delegate;          		// 0x01F0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5327 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
	void eventUpdateFriendList ( );
	void ASC_UpdateFriendList ( );
	void USC_SelectReferral ( struct FString sQQId );
	void USC_SelectReferral_Delegate ( );
};

UClass* UTgGfxReferralSelector::pClassPointer = NULL;

// Class TgClient.TgGfxSettingsMenu
// 0x000C (0x01EC - 0x01E0)
class UTgGfxSettingsMenu : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_OpenQueueWarning_Delegate__Delegate;        		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5328 );

		return pClassPointer;
	};

	void USC_OpenQueueWarning ( );
	void USC_OpenQueueWarning_Delegate ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxSettingsMenu::pClassPointer = NULL;

// Class TgClient.TgGfxSpectatorHud
// 0x0060 (0x0240 - 0x01E0)
class UTgGfxSpectatorHud : public UTgGfxScene
{
public:
	int                                                m_BannedIds[ 0x6 ];                               		// 0x01E0 (0x0018) [0x0000000000000000]              
	unsigned long                                      m_bFindMatchDetails : 1;                          		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bTeamStatsOpen : 1;                             		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              m_fUpdateWaitRT;                                  		// 0x01FC (0x0004) [0x0000000000000000]              
	float                                              m_fUpdateWaitGT;                                  		// 0x0200 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  _global;                                          		// 0x0204 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_goldArray;                                      		// 0x0208 (0x0004) [0x0000000000000000]              
	class UGFxObject*                                  m_xpArray;                                        		// 0x020C (0x0004) [0x0000000000000000]              
	TArray< struct FObjectiveSpawnData >               m_ObjectiveData;                                  		// 0x0210 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdateStat_Delegate__Delegate;              		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_SetMenuIsOpen_Delegate__Delegate;           		// 0x0228 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             __USC_UpdatePlayerList_Delegate__Delegate;        		// 0x0234 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5329 );

		return pClassPointer;
	};

	void eventSendGraphData ( class UGFxObject* Obj );
	void USC_UpdatePlayerList ( class UGFxObject* pPlayerList, int nLength );
	void USC_UpdatePlayerList_Delegate ( class UGFxObject* pPlayerList, int nLength );
	void USC_SetMenuIsOpen ( unsigned long bOpen );
	void USC_SetMenuIsOpen_Delegate ( unsigned long bOpen );
	void USC_UpdateStat ( int pawnId );
	void USC_UpdateStat_Delegate ( int pawnId );
	void OnGameHUDEvent ( class UTgEventDataItem* pEvent );
	void OnSpectatorEvent ( class UTgEventDataItem* pEvent );
	void UpdateGraph ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pParentMovie );
};

UClass* UTgGfxSpectatorHud::pClassPointer = NULL;

// Class TgClient.TgGfxStoreChestPC
// 0x0004 (0x01E4 - 0x01E0)
class UTgGfxStoreChestPC : public UTgGfxScene
{
public:
	unsigned long                                      m_bIsClanChest : 1;                               		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5330 );

		return pClassPointer;
	};

	void OnAcquisition ( class UTgEventDataItem* pEvent );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxStoreChestPC::pClassPointer = NULL;

// Class TgClient.TgGfxTreasurePicker
// 0x000C (0x01EC - 0x01E0)
class UTgGfxTreasurePicker : public UTgGfxScene
{
public:
	TArray< struct FGFxTreasureItem >                  m_nShownItems;                                    		// 0x01E0 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5331 );

		return pClassPointer;
	};

	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMoviePlayer );
};

UClass* UTgGfxTreasurePicker::pClassPointer = NULL;

// Class TgClient.TgGfxWisdomMain
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxWisdomMain : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5332 );

		return pClassPointer;
	};

	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxWisdomMain::pClassPointer = NULL;

// Class TgClient.TgGfxWisdomWeb
// 0x000C (0x01EC - 0x01E0)
class UTgGfxWisdomWeb : public UTgGfxScene
{
public:
	struct FScriptDelegate                             __USC_StartStreamData_Delegate__Delegate;         		// 0x01E0 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5333 );

		return pClassPointer;
	};

	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
	void ASC_UpdateStreamList ( );
	void eventUpdateStreamList ( );
	void USC_StartStreamData ( int streamId, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void USC_StartStreamData_Delegate ( );
};

UClass* UTgGfxWisdomWeb::pClassPointer = NULL;

// Class TgClient.TgStreamManager
// 0x0000 (0x00B4 - 0x00B4)
class UTgStreamManager : public UTgStreamManagerBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5334 );

		return pClassPointer;
	};

	bool OpenStream ( int surfaceId, struct FString URL, unsigned long external, float X, float Y, float Width, float Height, float widthReal, float heightReal, unsigned long joinChat );
};

UClass* UTgStreamManager::pClassPointer = NULL;

// Class TgClient.TgGameDataHandler
// 0x0004 (0x0104 - 0x0100)
class UTgGameDataHandler : public UTgDataHandler
{
public:
	class UTgDataGroup_Clan*                           m_Clan;                                           		// 0x0100 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5335 );

		return pClassPointer;
	};

	void ChatInput_SetReplyName ( struct FString sSenderName );
	void DispatchEvent_VendorStore_UpdateInventory ( );
	void DispatchEvent_VendorStore_UpdateStats ( );
	void InitializeDataHandler ( );
};

UClass* UTgGameDataHandler::pClassPointer = NULL;

// Class TgClient.TgGameMoviePlayer
// 0x0090 (0x07D0 - 0x0740)
class UTgGameMoviePlayer : public UTgMoviePlayer
{
public:
	struct FString                                     m_sRealMoneyCurCode;                              		// 0x0740 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FWebRegion >                        m_WebRegions;                                     		// 0x074C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class UGFxObject* >                        m_renderTargetCallback;                           		// 0x0758 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_bFeatureAutoVoicePack;                          		// 0x0764 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemType;                               		// 0x0768 (0x0004) [0x0000000000000000]              
	int                                                m_nFeatureItemId;                                 		// 0x076C (0x0004) [0x0000000000000000]              
	struct FString                                     m_smiteTvPageAutoTab;                             		// 0x0770 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                m_LastPlayNowScreen;                              		// 0x077C (0x0004) [0x0000000000000000]              
	int                                                m_nReturnToEventId;                               		// 0x0780 (0x0004) [0x0000000000000000]              
	class UTexture*                                    m_BrowserTexture[ 0xC ];                          		// 0x0784 (0x0030) [0x0000000000000000]              
	unsigned long                                      m_bAllowSpaceBar : 1;                             		// 0x07B4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bWasCustom : 1;                                 		// 0x07B4 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_SkipPlayIntoVideo : 1;                          		// 0x07B4 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                m_nPlayerNoteId;                                  		// 0x07B8 (0x0004) [0x0000000000000000]              
	int                                                m_browserOpen;                                    		// 0x07BC (0x0004) [0x0000000000000000]              
	class UTgGfxSovereigntyVendorStore*                m_mcSovereigntyVendorStore;                       		// 0x07C0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __DelegateGFxList__Delegate;                      		// 0x07C4 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5336 );

		return pClassPointer;
	};

	void DelegateGFxList ( class UGFxObject* List );
	void usc_rotate_lobby_model ( float fValue );
	void usc_activate_key ( );
	void eventCacheLoggedInGamepad ( );
	void SetUISetting ( struct FString Setting, struct FString Value );
	void CheckSpecialInput ( class ATgPlayerController* TgPC, struct FName ButtonName, unsigned char Event );
	bool eventFilterButtonInput ( int ControllerId, struct FName ButtonName, unsigned char Event );
	bool eventWidgetUnloaded ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool eventWidgetInitialized ( struct FName WidgetName, struct FName WidgetPath, class UGFxObject* Widget );
	bool GetBrowserType ( int nURLType );
	void ToggleCombatLog ( );
	int usc_get_ui_display_mode ( );
	void NativeTick ( float DeltaTime );
	void UpdateTutorialImage ( unsigned long show, int HeaderMsgId, int ImageId, int msgId );
	void HandleEscapeKey ( );
	void PostInit ( );
	void UpdateQuestUI ( int Id, int Count, int Goal, int msgId );
	void usc_allowSpaceBar ( unsigned long bAllow );
	struct FString usc_getPassiveMeterPath ( int BotID );
	void RunIntroMovie ( unsigned long bRun );
	void InvokeRenderTargetReady ( );
	void SetRenderTargetCallback ( class UGFxObject* targetObj, unsigned long addObj );
	void usc_autoConfigureSettings ( );
	void usc_goto_item ( int nItemId, unsigned long bUseAltRedirect );
	bool usc_send_chat ( int nChannel, struct FString msg, struct FString Recipient );
	void usc_toggle_player_mute ( struct FString sPlayerName, struct FString sUnused, struct FString nPlayerId );
	bool usc_lobbyFeaturesShouldShow ( );
	void usc_isPlayingTutorial ( unsigned long Toggle );
	void usc_stopSoundCue ( struct FString soundTheme, struct FString SoundEventName );
	void usc_join_channel ( int Id );
	struct FString usc_GetWinningTeamName ( );
	struct FString usc_get_device_tooltip ( int nItemId, int nRank );
	void usc_force_purchase_current_item ( );
	void usc_forward_feature2 ( int pItemType, struct FString pItemData, struct FString pItemData2 );
	void usc_forward_feature ( int pItemType, struct FString pItemData );
	void usc_class_loading_resume ( );
	void usc_class_loading_suspend ( );
	void usc_clearReferral ( struct FString sExtId );
	void usc_ListenNextVivoxBtn ( );
	int usc_GetLocalPlayerId ( );
	void usc_request_account_info ( int nType );
	void OnHUDStateChange ( class UTgEventDataItem* pEvent );
	void OnGameUIEvent ( class UTgEventDataItem* pEvent );
	void ProcessUIEvents ( );
	bool SetRenderTargetEnabled ( unsigned long bEnabled, int surfaceId, int X, int Y, float widthReal, float heightReal, float Width, float Height );
	class UTgDataGroup_Clan* GetClanData ( );
	void SetLoginReady ( unsigned long fromIntro );
	void ShowLoginUI ( );
	void ShowNormalUI ( );
	void SetHUDVisiblity ( );
	void USC_ShowLeaderboard ( struct FString sName, int nValue, int nOption );
	void usc_Scene_Manager_Scene_Unloaded ( struct FString sSceneName );
	void usc_Scene_Manager_Scene_Loaded ( struct FString sSceneName );
	class UGFxObject* usc_getItemData ( int ItemId, int quantityCount, int vendorId );
	bool usc_resize_browser ( int surfaceId, float X, float Y, float Width, float Height, float widthReal, float heightReal );
	void usc_enable_browser_input ( unsigned long bEnable );
	void UnloadHudSection ( struct FString Section );
	void usc_rejectNotification ( int nNotificationType, int nId );
	void usc_acceptNotification ( int nNotificationType, int nId );
	void usc_test_voice_pack ( int nVoicePackId, int nSkinId );
	void usc_show_skin ( int nSkinId );
	void usc_request_treasure_roll ( int nItemId, int CurrencyType );
	bool is_item_owned ( int ItemId );
	bool usc_is_item_owned ( struct FString ItemId );
	void usc_unregister_mouse_region ( struct FString Key );
	void usc_register_mouse_region ( struct FString Key, int X, int Y, int Width, int Height );
	bool usc_is_in_game ( );
	void EndLobbyPlayback ( );
	void CancelPlayback ( );
	void OnDemoReady ( );
	bool usc_match_can_purchase_random_class ( int nQueueId );
	void usc_viewStatsOnline ( struct FString sInstanceId );
	void usc_close_eom_lobby ( int nNavigationTarget );
	bool usc_can_play_again ( );
	void usc_match_choose_skin ( int nSkinId );
	void usc_match_choose_class ( int nClassId );
	void USC_SelectedPopup ( int nActionId, struct FString sInputValue, struct FString sSecondaryInputValue );
	void FakeItemToast ( int nItemId );
	void CloseChatTab ( int nChannel, struct FString sSender );
	void OpenChatTab ( int nChannel, unsigned long bForce );
	bool ShowGodPackPurchase ( );
	struct FString usc_CheckForLoginErrorMsg ( );
	void LeavePartyNotification ( );
	void DisbandPartyNotification ( );
	void GotoSendGift ( struct FPointer pPID );
	void GotoChestItem ( int nChestItemId, int nOriginalItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	void GotoItem ( int nItemId, int nReturnToTarget, int nReturnToEvent, unsigned long bUseAltRedirect );
	int usc_getBoostedTime ( );
	void UnregisterWebPageRegion ( struct FString sName );
	int RegisterWebPageRegion ( struct FString sName, unsigned long bWidescreen, int nStreamId, struct FString sUrl, float X, float Y, float Width, float Height, float realWidth, float realHeight );
	void USC_OpenInternalBrowser ( struct FString URL );
	void USC_OpenExternalBrowser ( struct FString externalURL );
	void LoadBrowserScene ( );
};

UClass* UTgGameMoviePlayer::pClassPointer = NULL;

// Class TgClient.TgGameSceneManager
// 0x0000 (0x00BC - 0x00BC)
class UTgGameSceneManager : public UTgSceneManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5337 );

		return pClassPointer;
	};

};

UClass* UTgGameSceneManager::pClassPointer = NULL;

// Class TgClient.TgGfxChatInput
// 0x004C (0x022C - 0x01E0)
class UTgGfxChatInput : public UTgGfxScene
{
public:
	int                                                m_nYPos;                                          		// 0x01E0 (0x0004) [0x0000000000000000]              
	int                                                m_nBuffer;                                        		// 0x01E4 (0x0004) [0x0000000000000000]              
	int                                                m_nOffset;                                        		// 0x01E8 (0x0004) [0x0000000000000000]              
	int                                                m_nChannel;                                       		// 0x01EC (0x0004) [0x0000000000000000]              
	int                                                m_nMaxWidth;                                      		// 0x01F0 (0x0004) [0x0000000000000000]              
	int                                                m_nPrevIndex;                                     		// 0x01F4 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_bInput : 1;                                     		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bIntercept : 1;                                 		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      m_bAutoFilled : 1;                                		// 0x01F8 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FString                                     m_sRecipient;                                     		// 0x01FC (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UTgGFxObject*                                m_Help;                                           		// 0x0208 (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Input;                                          		// 0x020C (0x0004) [0x0000000000000000]              
	class UTgGFxObject*                                m_Channel;                                        		// 0x0210 (0x0004) [0x0000000000000000]              
	TArray< struct FChannelData >                      m_Shortcuts;                                      		// 0x0214 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           m_PrevChats;                                      		// 0x0220 (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5338 );

		return pClassPointer;
	};

	void OnGameUIEvent ( class UTgEventDataItem* pEvt );
	void ReceiveGFxData ( class UGFxObject* pObj );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* pMP );
};

UClass* UTgGfxChatInput::pClassPointer = NULL;

// Class TgClient.TgSpectatorHUD
// 0x001C (0x0568 - 0x054C)
class ATgSpectatorHUD : public ATgGameHUD
{
public:
	unsigned char                                      m_eClientVisibilityMode;                          		// 0x054C (0x0001) [0x0000000000000000]              
	class AActor*                                      m_LastUIViewTarget;                               		// 0x0550 (0x0004) [0x0000000000000000]              
	unsigned long                                      m_StatsSeeded : 1;                                		// 0x0554 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      m_bStatsPanelHidden : 1;                          		// 0x0554 (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                m_nCurrentStatsPanel;                             		// 0x0558 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxStatsPanel;                                 		// 0x055C (0x0004) [0x0000000000000000]              
	int                                                m_nCurrentInfoPanel;                              		// 0x0560 (0x0004) [0x0000000000000000]              
	int                                                m_nMaxInfoPanel;                                  		// 0x0564 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5339 );

		return pClassPointer;
	};

	void ToggleHUD ( );
	void eventTick ( float DeltaTime );
	int eventGetGameState ( );
	void SetVisibilityMode ( unsigned char Mode );
	void ToggleVisibilityMode ( );
	void ShowPreviousInfoPanel ( );
	void ShowNextInfoPanel ( );
	void ToggleStatPanel ( );
	void ShowPreviousStatPanel ( );
	void ShowNextStatPanel ( );
	bool UpdatePlayerStatUI ( class ATgPawn* changedPawn );
	void SetStatIndex ( int StatIndex );
	void SpectatorShowAll ( );
	void SpectatorHideBottomHalf ( );
	void SpectatorHideAll ( );
	void ToggleSpectatorGameStats ( );
	void ToggleSpectatorMinimap ( );
	void ToggleSpectatorPlayerPanels ( );
	void ToggleSpectatorObjectives ( );
	void ToggleSpectatorTimeline ( );
	void ToggleSecretMessage ( );
	void ToggleSpectatorControls ( );
	void ToggleSpectatorPlayerInformation ( );
	void ToggleSpectatorTicker ( );
	void SetSpectatorMode ( int nNum );
	void ToggleBans ( );
	void EndMission ( unsigned long bPlayerAttacker, unsigned char finalWinState );
	void UpdateSpectatorViewMode ( unsigned char Mode );
	void UpdateSpectatorViewTarget ( class AActor* Target );
	unsigned char GetVisibilityMode ( );
};

UClass* ATgSpectatorHUD::pClassPointer = NULL;

// Class TgClient.TgClanDC_ClanStats
// 0x000F (0x0144 - 0x0135)
class UTgClanDC_ClanStats : public UTgDataChunk
{
public:
	struct FString                                     m_sPendingMOTD;                                   		// 0x0138 (0x000C) [0x0000000000500000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5340 );

		return pClassPointer;
	};

	void usc_UpdateClanNameFormat ( int nIndex );
	void usc_UpdateTag ( struct FString sMessage );
	void usc_ApplicationAction ( int nAction, struct FString sPlayerId );
	void usc_UpdateRecruiting ( struct FString sMessage, unsigned long bIsRecruiting );
	void usc_UpdateMessage ( struct FString sMessage, unsigned long bIsDaily );
	void OnFilterResult ( struct FString sOriginal, struct FString sFiltered, unsigned long bTotalCensor );
	void UpdateRecruiting ( struct FString sDesc, unsigned long bIsRecruiting );
	void UpdateClanMOTD ( struct FString sMessage );
	void UpdateClanDesc ( struct FString sMessage );
	void UpdateClanName ( struct FString sName );
	void UpdateClanData ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_ClanStats::pClassPointer = NULL;

// Class TgClient.TgClanDC_Roster
// 0x0FA7 (0x10DC - 0x0135)
class UTgClanDC_Roster : public UTgDataChunk
{
public:
	struct Fdword                                      m_nPlayerId;                                      		// 0x0138 (0x0004) [0x0000000000000000]              
	class UTgClanDC_Player*                            m_MemberArray[ 0x3E8 ];                           		// 0x013C (0x0FA0) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5341 );

		return pClassPointer;
	};

	void usc_UpdateComment ( struct FString nPlayerId, struct FString sComment, unsigned long isOfficerNote );
	void usc_ClanAction ( int nAction, struct FString nPlayerId );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Roster::pClassPointer = NULL;

// Class TgClient.TgClanDC_Settings
// 0x0007 (0x013C - 0x0135)
class UTgClanDC_Settings : public UTgDataChunk
{
public:
	class UGFxObject*                                  m_RankArray;                                      		// 0x0138 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5342 );

		return pClassPointer;
	};

	void usc_UpdateLeader ( struct FString sName );
	void usc_UpdateRank ( float RankId, struct FString sName, float rankPermission );
	void UpdateRankArray ( );
	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgClanDC_Settings::pClassPointer = NULL;

// Class TgClient.TgDataGroup_Clan
// 0x000F (0x0144 - 0x0135)
class UTgDataGroup_Clan : public UTgDataChunk
{
public:
	class UTgClanDC_ClanStats*                         m_ClanStats;                                      		// 0x0138 (0x0004) [0x0000000000000000]              
	class UTgClanDC_Settings*                          m_ClanSettings;                                   		// 0x013C (0x0004) [0x0000000000000000]              
	class UTgClanDC_Roster*                            m_ClanRoster;                                     		// 0x0140 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5343 );

		return pClassPointer;
	};

	void InitializeData ( class UTgDataHandler* Handler, class UTgDataChunk* parentChunk );
};

UClass* UTgDataGroup_Clan::pClassPointer = NULL;

// Class TgClient.TgGfxEventPurchase
// 0x0000 (0x01E0 - 0x01E0)
class UTgGfxEventPurchase : public UTgGfxScene
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5344 );

		return pClassPointer;
	};

	void ShowOutOfCurrency ( int CurrencyType );
	void SubmitPurchase ( class UGFxObject* Data );
	void GetItemInfo ( int ItemId );
	void ReceiveGFxData ( class UGFxObject* theObject );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGfxEventPurchase::pClassPointer = NULL;

// Class TgClient.TgGFxEventQuestNotification
// 0x0048 (0x0228 - 0x01E0)
class UTgGFxEventQuestNotification : public UTgGfxScene
{
public:
	unsigned char                                      UnknownData00[ 0x3C ];                            		// 0x01E0 (0x003C) UNKNOWN PROPERTY: MapProperty TgClient.TgGFxEventQuestNotification.ActivityRedirects
	struct FScriptDelegate                             __USC_GetOptOut_Delegate__Delegate;               		// 0x021C (0x000C) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5345 );

		return pClassPointer;
	};

	bool USC_GetOptOut ( );
	bool USC_GetOptOut_Delegate ( );
	void ReceiveGFxData ( class UGFxObject* Data );
	void RedirectToFirstQuest ( );
	void UpdateNotifySetting ( unsigned long bDisable );
	bool GetHasAvailableSpecialEventQuest ( );
	void Uninitialize ( );
	void Initialize ( class UTgMoviePlayer* theMovie );
};

UClass* UTgGFxEventQuestNotification::pClassPointer = NULL;

// Class TgClient.TgLobbyHUD
// 0x0000 (0x0510 - 0x0510)
class ATgLobbyHUD : public ATgLobbyHUDBase
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 5346 );

		return pClassPointer;
	};

	void eventSetInitialState ( );
	void eventReturnToMain ( );
	bool IsCurrentCameraMatchLobby ( );
	struct FName GetMatchLobbyCameraName ( );
	void OnClassSelected ( int nClassId, int nSkinId, unsigned long bChangedClass, unsigned long bChangedSkin );
	void AsynchNotifies ( );
};

UClass* ATgLobbyHUD::pClassPointer = NULL;

// Class TgClient.TgTestMoviePlayer
// 0x0000 (0x0740 - 0x0740)
class UTgTestMoviePlayer : public UTgMoviePlayer
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->GetIndex( 153449 );

		return pClassPointer;
	};

};

UClass* UTgTestMoviePlayer::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif