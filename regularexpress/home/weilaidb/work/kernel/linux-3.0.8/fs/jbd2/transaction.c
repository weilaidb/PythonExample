static void __jbd2_journal_temp_unlink_buffer(struct journal_head *jh);
static void __jbd2_journal_unfile_buffer(struct journal_head *jh);
static transaction_t *
jbd2_get_transaction(journal_t *journal, transaction_t *transaction)
static inline void update_t_max_wait(transaction_t *transaction,
unsigned long ts)
static int start_this_handle(journal_t *journal, handle_t *handle,
int gfp_mask)
static struct lock_class_key jbd2_handle_key;
static handle_t *new_handle(int nblocks)
handle_t *jbd2__journal_start(journal_t *journal, int nblocks, int gfp_mask)
EXPORT_SYMBOL(jbd2__journal_start);
handle_t *jbd2_journal_start(journal_t *journal, int nblocks)
EXPORT_SYMBOL(jbd2_journal_start);
int jbd2_journal_extend(handle_t *handle, int nblocks)
int jbd2__journal_restart(handle_t *handle, int nblocks, int gfp_mask)
EXPORT_SYMBOL(jbd2__journal_restart);
int jbd2_journal_restart(handle_t *handle, int nblocks)
EXPORT_SYMBOL(jbd2_journal_restart);
void jbd2_journal_lock_updates(journal_t *journal)
void jbd2_journal_unlock_updates (journal_t *journal)
static void warn_dirty_buffer(struct buffer_head *bh)
static int
do_get_write_access(handle_t *handle, struct journal_head *jh,
int force_copy)
int jbd2_journal_get_write_access(handle_t *handle, struct buffer_head *bh)
int jbd2_journal_get_create_access(handle_t *handle, struct buffer_head *bh)
int jbd2_journal_get_undo_access(handle_t *handle, struct buffer_head *bh)
void jbd2_journal_set_triggers(struct buffer_head *bh,
struct jbd2_buffer_trigger_type *type)
void jbd2_buffer_frozen_trigger(struct journal_head *jh, void *mapped_data,
struct jbd2_buffer_trigger_type *triggers)
void jbd2_buffer_abort_trigger(struct journal_head *jh,
struct jbd2_buffer_trigger_type *triggers)
int jbd2_journal_dirty_metadata(handle_t *handle, struct buffer_head *bh)
void
jbd2_journal_release_buffer(handle_t *handle, struct buffer_head *bh)
int jbd2_journal_forget (handle_t *handle, struct buffer_head *bh)
int jbd2_journal_stop(handle_t *handle)
int jbd2_journal_force_commit(journal_t *journal)
static inline void
__blist_add_buffer(struct journal_head **list, struct journal_head *jh)
static inline void
__blist_del_buffer(struct journal_head **list, struct journal_head *jh)
void __jbd2_journal_temp_unlink_buffer(struct journal_head *jh)
static void __jbd2_journal_unfile_buffer(struct journal_head *jh)
void jbd2_journal_unfile_buffer(journal_t *journal, struct journal_head *jh)
static void
__journal_try_to_free_buffer(journal_t *journal, struct buffer_head *bh)
int jbd2_journal_try_to_free_buffers(journal_t *journal,
struct page *page, gfp_t gfp_mask)
static int __dispose_buffer(struct journal_head *jh, transaction_t *transaction)
static int journal_unmap_buffer(journal_t *journal, struct buffer_head *bh)
void jbd2_journal_invalidatepage(journal_t *journal,
struct page *page,
unsigned long offset)
void __jbd2_journal_file_buffer(struct journal_head *jh,
transaction_t *transaction, int jlist)
void jbd2_journal_file_buffer(struct journal_head *jh,
transaction_t *transaction, int jlist)
void __jbd2_journal_refile_buffer(struct journal_head *jh)
void jbd2_journal_refile_buffer(journal_t *journal, struct journal_head *jh)
int jbd2_journal_file_inode(handle_t *handle, struct jbd2_inode *jinode)
int jbd2_journal_begin_ordered_truncate(journal_t *journal,
struct jbd2_inode *jinode,
loff_t new_size)
