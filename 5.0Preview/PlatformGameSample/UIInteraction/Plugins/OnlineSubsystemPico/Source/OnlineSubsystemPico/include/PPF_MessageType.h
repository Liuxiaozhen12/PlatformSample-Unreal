// This file is generated automatically. Please don't edit it.

#ifndef PPF_MESSAGETYPE_H
#define PPF_MESSAGETYPE_H

#include "PPF_Platform_Defs.h"

/// @file PPF_MessageType.h
/// @ingroup Global

typedef enum {
    ppfMessageType_Unknown                                          = -1,
    ppfMessageType_PlatformInitializeAndroidAsynchronous            = 1,
    ppfMessageType_User_GetLoggedInUser                             = 10000,
    ppfMessageType_User_GetAccessToken                              = 10001,
    ppfMessageType_User_Get                                         = 10002,
    ppfMessageType_User_LaunchFriendRequestFlow                     = 10003,
    ppfMessageType_User_GetLoggedInUserFriends                      = 10004,
    ppfMessageType_User_GetNextUserArrayPage                        = 10005,
    ppfMessageType_User_GetLoggedInUserFriendsAndRooms              = 10006,
    ppfMessageType_User_GetAuthorizedPermissions = 10007,
    ppfMessageType_User_RequestUserPermissions = 10008,

    ppfMessageType_Notification_Rtc_OnRoomStats                     = 10200,
    ppfMessageType_Notification_Rtc_OnJoinRoom                      = 10201,
    ppfMessageType_Notification_Rtc_OnLeaveRoom                     = 10202,
    ppfMessageType_Notification_Rtc_OnUserLeaveRoom                 = 10203,
    ppfMessageType_Notification_Rtc_OnUserJoinRoom                  = 10204,
    ppfMessageType_Notification_Rtc_OnConnectionStateChange         = 10205,
    ppfMessageType_Notification_Rtc_OnWarn                          = 10206,
    ppfMessageType_Notification_Rtc_OnRoomWarn                      = 10207,
    ppfMessageType_Notification_Rtc_OnRoomError                     = 10208,
    ppfMessageType_Notification_Rtc_OnError                         = 10209,
    ppfMessageType_Notification_Rtc_OnUserStartAudioCapture         = 10210,
    ppfMessageType_Notification_Rtc_OnAudioPlaybackDeviceChanged    = 10211,
    ppfMessageType_Notification_Rtc_OnRemoteAudioPropertiesReport   = 10212,
    ppfMessageType_Notification_Rtc_OnLocalAudioPropertiesReport    = 10213,
    ppfMessageType_Notification_Rtc_OnUserStopAudioCapture          = 10214,
    ppfMessageType_Notification_Rtc_OnUserMuteAudio                 = 10215,
    ppfMessageType_Notification_Rtc_OnMediaDeviceStateChanged       = 10216,
    ppfMessageType_Notification_Rtc_OnRoomMessageReceived = 10217,
    ppfMessageType_Notification_Rtc_OnUserMessageReceived = 10218,
    ppfMessageType_Notification_Rtc_OnTokenWillExpire=10219,
    ppfMessageType_Rtc_GetToken                                     = 10300,

    ppfMessageType_Matchmaking_Browse2                                  = 10400,
    ppfMessageType_Matchmaking_Cancel2                                  = 10402,
    ppfMessageType_Matchmaking_CreateAndEnqueueRoom2                    = 10404,
    ppfMessageType_Matchmaking_Enqueue2                                 = 10408,
    ppfMessageType_Matchmaking_EnqueueRoom2                             = 10410,
    ppfMessageType_Matchmaking_GetAdminSnapshot                         = 10411,
    ppfMessageType_Matchmaking_GetStats                                 = 10412,
    ppfMessageType_Matchmaking_ReportResultInsecure                     = 10414,
    ppfMessageType_Matchmaking_StartMatch                               = 10415,

    ppfMessageType_Room_CreateAndJoinPrivate                            = 10500,
    ppfMessageType_Room_CreateAndJoinPrivate2                           = 10501,
    ppfMessageType_Room_Get                                             = 10502,
    ppfMessageType_Room_GetCurrent                                      = 10503,
    ppfMessageType_Room_GetCurrentForUser                               = 10504,
    ppfMessageType_Room_GetInvitableUsers                               = 10505,
    ppfMessageType_Room_GetInvitableUsers2                              = 10506,
    ppfMessageType_Room_GetModeratedRooms                               = 10507,
    ppfMessageType_Room_GetNextRoomArrayPage                            = 10508,
    ppfMessageType_Room_InviteUser                                      = 10509,
    ppfMessageType_Room_Join                                            = 10510,
    ppfMessageType_Room_Join2                                           = 10511,
    ppfMessageType_Room_KickUser                                        = 10512,
    ppfMessageType_Room_LaunchInvitableUserFlow                         = 10513,
    ppfMessageType_Room_Leave                                           = 10514,
    ppfMessageType_Room_SetDescription                                  = 10515,
    ppfMessageType_Room_UpdateDataStore                                 = 10516,
    ppfMessageType_Room_UpdateMembershipLockStatus                      = 10517,
    ppfMessageType_Room_UpdateOwner                                     = 10518,
    ppfMessageType_Room_UpdatePrivateRoomJoinPolicy                     = 10519,

    ppfMessageType_Notification_Matchmaking_MatchFound                  = 10600,
    ppfMessageType_Notification_Room_InviteAccepted                     = 10601,
    ppfMessageType_Notification_Room_InviteReceived                     = 10602,
    ppfMessageType_Notification_Room_RoomUpdate                         = 10603,
    ppfMessageType_Notification_Game_ConnectionEvent                    = 10604,
    ppfMessageType_Notification_Game_RequestFailed                      = 10605,
    ppfMessageType_Notification_Game_StateReset                         = 10606,
    ppfMessageType_Notification_GetNextRoomInviteNotificationArrayPage  = 10607,
    ppfMessageType_Notification_GetRoomInvites                          = 10608,
    ppfMessageType_Notification_MarkAsRead                              = 10609,

    ppfMessageType_PlatformGameInitializeAsynchronous                   = 10700,

    ppfMessageType_Leaderboard_Get                                      = 10800,
    ppfMessageType_Leaderboard_GetNextLeaderboardArrayPage              = 10801,
    ppfMessageType_Leaderboard_GetEntries                               = 10802,
    ppfMessageType_Leaderboard_GetEntriesAfterRank                      = 10803,
    ppfMessageType_Leaderboard_GetEntriesByIds                          = 10804,
    ppfMessageType_Leaderboard_GetNextEntries                           = 10805,
    ppfMessageType_Leaderboard_GetPreviousEntries                       = 10806,
    ppfMessageType_Leaderboard_WriteEntry                               = 10807,
    ppfMessageType_Leaderboard_WriteEntryWithSupplementaryMetric        = 10808,

    ppfMessageType_Application_LaunchOtherApp                       = 11001,
    ppfMessageType_Presence_GetSentInvites                          = 11002,
    ppfMessageType_Presence_GetInvitableUsers                       = 11003,
    ppfMessageType_Presence_SendInvites                             = 11004,
    ppfMessageType_Presence_GetDestinations                         = 11005,
    ppfMessageType_Presence_Clear                                   = 11006,
    ppfMessageType_Presence_Set                                     = 11007,
    ppfMessageType_Notification_ApplicationLifecycle_LaunchIntentChanged = 11008,
    ppfMessageType_Notification_Presence_JoinIntentReceived             = 11009,
    ppfMessageType_Notification_Presence_LeaveIntentReceived            = 11010,
    ppfMessageType_Application_LaunchOtherAppByPresence             = 11011,
    ppfMessageType_Notification_APPLICATION_ROOM_INVITE_ACCEPTED = 11012,



    ppfMessageType_Application_LaunchOtherAppByMessage              = 11013,
    ppfMessageType_IAP_GetProductsBySKU = 12001,
    ppfMessageType_IAP_GetViewerPurchases = 12002,
    ppfMessageType_IAP_LaunchCheckoutFlow = 12003,
    ppfMessageType_IAP_ConsumePurchase = 12004,

    ppfMessageType_Sport_GetUserInfo = 12500,
    ppfMessageType_Sport_GetDailySummary = 12501,
    ppfMessageType_Sport_GetSummary = 12502,
} ppfMessageType;
#endif

