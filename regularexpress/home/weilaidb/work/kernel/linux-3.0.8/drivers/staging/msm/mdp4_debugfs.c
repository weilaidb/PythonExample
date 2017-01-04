#define MDP4_DEBUG_BUF	128
static char mdp4_debug_buf[MDP4_DEBUG_BUF];
static ulong mdp4_debug_offset;
static ulong mdp4_base_addr;
static int mdp4_offset_set(void *data, u64 val)
static int mdp4_offset_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(
mdp4_offset_fops,
mdp4_offset_get,
mdp4_offset_set,
"%llx\n");
static int mdp4_debugfs_release(struct inode *inode, struct file *file)
static ssize_t mdp4_debugfs_write(
struct file *file,
const char __user *buff,
size_t count,
loff_t *ppos)
static ssize_t mdp4_debugfs_read(
struct file *file,
char __user *buff,
size_t count,
loff_t *ppos)
static const struct file_operations mdp4_debugfs_fops = ;
int mdp4_debugfs_init(void)
