#define CREATE_TRACE_POINTS
EXPORT_SYMBOL(jbd2_journal_extend);
EXPORT_SYMBOL(jbd2_journal_stop);
EXPORT_SYMBOL(jbd2_journal_lock_updates);
EXPORT_SYMBOL(jbd2_journal_unlock_updates);
EXPORT_SYMBOL(jbd2_journal_get_write_access);
EXPORT_SYMBOL(jbd2_journal_get_create_access);
EXPORT_SYMBOL(jbd2_journal_get_undo_access);
EXPORT_SYMBOL(jbd2_journal_set_triggers);
EXPORT_SYMBOL(jbd2_journal_dirty_metadata);
EXPORT_SYMBOL(jbd2_journal_release_buffer);
EXPORT_SYMBOL(jbd2_journal_forget);
EXPORT_SYMBOL(jbd2_journal_flush);
EXPORT_SYMBOL(jbd2_journal_revoke);
EXPORT_SYMBOL(jbd2_journal_init_dev);
EXPORT_SYMBOL(jbd2_journal_init_inode);
EXPORT_SYMBOL(jbd2_journal_update_format);
EXPORT_SYMBOL(jbd2_journal_check_used_features);
EXPORT_SYMBOL(jbd2_journal_check_available_features);
EXPORT_SYMBOL(jbd2_journal_set_features);
EXPORT_SYMBOL(jbd2_journal_load);
EXPORT_SYMBOL(jbd2_journal_destroy);
EXPORT_SYMBOL(jbd2_journal_abort);
EXPORT_SYMBOL(jbd2_journal_errno);
EXPORT_SYMBOL(jbd2_journal_ack_err);
EXPORT_SYMBOL(jbd2_journal_clear_err);
EXPORT_SYMBOL(jbd2_log_wait_commit);
EXPORT_SYMBOL(jbd2_log_start_commit);
EXPORT_SYMBOL(jbd2_journal_start_commit);
EXPORT_SYMBOL(jbd2_journal_force_commit_nested);
EXPORT_SYMBOL(jbd2_journal_wipe);
EXPORT_SYMBOL(jbd2_journal_blocks_per_page);
EXPORT_SYMBOL(jbd2_journal_invalidatepage);
EXPORT_SYMBOL(jbd2_journal_try_to_free_buffers);
EXPORT_SYMBOL(jbd2_journal_force_commit);
EXPORT_SYMBOL(jbd2_journal_file_inode);
EXPORT_SYMBOL(jbd2_journal_init_jbd_inode);
EXPORT_SYMBOL(jbd2_journal_release_jbd_inode);
EXPORT_SYMBOL(jbd2_journal_begin_ordered_truncate);
EXPORT_SYMBOL(jbd2_inode_cache);
static int journal_convert_superblock_v1(journal_t *, journal_superblock_t *);
static void __journal_abort_soft (journal_t *journal, int errno);
static int jbd2_journal_create_slab(size_t slab_size);
static void commit_timeout(unsigned long __data)
static int kjournald2(void *arg)
static int jbd2_journal_start_thread(journal_t *journal)
static void journal_kill_thread(journal_t *journal)
int jbd2_journal_write_metadata_buffer(transaction_t *transaction,
struct journal_head  *jh_in,
struct journal_head **jh_out,
unsigned long long blocknr)
int __jbd2_log_space_left(journal_t *journal)
int __jbd2_log_start_commit(journal_t *journal, tid_t target)
int jbd2_log_start_commit(journal_t *journal, tid_t tid)
int jbd2_journal_force_commit_nested(journal_t *journal)
int jbd2_journal_start_commit(journal_t *journal, tid_t *ptid)
int jbd2_trans_will_send_data_barrier(journal_t *journal, tid_t tid)
EXPORT_SYMBOL(jbd2_trans_will_send_data_barrier);
int jbd2_log_wait_commit(journal_t *journal, tid_t tid)
int jbd2_journal_next_log_block(journal_t *journal, unsigned long long *retp)
int jbd2_journal_bmap(journal_t *journal, unsigned long blocknr,
unsigned long long *retp)
struct journal_head *jbd2_journal_get_descriptor_buffer(journal_t *journal)
struct jbd2_stats_proc_session ;
static void *jbd2_seq_info_start(struct seq_file *seq, loff_t *pos)
static void *jbd2_seq_info_next(struct seq_file *seq, void *v, loff_t *pos)
static int jbd2_seq_info_show(struct seq_file *seq, void *v)
static void jbd2_seq_info_stop(struct seq_file *seq, void *v)
static const struct seq_operations jbd2_seq_info_ops = ;
static int jbd2_seq_info_open(struct inode *inode, struct file *file)
static int jbd2_seq_info_release(struct inode *inode, struct file *file)
static const struct file_operations jbd2_seq_info_fops = ;
static struct proc_dir_entry *proc_jbd2_stats;
static void jbd2_stats_proc_init(journal_t *journal)
static void jbd2_stats_proc_exit(journal_t *journal)
static journal_t * journal_init_common (void)
journal_t * jbd2_journal_init_dev(struct block_device *bdev,
struct block_device *fs_dev,
unsigned long long start, int len, int blocksize)
journal_t * jbd2_journal_init_inode (struct inode *inode)
static void journal_fail_superblock (journal_t *journal)
static int journal_reset(journal_t *journal)
void jbd2_journal_update_superblock(journal_t *journal, int wait)
static int journal_get_superblock(journal_t *journal)
static int load_superblock(journal_t *journal)
int jbd2_journal_load(journal_t *journal)
int jbd2_journal_destroy(journal_t *journal)
int jbd2_journal_check_used_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
int jbd2_journal_check_available_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
int jbd2_journal_set_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
void jbd2_journal_clear_features(journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
EXPORT_SYMBOL(jbd2_journal_clear_features);
int jbd2_journal_update_format (journal_t *journal)
static int journal_convert_superblock_v1(journal_t *journal,
journal_superblock_t *sb)
int jbd2_journal_flush(journal_t *journal)
int jbd2_journal_wipe(journal_t *journal, int write)
void __jbd2_journal_abort_hard(journal_t *journal)
static void __journal_abort_soft (journal_t *journal, int errno)
void jbd2_journal_abort(journal_t *journal, int errno)
int jbd2_journal_errno(journal_t *journal)
int jbd2_journal_clear_err(journal_t *journal)
void jbd2_journal_ack_err(journal_t *journal)
int jbd2_journal_blocks_per_page(struct inode *inode)
size_t journal_tag_bytes(journal_t *journal)
#define JBD2_MAX_SLABS 8
static struct kmem_cache *jbd2_slab[JBD2_MAX_SLABS];
static const char *jbd2_slab_names[JBD2_MAX_SLABS] = ;
static void jbd2_journal_destroy_slabs(void)
static int jbd2_journal_create_slab(size_t size)
static struct kmem_cache *get_slab(size_t size)
void *jbd2_alloc(size_t size, gfp_t flags)
void jbd2_free(void *ptr, size_t size)
;
static struct kmem_cache *jbd2_journal_head_cache;
static atomic_t nr_journal_heads = ATOMIC_INIT(0);
static int journal_init_jbd2_journal_head_cache(void)
static void jbd2_journal_destroy_jbd2_journal_head_cache(void)
static struct journal_head *journal_alloc_journal_head(void)
static void journal_free_journal_head(struct journal_head *jh)
struct journal_head *jbd2_journal_add_journal_head(struct buffer_head *bh)
struct journal_head *jbd2_journal_grab_journal_head(struct buffer_head *bh)
static void __journal_remove_journal_head(struct buffer_head *bh)
void jbd2_journal_put_journal_head(struct journal_head *jh)
void jbd2_journal_init_jbd_inode(struct jbd2_inode *jinode, struct inode *inode)
void jbd2_journal_release_jbd_inode(journal_t *journal,
struct jbd2_inode *jinode)
u8 jbd2_journal_enable_debug __read_mostly;
EXPORT_SYMBOL(jbd2_journal_enable_debug);
#define JBD2_DEBUG_NAME "jbd2-debug"
static struct dentry *jbd2_debugfs_dir;
static struct dentry *jbd2_debug;
static void __init jbd2_create_debugfs_entry(void)
static void __exit jbd2_remove_debugfs_entry(void)
static void __init jbd2_create_debugfs_entry(void)
static void __exit jbd2_remove_debugfs_entry(void)
#define JBD2_STATS_PROC_NAME "fs/jbd2"
static void __init jbd2_create_jbd_stats_proc_entry(void)
static void __exit jbd2_remove_jbd_stats_proc_entry(void)
#define jbd2_create_jbd_stats_proc_entry() do  while (0)
#define jbd2_remove_jbd_stats_proc_entry() do  while (0)
struct kmem_cache *jbd2_handle_cache, *jbd2_inode_cache;
static int __init journal_init_handle_cache(void)
static void jbd2_journal_destroy_handle_cache(void)
static int __init journal_init_caches(void)
static void jbd2_journal_destroy_caches(void)
static int __init journal_init(void)
static void __exit journal_exit(void)
struct devname_cache ;
#define CACHE_SIZE_BITS 6
static struct devname_cache *devcache[1 << CACHE_SIZE_BITS];
static DEFINE_SPINLOCK(devname_cache_lock);
static void free_devcache(struct rcu_head *rcu)
const char *jbd2_dev_to_name(dev_t device)
EXPORT_SYMBOL(jbd2_dev_to_name);
MODULE_LICENSE("GPL");
module_init(journal_init);
module_exit(journal_exit);
