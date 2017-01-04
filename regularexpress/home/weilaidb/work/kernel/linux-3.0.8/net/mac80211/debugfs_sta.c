#define STA_READ(name, field, format_string)				\
static ssize_t sta_ ##name## _read(struct file *file,			\
char __user *userbuf,		\
size_t count, loff_t *ppos)		\
#define STA_READ_D(name, field) STA_READ(name, field, "%d\n")
#define STA_READ_U(name, field) STA_READ(name, field, "%u\n")
#define STA_READ_S(name, field) STA_READ(name, field, "%s\n")
#define STA_OPS(name)							\
static const struct file_operations sta_ ##name## _ops =
#define STA_OPS_RW(name)						\
static const struct file_operations sta_ ##name## _ops =
#define STA_FILE(name, field, format)					\
STA_READ_##format(name, field)				\
STA_OPS(name)
STA_FILE(aid, sta.aid, D);
STA_FILE(dev, sdata->name, S);
STA_FILE(last_signal, last_signal, D);
static ssize_t sta_flags_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(flags);
static ssize_t sta_num_ps_buf_frames_read(struct file *file,
char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(num_ps_buf_frames);
static ssize_t sta_inactive_ms_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(inactive_ms);
static ssize_t sta_connected_time_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(connected_time);
static ssize_t sta_last_seq_ctrl_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(last_seq_ctrl);
static ssize_t sta_agg_status_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t sta_agg_status_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS_RW(agg_status);
static ssize_t sta_ht_capa_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
STA_OPS(ht_capa);
#define DEBUGFS_ADD(name) \
debugfs_create_file(#name, 0400, \
sta->debugfs.dir, sta, &sta_ ##name## _ops);
#define DEBUGFS_ADD_COUNTER(name, field)				\
if (sizeof(sta->field) == sizeof(u32))				\
debugfs_create_u32(#name, 0400, sta->debugfs.dir,	\
(u32 *) &sta->field);				\
else								\
debugfs_create_u64(#name, 0400, sta->debugfs.dir,	\
(u64 *) &sta->field);
void ieee80211_sta_debugfs_add(struct sta_info *sta)
void ieee80211_sta_debugfs_remove(struct sta_info *sta)
