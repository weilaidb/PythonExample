#define __CFG80211_DEBUGFS_H
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev);
static inline
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev)
