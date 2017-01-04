#define __IEEE80211_DEBUGFS_NETDEV_H
void ieee80211_debugfs_add_netdev(struct ieee80211_sub_if_data *sdata);
void ieee80211_debugfs_remove_netdev(struct ieee80211_sub_if_data *sdata);
void ieee80211_debugfs_rename_netdev(struct ieee80211_sub_if_data *sdata);
static inline void ieee80211_debugfs_add_netdev(
struct ieee80211_sub_if_data *sdata)
static inline void ieee80211_debugfs_remove_netdev(
struct ieee80211_sub_if_data *sdata)
static inline void ieee80211_debugfs_rename_netdev(
struct ieee80211_sub_if_data *sdata)
