static void jffs2_put_super(struct super_block *);
static struct kmem_cache *jffs2_inode_cachep;
static struct inode *jffs2_alloc_inode(struct super_block *sb)
static void jffs2_i_callback(struct rcu_head *head)
static void jffs2_destroy_inode(struct inode *inode)
static void jffs2_i_init_once(void *foo)
static void jffs2_write_super(struct super_block *sb)
static int jffs2_sync_fs(struct super_block *sb, int wait)
static struct inode *jffs2_nfs_get_inode(struct super_block *sb, uint64_t ino,
uint32_t generation)
static struct dentry *jffs2_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *jffs2_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *jffs2_get_parent(struct dentry *child)
static const struct export_operations jffs2_export_ops = ;
static const struct super_operations jffs2_super_operations =
;
static int jffs2_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *jffs2_mount(struct file_system_type *fs_type,
int flags, const char *dev_name,
void *data)
static void jffs2_put_super (struct super_block *sb)
static void jffs2_kill_sb(struct super_block *sb)
static struct file_system_type jffs2_fs_type = ;
static int __init init_jffs2_fs(void)
static void __exit exit_jffs2_fs(void)
module_init(init_jffs2_fs);
module_exit(exit_jffs2_fs);
MODULE_DESCRIPTION("The Journalling Flash File System, v2");
MODULE_AUTHOR("Red Hat, Inc.");
MODULE_LICENSE("GPL");
