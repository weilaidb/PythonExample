static int efs_statfs(struct dentry *dentry, struct kstatfs *buf);
static int efs_fill_super(struct super_block *s, void *d, int silent);
static struct dentry *efs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type efs_fs_type = ;
static struct pt_types sgi_pt_types[] = ;
static struct kmem_cache * efs_inode_cachep;
static struct inode *efs_alloc_inode(struct super_block *sb)
static void efs_i_callback(struct rcu_head *head)
static void efs_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static void efs_put_super(struct super_block *s)
static int efs_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations efs_superblock_operations = ;
static const struct export_operations efs_export_ops = ;
static int __init init_efs_fs(void)
static void __exit exit_efs_fs(void)
module_init(init_efs_fs)
module_exit(exit_efs_fs)
static efs_block_t efs_validate_vh(struct volume_header *vh)
static int efs_validate_super(struct efs_sb_info *sb, struct efs_super *super)
static int efs_fill_super(struct super_block *s, void *d, int silent)
static int efs_statfs(struct dentry *dentry, struct kstatfs *buf)
