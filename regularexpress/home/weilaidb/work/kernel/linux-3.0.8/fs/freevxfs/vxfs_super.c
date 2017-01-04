MODULE_AUTHOR("Christoph Hellwig");
MODULE_DESCRIPTION("Veritas Filesystem (VxFS) driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_ALIAS("vxfs");
static void		vxfs_put_super(struct super_block *);
static int		vxfs_statfs(struct dentry *, struct kstatfs *);
static int		vxfs_remount(struct super_block *, int *, char *);
static const struct super_operations vxfs_super_ops = ;
static void
vxfs_put_super(struct super_block *sbp)
static int
vxfs_statfs(struct dentry *dentry, struct kstatfs *bufp)
static int vxfs_remount(struct super_block *sb, int *flags, char *data)
static int vxfs_fill_super(struct super_block *sbp, void *dp, int silent)
static struct dentry *vxfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type vxfs_fs_type = ;
static int __init
vxfs_init(void)
static void __exit
vxfs_cleanup(void)
module_init(vxfs_init);
module_exit(vxfs_cleanup);
