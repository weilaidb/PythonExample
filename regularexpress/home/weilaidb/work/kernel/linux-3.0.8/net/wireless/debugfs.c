static int cfg80211_open_file_generic(struct inode *inode, struct file *file)
#define DEBUGFS_READONLY_FILE(name, buflen, fmt, value...)		\
static ssize_t name## _read(struct file *file, char __user *userbuf,	\
size_t count, loff_t *ppos)			\
\
\
static const struct file_operations name## _ops = ;
DEBUGFS_READONLY_FILE(rts_threshold, 20, "%d",
wiphy->rts_threshold)
DEBUGFS_READONLY_FILE(fragmentation_threshold, 20, "%d",
wiphy->frag_threshold);
DEBUGFS_READONLY_FILE(short_retry_limit, 20, "%d",
wiphy->retry_short)
DEBUGFS_READONLY_FILE(long_retry_limit, 20, "%d",
wiphy->retry_long);
static int ht_print_chan(struct ieee80211_channel *chan,
char *buf, int buf_size, int offset)
static ssize_t ht40allow_map_read(struct file *file,
char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations ht40allow_map_ops = ;
#define DEBUGFS_ADD(name)						\
debugfs_create_file(#name, S_IRUGO, phyd, &rdev->wiphy, &name## _ops);
void cfg80211_debugfs_rdev_add(struct cfg80211_registered_device *rdev)
