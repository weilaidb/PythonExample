static int nilfs_valid_sb(struct nilfs_super_block *sbp);
void nilfs_set_last_segment(struct the_nilfs *nilfs,
sector_t start_blocknr, u64 seq, __u64 cno)
struct the_nilfs *alloc_nilfs(struct block_device *bdev)
void destroy_nilfs(struct the_nilfs *nilfs)
static int nilfs_load_super_root(struct the_nilfs *nilfs,
struct super_block *sb, sector_t sr_block)
static void nilfs_init_recovery_info(struct nilfs_recovery_info *ri)
static void nilfs_clear_recovery_info(struct nilfs_recovery_info *ri)
static int nilfs_store_log_cursor(struct the_nilfs *nilfs,
struct nilfs_super_block *sbp)
int load_nilfs(struct the_nilfs *nilfs, struct super_block *sb)
static unsigned long long nilfs_max_size(unsigned int blkbits)
unsigned long nilfs_nrsvsegs(struct the_nilfs *nilfs, unsigned long nsegs)
void nilfs_set_nsegments(struct the_nilfs *nilfs, unsigned long nsegs)
static int nilfs_store_disk_layout(struct the_nilfs *nilfs,
struct nilfs_super_block *sbp)
static int nilfs_valid_sb(struct nilfs_super_block *sbp)
static int nilfs_sb2_bad_offset(struct nilfs_super_block *sbp, u64 offset)
static void nilfs_release_super_block(struct the_nilfs *nilfs)
void nilfs_fall_back_super_block(struct the_nilfs *nilfs)
void nilfs_swap_super_block(struct the_nilfs *nilfs)
static int nilfs_load_super_block(struct the_nilfs *nilfs,
struct super_block *sb, int blocksize,
struct nilfs_super_block **sbpp)
int init_nilfs(struct the_nilfs *nilfs, struct super_block *sb, char *data)
int nilfs_discard_segments(struct the_nilfs *nilfs, __u64 *segnump,
size_t nsegs)
int nilfs_count_free_blocks(struct the_nilfs *nilfs, sector_t *nblocks)
int nilfs_near_disk_full(struct the_nilfs *nilfs)
struct nilfs_root *nilfs_lookup_root(struct the_nilfs *nilfs, __u64 cno)
struct nilfs_root *
nilfs_find_or_create_root(struct the_nilfs *nilfs, __u64 cno)
void nilfs_put_root(struct nilfs_root *root)
