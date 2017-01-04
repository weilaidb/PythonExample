#define in_range(b, first, len)	((b) >= (first) && (b) <= (first) + (len) - 1)
struct ext2_group_desc * ext2_get_group_desc(struct super_block * sb,
unsigned int block_group,
struct buffer_head ** bh)
static int ext2_valid_block_bitmap(struct super_block *sb,
struct ext2_group_desc *desc,
unsigned int block_group,
struct buffer_head *bh)
static struct buffer_head *
read_block_bitmap(struct super_block *sb, unsigned int block_group)
static void release_blocks(struct super_block *sb, int count)
static void group_adjust_blocks(struct super_block *sb, int group_no,
struct ext2_group_desc *desc, struct buffer_head *bh, int count)
#if 1
static void __rsv_window_dump(struct rb_root *root, int verbose,
const char *fn)
#define rsv_window_dump(root, verbose) \
__rsv_window_dump((root), (verbose), __func__)
#define rsv_window_dump(root, verbose) do  while (0)
static int
goal_in_my_reservation(struct ext2_reserve_window *rsv, ext2_grpblk_t grp_goal,
unsigned int group, struct super_block * sb)
static struct ext2_reserve_window_node *
search_reserve_window(struct rb_root *root, ext2_fsblk_t goal)
void ext2_rsv_window_add(struct super_block *sb,
struct ext2_reserve_window_node *rsv)
static void rsv_window_remove(struct super_block *sb,
struct ext2_reserve_window_node *rsv)
static inline int rsv_is_empty(struct ext2_reserve_window *rsv)
void ext2_init_block_alloc_info(struct inode *inode)
void ext2_discard_reservation(struct inode *inode)
void ext2_free_blocks (struct inode * inode, unsigned long block,
unsigned long count)
static ext2_grpblk_t
bitmap_search_next_usable_block(ext2_grpblk_t start, struct buffer_head *bh,
ext2_grpblk_t maxblocks)
static ext2_grpblk_t
find_next_usable_block(int start, struct buffer_head *bh, int maxblocks)
static int
ext2_try_to_allocate(struct super_block *sb, int group,
struct buffer_head *bitmap_bh, ext2_grpblk_t grp_goal,
unsigned long *count,
struct ext2_reserve_window *my_rsv)
static int find_next_reservable_window(
struct ext2_reserve_window_node *search_head,
struct ext2_reserve_window_node *my_rsv,
struct super_block * sb,
ext2_fsblk_t start_block,
ext2_fsblk_t last_block)
static int alloc_new_reservation(struct ext2_reserve_window_node *my_rsv,
ext2_grpblk_t grp_goal, struct super_block *sb,
unsigned int group, struct buffer_head *bitmap_bh)
static void try_to_extend_reservation(struct ext2_reserve_window_node *my_rsv,
struct super_block *sb, int size)
static ext2_grpblk_t
ext2_try_to_allocate_with_rsv(struct super_block *sb, unsigned int group,
struct buffer_head *bitmap_bh, ext2_grpblk_t grp_goal,
struct ext2_reserve_window_node * my_rsv,
unsigned long *count)
static int ext2_has_free_blocks(struct ext2_sb_info *sbi)
ext2_fsblk_t ext2_new_blocks(struct inode *inode, ext2_fsblk_t goal,
unsigned long *count, int *errp)
ext2_fsblk_t ext2_new_block(struct inode *inode, unsigned long goal, int *errp)
static const int nibblemap[] = ;
unsigned long ext2_count_free (struct buffer_head * map, unsigned int numchars)
unsigned long ext2_count_free_blocks (struct super_block * sb)
static inline int test_root(int a, int b)
static int ext2_group_sparse(int group)
int ext2_bg_has_super(struct super_block *sb, int group)
unsigned long ext2_bg_num_gdb(struct super_block *sb, int group)
