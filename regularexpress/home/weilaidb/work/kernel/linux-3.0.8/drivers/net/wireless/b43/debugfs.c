static struct dentry *rootdir;
struct b43_debugfs_fops ;
static inline
struct b43_dfs_file *fops_to_dfs_file(struct b43_wldev *dev,
const struct b43_debugfs_fops *dfops)
#define fappend(fmt, x...)	\
do  while (0)
#define B43_MAX_SHM_ROUTING	4
#define B43_MAX_SHM_ADDR	0xFFFF
static ssize_t shm16read__read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
static int shm16read__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static int shm16write__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static ssize_t shm32read__read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
static int shm32read__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static int shm32write__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
#define B43_MAX_MMIO_ACCESS	(0xF00 - 1)
static ssize_t mmio16read__read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
static int mmio16read__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static int mmio16write__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static ssize_t mmio32read__read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
static int mmio32read__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static int mmio32write__write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static ssize_t txstat_read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
static int restart_write_file(struct b43_wldev *dev,
const char *buf, size_t count)
static unsigned long calc_expire_secs(unsigned long now,
unsigned long time,
unsigned long expire)
static ssize_t loctls_read_file(struct b43_wldev *dev,
char *buf, size_t bufsize)
#undef fappend
static int b43_debugfs_open(struct inode *inode, struct file *file)
static ssize_t b43_debugfs_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t b43_debugfs_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
#define B43_DEBUGFS_FOPS(name, _read, _write)			\
static struct b43_debugfs_fops fops_##name =
B43_DEBUGFS_FOPS(shm16read, shm16read__read_file, shm16read__write_file);
B43_DEBUGFS_FOPS(shm16write, NULL, shm16write__write_file);
B43_DEBUGFS_FOPS(shm32read, shm32read__read_file, shm32read__write_file);
B43_DEBUGFS_FOPS(shm32write, NULL, shm32write__write_file);
B43_DEBUGFS_FOPS(mmio16read, mmio16read__read_file, mmio16read__write_file);
B43_DEBUGFS_FOPS(mmio16write, NULL, mmio16write__write_file);
B43_DEBUGFS_FOPS(mmio32read, mmio32read__read_file, mmio32read__write_file);
B43_DEBUGFS_FOPS(mmio32write, NULL, mmio32write__write_file);
B43_DEBUGFS_FOPS(txstat, txstat_read_file, NULL);
B43_DEBUGFS_FOPS(restart, NULL, restart_write_file);
B43_DEBUGFS_FOPS(loctls, loctls_read_file, NULL);
bool b43_debug(struct b43_wldev *dev, enum b43_dyndbg feature)
static void b43_remove_dynamic_debug(struct b43_wldev *dev)
static void b43_add_dynamic_debug(struct b43_wldev *dev)
void b43_debugfs_add_device(struct b43_wldev *dev)
void b43_debugfs_remove_device(struct b43_wldev *dev)
void b43_debugfs_log_txstat(struct b43_wldev *dev,
const struct b43_txstatus *status)
void b43_debugfs_init(void)
void b43_debugfs_exit(void)
