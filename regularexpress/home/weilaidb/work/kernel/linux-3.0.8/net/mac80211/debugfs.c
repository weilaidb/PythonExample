int mac80211_open_file_generic(struct inode *inode, struct file *file)
#define DEBUGFS_FORMAT_BUFFER_SIZE 100
int mac80211_format_buffer(char __user *userbuf, size_t count,
loff_t *ppos, char *fmt, ...)
#define DEBUGFS_READONLY_FILE_FN(name, fmt, value...)			\
static ssize_t name## _read(struct file *file, char __user *userbuf,	\
size_t count, loff_t *ppos)			\
#define DEBUGFS_READONLY_FILE_OPS(name)			\
static const struct file_operations name## _ops = ;
#define DEBUGFS_READONLY_FILE(name, fmt, value...)		\
DEBUGFS_READONLY_FILE_FN(name, fmt, value)		\
DEBUGFS_READONLY_FILE_OPS(name)
#define DEBUGFS_ADD(name)						\
debugfs_create_file(#name, 0400, phyd, local, &name## _ops);
#define DEBUGFS_ADD_MODE(name, mode)					\
debugfs_create_file(#name, mode, phyd, local, &name## _ops);
DEBUGFS_READONLY_FILE(user_power, "%d",
local->user_power_level);
DEBUGFS_READONLY_FILE(power, "%d",
local->hw.conf.power_level);
DEBUGFS_READONLY_FILE(frequency, "%d",
local->hw.conf.channel->center_freq);
DEBUGFS_READONLY_FILE(total_ps_buffered, "%d",
local->total_ps_buffered);
DEBUGFS_READONLY_FILE(wep_iv, "%#08x",
local->wep_iv & 0xffffff);
DEBUGFS_READONLY_FILE(rate_ctrl_alg, "%s",
local->rate_ctrl ? local->rate_ctrl->ops->name : "hw/driver");
static ssize_t tsf_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t tsf_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations tsf_ops = ;
static ssize_t reset_write(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations reset_ops = ;
static ssize_t noack_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t noack_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations noack_ops = ;
static ssize_t uapsd_queues_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t uapsd_queues_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations uapsd_queues_ops = ;
static ssize_t uapsd_max_sp_len_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t uapsd_max_sp_len_write(struct file *file,
const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations uapsd_max_sp_len_ops = ;
static ssize_t channel_type_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t hwflags_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t queues_read(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
DEBUGFS_READONLY_FILE_OPS(hwflags);
DEBUGFS_READONLY_FILE_OPS(channel_type);
DEBUGFS_READONLY_FILE_OPS(queues);
static ssize_t format_devstat_counter(struct ieee80211_local *local,
char __user *userbuf,
size_t count, loff_t *ppos,
int (*printvalue)(struct ieee80211_low_level_stats *stats, char *buf,
int buflen))
#define DEBUGFS_DEVSTATS_FILE(name)					\
static int print_devstats_##name(struct ieee80211_low_level_stats *stats,\
char *buf, int buflen)			\
\
static ssize_t stats_ ##name## _read(struct file *file,			\
char __user *userbuf,		\
size_t count, loff_t *ppos)	\
\
\
static const struct file_operations stats_ ##name## _ops = ;
#define DEBUGFS_STATS_ADD(name, field)					\
debugfs_create_u32(#name, 0400, statsd, (u32 *) &field);
#define DEBUGFS_DEVSTATS_ADD(name)					\
debugfs_create_file(#name, 0400, statsd, local, &stats_ ##name## _ops);
DEBUGFS_DEVSTATS_FILE(dot11ACKFailureCount);
DEBUGFS_DEVSTATS_FILE(dot11RTSFailureCount);
DEBUGFS_DEVSTATS_FILE(dot11FCSErrorCount);
DEBUGFS_DEVSTATS_FILE(dot11RTSSuccessCount);
void debugfs_hw_add(struct ieee80211_local *local)
