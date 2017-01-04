static struct kmem_cache *jbd2_revoke_record_cache;
static struct kmem_cache *jbd2_revoke_table_cache;
struct jbd2_revoke_record_s
;
struct jbd2_revoke_table_s
;
static void write_one_revoke_record(journal_t *, transaction_t *,
struct journal_head **, int *,
struct jbd2_revoke_record_s *, int);
static void flush_descriptor(journal_t *, struct journal_head *, int, int);
static inline int hash(journal_t *journal, unsigned long long block)
static int insert_revoke_hash(journal_t *journal, unsigned long long blocknr,
tid_t seq)
static struct jbd2_revoke_record_s *find_revoke_record(journal_t *journal,
unsigned long long blocknr)
void jbd2_journal_destroy_revoke_caches(void)
int __init jbd2_journal_init_revoke_caches(void)
static struct jbd2_revoke_table_s *jbd2_journal_init_revoke_table(int hash_size)
static void jbd2_journal_destroy_revoke_table(struct jbd2_revoke_table_s *table)
int jbd2_journal_init_revoke(journal_t *journal, int hash_size)
void jbd2_journal_destroy_revoke(journal_t *journal)
int jbd2_journal_revoke(handle_t *handle, unsigned long long blocknr,
struct buffer_head *bh_in)
int jbd2_journal_cancel_revoke(handle_t *handle, struct journal_head *jh)
void jbd2_journal_switch_revoke_table(journal_t *journal)
void jbd2_journal_write_revoke_records(journal_t *journal,
transaction_t *transaction,
int write_op)
static void write_one_revoke_record(journal_t *journal,
transaction_t *transaction,
struct journal_head **descriptorp,
int *offsetp,
struct jbd2_revoke_record_s *record,
int write_op)
static void flush_descriptor(journal_t *journal,
struct journal_head *descriptor,
int offset, int write_op)
int jbd2_journal_set_revoke(journal_t *journal,
unsigned long long blocknr,
tid_t sequence)
int jbd2_journal_test_revoke(journal_t *journal,
unsigned long long blocknr,
tid_t sequence)
void jbd2_journal_clear_revoke(journal_t *journal)
