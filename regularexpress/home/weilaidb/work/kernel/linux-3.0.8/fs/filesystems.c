static struct file_system_type *file_systems;
static DEFINE_RWLOCK(file_systems_lock);
void get_filesystem(struct file_system_type *fs)
void put_filesystem(struct file_system_type *fs)
static struct file_system_type **find_filesystem(const char *name, unsigned len)
int register_filesystem(struct file_system_type * fs)
EXPORT_SYMBOL(register_filesystem);
int unregister_filesystem(struct file_system_type * fs)
EXPORT_SYMBOL(unregister_filesystem);
static int fs_index(const char __user * __name)
static int fs_name(unsigned int index, char __user * buf)
static int fs_maxindex(void)
SYSCALL_DEFINE3(sysfs, int, option, unsigned long, arg1, unsigned long, arg2)
int __init get_filesystem_list(char *buf)
static int filesystems_proc_show(struct seq_file *m, void *v)
static int filesystems_proc_open(struct inode *inode, struct file *file)
static const struct file_operations filesystems_proc_fops = ;
static int __init proc_filesystems_init(void)
module_init(proc_filesystems_init);
static struct file_system_type *__get_fs_type(const char *name, int len)
struct file_system_type *get_fs_type(const char *name)
EXPORT_SYMBOL(get_fs_type);
