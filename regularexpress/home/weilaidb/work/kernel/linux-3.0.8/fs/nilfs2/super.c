MODULE_AUTHOR("NTT Corp.");
MODULE_DESCRIPTION("A New Implementation of the Log-structured Filesystem "
"(NILFS)");
MODULE_LICENSE("GPL");
static struct kmem_cache *nilfs_inode_cachep;
struct kmem_cache *nilfs_transaction_cachep;
struct kmem_cache *nilfs_segbuf_cachep;
struct kmem_cache *nilfs_btree_path_cache;
static int nilfs_setup_super(struct super_block *sb, int is_mount);
static int nilfs_remount(struct super_block *sb, int *flags, char *data);
static void nilfs_set_error(struct super_block *sb)
void nilfs_error(struct super_block *sb, const char *function,
const char *fmt, ...)
void nilfs_warning(struct super_block *sb, const char *function,
const char *fmt, ...)
struct inode *nilfs_alloc_inode(struct super_block *sb)
static void nilfs_i_callback(struct rcu_head *head)
void nilfs_destroy_inode(struct inode *inode)
static int nilfs_sync_super(struct super_block *sb, int flag)
void nilfs_set_log_cursor(struct nilfs_super_block *sbp,
struct the_nilfs *nilfs)
struct nilfs_super_block **nilfs_prepare_super(struct super_block *sb,
int flip)
int nilfs_commit_super(struct super_block *sb, int flag)
int nilfs_cleanup_super(struct super_block *sb)
static int nilfs_move_2nd_super(struct super_block *sb, loff_t sb2off)
int nilfs_resize_fs(struct super_block *sb, __u64 newsize)
static void nilfs_put_super(struct super_block *sb)
static int nilfs_sync_fs(struct super_block *sb, int wait)
int nilfs_attach_checkpoint(struct super_block *sb, __u64 cno, int curr_mnt,
struct nilfs_root **rootp)
static int nilfs_freeze(struct super_block *sb)
static int nilfs_unfreeze(struct super_block *sb)
static int nilfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static int nilfs_show_options(struct seq_file *seq, struct vfsmount *vfs)
static const struct super_operations nilfs_sops = ;
enum ;
static match_table_t tokens = ;
static int parse_options(char *options, struct super_block *sb, int is_remount)
static inline void
nilfs_set_default_options(struct super_block *sb,
struct nilfs_super_block *sbp)
static int nilfs_setup_super(struct super_block *sb, int is_mount)
struct nilfs_super_block *nilfs_read_super_block(struct super_block *sb,
u64 pos, int blocksize,
struct buffer_head **pbh)
int nilfs_store_magic_and_option(struct super_block *sb,
struct nilfs_super_block *sbp,
char *data)
int nilfs_check_feature_compatibility(struct super_block *sb,
struct nilfs_super_block *sbp)
static int nilfs_get_root_dentry(struct super_block *sb,
struct nilfs_root *root,
struct dentry **root_dentry)
static int nilfs_attach_snapshot(struct super_block *s, __u64 cno,
struct dentry **root_dentry)
static int nilfs_tree_was_touched(struct dentry *root_dentry)
static int nilfs_try_to_shrink_tree(struct dentry *root_dentry)
int nilfs_checkpoint_is_mounted(struct super_block *sb, __u64 cno)
static int
nilfs_fill_super(struct super_block *sb, void *data, int silent)
static int nilfs_remount(struct super_block *sb, int *flags, char *data)
struct nilfs_super_data ;
static int nilfs_identify(char *data, struct nilfs_super_data *sd)
static int nilfs_set_bdev_super(struct super_block *s, void *data)
static int nilfs_test_bdev_super(struct super_block *s, void *data)
static struct dentry *
nilfs_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
struct file_system_type nilfs_fs_type = ;
static void nilfs_inode_init_once(void *obj)
static void nilfs_segbuf_init_once(void *obj)
static void nilfs_destroy_cachep(void)
static int __init nilfs_init_cachep(void)
static int __init init_nilfs_fs(void)
static void __exit exit_nilfs_fs(void)
module_init(init_nilfs_fs)
module_exit(exit_nilfs_fs)
