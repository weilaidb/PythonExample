static int tomoyo_open(struct inode *inode, struct file *file)
static int tomoyo_release(struct inode *inode, struct file *file)
static unsigned int tomoyo_poll(struct file *file, poll_table *wait)
static ssize_t tomoyo_read(struct file *file, char __user *buf, size_t count,
loff_t *ppos)
static ssize_t tomoyo_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations tomoyo_operations = ;
static void __init tomoyo_create_entry(const char *name, const mode_t mode,
struct dentry *parent, const u8 key)
static int __init tomoyo_initerface_init(void)
fs_initcall(tomoyo_initerface_init);
