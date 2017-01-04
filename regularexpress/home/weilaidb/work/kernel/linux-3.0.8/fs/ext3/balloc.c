#define in_range(b, first, len)	((b) >= (first) && (b) <= (first) + (len) - 1)
static void ext3_get_group_no_and_offset(struct super_block *sb,
ext3_fsblk_t blocknr, unsigned long *blockgrpp, ext3_grpblk_t *offsetp)
struct ext3_group_desc * ext3_get_group_desc(struct super_block * sb,
unsigned int block_group,
struct buffer_head ** bh)
static int ext3_valid_block_bitmap(struct super_block *sb,
struct ext3_group_desc *desc,
unsigned int block_group,
struct buffer_head *bh)
static struct buffer_head *
read_block_bitmap(struct super_block *sb, unsigned int block_group)
#if 1
static void __rsv_window_dump(struct rb_root *root, int verbose,
const char *fn)
#define rsv_window_dump(root, verbose) \
__rsv_window_dump((root), (verbose), __func__)
#define rsv_window_dump(root, verbose) do  while (0)
static int
goal_in_my_reservation(struct ext3_reserve_window *rsv, ext3_grpblk_t grp_goal,
unsigned int group, struct super_block * sb)
static struct ext3_reserve_window_node *
search_reserve_window(struct rb_root *root, ext3_fsblk_t goal)
void ext3_rsv_window_add(struct super_block *sb,
struct ext3_reserve_window_node *rsv)
static void rsv_window_remove(struct super_block *sb,
struct ext3_reserve_window_node *rsv)
static inline int rsv_is_empty(struct ext3_reserve_window *rsv)
void ext3_init_block_alloc_info(struct inode *inode)
void ext3_discard_reservation(struct inode *inode)
void ext3_free_blocks_sb(handle_t *handle, struct super_block *sb,
ext3_fsblk_t block, unsigned long count,
unsigned long *pdquot_freed_blocks)
void ext3_free_blocks(handle_t *handle, struct inode *inode,
ext3_fsblk_t block, unsigned long count)
static int ext3_test_allocatable(ext3_grpblk_t nr, struct buffer_head *bh)
static ext3_grpblk_t
bitmap_search_next_usable_block(ext3_grpblk_t start, struct buffer_head *bh,
ext3_grpblk_t maxblocks)
static ext3_grpblk_t
find_next_usable_block(ext3_grpblk_t start, struct buffer_head *bh,
ext3_grpblk_t maxblocks)
static inline int
claim_block(spinlock_t *lock, ext3_grpblk_t block, struct buffer_head *bh)
static ext3_grpblk_t
ext3_try_to_allocate(struct super_block *sb, handle_t *handle, int group,
struct buffer_head *bitmap_bh, ext3_grpblk_t grp_goal,
unsigned long *count, struct ext3_reserve_window *my_rsv)
static int find_next_reservable_window(
struct ext3_reserve_window_node *search_head,
struct ext3_reserve_window_node *my_rsv,
struct super_block * sb,
ext3_fsblk_t start_block,
ext3_fsblk_t last_block)
static int alloc_new_reservation(struct ext3_reserve_window_node *my_rsv,
ext3_grpblk_t grp_goal, struct super_block *sb,
unsigned int group, struct buffer_head *bitmap_bh)
static void try_to_extend_reservation(struct ext3_reserve_window_node *my_rsv,
struct super_block *sb, int size)
static ext3_grpblk_t
ext3_try_to_allocate_with_rsv(struct super_block *sb, handle_t *handle,
unsigned int group, struct buffer_head *bitmap_bh,
ext3_grpblk_t grp_goal,
struct ext3_reserve_window_node * my_rsv,
unsigned long *count, int *errp)
static int ext3_has_free_blocks(struct ext3_sb_info *sbi)
int ext3_should_retry_alloc(struct super_block *sb, int *retries)
ext3_fsblk_t ext3_new_blocks(handle_t *handle, struct inode *inode,
ext3_fsblk_t goal, unsigned long *count, int *errp)
ext3_fsblk_t ext3_new_block(handle_t *handle, struct inode *inode,
ext3_fsblk_t goal, int *errp)
ext3_fsblk_t ext3_count_free_blocks(struct super_block *sb)
static inline int test_root(int a, int b)
static int ext3_group_sparse(int group)
int ext3_bg_has_super(struct super_block *sb, int group)
static unsigned long ext3_bg_num_gdb_meta(struct super_block *sb, int group)
static unsigned long ext3_bg_num_gdb_nometa(struct super_block *sb, int group)
unsigned long ext3_bg_num_gdb(struct super_block *sb, int group)
ext3_grpblk_t ext3_trim_all_free(struct super_block *sb, unsigned int group,
ext3_grpblk_t start, ext3_grpblk_t max,
ext3_grpblk_t minblocks)
int ext3_trim_fs(struct super_block *sb, struct fstrim_range *range)
