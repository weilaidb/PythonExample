EXPORT_SYMBOL(journal_start);
EXPORT_SYMBOL(journal_restart);
EXPORT_SYMBOL(journal_extend);
EXPORT_SYMBOL(journal_stop);
EXPORT_SYMBOL(journal_lock_updates);
EXPORT_SYMBOL(journal_unlock_updates);
EXPORT_SYMBOL(journal_get_write_access);
EXPORT_SYMBOL(journal_get_create_access);
EXPORT_SYMBOL(journal_get_undo_access);
EXPORT_SYMBOL(journal_dirty_data);
EXPORT_SYMBOL(journal_dirty_metadata);
EXPORT_SYMBOL(journal_release_buffer);
EXPORT_SYMBOL(journal_forget);
EXPORT_SYMBOL(journal_flush);
EXPORT_SYMBOL(journal_revoke);
EXPORT_SYMBOL(journal_init_dev);
EXPORT_SYMBOL(journal_init_inode);
EXPORT_SYMBOL(journal_update_format);
EXPORT_SYMBOL(journal_check_used_features);
EXPORT_SYMBOL(journal_check_available_features);
EXPORT_SYMBOL(journal_set_features);
EXPORT_SYMBOL(journal_create);
EXPORT_SYMBOL(journal_load);
EXPORT_SYMBOL(journal_destroy);
EXPORT_SYMBOL(journal_abort);
EXPORT_SYMBOL(journal_errno);
EXPORT_SYMBOL(journal_ack_err);
EXPORT_SYMBOL(journal_clear_err);
EXPORT_SYMBOL(log_wait_commit);
EXPORT_SYMBOL(log_start_commit);
EXPORT_SYMBOL(journal_start_commit);
EXPORT_SYMBOL(journal_force_commit_nested);
EXPORT_SYMBOL(journal_wipe);
EXPORT_SYMBOL(journal_blocks_per_page);
EXPORT_SYMBOL(journal_invalidatepage);
EXPORT_SYMBOL(journal_try_to_free_buffers);
EXPORT_SYMBOL(journal_force_commit);
static int journal_convert_superblock_v1(journal_t *, journal_superblock_t *);
static void __journal_abort_soft (journal_t *journal, int errno);
static const char *journal_dev_name(journal_t *journal, char *buffer);
static void commit_timeout(unsigned long __data)
static int kjournald(void *arg)
static int journal_start_thread(journal_t *journal)
static void journal_kill_thread(journal_t *journal)
int journal_write_metadata_buffer(transaction_t *transaction,
struct journal_head  *jh_in,
struct journal_head **jh_out,
unsigned int blocknr)
int __log_space_left(journal_t *journal)
int __log_start_commit(journal_t *journal, tid_t target)
int log_start_commit(journal_t *journal, tid_t tid)
int journal_force_commit_nested(journal_t *journal)
int journal_start_commit(journal_t *journal, tid_t *ptid)
int log_wait_commit(journal_t *journal, tid_t tid)
int journal_trans_will_send_data_barrier(journal_t *journal, tid_t tid)
EXPORT_SYMBOL(journal_trans_will_send_data_barrier);
int journal_next_log_block(journal_t *journal, unsigned int *retp)
int journal_bmap(journal_t *journal, unsigned int blocknr,
unsigned int *retp)
struct journal_head *journal_get_descriptor_buffer(journal_t *journal)
static journal_t * journal_init_common (void)
journal_t * journal_init_dev(struct block_device *bdev,
struct block_device *fs_dev,
int start, int len, int blocksize)
journal_t * journal_init_inode (struct inode *inode)
static void journal_fail_superblock (journal_t *journal)
static int journal_reset(journal_t *journal)
int journal_create(journal_t *journal)
void journal_update_superblock(journal_t *journal, int wait)
static int journal_get_superblock(journal_t *journal)
static int load_superblock(journal_t *journal)
int journal_load(journal_t *journal)
int journal_destroy(journal_t *journal)
int journal_check_used_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
int journal_check_available_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
int journal_set_features (journal_t *journal, unsigned long compat,
unsigned long ro, unsigned long incompat)
int journal_update_format (journal_t *journal)
static int journal_convert_superblock_v1(journal_t *journal,
journal_superblock_t *sb)
int journal_flush(journal_t *journal)
int journal_wipe(journal_t *journal, int write)
static const char *journal_dev_name(journal_t *journal, char *buffer)
static void __journal_abort_hard(journal_t *journal)
static void __journal_abort_soft (journal_t *journal, int errno)
void journal_abort(journal_t *journal, int errno)
int journal_errno(journal_t *journal)
int journal_clear_err(journal_t *journal)
void journal_ack_err(journal_t *journal)
int journal_blocks_per_page(struct inode *inode)
static struct kmem_cache *journal_head_cache;
static atomic_t nr_journal_heads = ATOMIC_INIT(0);
static int journal_init_journal_head_cache(void)
static void journal_destroy_journal_head_cache(void)
static struct journal_head *journal_alloc_journal_head(void)
static void journal_free_journal_head(struct journal_head *jh)
struct journal_head *journal_add_journal_head(struct buffer_head *bh)
struct journal_head *journal_grab_journal_head(struct buffer_head *bh)
static void __journal_remove_journal_head(struct buffer_head *bh)
void journal_remove_journal_head(struct buffer_head *bh)
void journal_put_journal_head(struct journal_head *jh)
u8 journal_enable_debug __read_mostly;
EXPORT_SYMBOL(journal_enable_debug);
static struct dentry *jbd_debugfs_dir;
static struct dentry *jbd_debug;
static void __init jbd_create_debugfs_entry(void)
static void __exit jbd_remove_debugfs_entry(void)
static inline void jbd_create_debugfs_entry(void)
static inline void jbd_remove_debugfs_entry(void)
struct kmem_cache *jbd_handle_cache;
static int __init journal_init_handle_cache(void)
static void journal_destroy_handle_cache(void)
static int __init journal_init_caches(void)
static void journal_destroy_caches(void)
static int __init journal_init(void)
static void __exit journal_exit(void)
MODULE_LICENSE("GPL");
module_init(journal_init);
module_exit(journal_exit);
