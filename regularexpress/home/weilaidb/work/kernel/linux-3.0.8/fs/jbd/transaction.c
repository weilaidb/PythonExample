static void __journal_temp_unlink_buffer(struct journal_head *jh);
static transaction_t *
get_transaction(journal_t *journal, transaction_t *transaction)
static int start_this_handle(journal_t *journal, handle_t *handle)
static struct lock_class_key jbd_handle_key;
static handle_t *new_handle(int nblocks)
handle_t *journal_start(journal_t *journal, int nblocks)
int journal_extend(handle_t *handle, int nblocks)
int journal_restart(handle_t *handle, int nblocks)
void journal_lock_updates(journal_t *journal)
void journal_unlock_updates (journal_t *journal)
static void warn_dirty_buffer(struct buffer_head *bh)
static int
do_get_write_access(handle_t *handle, struct journal_head *jh,
int force_copy)
int journal_get_write_access(handle_t *handle, struct buffer_head *bh)
int journal_get_create_access(handle_t *handle, struct buffer_head *bh)
int journal_get_undo_access(handle_t *handle, struct buffer_head *bh)
int journal_dirty_data(handle_t *handle, struct buffer_head *bh)
int journal_dirty_metadata(handle_t *handle, struct buffer_head *bh)
void
journal_release_buffer(handle_t *handle, struct buffer_head *bh)
int journal_forget (handle_t *handle, struct buffer_head *bh)
int journal_stop(handle_t *handle)
int journal_force_commit(journal_t *journal)
static inline void
__blist_add_buffer(struct journal_head **list, struct journal_head *jh)
static inline void
__blist_del_buffer(struct journal_head **list, struct journal_head *jh)
static void __journal_temp_unlink_buffer(struct journal_head *jh)
void __journal_unfile_buffer(struct journal_head *jh)
void journal_unfile_buffer(journal_t *journal, struct journal_head *jh)
static void
__journal_try_to_free_buffer(journal_t *journal, struct buffer_head *bh)
int journal_try_to_free_buffers(journal_t *journal,
struct page *page, gfp_t gfp_mask)
static int __dispose_buffer(struct journal_head *jh, transaction_t *transaction)
static int journal_unmap_buffer(journal_t *journal, struct buffer_head *bh)
void journal_invalidatepage(journal_t *journal,
struct page *page,
unsigned long offset)
void __journal_file_buffer(struct journal_head *jh,
transaction_t *transaction, int jlist)
void journal_file_buffer(struct journal_head *jh,
transaction_t *transaction, int jlist)
void __journal_refile_buffer(struct journal_head *jh)
void journal_refile_buffer(journal_t *journal, struct journal_head *jh)
