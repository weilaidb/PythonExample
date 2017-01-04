static char *aa_simple_write_to_buffer(int op, const char __user *userbuf,
size_t alloc_size, size_t copy_size,
loff_t *pos)
static ssize_t profile_load(struct file *f, const char __user *buf, size_t size,
loff_t *pos)
static const struct file_operations aa_fs_profile_load = ;
static ssize_t profile_replace(struct file *f, const char __user *buf,
size_t size, loff_t *pos)
static const struct file_operations aa_fs_profile_replace = ;
static ssize_t profile_remove(struct file *f, const char __user *buf,
size_t size, loff_t *pos)
static const struct file_operations aa_fs_profile_remove = ;
static struct dentry *aa_fs_dentry __initdata;
static void __init aafs_remove(const char *name)
static int __init aafs_create(const char *name, int mask,
const struct file_operations *fops)
void __init aa_destroy_aafs(void)
int __init aa_create_aafs(void)
fs_initcall(aa_create_aafs);
