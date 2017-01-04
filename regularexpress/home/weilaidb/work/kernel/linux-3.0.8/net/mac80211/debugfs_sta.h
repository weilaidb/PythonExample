#define __MAC80211_DEBUGFS_STA_H
void ieee80211_sta_debugfs_add(struct sta_info *sta);
void ieee80211_sta_debugfs_remove(struct sta_info *sta);
static inline void ieee80211_sta_debugfs_add(struct sta_info *sta)
static inline void ieee80211_sta_debugfs_remove(struct sta_info *sta)
