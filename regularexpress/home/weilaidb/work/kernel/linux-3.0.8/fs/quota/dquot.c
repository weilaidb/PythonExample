static __cacheline_aligned_in_smp DEFINE_SPINLOCK(dq_list_lock);
static __cacheline_aligned_in_smp DEFINE_SPINLOCK(dq_state_lock);
__cacheline_aligned_in_smp DEFINE_SPINLOCK(dq_data_lock);
EXPORT_SYMBOL(dq_data_lock);
void __quota_error(struct super_block *sb, const char *func,
const char *fmt, ...)
EXPORT_SYMBOL(__quota_error);
#if defined(CONFIG_QUOTA_DEBUG) || defined(CONFIG_PRINT_QUOTA_WARNING)
static char *quotatypes[] = INITQFNAMES;
static struct quota_format_type *quota_formats;
static struct quota_module_name module_names[] = INIT_QUOTA_MODULE_NAMES;
static struct kmem_cache *dquot_cachep;
int register_quota_format(struct quota_format_type *fmt)
EXPORT_SYMBOL(register_quota_format);
void unregister_quota_format(struct quota_format_type *fmt)
EXPORT_SYMBOL(unregister_quota_format);
static struct quota_format_type *find_quota_format(int id)
static void put_quota_format(struct quota_format_type *fmt)
static LIST_HEAD(inuse_list);
static LIST_HEAD(free_dquots);
static unsigned int dq_hash_bits, dq_hash_mask;
static struct hlist_head *dquot_hash;
struct dqstats dqstats;
EXPORT_SYMBOL(dqstats);
static qsize_t inode_get_rsv_space(struct inode *inode);
static void __dquot_initialize(struct inode *inode, int type);
static inline unsigned int
hashfn(const struct super_block *sb, unsigned int id, int type)
static inline void insert_dquot_hash(struct dquot *dquot)
static inline void remove_dquot_hash(struct dquot *dquot)
static struct dquot *find_dquot(unsigned int hashent, struct super_block *sb,
unsigned int id, int type)
static inline void put_dquot_last(struct dquot *dquot)
static inline void remove_free_dquot(struct dquot *dquot)
static inline void put_inuse(struct dquot *dquot)
static inline void remove_inuse(struct dquot *dquot)
static void wait_on_dquot(struct dquot *dquot)
static inline int dquot_dirty(struct dquot *dquot)
static inline int mark_dquot_dirty(struct dquot *dquot)
int dquot_mark_dquot_dirty(struct dquot *dquot)
EXPORT_SYMBOL(dquot_mark_dquot_dirty);
static inline int mark_all_dquot_dirty(struct dquot * const *dquot)
static inline void dqput_all(struct dquot **dquot)
static inline int clear_dquot_dirty(struct dquot *dquot)
void mark_info_dirty(struct super_block *sb, int type)
EXPORT_SYMBOL(mark_info_dirty);
int dquot_acquire(struct dquot *dquot)
EXPORT_SYMBOL(dquot_acquire);
int dquot_commit(struct dquot *dquot)
EXPORT_SYMBOL(dquot_commit);
int dquot_release(struct dquot *dquot)
EXPORT_SYMBOL(dquot_release);
void dquot_destroy(struct dquot *dquot)
EXPORT_SYMBOL(dquot_destroy);
static inline void do_destroy_dquot(struct dquot *dquot)
static void invalidate_dquots(struct super_block *sb, int type)
int dquot_scan_active(struct super_block *sb,
int (*fn)(struct dquot *dquot, unsigned long priv),
unsigned long priv)
EXPORT_SYMBOL(dquot_scan_active);
int dquot_quota_sync(struct super_block *sb, int type, int wait)
EXPORT_SYMBOL(dquot_quota_sync);
static void prune_dqcache(int count)
static int shrink_dqcache_memory(struct shrinker *shrink,
struct shrink_control *sc)
static struct shrinker dqcache_shrinker = ;
void dqput(struct dquot *dquot)
EXPORT_SYMBOL(dqput);
struct dquot *dquot_alloc(struct super_block *sb, int type)
EXPORT_SYMBOL(dquot_alloc);
static struct dquot *get_empty_dquot(struct super_block *sb, int type)
struct dquot *dqget(struct super_block *sb, unsigned int id, int type)
EXPORT_SYMBOL(dqget);
static int dqinit_needed(struct inode *inode, int type)
static void add_dquot_ref(struct super_block *sb, int type)
static inline int dqput_blocks(struct dquot *dquot)
static int remove_inode_dquot_ref(struct inode *inode, int type,
struct list_head *tofree_head)
static void put_dquot_list(struct list_head *tofree_head)
static void remove_dquot_ref(struct super_block *sb, int type,
struct list_head *tofree_head)
static void drop_dquot_ref(struct super_block *sb, int type)
static inline void dquot_incr_inodes(struct dquot *dquot, qsize_t number)
static inline void dquot_incr_space(struct dquot *dquot, qsize_t number)
static inline void dquot_resv_space(struct dquot *dquot, qsize_t number)
static void dquot_claim_reserved_space(struct dquot *dquot, qsize_t number)
static inline
void dquot_free_reserved_space(struct dquot *dquot, qsize_t number)
static void dquot_decr_inodes(struct dquot *dquot, qsize_t number)
static void dquot_decr_space(struct dquot *dquot, qsize_t number)
static int warning_issued(struct dquot *dquot, const int warntype)
static int flag_print_warnings = 1;
static int need_print_warning(struct dquot *dquot)
static void print_warning(struct dquot *dquot, const int warntype)
static void flush_warnings(struct dquot *const *dquots, char *warntype)
static int ignore_hardlimit(struct dquot *dquot)
static int check_idq(struct dquot *dquot, qsize_t inodes, char *warntype)
static int check_bdq(struct dquot *dquot, qsize_t space, int prealloc, char *warntype)
static int info_idq_free(struct dquot *dquot, qsize_t inodes)
static int info_bdq_free(struct dquot *dquot, qsize_t space)
static int dquot_active(const struct inode *inode)
static void __dquot_initialize(struct inode *inode, int type)
void dquot_initialize(struct inode *inode)
EXPORT_SYMBOL(dquot_initialize);
static void __dquot_drop(struct inode *inode)
void dquot_drop(struct inode *inode)
EXPORT_SYMBOL(dquot_drop);
static qsize_t *inode_reserved_space(struct inode * inode)
void inode_add_rsv_space(struct inode *inode, qsize_t number)
EXPORT_SYMBOL(inode_add_rsv_space);
void inode_claim_rsv_space(struct inode *inode, qsize_t number)
EXPORT_SYMBOL(inode_claim_rsv_space);
void inode_sub_rsv_space(struct inode *inode, qsize_t number)
EXPORT_SYMBOL(inode_sub_rsv_space);
static qsize_t inode_get_rsv_space(struct inode *inode)
static void inode_incr_space(struct inode *inode, qsize_t number,
int reserve)
static void inode_decr_space(struct inode *inode, qsize_t number, int reserve)
int __dquot_alloc_space(struct inode *inode, qsize_t number, int flags)
EXPORT_SYMBOL(__dquot_alloc_space);
int dquot_alloc_inode(const struct inode *inode)
EXPORT_SYMBOL(dquot_alloc_inode);
int dquot_claim_space_nodirty(struct inode *inode, qsize_t number)
EXPORT_SYMBOL(dquot_claim_space_nodirty);
void __dquot_free_space(struct inode *inode, qsize_t number, int flags)
EXPORT_SYMBOL(__dquot_free_space);
void dquot_free_inode(const struct inode *inode)
EXPORT_SYMBOL(dquot_free_inode);
int __dquot_transfer(struct inode *inode, struct dquot **transfer_to)
EXPORT_SYMBOL(__dquot_transfer);
int dquot_transfer(struct inode *inode, struct iattr *iattr)
EXPORT_SYMBOL(dquot_transfer);
int dquot_commit_info(struct super_block *sb, int type)
EXPORT_SYMBOL(dquot_commit_info);
const struct dquot_operations dquot_operations = ;
EXPORT_SYMBOL(dquot_operations);
int dquot_file_open(struct inode *inode, struct file *file)
EXPORT_SYMBOL(dquot_file_open);
int dquot_disable(struct super_block *sb, int type, unsigned int flags)
EXPORT_SYMBOL(dquot_disable);
int dquot_quota_off(struct super_block *sb, int type)
EXPORT_SYMBOL(dquot_quota_off);
static int vfs_load_quota_inode(struct inode *inode, int type, int format_id,
unsigned int flags)
int dquot_resume(struct super_block *sb, int type)
EXPORT_SYMBOL(dquot_resume);
int dquot_quota_on(struct super_block *sb, int type, int format_id,
struct path *path)
EXPORT_SYMBOL(dquot_quota_on);
int dquot_enable(struct inode *inode, int type, int format_id,
unsigned int flags)
EXPORT_SYMBOL(dquot_enable);
int dquot_quota_on_mount(struct super_block *sb, char *qf_name,
int format_id, int type)
EXPORT_SYMBOL(dquot_quota_on_mount);
static inline qsize_t qbtos(qsize_t blocks)
static inline qsize_t stoqb(qsize_t space)
static void do_get_dqblk(struct dquot *dquot, struct fs_disk_quota *di)
int dquot_get_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *di)
EXPORT_SYMBOL(dquot_get_dqblk);
#define VFS_FS_DQ_MASK \
(FS_DQ_BCOUNT | FS_DQ_BSOFT | FS_DQ_BHARD | \
FS_DQ_ICOUNT | FS_DQ_ISOFT | FS_DQ_IHARD | \
FS_DQ_BTIMER | FS_DQ_ITIMER)
static int do_set_dqblk(struct dquot *dquot, struct fs_disk_quota *di)
int dquot_set_dqblk(struct super_block *sb, int type, qid_t id,
struct fs_disk_quota *di)
EXPORT_SYMBOL(dquot_set_dqblk);
int dquot_get_dqinfo(struct super_block *sb, int type, struct if_dqinfo *ii)
EXPORT_SYMBOL(dquot_get_dqinfo);
int dquot_set_dqinfo(struct super_block *sb, int type, struct if_dqinfo *ii)
EXPORT_SYMBOL(dquot_set_dqinfo);
const struct quotactl_ops dquot_quotactl_ops = ;
EXPORT_SYMBOL(dquot_quotactl_ops);
static int do_proc_dqstats(struct ctl_table *table, int write,
void __user *buffer, size_t *lenp, loff_t *ppos)
static ctl_table fs_dqstats_table[] = ;
static ctl_table fs_table[] = ;
static ctl_table sys_table[] = ;
static int __init dquot_init(void)
module_init(dquot_init);
