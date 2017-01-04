int __ext3_journal_get_undo_access(const char *where, handle_t *handle,
struct buffer_head *bh)
int __ext3_journal_get_write_access(const char *where, handle_t *handle,
struct buffer_head *bh)
int __ext3_journal_forget(const char *where, handle_t *handle,
struct buffer_head *bh)
int __ext3_journal_revoke(const char *where, handle_t *handle,
unsigned long blocknr, struct buffer_head *bh)
int __ext3_journal_get_create_access(const char *where,
handle_t *handle, struct buffer_head *bh)
int __ext3_journal_dirty_metadata(const char *where,
handle_t *handle, struct buffer_head *bh)
