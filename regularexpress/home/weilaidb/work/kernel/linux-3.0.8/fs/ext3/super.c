#define EXT3_MOUNT_DEFAULT_DATA_MODE EXT3_MOUNT_ORDERED_DATA
#define EXT3_MOUNT_DEFAULT_DATA_MODE EXT3_MOUNT_WRITEBACK_DATA
static int ext3_load_journal(struct super_block *, struct ext3_super_block *,
unsigned long journal_devnum);
static int ext3_create_journal(struct super_block *, struct ext3_super_block *,
unsigned int);
static int ext3_commit_super(struct super_block *sb,
struct ext3_super_block *es,
int sync);
static void ext3_mark_recovery_complete(struct super_block * sb,
struct ext3_super_block * es);
static void ext3_clear_journal_err(struct super_block * sb,
struct ext3_super_block * es);
static int ext3_sync_fs(struct super_block *sb, int wait);
static const char *ext3_decode_error(struct super_block * sb, int errno,
char nbuf[16]);
static int ext3_remount (struct super_block * sb, int * flags, char * data);
static int ext3_statfs (struct dentry * dentry, struct kstatfs * buf);
static int ext3_unfreeze(struct super_block *sb);
static int ext3_freeze(struct super_block *sb);
handle_t *ext3_journal_start_sb(struct super_block *sb, int nblocks)
int __ext3_journal_stop(const char *where, handle_t *handle)
void ext3_journal_abort_handle(const char *caller, const char *err_fn,
struct buffer_head *bh, handle_t *handle, int err)
void ext3_msg(struct super_block *sb, const char *prefix,
const char *fmt, ...)
static void ext3_handle_error(struct super_block *sb)
void ext3_error(struct super_block *sb, const char *function,
const char *fmt, ...)
static const char *ext3_decode_error(struct super_block * sb, int errno,
char nbuf[16])
void __ext3_std_error (struct super_block * sb, const char * function,
int errno)
void ext3_abort(struct super_block *sb, const char *function,
const char *fmt, ...)
void ext3_warning(struct super_block *sb, const char *function,
const char *fmt, ...)
void ext3_update_dynamic_rev(struct super_block *sb)
static struct block_device *ext3_blkdev_get(dev_t dev, struct super_block *sb)
static int ext3_blkdev_put(struct block_device *bdev)
static int ext3_blkdev_remove(struct ext3_sb_info *sbi)
static inline struct inode *orphan_list_entry(struct list_head *l)
static void dump_orphan_list(struct super_block *sb, struct ext3_sb_info *sbi)
static void ext3_put_super (struct super_block * sb)
static struct kmem_cache *ext3_inode_cachep;
static struct inode *ext3_alloc_inode(struct super_block *sb)
static void ext3_i_callback(struct rcu_head *head)
static void ext3_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
static inline void ext3_show_quota_options(struct seq_file *seq, struct super_block *sb)
static char *data_mode_string(unsigned long mode)
static int ext3_show_options(struct seq_file *seq, struct vfsmount *vfs)
static struct inode *ext3_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
static struct dentry *ext3_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ext3_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static int bdev_try_to_free_page(struct super_block *sb, struct page *page,
gfp_t wait)
#define QTYPE2NAME(t) ((t)==USRQUOTA?"user":"group")
#define QTYPE2MOPT(on, t) ((t)==USRQUOTA?((on)##USRJQUOTA):((on)##GRPJQUOTA))
static int ext3_write_dquot(struct dquot *dquot);
static int ext3_acquire_dquot(struct dquot *dquot);
static int ext3_release_dquot(struct dquot *dquot);
static int ext3_mark_dquot_dirty(struct dquot *dquot);
static int ext3_write_info(struct super_block *sb, int type);
static int ext3_quota_on(struct super_block *sb, int type, int format_id,
struct path *path);
static int ext3_quota_on_mount(struct super_block *sb, int type);
static ssize_t ext3_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off);
static ssize_t ext3_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off);
static const struct dquot_operations ext3_quota_operations = ;
static const struct quotactl_ops ext3_qctl_operations = ;
static const struct super_operations ext3_sops = ;
static const struct export_operations ext3_export_ops = ;
enum ;
static const match_table_t tokens = ;
static ext3_fsblk_t get_sb_block(void **data, struct super_block *sb)
static int set_qf_name(struct super_block *sb, int qtype, substring_t *args)
static int clear_qf_name(struct super_block *sb, int qtype)
static int parse_options (char *options, struct super_block *sb,
unsigned int *inum, unsigned long *journal_devnum,
ext3_fsblk_t *n_blocks_count, int is_remount)
static int ext3_setup_super(struct super_block *sb, struct ext3_super_block *es,
int read_only)
static int ext3_check_descriptors(struct super_block *sb)
static void ext3_orphan_cleanup (struct super_block * sb,
struct ext3_super_block * es)
static loff_t ext3_max_size(int bits)
static ext3_fsblk_t descriptor_loc(struct super_block *sb,
ext3_fsblk_t logic_sb_block,
int nr)
static int ext3_fill_super (struct super_block *sb, void *data, int silent)
static void ext3_init_journal_params(struct super_block *sb, journal_t *journal)
static journal_t *ext3_get_journal(struct super_block *sb,
unsigned int journal_inum)
static journal_t *ext3_get_dev_journal(struct super_block *sb,
dev_t j_dev)
static int ext3_load_journal(struct super_block *sb,
struct ext3_super_block *es,
unsigned long journal_devnum)
static int ext3_create_journal(struct super_block *sb,
struct ext3_super_block *es,
unsigned int journal_inum)
static int ext3_commit_super(struct super_block *sb,
struct ext3_super_block *es,
int sync)
static void ext3_mark_recovery_complete(struct super_block * sb,
struct ext3_super_block * es)
static void ext3_clear_journal_err(struct super_block *sb,
struct ext3_super_block *es)
int ext3_force_commit(struct super_block *sb)
static int ext3_sync_fs(struct super_block *sb, int wait)
static int ext3_freeze(struct super_block *sb)
static int ext3_unfreeze(struct super_block *sb)
static int ext3_remount (struct super_block * sb, int * flags, char * data)
static int ext3_statfs (struct dentry * dentry, struct kstatfs * buf)
static inline struct inode *dquot_to_inode(struct dquot *dquot)
static int ext3_write_dquot(struct dquot *dquot)
static int ext3_acquire_dquot(struct dquot *dquot)
static int ext3_release_dquot(struct dquot *dquot)
static int ext3_mark_dquot_dirty(struct dquot *dquot)
static int ext3_write_info(struct super_block *sb, int type)
static int ext3_quota_on_mount(struct super_block *sb, int type)
static int ext3_quota_on(struct super_block *sb, int type, int format_id,
struct path *path)
static ssize_t ext3_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
static ssize_t ext3_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
static struct dentry *ext3_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type ext3_fs_type = ;
static int __init init_ext3_fs(void)
static void __exit exit_ext3_fs(void)
MODULE_AUTHOR("Remy Card, Stephen Tweedie, Andrew Morton, Andreas Dilger, Theodore Ts'o and others");
MODULE_DESCRIPTION("Second Extended Filesystem with journaling extensions");
MODULE_LICENSE("GPL");
module_init(init_ext3_fs)
module_exit(exit_ext3_fs)
