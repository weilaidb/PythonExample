#define PREALLOCATION_SIZE 9
#define SB_ALLOC_OPTS(s) (REISERFS_SB(s)->s_alloc_options.bits)
#define  _ALLOC_concentrating_formatted_nodes 0
#define  _ALLOC_displacing_large_files 1
#define  _ALLOC_displacing_new_packing_localities 2
#define  _ALLOC_old_hashed_relocation 3
#define  _ALLOC_new_hashed_relocation 4
#define  _ALLOC_skip_busy 5
#define  _ALLOC_displace_based_on_dirid 6
#define  _ALLOC_hashed_formatted_nodes 7
#define  _ALLOC_old_way 8
#define  _ALLOC_hundredth_slices 9
#define  _ALLOC_dirid_groups 10
#define  _ALLOC_oid_groups 11
#define  _ALLOC_packing_groups 12
#define  concentrating_formatted_nodes(s)	test_bit(_ALLOC_concentrating_formatted_nodes, &SB_ALLOC_OPTS(s))
#define  displacing_large_files(s)		test_bit(_ALLOC_displacing_large_files, &SB_ALLOC_OPTS(s))
#define  displacing_new_packing_localities(s)	test_bit(_ALLOC_displacing_new_packing_localities, &SB_ALLOC_OPTS(s))
#define SET_OPTION(optname) \
do  while(0)
#define TEST_OPTION(optname, s) \
test_bit(_ALLOC_ ## optname , &SB_ALLOC_OPTS(s))
static inline void get_bit_address(struct super_block *s,
b_blocknr_t block,
unsigned int *bmap_nr,
unsigned int *offset)
int is_reusable(struct super_block *s, b_blocknr_t block, int bit_value)
static inline int is_block_in_journal(struct super_block *s, unsigned int bmap,
int off, int *next)
static int scan_bitmap_block(struct reiserfs_transaction_handle *th,
unsigned int bmap_n, int *beg, int boundary,
int min, int max, int unfm)
static int bmap_hash_id(struct super_block *s, u32 id)
static inline int block_group_used(struct super_block *s, u32 id)
__le32 reiserfs_choose_packing(struct inode * dir)
static int scan_bitmap(struct reiserfs_transaction_handle *th,
b_blocknr_t * start, b_blocknr_t finish,
int min, int max, int unfm, sector_t file_block)
static void _reiserfs_free_block(struct reiserfs_transaction_handle *th,
struct inode *inode, b_blocknr_t block,
int for_unformatted)
void reiserfs_free_block(struct reiserfs_transaction_handle *th,
struct inode *inode, b_blocknr_t block,
int for_unformatted)
static void reiserfs_free_prealloc_block(struct reiserfs_transaction_handle *th,
struct inode *inode, b_blocknr_t block)
static void __discard_prealloc(struct reiserfs_transaction_handle *th,
struct reiserfs_inode_info *ei)
void reiserfs_discard_prealloc(struct reiserfs_transaction_handle *th,
struct inode *inode)
void reiserfs_discard_all_prealloc(struct reiserfs_transaction_handle *th)
void reiserfs_init_alloc_options(struct super_block *s)
int reiserfs_parse_alloc_options(struct super_block *s, char *options)
static inline void new_hashed_relocation(reiserfs_blocknr_hint_t * hint)
static void dirid_groups(reiserfs_blocknr_hint_t * hint)
static void oid_groups(reiserfs_blocknr_hint_t * hint)
static int get_left_neighbor(reiserfs_blocknr_hint_t * hint)
static inline void set_border_in_hint(struct super_block *s,
reiserfs_blocknr_hint_t * hint)
static inline void displace_large_file(reiserfs_blocknr_hint_t * hint)
static inline void hash_formatted_node(reiserfs_blocknr_hint_t * hint)
static inline int
this_blocknr_allocation_would_make_it_a_large_file(reiserfs_blocknr_hint_t *
hint)
static inline void displace_new_packing_locality(reiserfs_blocknr_hint_t * hint)
static inline int old_hashed_relocation(reiserfs_blocknr_hint_t * hint)
static inline int old_way(reiserfs_blocknr_hint_t * hint)
static inline void hundredth_slices(reiserfs_blocknr_hint_t * hint)
static void determine_search_start(reiserfs_blocknr_hint_t * hint,
int amount_needed)
static int determine_prealloc_size(reiserfs_blocknr_hint_t * hint)
static inline int allocate_without_wrapping_disk(reiserfs_blocknr_hint_t * hint,
b_blocknr_t * new_blocknrs,
b_blocknr_t start,
b_blocknr_t finish, int min,
int amount_needed,
int prealloc_size)
static inline int blocknrs_and_prealloc_arrays_from_search_start
(reiserfs_blocknr_hint_t * hint, b_blocknr_t * new_blocknrs,
int amount_needed)
static int use_preallocated_list_if_available(reiserfs_blocknr_hint_t * hint,
b_blocknr_t * new_blocknrs,
int amount_needed)
int reiserfs_allocate_blocknrs(reiserfs_blocknr_hint_t * hint, b_blocknr_t * new_blocknrs, int amount_needed, int reserved_by_us )
void reiserfs_cache_bitmap_metadata(struct super_block *sb,
struct buffer_head *bh,
struct reiserfs_bitmap_info *info)
struct buffer_head *reiserfs_read_bitmap_block(struct super_block *sb,
unsigned int bitmap)
int reiserfs_init_bitmap_cache(struct super_block *sb)
void reiserfs_free_bitmap_cache(struct super_block *sb)
