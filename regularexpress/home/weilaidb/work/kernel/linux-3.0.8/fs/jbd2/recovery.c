struct recovery_info
;
enum passtype ;
static int do_one_pass(journal_t *journal,
struct recovery_info *info, enum passtype pass);
static int scan_revoke_records(journal_t *, struct buffer_head *,
tid_t, struct recovery_info *);
static void journal_brelse_array(struct buffer_head *b[], int n)
#define MAXBUF 8
static int do_readahead(journal_t *journal, unsigned int start)
static int jread(struct buffer_head **bhp, journal_t *journal,
unsigned int offset)
static int count_tags(journal_t *journal, struct buffer_head *bh)
#define wrap(journal, var)						\
do  while (0)
int jbd2_journal_recover(journal_t *journal)
int jbd2_journal_skip_recovery(journal_t *journal)
static inline unsigned long long read_tag_block(int tag_bytes, journal_block_tag_t *tag)
static int calc_chksums(journal_t *journal, struct buffer_head *bh,
unsigned long *next_log_block, __u32 *crc32_sum)
static int do_one_pass(journal_t *journal,
struct recovery_info *info, enum passtype pass)
static int scan_revoke_records(journal_t *journal, struct buffer_head *bh,
tid_t sequence, struct recovery_info *info)
