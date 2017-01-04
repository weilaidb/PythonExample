extern struct timezone sys_tz;
static int affs_statfs(struct dentry *dentry, struct kstatfs *buf);
static int affs_remount (struct super_block *sb, int *flags, char *data);
static void
affs_commit_super(struct super_block *sb, int wait, int clean)
static void
affs_put_super(struct super_block *sb)
static void
affs_write_super(struct super_block *sb)
static int
affs_sync_fs(struct super_block *sb, int wait)
static struct kmem_cache * affs_inode_cachep;
static struct inode *affs_alloc_inode(struct super_block *sb)
static void affs_i_callback(struct rcu_head *head)
static void affs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static const struct super_operations affs_sops = ;
enum ;
static const match_table_t tokens = ;
static int
parse_options(char *options, uid_t *uid, gid_t *gid, int *mode, int *reserved, s32 *root,
int *blocksize, char **prefix, char *volume, unsigned long *mount_opts)
static int affs_fill_super(struct super_block *sb, void *data, int silent)
static int
affs_remount(struct super_block *sb, int *flags, char *data)
static int
affs_statfs(struct dentry *dentry, struct kstatfs *buf)
static struct dentry *affs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type affs_fs_type = ;
static int __init init_affs_fs(void)
static void __exit exit_affs_fs(void)
MODULE_DESCRIPTION("Amiga filesystem support for Linux");
MODULE_LICENSE("GPL");
module_init(init_affs_fs)
module_exit(exit_affs_fs)
