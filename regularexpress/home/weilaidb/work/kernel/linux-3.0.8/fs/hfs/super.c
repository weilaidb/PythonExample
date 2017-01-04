static struct kmem_cache *hfs_inode_cachep;
MODULE_LICENSE("GPL");
static void hfs_write_super(struct super_block *sb)
static int hfs_sync_fs(struct super_block *sb, int wait)
static void hfs_put_super(struct super_block *sb)
static int hfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int hfs_remount(struct super_block *sb, int *flags, char *data)
static int hfs_show_options(struct seq_file *seq, struct vfsmount *mnt)
static struct inode *hfs_alloc_inode(struct super_block *sb)
static void hfs_i_callback(struct rcu_head *head)
static void hfs_destroy_inode(struct inode *inode)
static const struct super_operations hfs_super_operations = ;
enum ;
static const match_table_t tokens = ;
static inline int match_fourchar(substring_t *arg, u32 *result)
static int parse_options(char *options, struct hfs_sb_info *hsb)
static int hfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *hfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type hfs_fs_type = ;
static void hfs_init_once(void *p)
static int __init init_hfs_fs(void)
static void __exit exit_hfs_fs(void)
module_init(init_hfs_fs)
module_exit(exit_hfs_fs)
