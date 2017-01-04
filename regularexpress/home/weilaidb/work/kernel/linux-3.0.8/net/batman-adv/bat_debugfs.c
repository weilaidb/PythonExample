static struct dentry *bat_debugfs;
#define LOG_BUFF_MASK (log_buff_len-1)
#define LOG_BUFF(idx) (debug_log->log_buff[(idx) & LOG_BUFF_MASK])
static int log_buff_len = LOG_BUF_LEN;
static void emit_log_char(struct debug_log *debug_log, char c)
static int fdebug_log(struct debug_log *debug_log, char *fmt, ...)
int debug_log(struct bat_priv *bat_priv, char *fmt, ...)
static int log_open(struct inode *inode, struct file *file)
static int log_release(struct inode *inode, struct file *file)
static ssize_t log_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static unsigned int log_poll(struct file *file, poll_table *wait)
static const struct file_operations log_fops = ;
static int debug_log_setup(struct bat_priv *bat_priv)
static void debug_log_cleanup(struct bat_priv *bat_priv)
static int debug_log_setup(struct bat_priv *bat_priv)
static void debug_log_cleanup(struct bat_priv *bat_priv)
static int originators_open(struct inode *inode, struct file *file)
static int gateways_open(struct inode *inode, struct file *file)
static int softif_neigh_open(struct inode *inode, struct file *file)
static int transtable_global_open(struct inode *inode, struct file *file)
static int transtable_local_open(struct inode *inode, struct file *file)
static int vis_data_open(struct inode *inode, struct file *file)
struct bat_debuginfo ;
#define BAT_DEBUGINFO(_name, _mode, _open)	\
struct bat_debuginfo bat_debuginfo_##_name = ;
static BAT_DEBUGINFO(originators, S_IRUGO, originators_open);
static BAT_DEBUGINFO(gateways, S_IRUGO, gateways_open);
static BAT_DEBUGINFO(softif_neigh, S_IRUGO, softif_neigh_open);
static BAT_DEBUGINFO(transtable_global, S_IRUGO, transtable_global_open);
static BAT_DEBUGINFO(transtable_local, S_IRUGO, transtable_local_open);
static BAT_DEBUGINFO(vis_data, S_IRUGO, vis_data_open);
static struct bat_debuginfo *mesh_debuginfos[] = ;
void debugfs_init(void)
void debugfs_destroy(void)
int debugfs_add_meshif(struct net_device *dev)
void debugfs_del_meshif(struct net_device *dev)
