#define JOURNAL_LIST_ENTRY(h) (list_entry((h), struct reiserfs_journal_list, \
j_list))
#define JOURNAL_WORK_ENTRY(h) (list_entry((h), struct reiserfs_journal_list, \
j_working_list))
static int reiserfs_mounted_fs_count;
static struct workqueue_struct *commit_wq;
#define JOURNAL_TRANS_HALF 1018
#define BUFNR 64
#define BLOCK_FREED 2
#define BLOCK_FREED_HOLDER 3
#define BLOCK_NEEDS_FLUSH 4
#define BLOCK_DIRTIED 5
#define LIST_TOUCHED 1
#define LIST_DIRTY   2
#define LIST_COMMIT_PENDING  4
#define FLUSH_ALL   1
#define COMMIT_NOW  2
#define WAIT        4
static int do_journal_end(struct reiserfs_transaction_handle *,
struct super_block *, unsigned long nblocks,
int flags);
static int flush_journal_list(struct super_block *s,
struct reiserfs_journal_list *jl, int flushall);
static int flush_commit_list(struct super_block *s,
struct reiserfs_journal_list *jl, int flushall);
static int can_dirty(struct reiserfs_journal_cnode *cn);
static int journal_join(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks);
static int release_journal_dev(struct super_block *super,
struct reiserfs_journal *journal);
static int dirty_one_transaction(struct super_block *s,
struct reiserfs_journal_list *jl);
static void flush_async_commits(struct work_struct *work);
static void queue_log_writer(struct super_block *s);
enum ;
static int do_journal_begin_r(struct reiserfs_transaction_handle *th,
struct super_block *sb,
unsigned long nblocks, int join);
static void init_journal_hash(struct super_block *sb)
static int reiserfs_clean_and_file_buffer(struct buffer_head *bh)
static struct reiserfs_bitmap_node *allocate_bitmap_node(struct super_block
*sb)
static struct reiserfs_bitmap_node *get_bitmap_node(struct super_block *sb)
static inline void free_bitmap_node(struct super_block *sb,
struct reiserfs_bitmap_node *bn)
static void allocate_bitmap_nodes(struct super_block *sb)
static int set_bit_in_list_bitmap(struct super_block *sb,
b_blocknr_t block,
struct reiserfs_list_bitmap *jb)
static void cleanup_bitmap_list(struct super_block *sb,
struct reiserfs_list_bitmap *jb)
static int free_list_bitmaps(struct super_block *sb,
struct reiserfs_list_bitmap *jb_array)
static int free_bitmap_nodes(struct super_block *sb)
int reiserfs_allocate_list_bitmaps(struct super_block *sb,
struct reiserfs_list_bitmap *jb_array,
unsigned int bmap_nr)
static struct reiserfs_list_bitmap *get_list_bitmap(struct super_block *sb,
struct reiserfs_journal_list
*jl)
static struct reiserfs_journal_cnode *allocate_cnodes(int num_cnodes)
static struct reiserfs_journal_cnode *get_cnode(struct super_block *sb)
static void free_cnode(struct super_block *sb,
struct reiserfs_journal_cnode *cn)
static void clear_prepared_bits(struct buffer_head *bh)
static inline struct reiserfs_journal_cnode *get_journal_hash_dev(struct
super_block
*sb,
struct
reiserfs_journal_cnode
**table,
long bl)
int reiserfs_in_journal(struct super_block *sb,
unsigned int bmap_nr, int bit_nr, int search_all,
b_blocknr_t * next_zero_bit)
static inline void insert_journal_hash(struct reiserfs_journal_cnode **table,
struct reiserfs_journal_cnode *cn)
static inline void lock_journal(struct super_block *sb)
static inline void unlock_journal(struct super_block *sb)
static inline void get_journal_list(struct reiserfs_journal_list *jl)
static inline void put_journal_list(struct super_block *s,
struct reiserfs_journal_list *jl)
static void cleanup_freed_for_journal_list(struct super_block *sb,
struct reiserfs_journal_list *jl)
static int journal_list_still_alive(struct super_block *s,
unsigned int trans_id)
static void release_buffer_page(struct buffer_head *bh)
static void reiserfs_end_buffer_io_sync(struct buffer_head *bh, int uptodate)
static void reiserfs_end_ordered_io(struct buffer_head *bh, int uptodate)
static void submit_logged_buffer(struct buffer_head *bh)
static void submit_ordered_buffer(struct buffer_head *bh)
#define CHUNK_SIZE 32
struct buffer_chunk ;
static void write_chunk(struct buffer_chunk *chunk)
static void write_ordered_chunk(struct buffer_chunk *chunk)
static int add_to_chunk(struct buffer_chunk *chunk, struct buffer_head *bh,
spinlock_t * lock, void (fn) (struct buffer_chunk *))
static atomic_t nr_reiserfs_jh = ATOMIC_INIT(0);
static struct reiserfs_jh *alloc_jh(void)
void reiserfs_free_jh(struct buffer_head *bh)
static inline int __add_jh(struct reiserfs_journal *j, struct buffer_head *bh,
int tail)
int reiserfs_add_tail_list(struct inode *inode, struct buffer_head *bh)
int reiserfs_add_ordered_list(struct inode *inode, struct buffer_head *bh)
#define JH_ENTRY(l) list_entry((l), struct reiserfs_jh, list)
static int write_ordered_buffers(spinlock_t * lock,
struct reiserfs_journal *j,
struct reiserfs_journal_list *jl,
struct list_head *list)
static int flush_older_commits(struct super_block *s,
struct reiserfs_journal_list *jl)
static int reiserfs_async_progress_wait(struct super_block *s)
static int flush_commit_list(struct super_block *s,
struct reiserfs_journal_list *jl, int flushall)
static struct reiserfs_journal_list *find_newer_jl_for_cn(struct
reiserfs_journal_cnode
*cn)
static int newer_jl_done(struct reiserfs_journal_cnode *cn)
static void remove_journal_hash(struct super_block *,
struct reiserfs_journal_cnode **,
struct reiserfs_journal_list *, unsigned long,
int);
static void remove_all_from_journal_list(struct super_block *sb,
struct reiserfs_journal_list *jl,
int debug)
static int _update_journal_header_block(struct super_block *sb,
unsigned long offset,
unsigned int trans_id)
static int update_journal_header_block(struct super_block *sb,
unsigned long offset,
unsigned int trans_id)
static int flush_older_journal_lists(struct super_block *sb,
struct reiserfs_journal_list *jl)
static void del_from_work_list(struct super_block *s,
struct reiserfs_journal_list *jl)
static int flush_journal_list(struct super_block *s,
struct reiserfs_journal_list *jl, int flushall)
static int test_transaction(struct super_block *s,
struct reiserfs_journal_list *jl)
static int write_one_transaction(struct super_block *s,
struct reiserfs_journal_list *jl,
struct buffer_chunk *chunk)
static int dirty_one_transaction(struct super_block *s,
struct reiserfs_journal_list *jl)
static int kupdate_transactions(struct super_block *s,
struct reiserfs_journal_list *jl,
struct reiserfs_journal_list **next_jl,
unsigned int *next_trans_id,
int num_blocks, int num_trans)
static int flush_used_journal_lists(struct super_block *s,
struct reiserfs_journal_list *jl)
void remove_journal_hash(struct super_block *sb,
struct reiserfs_journal_cnode **table,
struct reiserfs_journal_list *jl,
unsigned long block, int remove_freed)
static void free_journal_ram(struct super_block *sb)
static int do_journal_release(struct reiserfs_transaction_handle *th,
struct super_block *sb, int error)
int journal_release(struct reiserfs_transaction_handle *th,
struct super_block *sb)
int journal_release_error(struct reiserfs_transaction_handle *th,
struct super_block *sb)
static int journal_compare_desc_commit(struct super_block *sb,
struct reiserfs_journal_desc *desc,
struct reiserfs_journal_commit *commit)
static int journal_transaction_is_valid(struct super_block *sb,
struct buffer_head *d_bh,
unsigned int *oldest_invalid_trans_id,
unsigned long *newest_mount_id)
static void brelse_array(struct buffer_head **heads, int num)
static int journal_read_transaction(struct super_block *sb,
unsigned long cur_dblock,
unsigned long oldest_start,
unsigned int oldest_trans_id,
unsigned long newest_mount_id)
static struct buffer_head *reiserfs_breada(struct block_device *dev,
b_blocknr_t block, int bufsize,
b_blocknr_t max_block)
static int journal_read(struct super_block *sb)
static struct reiserfs_journal_list *alloc_journal_list(struct super_block *s)
static void journal_list_init(struct super_block *sb)
static int release_journal_dev(struct super_block *super,
struct reiserfs_journal *journal)
static int journal_init_dev(struct super_block *super,
struct reiserfs_journal *journal,
const char *jdev_name)
#define REISERFS_STANDARD_BLKSIZE (4096)
static int check_advise_trans_params(struct super_block *sb,
struct reiserfs_journal *journal)
int journal_init(struct super_block *sb, const char *j_dev_name,
int old_format, unsigned int commit_max_age)
int journal_transaction_should_end(struct reiserfs_transaction_handle *th,
int new_alloc)
void reiserfs_block_writes(struct reiserfs_transaction_handle *th)
void reiserfs_allow_writes(struct super_block *s)
void reiserfs_wait_on_write_block(struct super_block *s)
static void queue_log_writer(struct super_block *s)
static void wake_queued_writers(struct super_block *s)
static void let_transaction_grow(struct super_block *sb, unsigned int trans_id)
static int do_journal_begin_r(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks,
int join)
struct reiserfs_transaction_handle *reiserfs_persistent_transaction(struct
super_block
*s,
int nblocks)
int reiserfs_end_persistent_transaction(struct reiserfs_transaction_handle *th)
static int journal_join(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks)
int journal_join_abort(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks)
int journal_begin(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks)
int journal_mark_dirty(struct reiserfs_transaction_handle *th,
struct super_block *sb, struct buffer_head *bh)
int journal_end(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks)
static int remove_from_transaction(struct super_block *sb,
b_blocknr_t blocknr, int already_cleaned)
static int can_dirty(struct reiserfs_journal_cnode *cn)
int journal_end_sync(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks)
static void flush_async_commits(struct work_struct *work)
int reiserfs_flush_old_commits(struct super_block *sb)
static int check_journal_end(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks,
int flags)
int journal_mark_freed(struct reiserfs_transaction_handle *th,
struct super_block *sb, b_blocknr_t blocknr)
void reiserfs_update_inode_transaction(struct inode *inode)
static int __commit_trans_jl(struct inode *inode, unsigned long id,
struct reiserfs_journal_list *jl)
int reiserfs_commit_for_inode(struct inode *inode)
void reiserfs_restore_prepared_buffer(struct super_block *sb,
struct buffer_head *bh)
extern struct tree_balance *cur_tb;
int reiserfs_prepare_for_journal(struct super_block *sb,
struct buffer_head *bh, int wait)
static void flush_old_journal_lists(struct super_block *s)
static int do_journal_end(struct reiserfs_transaction_handle *th,
struct super_block *sb, unsigned long nblocks,
int flags)
void reiserfs_abort_journal(struct super_block *sb, int errno)
