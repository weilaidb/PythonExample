void ext4_get_group_no_and_offset(struct super_block *sb, ext4_fsblk_t blocknr,
ext4_group_t *blockgrpp, ext4_grpblk_t *offsetp)
static int ext4_block_in_group(struct super_block *sb, ext4_fsblk_t block,
ext4_group_t block_group)
static int ext4_group_used_meta_blocks(struct super_block *sb,
ext4_group_t block_group,
struct ext4_group_desc *gdp)
unsigned ext4_init_block_bitmap(struct super_block *sb, struct buffer_head *bh,
ext4_group_t block_group, struct ext4_group_desc *gdp)
struct ext4_group_desc * ext4_get_group_desc(struct super_block *sb,
ext4_group_t block_group,
struct buffer_head **bh)
static int ext4_valid_block_bitmap(struct super_block *sb,
struct ext4_group_desc *desc,
unsigned int block_group,
struct buffer_head *bh)
struct buffer_head *
ext4_read_block_bitmap(struct super_block *sb, ext4_group_t block_group)
static int ext4_has_free_blocks(struct ext4_sb_info *sbi,
s64 nblocks, unsigned int flags)
int ext4_claim_free_blocks(struct ext4_sb_info *sbi,
s64 nblocks, unsigned int flags)
int ext4_should_retry_alloc(struct super_block *sb, int *retries)
ext4_fsblk_t ext4_new_meta_blocks(handle_t *handle, struct inode *inode,
ext4_fsblk_t goal, unsigned int flags,
unsigned long *count, int *errp)
ext4_fsblk_t ext4_count_free_blocks(struct super_block *sb)
static inline int test_root(ext4_group_t a, int b)
static int ext4_group_sparse(ext4_group_t group)
int ext4_bg_has_super(struct super_block *sb, ext4_group_t group)
static unsigned long ext4_bg_num_gdb_meta(struct super_block *sb,
ext4_group_t group)
static unsigned long ext4_bg_num_gdb_nometa(struct super_block *sb,
ext4_group_t group)
unsigned long ext4_bg_num_gdb(struct super_block *sb, ext4_group_t group)
