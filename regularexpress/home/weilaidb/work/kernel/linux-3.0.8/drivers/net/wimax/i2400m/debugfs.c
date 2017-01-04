#define D_SUBMODULE debugfs
static
int debugfs_netdev_queue_stopped_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_netdev_queue_stopped,
debugfs_netdev_queue_stopped_get,
NULL, "%llu\n");
static
struct dentry *debugfs_create_netdev_queue_stopped(
const char *name, struct dentry *parent, struct i2400m *i2400m)
static
int i2400m_stats_open(struct inode *inode, struct file *filp)
static
ssize_t i2400m_rx_stats_read(struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static
ssize_t i2400m_rx_stats_write(struct file *filp, const char __user *buffer,
size_t count, loff_t *ppos)
static
const struct file_operations i2400m_rx_stats_fops = ;
static
ssize_t i2400m_tx_stats_read(struct file *filp, char __user *buffer,
size_t count, loff_t *ppos)
static
ssize_t i2400m_tx_stats_write(struct file *filp, const char __user *buffer,
size_t count, loff_t *ppos)
static
const struct file_operations i2400m_tx_stats_fops = ;
static
int debugfs_i2400m_suspend_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fops_i2400m_suspend,
NULL, debugfs_i2400m_suspend_set,
"%llu\n");
static
struct dentry *debugfs_create_i2400m_suspend(
const char *name, struct dentry *parent, struct i2400m *i2400m)
static
int debugfs_i2400m_reset_set(void *data, u64 val)
DEFINE_SIMPLE_ATTRIBUTE(fops_i2400m_reset,
NULL, debugfs_i2400m_reset_set,
"%llu\n");
static
struct dentry *debugfs_create_i2400m_reset(
const char *name, struct dentry *parent, struct i2400m *i2400m)
#define __debugfs_register(prefix, name, parent)			\
do  while (0)
int i2400m_debugfs_add(struct i2400m *i2400m)
void i2400m_debugfs_rm(struct i2400m *i2400m)
