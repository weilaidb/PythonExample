static struct kmem_cache *ext4_pspace_cachep;
static struct kmem_cache *ext4_ac_cachep;
static struct kmem_cache *ext4_free_ext_cachep;
#define NR_GRPINFO_CACHES 8
static struct kmem_cache *ext4_groupinfo_caches[NR_GRPINFO_CACHES];
static const char *ext4_groupinfo_slab_names[NR_GRPINFO_CACHES] = ;
static void ext4_mb_generate_from_pa(struct super_block *sb, void *bitmap,
ext4_group_t group);
static void ext4_mb_generate_from_freelist(struct super_block *sb, void *bitmap,
ext4_group_t group);
static void release_blocks_on_commit(journal_t *journal, transaction_t *txn);
static inline void *mb_correct_addr_and_bit(int *bit, void *addr)
static inline int mb_test_bit(int bit, void *addr)
static inline void mb_set_bit(int bit, void *addr)
static inline void mb_clear_bit(int bit, void *addr)
static inline int mb_find_next_zero_bit(void *addr, int max, int start)
static inline int mb_find_next_bit(void *addr, int max, int start)
static void *mb_find_buddy(struct ext4_buddy *e4b, int order, int *max)
static void mb_free_blocks_double(struct inode *inode, struct ext4_buddy *e4b,
int first, int count)
static void mb_mark_used_double(struct ext4_buddy *e4b, int first, int count)
static void mb_cmp_bitmaps(struct ext4_buddy *e4b, void *bitmap)
static inline void mb_free_blocks_double(struct inode *inode,
struct ext4_buddy *e4b, int first, int count)
static inline void mb_mark_used_double(struct ext4_buddy *e4b,
int first, int count)
static inline void mb_cmp_bitmaps(struct ext4_buddy *e4b, void *bitmap)
#define MB_CHECK_ASSERT(assert)						\
do  while (0)
static int __mb_check_buddy(struct ext4_buddy *e4b, char *file,
const char *function, int line)
#undef MB_CHECK_ASSERT
#define mb_check_buddy(e4b) __mb_check_buddy(e4b,	\
__FILE__, __func__, __LINE__)
#define mb_check_buddy(e4b)
static void ext4_mb_mark_free_simple(struct super_block *sb,
void *buddy, ext4_grpblk_t first, ext4_grpblk_t len,
struct ext4_group_info *grp)
static void
mb_set_largest_free_order(struct super_block *sb, struct ext4_group_info *grp)
static noinline_for_stack
void ext4_mb_generate_buddy(struct super_block *sb,
void *buddy, void *bitmap, ext4_group_t group)
static int ext4_mb_init_cache(struct page *page, char *incore)
static int ext4_mb_get_buddy_page_lock(struct super_block *sb,
ext4_group_t group, struct ext4_buddy *e4b)
static void ext4_mb_put_buddy_page_lock(struct ext4_buddy *e4b)
static noinline_for_stack
int ext4_mb_init_group(struct super_block *sb, ext4_group_t group)
static noinline_for_stack int
ext4_mb_load_buddy(struct super_block *sb, ext4_group_t group,
struct ext4_buddy *e4b)
static void ext4_mb_unload_buddy(struct ext4_buddy *e4b)
static int mb_find_order_for_block(struct ext4_buddy *e4b, int block)
static void mb_clear_bits(void *bm, int cur, int len)
static void mb_set_bits(void *bm, int cur, int len)
static void mb_free_blocks(struct inode *inode, struct ext4_buddy *e4b,
int first, int count)
static int mb_find_extent(struct ext4_buddy *e4b, int order, int block,
int needed, struct ext4_free_extent *ex)
static int mb_mark_used(struct ext4_buddy *e4b, struct ext4_free_extent *ex)
static void ext4_mb_use_best_found(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static void ext4_mb_check_limits(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b,
int finish_group)
static void ext4_mb_measure_extent(struct ext4_allocation_context *ac,
struct ext4_free_extent *ex,
struct ext4_buddy *e4b)
static noinline_for_stack
int ext4_mb_try_best_found(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static noinline_for_stack
int ext4_mb_find_by_goal(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static noinline_for_stack
void ext4_mb_simple_scan_group(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static noinline_for_stack
void ext4_mb_complex_scan_group(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static noinline_for_stack
void ext4_mb_scan_aligned(struct ext4_allocation_context *ac,
struct ext4_buddy *e4b)
static int ext4_mb_good_group(struct ext4_allocation_context *ac,
ext4_group_t group, int cr)
static noinline_for_stack int
ext4_mb_regular_allocator(struct ext4_allocation_context *ac)
static void *ext4_mb_seq_groups_start(struct seq_file *seq, loff_t *pos)
static void *ext4_mb_seq_groups_next(struct seq_file *seq, void *v, loff_t *pos)
static int ext4_mb_seq_groups_show(struct seq_file *seq, void *v)
static void ext4_mb_seq_groups_stop(struct seq_file *seq, void *v)
static const struct seq_operations ext4_mb_seq_groups_ops = ;
static int ext4_mb_seq_groups_open(struct inode *inode, struct file *file)
static const struct file_operations ext4_mb_seq_groups_fops = ;
static struct kmem_cache *get_groupinfo_cache(int blocksize_bits)
int ext4_mb_add_groupinfo(struct super_block *sb, ext4_group_t group,
struct ext4_group_desc *desc)
static int ext4_mb_init_backend(struct super_block *sb)
static void ext4_groupinfo_destroy_slabs(void)
static int ext4_groupinfo_create_slab(size_t size)
int ext4_mb_init(struct super_block *sb, int needs_recovery)
static void ext4_mb_cleanup_pa(struct ext4_group_info *grp)
int ext4_mb_release(struct super_block *sb)
static inline int ext4_issue_discard(struct super_block *sb,
ext4_group_t block_group, ext4_grpblk_t block, int count)
static void release_blocks_on_commit(journal_t *journal, transaction_t *txn)
u8 mb_enable_debug __read_mostly;
static struct dentry *debugfs_dir;
static struct dentry *debugfs_debug;
static void __init ext4_create_debugfs_entry(void)
static void ext4_remove_debugfs_entry(void)
static void __init ext4_create_debugfs_entry(void)
static void ext4_remove_debugfs_entry(void)
int __init ext4_init_mballoc(void)
void ext4_exit_mballoc(void)
static noinline_for_stack int
ext4_mb_mark_diskspace_used(struct ext4_allocation_context *ac,
handle_t *handle, unsigned int reserv_blks)
static void ext4_mb_normalize_group_request(struct ext4_allocation_context *ac)
static noinline_for_stack void
ext4_mb_normalize_request(struct ext4_allocation_context *ac,
struct ext4_allocation_request *ar)
static void ext4_mb_collect_stats(struct ext4_allocation_context *ac)
static void ext4_discard_allocated_blocks(struct ext4_allocation_context *ac)
static void ext4_mb_use_inode_pa(struct ext4_allocation_context *ac,
struct ext4_prealloc_space *pa)
static void ext4_mb_use_group_pa(struct ext4_allocation_context *ac,
struct ext4_prealloc_space *pa)
static struct ext4_prealloc_space *
ext4_mb_check_group_pa(ext4_fsblk_t goal_block,
struct ext4_prealloc_space *pa,
struct ext4_prealloc_space *cpa)
static noinline_for_stack int
ext4_mb_use_preallocated(struct ext4_allocation_context *ac)
static void ext4_mb_generate_from_freelist(struct super_block *sb, void *bitmap,
ext4_group_t group)
static noinline_for_stack
void ext4_mb_generate_from_pa(struct super_block *sb, void *bitmap,
ext4_group_t group)
static void ext4_mb_pa_callback(struct rcu_head *head)
static void ext4_mb_put_pa(struct ext4_allocation_context *ac,
struct super_block *sb, struct ext4_prealloc_space *pa)
static noinline_for_stack int
ext4_mb_new_inode_pa(struct ext4_allocation_context *ac)
static noinline_for_stack int
ext4_mb_new_group_pa(struct ext4_allocation_context *ac)
static int ext4_mb_new_preallocation(struct ext4_allocation_context *ac)
static noinline_for_stack int
ext4_mb_release_inode_pa(struct ext4_buddy *e4b, struct buffer_head *bitmap_bh,
struct ext4_prealloc_space *pa)
static noinline_for_stack int
ext4_mb_release_group_pa(struct ext4_buddy *e4b,
struct ext4_prealloc_space *pa)
static noinline_for_stack int
ext4_mb_discard_group_preallocations(struct super_block *sb,
ext4_group_t group, int needed)
void ext4_discard_preallocations(struct inode *inode)
static void ext4_mb_show_ac(struct ext4_allocation_context *ac)
static inline void ext4_mb_show_ac(struct ext4_allocation_context *ac)
static void ext4_mb_group_or_file(struct ext4_allocation_context *ac)
static noinline_for_stack int
ext4_mb_initialize_context(struct ext4_allocation_context *ac,
struct ext4_allocation_request *ar)
static noinline_for_stack void
ext4_mb_discard_lg_preallocations(struct super_block *sb,
struct ext4_locality_group *lg,
int order, int total_entries)
static void ext4_mb_add_n_trim(struct ext4_allocation_context *ac)
static int ext4_mb_release_context(struct ext4_allocation_context *ac)
static int ext4_mb_discard_preallocations(struct super_block *sb, int needed)
ext4_fsblk_t ext4_mb_new_blocks(handle_t *handle,
struct ext4_allocation_request *ar, int *errp)
static int can_merge(struct ext4_free_data *entry1,
struct ext4_free_data *entry2)
static noinline_for_stack int
ext4_mb_free_metadata(handle_t *handle, struct ext4_buddy *e4b,
struct ext4_free_data *new_entry)
void ext4_free_blocks(handle_t *handle, struct inode *inode,
struct buffer_head *bh, ext4_fsblk_t block,
unsigned long count, int flags)
void ext4_add_groupblocks(handle_t *handle, struct super_block *sb,
ext4_fsblk_t block, unsigned long count)
static void ext4_trim_extent(struct super_block *sb, int start, int count,
ext4_group_t group, struct ext4_buddy *e4b)
static ext4_grpblk_t
ext4_trim_all_free(struct super_block *sb, ext4_group_t group,
ext4_grpblk_t start, ext4_grpblk_t max,
ext4_grpblk_t minblocks)
int ext4_trim_fs(struct super_block *sb, struct fstrim_range *range)
