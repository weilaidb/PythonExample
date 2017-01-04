static struct dentry *d_xen_debug;
struct dentry * __init xen_init_debugfs(void)
struct array_data
;
static int u32_array_open(struct inode *inode, struct file *file)
static size_t format_array(char *buf, size_t bufsize, const char *fmt,
u32 *array, unsigned array_size)
static char *format_array_alloc(const char *fmt, u32 *array, unsigned array_size)
static ssize_t u32_array_read(struct file *file, char __user *buf, size_t len,
loff_t *ppos)
static int xen_array_release(struct inode *inode, struct file *file)
static const struct file_operations u32_array_fops = ;
struct dentry *xen_debugfs_create_u32_array(const char *name, mode_t mode,
struct dentry *parent,
u32 *array, unsigned elements)
