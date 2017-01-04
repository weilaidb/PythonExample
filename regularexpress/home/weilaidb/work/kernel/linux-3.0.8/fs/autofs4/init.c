static struct dentry *autofs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type autofs_fs_type = ;
static int __init init_autofs4_fs(void)
static void __exit exit_autofs4_fs(void)
module_init(init_autofs4_fs)
module_exit(exit_autofs4_fs)
MODULE_LICENSE("GPL");
