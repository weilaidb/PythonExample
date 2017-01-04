#define __MAC80211_DEBUGFS_H
extern void debugfs_hw_add(struct ieee80211_local *local);
extern int mac80211_open_file_generic(struct inode *inode, struct file *file);
extern int mac80211_format_buffer(char __user *userbuf, size_t count,
loff_t *ppos, char *fmt, ...);
static inline void debugfs_hw_add(struct ieee80211_local *local)
