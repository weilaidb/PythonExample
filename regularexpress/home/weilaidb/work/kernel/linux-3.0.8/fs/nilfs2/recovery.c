enum ;
struct nilfs_recovery_block ;
static int nilfs_warn_segment_error(int err)
static int nilfs_compute_checksum(struct the_nilfs *nilfs,
struct buffer_head *bhs, u32 *sum,
unsigned long offset, u64 check_bytes,
sector_t start, unsigned long nblock)
int nilfs_read_super_root_block(struct the_nilfs *nilfs, sector_t sr_block,
struct buffer_head **pbh, int check)
static struct buffer_head *
nilfs_read_log_header(struct the_nilfs *nilfs, sector_t start_blocknr,
struct nilfs_segment_summary **sum)
static int nilfs_validate_log(struct the_nilfs *nilfs, u64 seg_seq,
struct buffer_head *bh_sum,
struct nilfs_segment_summary *sum)
static void *nilfs_read_summary_info(struct the_nilfs *nilfs,
struct buffer_head **pbh,
unsigned int *offset, unsigned int bytes)
static void nilfs_skip_summary_info(struct the_nilfs *nilfs,
struct buffer_head **pbh,
unsigned int *offset, unsigned int bytes,
unsigned long count)
static int nilfs_scan_dsync_log(struct the_nilfs *nilfs, sector_t start_blocknr,
struct nilfs_segment_summary *sum,
struct list_head *head)
static void dispose_recovery_list(struct list_head *head)
struct nilfs_segment_entry ;
static int nilfs_segment_list_add(struct list_head *head, __u64 segnum)
void nilfs_dispose_segment_list(struct list_head *head)
static int nilfs_prepare_segment_for_recovery(struct the_nilfs *nilfs,
struct super_block *sb,
struct nilfs_recovery_info *ri)
static int nilfs_recovery_copy_block(struct the_nilfs *nilfs,
struct nilfs_recovery_block *rb,
struct page *page)
static int nilfs_recover_dsync_blocks(struct the_nilfs *nilfs,
struct super_block *sb,
struct nilfs_root *root,
struct list_head *head,
unsigned long *nr_salvaged_blocks)
static int nilfs_do_roll_forward(struct the_nilfs *nilfs,
struct super_block *sb,
struct nilfs_root *root,
struct nilfs_recovery_info *ri)
static void nilfs_finish_roll_forward(struct the_nilfs *nilfs,
struct nilfs_recovery_info *ri)
int nilfs_salvage_orphan_logs(struct the_nilfs *nilfs,
struct super_block *sb,
struct nilfs_recovery_info *ri)
int nilfs_search_super_root(struct the_nilfs *nilfs,
struct nilfs_recovery_info *ri)
