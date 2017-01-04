inline int B_IS_IN_TREE(const struct buffer_head *bh)
inline void copy_item_head(struct item_head *to,
const struct item_head *from)
inline int comp_short_keys(const struct reiserfs_key *le_key,
const struct cpu_key *cpu_key)
static inline int comp_keys(const struct reiserfs_key *le_key,
const struct cpu_key *cpu_key)
inline int comp_short_le_keys(const struct reiserfs_key *key1,
const struct reiserfs_key *key2)
inline void le_key2cpu_key(struct cpu_key *to, const struct reiserfs_key *from)
inline int comp_le_keys(const struct reiserfs_key *k1,
const struct reiserfs_key *k2)
static inline int bin_search(const void *key,
const void *base,
int num,
int width,
int *pos
)
const struct reiserfs_key MIN_KEY = ;
static const struct reiserfs_key MAX_KEY = ;
static inline const struct reiserfs_key *get_lkey(const struct treepath *chk_path,
const struct super_block *sb)
inline const struct reiserfs_key *get_rkey(const struct treepath *chk_path,
const struct super_block *sb)
static inline int key_in_buffer(struct treepath *chk_path,
const struct cpu_key *key,
struct super_block *sb
)
int reiserfs_check_path(struct treepath *p)
void pathrelse_and_restore(struct super_block *sb,
struct treepath *search_path)
void pathrelse(struct treepath *search_path)
static int is_leaf(char *buf, int blocksize, struct buffer_head *bh)
static int is_internal(char *buf, int blocksize, struct buffer_head *bh)
static int is_tree_node(struct buffer_head *bh, int level)
#define SEARCH_BY_KEY_READA 16
static bool search_by_key_reada(struct super_block *s,
struct buffer_head **bh,
b_blocknr_t *b, int num)
int search_by_key(struct super_block *sb, const struct cpu_key *key,
struct treepath *search_path,
int stop_level
)
int search_for_position_by_key(struct super_block *sb,
const struct cpu_key *p_cpu_key,
struct treepath *search_path
)
int comp_items(const struct item_head *stored_ih, const struct treepath *path)
#define held_by_others(bh) (atomic_read(&(bh)->b_count) > 1)
#define block_in_use(bh) (buffer_locked(bh) || (held_by_others(bh)))
static inline int prepare_for_direct_item(struct treepath *path,
struct item_head *le_ih,
struct inode *inode,
loff_t new_file_length, int *cut_size)
static inline int prepare_for_direntry_item(struct treepath *path,
struct item_head *le_ih,
struct inode *inode,
loff_t new_file_length,
int *cut_size)
#define JOURNAL_FOR_FREE_BLOCK_AND_UPDATE_SD (2 * JOURNAL_PER_BALANCE_CNT + 1)
static char prepare_for_delete_or_cut(struct reiserfs_transaction_handle *th, struct inode *inode, struct treepath *path, const struct cpu_key *item_key, int *removed,
int *cut_size, unsigned long long new_file_length
)
static int calc_deleted_bytes_number(struct tree_balance *tb, char mode)
static void init_tb_struct(struct reiserfs_transaction_handle *th,
struct tree_balance *tb,
struct super_block *sb,
struct treepath *path, int size)
void padd_item(char *item, int total_length, int length)
char key2type(struct reiserfs_key *ih)
char head2type(struct item_head *ih)
int reiserfs_delete_item(struct reiserfs_transaction_handle *th,
struct treepath *path, const struct cpu_key *item_key,
struct inode *inode, struct buffer_head *un_bh)
void reiserfs_delete_solid_item(struct reiserfs_transaction_handle *th,
struct inode *inode, struct reiserfs_key *key)
int reiserfs_delete_object(struct reiserfs_transaction_handle *th,
struct inode *inode)
static void unmap_buffers(struct page *page, loff_t pos)
static int maybe_indirect_to_direct(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct page *page,
struct treepath *path,
const struct cpu_key *item_key,
loff_t new_file_size, char *mode)
static void indirect_to_direct_roll_back(struct reiserfs_transaction_handle *th,
struct inode *inode, struct treepath *path)
int reiserfs_cut_from_item(struct reiserfs_transaction_handle *th,
struct treepath *path,
struct cpu_key *item_key,
struct inode *inode,
struct page *page, loff_t new_file_size)
static void truncate_directory(struct reiserfs_transaction_handle *th,
struct inode *inode)
int reiserfs_do_truncate(struct reiserfs_transaction_handle *th,
struct inode *inode,
struct page *page,
int update_timestamps
)
static void check_research_for_paste(struct treepath *path,
const struct cpu_key *key)
int reiserfs_paste_into_item(struct reiserfs_transaction_handle *th, struct treepath *search_path,
const struct cpu_key *key,
struct inode *inode,
const char *body,
int pasted_size)
int reiserfs_insert_item(struct reiserfs_transaction_handle *th,
struct treepath *path, const struct cpu_key *key,
struct item_head *ih, struct inode *inode,
const char *body)
