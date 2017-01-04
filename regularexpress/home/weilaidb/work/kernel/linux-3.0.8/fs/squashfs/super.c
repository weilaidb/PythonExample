static struct file_system_type squashfs_fs_type;
static const struct super_operations squashfs_super_ops;
static const struct squashfs_decompressor *supported_squashfs_filesystem(short
major, short minor, short id)
static int squashfs_fill_super(struct super_block *sb, void *data, int silent)
static int squashfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int squashfs_remount(struct super_block *sb, int *flags, char *data)
static void squashfs_put_super(struct super_block *sb)
static struct dentry *squashfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct kmem_cache *squashfs_inode_cachep;
static void init_once(void *foo)
static int __init init_inodecache(void)
static void destroy_inodecache(void)
static int __init init_squashfs_fs(void)
static void __exit exit_squashfs_fs(void)
static struct inode *squashfs_alloc_inode(struct super_block *sb)
static void squashfs_i_callback(struct rcu_head *head)
static void squashfs_destroy_inode(struct inode *inode)
static struct file_system_type squashfs_fs_type = ;
static const struct super_operations squashfs_super_ops = ;
module_init(init_squashfs_fs);
module_exit(exit_squashfs_fs);
MODULE_DESCRIPTION("squashfs 4.0, a compressed read-only filesystem");
MODULE_AUTHOR("Phillip Lougher <phillip@squashfs.org.uk>");
MODULE_LICENSE("GPL");
