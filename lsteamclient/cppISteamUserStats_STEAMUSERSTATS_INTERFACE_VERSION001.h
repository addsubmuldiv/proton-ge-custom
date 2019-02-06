#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumStats(void *, CGameID);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatName(void *, CGameID, uint32);
extern ESteamUserStatType cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStatType(void *, CGameID, const char *);
extern uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumAchievements(void *, CGameID);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementName(void *, CGameID, uint32);
extern uint32 cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetNumGroupAchievements(void *, CGameID);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievementName(void *, CGameID, uint32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_RequestCurrentStats(void *, CGameID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat(void *, CGameID, const char *, int32 *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetStat_2(void *, CGameID, const char *, float *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat(void *, CGameID, const char *, int32);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetStat_2(void *, CGameID, const char *, float);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_UpdateAvgRateStat(void *, CGameID, const char *, float, double);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievement(void *, CGameID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetGroupAchievement(void *, CGameID, const char *, bool *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetAchievement(void *, CGameID, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_SetGroupAchievement(void *, CGameID, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_StoreStats(void *, CGameID);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearAchievement(void *, CGameID, const char *);
extern bool cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_ClearGroupAchievement(void *, CGameID, const char *);
extern int cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementIcon(void *, CGameID, const char *);
extern const char * cppISteamUserStats_STEAMUSERSTATS_INTERFACE_VERSION001_GetAchievementDisplayAttribute(void *, CGameID, const char *, const char *);
#ifdef __cplusplus
}
#endif
