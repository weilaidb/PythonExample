static void journal_end_buffer_io_sync(struct buffer_head *bh, int uptodate)
static void release_buffer_page(struct buffer_head *bh)
static void release_data_buffer(struct buffer_head *bh)
static int inverted_lock(journal_t *journal, struct buffer_head *bh)
static int journal_write_commit_record(journal_t *journal,
transaction_t *commit_transaction)
static void journal_do_submit_data(struct buffer_head **wbuf, int bufs,
int write_op)
static int journal_submit_data_buffers(journal_t *journal,
transaction_t *commit_transaction,
int write_op)
void journal_commit_transaction(journal_t *journal)
