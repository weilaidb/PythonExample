#define __RC_MINSTREL_H
struct minstrel_rate ;
struct minstrel_sta_info ;
struct minstrel_priv ;
struct minstrel_debugfs_info ;
extern struct rate_control_ops mac80211_minstrel;
void minstrel_add_sta_debugfs(void *priv, void *priv_sta, struct dentry *dir);
void minstrel_remove_sta_debugfs(void *priv, void *priv_sta);
int minstrel_stats_open(struct inode *inode, struct file *file);
ssize_t minstrel_stats_read(struct file *file, char __user *buf, size_t len, loff_t *ppos);
int minstrel_stats_release(struct inode *inode, struct file *file);
