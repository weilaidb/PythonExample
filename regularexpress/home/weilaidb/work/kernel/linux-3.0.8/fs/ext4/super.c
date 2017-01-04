#define CREATE_TRACE_POINTS
static struct proc_dir_entry *ext4_proc_root;
static struct kset *ext4_kset;
static struct ext4_lazy_init *ext4_li_info;
static struct mutex ext4_li_mtx;
static struct ext4_features *ext4_feat;
static int ext4_load_journal(struct super_block *, struct ext4_super_block *,
unsigned long journal_devnum);
static int ext4_commit_super(struct super_block *sb, int sync);
static void ext4_mark_recovery_complete(struct super_block *sb,
struct ext4_super_block *es);
static void ext4_clear_journal_err(struct super_block *sb,
struct ext4_super_block *es);
static int ext4_sync_fs(struct super_block *sb, int wait);
static const char *ext4_decode_error(struct super_block *sb, int errno,
char nbuf[16]);
static int ext4_remount(struct super_block *sb, int *flags, char *data);
static int ext4_statfs(struct dentry *dentry, struct kstatfs *buf);
static int ext4_unfreeze(struct super_block *sb);
static void ext4_write_super(struct super_block *sb);
static int ext4_freeze(struct super_block *sb);
static struct dentry *ext4_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data);
static inline int ext2_feature_set_ok(struct super_block *sb);
static inline int ext3_feature_set_ok(struct super_block *sb);
static int ext4_feature_set_ok(struct super_block *sb, int readonly);
static void ext4_destroy_lazyinit_thread(void);
static void ext4_unregister_li_request(struct super_block *sb);
static void ext4_clear_request_list(void);
#if !defined(CONFIG_EXT2_FS) && !defined(CONFIG_EXT2_FS_MODULE) && defined(CONFIG_EXT4_USE_FOR_EXT23)
static struct file_system_type ext2_fs_type = ;
#define IS_EXT2_SB(sb) ((sb)->s_bdev->bd_holder == &ext2_fs_type)
#define IS_EXT2_SB(sb) (0)
#if !defined(CONFIG_EXT3_FS) && !defined(CONFIG_EXT3_FS_MODULE) && defined(CONFIG_EXT4_USE_FOR_EXT23)
static struct file_system_type ext3_fs_type = ;
#define IS_EXT3_SB(sb) ((sb)->s_bdev->bd_holder == &ext3_fs_type)
#define IS_EXT3_SB(sb) (0)
ext4_fsblk_t ext4_block_bitmap(struct super_block *sb,
struct ext4_group_desc *bg)
ext4_fsblk_t ext4_inode_bitmap(struct super_block *sb,
struct ext4_group_desc *bg)
ext4_fsblk_t ext4_inode_table(struct super_block *sb,
struct ext4_group_desc *bg)
__u32 ext4_free_blks_count(struct super_block *sb,
struct ext4_group_desc *bg)
__u32 ext4_free_inodes_count(struct super_block *sb,
struct ext4_group_desc *bg)
__u32 ext4_used_dirs_count(struct super_block *sb,
struct ext4_group_desc *bg)
__u32 ext4_itable_unused_count(struct super_block *sb,
struct ext4_group_desc *bg)
void ext4_block_bitmap_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk)
void ext4_inode_bitmap_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk)
void ext4_inode_table_set(struct super_block *sb,
struct ext4_group_desc *bg, ext4_fsblk_t blk)
void ext4_free_blks_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count)
void ext4_free_inodes_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count)
void ext4_used_dirs_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count)
void ext4_itable_unused_set(struct super_block *sb,
struct ext4_group_desc *bg, __u32 count)
static handle_t *ext4_get_nojournal(void)
static void ext4_put_nojournal(handle_t *handle)
handle_t *ext4_journal_start_sb(struct super_block *sb, int nblocks)
int __ext4_journal_stop(const char *where, unsigned int line, handle_t *handle)
void ext4_journal_abort_handle(const char *caller, unsigned int line,
const char *err_fn, struct buffer_head *bh,
handle_t *handle, int err)
static void __save_error_info(struct super_block *sb, const char *func,
unsigned int line)
static void save_error_info(struct super_block *sb, const char *func,
unsigned int line)
static void ext4_handle_error(struct super_block *sb)
void __ext4_error(struct super_block *sb, const char *function,
unsigned int line, const char *fmt, ...)
void ext4_error_inode(struct inode *inode, const char *function,
unsigned int line, ext4_fsblk_t block,
const char *fmt, ...)
void ext4_error_file(struct file *file, const char *function,
unsigned int line, ext4_fsblk_t block,
const char *fmt, ...)
static const char *ext4_decode_error(struct super_block *sb, int errno,
char nbuf[16])
void __ext4_std_error(struct super_block *sb, const char *function,
unsigned int line, int errno)
void __ext4_abort(struct super_block *sb, const char *function,
unsigned int line, const char *fmt, ...)
void ext4_msg(struct super_block *sb, const char *prefix, const char *fmt, ...)
void __ext4_warning(struct super_block *sb, const char *function,
unsigned int line, const char *fmt, ...)
void __ext4_grp_locked_error(const char *function, unsigned int line,
struct super_block *sb, ext4_group_t grp,
unsigned long ino, ext4_fsblk_t block,
const char *fmt, ...)
__releases(bitlock)
__acquires(bitlock)
void ext4_update_dynamic_rev(struct super_block *sb)
static struct block_device *ext4_blkdev_get(dev_t dev, struct super_block *sb)
static int ext4_blkdev_put(struct block_device *bdev)
static int ext4_blkdev_remove(struct ext4_sb_info *sbi)
static inline struct inode *orphan_list_entry(struct list_head *l)
static void dump_orphan_list(struct super_block *sb, struct ext4_sb_info *sbi)
static void ext4_put_super(struct super_block *sb)
static struct kmem_cache *ext4_inode_cachep;
static struct inode *ext4_alloc_inode(struct super_block *sb)
static int ext4_drop_inode(struct inode *inode)
static void ext4_i_callback(struct rcu_head *head)
static void ext4_destroy_inode(struct inode *inode)
static void init_once(void *foo)
static int init_inodecache(void)
static void destroy_inodecache(void)
void ext4_clear_inode(struct inode *inode)
static inline void ext4_show_quota_options(struct seq_file *seq,
struct super_block *sb)
static int ext4_show_options(struct seq_file *seq, struct vfsmount *vfs)
static struct inode *ext4_nfs_get_inode(struct super_block *sb,
u64 ino, u32 generation)
static struct dentry *ext4_fh_to_dentry(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static struct dentry *ext4_fh_to_parent(struct super_block *sb, struct fid *fid,
int fh_len, int fh_type)
static int bdev_try_to_free_page(struct super_block *sb, struct page *page,
gfp_t wait)
#define QTYPE2NAME(t) ((t) == USRQUOTA ? "user" : "group")
#define QTYPE2MOPT(on, t) ((t) == USRQUOTA?((on)##USRJQUOTA):((on)##GRPJQUOTA))
static int ext4_write_dquot(struct dquot *dquot);
static int ext4_acquire_dquot(struct dquot *dquot);
static int ext4_release_dquot(struct dquot *dquot);
static int ext4_mark_dquot_dirty(struct dquot *dquot);
static int ext4_write_info(struct super_block *sb, int type);
static int ext4_quota_on(struct super_block *sb, int type, int format_id,
struct path *path);
static int ext4_quota_off(struct super_block *sb, int type);
static int ext4_quota_on_mount(struct super_block *sb, int type);
static ssize_t ext4_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off);
static ssize_t ext4_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off);
static const struct dquot_operations ext4_quota_operations = ;
static const struct quotactl_ops ext4_qctl_operations = ;
static const struct super_operations ext4_sops = ;
static const struct super_operations ext4_nojournal_sops = ;
static const struct export_operations ext4_export_ops = ;
enum ;
static const match_table_t tokens = ;
static ext4_fsblk_t get_sb_block(void **data)
#define DEFAULT_JOURNAL_IOPRIO (IOPRIO_PRIO_VALUE(IOPRIO_CLASS_BE, 3))
static char deprecated_msg[] = "Mount option \"%s\" will be removed by %s\n"
"Contact linux-ext4@vger.kernel.org if you think we should keep it.\n";
static int set_qf_name(struct super_block *sb, int qtype, substring_t *args)
static int clear_qf_name(struct super_block *sb, int qtype)
static int parse_options(char *options, struct super_block *sb,
unsigned long *journal_devnum,
unsigned int *journal_ioprio,
ext4_fsblk_t *n_blocks_count, int is_remount)
static int ext4_setup_super(struct super_block *sb, struct ext4_super_block *es,
int read_only)
static int ext4_fill_flex_info(struct super_block *sb)
__le16 ext4_group_desc_csum(struct ext4_sb_info *sbi, __u32 block_group,
struct ext4_group_desc *gdp)
int ext4_group_desc_csum_verify(struct ext4_sb_info *sbi, __u32 block_group,
struct ext4_group_desc *gdp)
static int ext4_check_descriptors(struct super_block *sb,
ext4_group_t *first_not_zeroed)
static void ext4_orphan_cleanup(struct super_block *sb,
struct ext4_super_block *es)
static loff_t ext4_max_size(int blkbits, int has_huge_files)
static loff_t ext4_max_bitmap_size(int bits, int has_huge_files)
static ext4_fsblk_t descriptor_loc(struct super_block *sb,
ext4_fsblk_t logical_sb_block, int nr)
static unsigned long ext4_get_stripe_size(struct ext4_sb_info *sbi)
struct ext4_attr ;
static int parse_strtoul(const char *buf,
unsigned long max, unsigned long *value)
static ssize_t delayed_allocation_blocks_show(struct ext4_attr *a,
struct ext4_sb_info *sbi,
char *buf)
static ssize_t session_write_kbytes_show(struct ext4_attr *a,
struct ext4_sb_info *sbi, char *buf)
static ssize_t lifetime_write_kbytes_show(struct ext4_attr *a,
struct ext4_sb_info *sbi, char *buf)
static ssize_t extent_cache_hits_show(struct ext4_attr *a,
struct ext4_sb_info *sbi, char *buf)
static ssize_t extent_cache_misses_show(struct ext4_attr *a,
struct ext4_sb_info *sbi, char *buf)
static ssize_t inode_readahead_blks_store(struct ext4_attr *a,
struct ext4_sb_info *sbi,
const char *buf, size_t count)
static ssize_t sbi_ui_show(struct ext4_attr *a,
struct ext4_sb_info *sbi, char *buf)
static ssize_t sbi_ui_store(struct ext4_attr *a,
struct ext4_sb_info *sbi,
const char *buf, size_t count)
#define EXT4_ATTR_OFFSET(_name,_mode,_show,_store,_elname) \
static struct ext4_attr ext4_attr_##_name =
#define EXT4_ATTR(name, mode, show, store) \
static struct ext4_attr ext4_attr_##name = __ATTR(name, mode, show, store)
#define EXT4_INFO_ATTR(name) EXT4_ATTR(name, 0444, NULL, NULL)
#define EXT4_RO_ATTR(name) EXT4_ATTR(name, 0444, name##_show, NULL)
#define EXT4_RW_ATTR(name) EXT4_ATTR(name, 0644, name##_show, name##_store)
#define EXT4_RW_ATTR_SBI_UI(name, elname)	\
EXT4_ATTR_OFFSET(name, 0644, sbi_ui_show, sbi_ui_store, elname)
#define ATTR_LIST(name) &ext4_attr_##name.attr
EXT4_RO_ATTR(delayed_allocation_blocks);
EXT4_RO_ATTR(session_write_kbytes);
EXT4_RO_ATTR(lifetime_write_kbytes);
EXT4_RO_ATTR(extent_cache_hits);
EXT4_RO_ATTR(extent_cache_misses);
EXT4_ATTR_OFFSET(inode_readahead_blks, 0644, sbi_ui_show,
inode_readahead_blks_store, s_inode_readahead_blks);
EXT4_RW_ATTR_SBI_UI(inode_goal, s_inode_goal);
EXT4_RW_ATTR_SBI_UI(mb_stats, s_mb_stats);
EXT4_RW_ATTR_SBI_UI(mb_max_to_scan, s_mb_max_to_scan);
EXT4_RW_ATTR_SBI_UI(mb_min_to_scan, s_mb_min_to_scan);
EXT4_RW_ATTR_SBI_UI(mb_order2_req, s_mb_order2_reqs);
EXT4_RW_ATTR_SBI_UI(mb_stream_req, s_mb_stream_request);
EXT4_RW_ATTR_SBI_UI(mb_group_prealloc, s_mb_group_prealloc);
EXT4_RW_ATTR_SBI_UI(max_writeback_mb_bump, s_max_writeback_mb_bump);
static struct attribute *ext4_attrs[] = ;
EXT4_INFO_ATTR(lazy_itable_init);
EXT4_INFO_ATTR(batched_discard);
static struct attribute *ext4_feat_attrs[] = ;
static ssize_t ext4_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static ssize_t ext4_attr_store(struct kobject *kobj,
struct attribute *attr,
const char *buf, size_t len)
static void ext4_sb_release(struct kobject *kobj)
static const struct sysfs_ops ext4_attr_ops = ;
static struct kobj_type ext4_ktype = ;
static void ext4_feat_release(struct kobject *kobj)
static struct kobj_type ext4_feat_ktype = ;
static int ext4_feature_set_ok(struct super_block *sb, int readonly)
static void print_daily_error_info(unsigned long arg)
static int ext4_run_li_request(struct ext4_li_request *elr)
static void ext4_remove_li_request(struct ext4_li_request *elr)
static void ext4_unregister_li_request(struct super_block *sb)
static struct task_struct *ext4_lazyinit_task;
static int ext4_lazyinit_thread(void *arg)
static void ext4_clear_request_list(void)
static int ext4_run_lazyinit_thread(void)
static ext4_group_t ext4_has_uninit_itable(struct super_block *sb)
static int ext4_li_info_new(void)
static struct ext4_li_request *ext4_li_request_new(struct super_block *sb,
ext4_group_t start)
static int ext4_register_li_request(struct super_block *sb,
ext4_group_t first_not_zeroed)
static void ext4_destroy_lazyinit_thread(void)
static int ext4_fill_super(struct super_block *sb, void *data, int silent)
__releases(kernel_lock)
__acquires(kernel_lock)
static void ext4_init_journal_params(struct super_block *sb, journal_t *journal)
static journal_t *ext4_get_journal(struct super_block *sb,
unsigned int journal_inum)
static journal_t *ext4_get_dev_journal(struct super_block *sb,
dev_t j_dev)
static int ext4_load_journal(struct super_block *sb,
struct ext4_super_block *es,
unsigned long journal_devnum)
static int ext4_commit_super(struct super_block *sb, int sync)
static void ext4_mark_recovery_complete(struct super_block *sb,
struct ext4_super_block *es)
static void ext4_clear_journal_err(struct super_block *sb,
struct ext4_super_block *es)
int ext4_force_commit(struct super_block *sb)
static void ext4_write_super(struct super_block *sb)
static int ext4_sync_fs(struct super_block *sb, int wait)
static int ext4_freeze(struct super_block *sb)
static int ext4_unfreeze(struct super_block *sb)
struct ext4_mount_options ;
static int ext4_remount(struct super_block *sb, int *flags, char *data)
static int ext4_statfs(struct dentry *dentry, struct kstatfs *buf)
static inline struct inode *dquot_to_inode(struct dquot *dquot)
static int ext4_write_dquot(struct dquot *dquot)
static int ext4_acquire_dquot(struct dquot *dquot)
static int ext4_release_dquot(struct dquot *dquot)
static int ext4_mark_dquot_dirty(struct dquot *dquot)
static int ext4_write_info(struct super_block *sb, int type)
static int ext4_quota_on_mount(struct super_block *sb, int type)
static int ext4_quota_on(struct super_block *sb, int type, int format_id,
struct path *path)
static int ext4_quota_off(struct super_block *sb, int type)
static ssize_t ext4_quota_read(struct super_block *sb, int type, char *data,
size_t len, loff_t off)
static ssize_t ext4_quota_write(struct super_block *sb, int type,
const char *data, size_t len, loff_t off)
static struct dentry *ext4_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
#if !defined(CONFIG_EXT2_FS) && !defined(CONFIG_EXT2_FS_MODULE) && defined(CONFIG_EXT4_USE_FOR_EXT23)
static inline void register_as_ext2(void)
static inline void unregister_as_ext2(void)
static inline int ext2_feature_set_ok(struct super_block *sb)
MODULE_ALIAS("ext2");
static inline void register_as_ext2(void)
static inline void unregister_as_ext2(void)
static inline int ext2_feature_set_ok(struct super_block *sb)
#if !defined(CONFIG_EXT3_FS) && !defined(CONFIG_EXT3_FS_MODULE) && defined(CONFIG_EXT4_USE_FOR_EXT23)
static inline void register_as_ext3(void)
static inline void unregister_as_ext3(void)
static inline int ext3_feature_set_ok(struct super_block *sb)
MODULE_ALIAS("ext3");
static inline void register_as_ext3(void)
static inline void unregister_as_ext3(void)
static inline int ext3_feature_set_ok(struct super_block *sb)
static struct file_system_type ext4_fs_type = ;
static int __init ext4_init_feat_adverts(void)
static void ext4_exit_feat_adverts(void)
wait_queue_head_t ext4__ioend_wq[EXT4_WQ_HASH_SZ];
struct mutex ext4__aio_mutex[EXT4_WQ_HASH_SZ];
static int __init ext4_init_fs(void)
static void __exit ext4_exit_fs(void)
MODULE_AUTHOR("Remy Card, Stephen Tweedie, Andrew Morton, Andreas Dilger, Theodore Ts'o and others");
MODULE_DESCRIPTION("Fourth Extended Filesystem");
MODULE_LICENSE("GPL");
module_init(ext4_init_fs)
module_exit(ext4_exit_fs)
