static void ext2_sync_super(struct super_block *sb,
struct ext2_super_block *es, int wait);
static int ext2_remount (struct super_block * sb, int * flags, char * data);
static int ext2_statfs (struct dentry * dentry, struct kstatfs * buf);
static int ext2_sync_fs(struct super_block *sb, int wait);
void ext2_error(struct super_block *sb, const char *function,
const char *fmt, ...)
void ext2_msg(struct super_block *sb, const char *prefix,
const char *fmt, ...)
void ext2_update_dynamic_rev(struct super_block *sb)
static void ext2_put_super (struct super_block * sb)
static struct kmem_cache * ext2_inode_cachep;
static struct inode *ext2_alloc_inode(struct super_block *sb)
static void ext2_i_callback(struct rcu_head *head)
static void ext2_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static int ext2_show_options(struct seq_file *seq, struct vfsmount *vfs)
static ssize_t ext2_quota_read(struct super_block *sb, int type, char *data, size_t len, loff_t off);
static ssize_t ext2_quota_write(struct super_block *sb, int type, const char *data, size_t len, loff_t off);
static const struct super_operations ext2_sops = ;
static struct inode *ext2_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
static struct dentry *ext2_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ext2_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static const struct export_operations ext2_export_ops = ;
static unsigned long get_sb_block(void **data)
enum ;
static const match_table_t tokens = ;
static int parse_options(char *options, struct super_block *sb)
static int ext2_setup_super (struct super_block * sb,
struct ext2_super_block * es,
int read_only)
static int ext2_check_descriptors(struct super_block *sb)
static loff_t ext2_max_size(int bits)
static unsigned long descriptor_loc(struct super_block *sb,
unsigned long logic_sb_block,
int nr)
static int ext2_fill_super(struct super_block *sb, void *data, int silent)
static void ext2_clear_super_error(struct super_block *sb)
static void ext2_sync_super(struct super_block *sb, struct ext2_super_block *es,
int wait)
static int ext2_sync_fs(struct super_block *sb, int wait)
void ext2_write_super(struct super_block *sb)
static int ext2_remount (struct super_block * sb, int * flags, char * data)
static int ext2_statfs (struct dentry * dentry, struct kstatfs * buf)
static struct dentry *ext2_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static ssize_t ext2_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
static ssize_t ext2_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
static struct file_system_type ext2_fs_type = ;
static int __init init_ext2_fs(void)
static void __exit exit_ext2_fs(void)
module_init(init_ext2_fs)
module_exit(exit_ext2_fs)
