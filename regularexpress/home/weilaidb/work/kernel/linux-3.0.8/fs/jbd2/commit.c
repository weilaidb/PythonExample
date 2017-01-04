static void journal_end_buffer_io_sync(struct buffer_head *bh, int uptodate)
static void release_buffer_page(struct buffer_head *bh)
static int journal_submit_commit_record(journal_t *journal,
transaction_t *commit_transaction,
struct buffer_head **cbh,
__u32 crc32_sum)
static int journal_wait_on_commit_record(journal_t *journal,
struct buffer_head *bh)
static int journal_submit_inode_data_buffers(struct address_space *mapping)
static int journal_submit_data_buffers(journal_t *journal,
transaction_t *commit_transaction)
static int journal_finish_inode_data_buffers(journal_t *journal,
transaction_t *commit_transaction)
static __u32 jbd2_checksum_data(__u32 crc32_sum, struct buffer_head *bh)
static void write_tag_block(int tag_bytes, journal_block_tag_t *tag,
unsigned long long block)
void jbd2_journal_commit_transaction(journal_t *journal)
