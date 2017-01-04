static struct dentry *rootdir;
struct b43legacy_debugfs_fops ;
static inline
struct b43legacy_dfs_file * fops_to_dfs_file(struct b43legacy_wldev *dev,
const struct b43legacy_debugfs_fops *dfops)
#define fappend(fmt, x...)	\
do  while (0)
static ssize_t tsf_read_file(struct b43legacy_wldev *dev, char *buf, size_t bufsize)
static int tsf_write_file(struct b43legacy_wldev *dev, const char *buf, size_t count)
static ssize_t ucode_regs_read_file(struct b43legacy_wldev *dev, char *buf, size_t bufsize)
static ssize_t shm_read_file(struct b43legacy_wldev *dev, char *buf, size_t bufsize)
static ssize_t txstat_read_file(struct b43legacy_wldev *dev, char *buf, size_t bufsize)
static int restart_write_file(struct b43legacy_wldev *dev, const char *buf, size_t count)
#undef fappend
static int b43legacy_debugfs_open(struct inode *inode, struct file *file)
static ssize_t b43legacy_debugfs_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t b43legacy_debugfs_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
#define B43legacy_DEBUGFS_FOPS(name, _read, _write, _take_irqlock)	\
static struct b43legacy_debugfs_fops fops_##name =
B43legacy_DEBUGFS_FOPS(tsf, tsf_read_file, tsf_write_file, 1);
B43legacy_DEBUGFS_FOPS(ucode_regs, ucode_regs_read_file, NULL, 1);
B43legacy_DEBUGFS_FOPS(shm, shm_read_file, NULL, 1);
B43legacy_DEBUGFS_FOPS(txstat, txstat_read_file, NULL, 0);
B43legacy_DEBUGFS_FOPS(restart, NULL, restart_write_file, 1);
int b43legacy_debug(struct b43legacy_wldev *dev, enum b43legacy_dyndbg feature)
static void b43legacy_remove_dynamic_debug(struct b43legacy_wldev *dev)
static void b43legacy_add_dynamic_debug(struct b43legacy_wldev *dev)
void b43legacy_debugfs_add_device(struct b43legacy_wldev *dev)
void b43legacy_debugfs_remove_device(struct b43legacy_wldev *dev)
void b43legacy_debugfs_log_txstat(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
void b43legacy_debugfs_init(void)
void b43legacy_debugfs_exit(void)
