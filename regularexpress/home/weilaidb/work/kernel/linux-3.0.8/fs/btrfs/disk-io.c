static struct extent_io_ops btree_extent_io_ops;
static void end_workqueue_fn(struct btrfs_work *work);
static void free_fs_root(struct btrfs_root *root);
static void btrfs_check_super_valid(struct btrfs_fs_info *fs_info,
int read_only);
static int btrfs_destroy_ordered_operations(struct btrfs_root *root);
static int btrfs_destroy_ordered_extents(struct btrfs_root *root);
static int btrfs_destroy_delayed_refs(struct btrfs_transaction *trans,
struct btrfs_root *root);
static int btrfs_destroy_pending_snapshots(struct btrfs_transaction *t);
static int btrfs_destroy_delalloc_inodes(struct btrfs_root *root);
static int btrfs_destroy_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages,
int mark);
static int btrfs_destroy_pinned_extent(struct btrfs_root *root,
struct extent_io_tree *pinned_extents);
static int btrfs_cleanup_transaction(struct btrfs_root *root);
struct end_io_wq ;
struct async_submit_bio ;
# if BTRFS_MAX_LEVEL != 8
#  error
# endif
static struct lock_class_key btrfs_eb_class[BTRFS_MAX_LEVEL + 1];
static const char *btrfs_eb_name[BTRFS_MAX_LEVEL + 1] = ;
static struct extent_map *btree_get_extent(struct inode *inode,
struct page *page, size_t pg_offset, u64 start, u64 len,
int create)
u32 btrfs_csum_data(struct btrfs_root *root, char *data, u32 seed, size_t len)
void btrfs_csum_final(u32 crc, char *result)
static int csum_tree_block(struct btrfs_root *root, struct extent_buffer *buf,
int verify)
static int verify_parent_transid(struct extent_io_tree *io_tree,
struct extent_buffer *eb, u64 parent_transid)
static int btree_read_extent_buffer_pages(struct btrfs_root *root,
struct extent_buffer *eb,
u64 start, u64 parent_transid)
static int csum_dirty_buffer(struct btrfs_root *root, struct page *page)
static int check_tree_block_fsid(struct btrfs_root *root,
struct extent_buffer *eb)
#define CORRUPT(reason, eb, root, slot)				\
printk(KERN_CRIT "btrfs: corrupt leaf, %s: block=%llu,"	\
"root=%llu, slot=%d\n", reason,			\
(unsigned long long)btrfs_header_bytenr(eb),	\
(unsigned long long)root->objectid, slot)
static noinline int check_leaf(struct btrfs_root *root,
struct extent_buffer *leaf)
void btrfs_set_buffer_lockdep_class(struct extent_buffer *eb, int level)
static int btree_readpage_end_io_hook(struct page *page, u64 start, u64 end,
struct extent_state *state)
static void end_workqueue_bio(struct bio *bio, int err)
int btrfs_bio_wq_end_io(struct btrfs_fs_info *info, struct bio *bio,
int metadata)
unsigned long btrfs_async_submit_limit(struct btrfs_fs_info *info)
static void run_one_async_start(struct btrfs_work *work)
static void run_one_async_done(struct btrfs_work *work)
static void run_one_async_free(struct btrfs_work *work)
int btrfs_wq_submit_bio(struct btrfs_fs_info *fs_info, struct inode *inode,
int rw, struct bio *bio, int mirror_num,
unsigned long bio_flags,
u64 bio_offset,
extent_submit_bio_hook_t *submit_bio_start,
extent_submit_bio_hook_t *submit_bio_done)
static int btree_csum_one_bio(struct bio *bio)
static int __btree_submit_bio_start(struct inode *inode, int rw,
struct bio *bio, int mirror_num,
unsigned long bio_flags,
u64 bio_offset)
static int __btree_submit_bio_done(struct inode *inode, int rw, struct bio *bio,
int mirror_num, unsigned long bio_flags,
u64 bio_offset)
static int btree_submit_bio_hook(struct inode *inode, int rw, struct bio *bio,
int mirror_num, unsigned long bio_flags,
u64 bio_offset)
static int btree_migratepage(struct address_space *mapping,
struct page *newpage, struct page *page)
static int btree_writepage(struct page *page, struct writeback_control *wbc)
static int btree_writepages(struct address_space *mapping,
struct writeback_control *wbc)
static int btree_readpage(struct file *file, struct page *page)
static int btree_releasepage(struct page *page, gfp_t gfp_flags)
static void btree_invalidatepage(struct page *page, unsigned long offset)
static const struct address_space_operations btree_aops = ;
int readahead_tree_block(struct btrfs_root *root, u64 bytenr, u32 blocksize,
u64 parent_transid)
struct extent_buffer *btrfs_find_tree_block(struct btrfs_root *root,
u64 bytenr, u32 blocksize)
struct extent_buffer *btrfs_find_create_tree_block(struct btrfs_root *root,
u64 bytenr, u32 blocksize)
int btrfs_write_tree_block(struct extent_buffer *buf)
int btrfs_wait_tree_block_writeback(struct extent_buffer *buf)
struct extent_buffer *read_tree_block(struct btrfs_root *root, u64 bytenr,
u32 blocksize, u64 parent_transid)
int clean_tree_block(struct btrfs_trans_handle *trans, struct btrfs_root *root,
struct extent_buffer *buf)
static int __setup_root(u32 nodesize, u32 leafsize, u32 sectorsize,
u32 stripesize, struct btrfs_root *root,
struct btrfs_fs_info *fs_info,
u64 objectid)
static int find_and_setup_root(struct btrfs_root *tree_root,
struct btrfs_fs_info *fs_info,
u64 objectid,
struct btrfs_root *root)
static struct btrfs_root *alloc_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_fs_info *fs_info)
int btrfs_init_log_root_tree(struct btrfs_trans_handle *trans,
struct btrfs_fs_info *fs_info)
int btrfs_add_log_tree(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
struct btrfs_root *btrfs_read_fs_root_no_radix(struct btrfs_root *tree_root,
struct btrfs_key *location)
struct btrfs_root *btrfs_read_fs_root_no_name(struct btrfs_fs_info *fs_info,
struct btrfs_key *location)
static int btrfs_congested_fn(void *congested_data, int bdi_bits)
static int setup_bdi(struct btrfs_fs_info *info, struct backing_dev_info *bdi)
static int bio_ready_for_csum(struct bio *bio)
static void end_workqueue_fn(struct btrfs_work *work)
static int cleaner_kthread(void *arg)
static int transaction_kthread(void *arg)
struct btrfs_root *open_ctree(struct super_block *sb,
struct btrfs_fs_devices *fs_devices,
char *options)
static void btrfs_end_buffer_write_sync(struct buffer_head *bh, int uptodate)
struct buffer_head *btrfs_read_dev_super(struct block_device *bdev)
static int write_dev_supers(struct btrfs_device *device,
struct btrfs_super_block *sb,
int do_barriers, int wait, int max_mirrors)
int write_all_supers(struct btrfs_root *root, int max_mirrors)
int write_ctree_super(struct btrfs_trans_handle *trans,
struct btrfs_root *root, int max_mirrors)
int btrfs_free_fs_root(struct btrfs_fs_info *fs_info, struct btrfs_root *root)
static void free_fs_root(struct btrfs_root *root)
static int del_fs_roots(struct btrfs_fs_info *fs_info)
int btrfs_cleanup_fs_roots(struct btrfs_fs_info *fs_info)
int btrfs_commit_super(struct btrfs_root *root)
int close_ctree(struct btrfs_root *root)
int btrfs_buffer_uptodate(struct extent_buffer *buf, u64 parent_transid)
int btrfs_set_buffer_uptodate(struct extent_buffer *buf)
void btrfs_mark_buffer_dirty(struct extent_buffer *buf)
void btrfs_btree_balance_dirty(struct btrfs_root *root, unsigned long nr)
void __btrfs_btree_balance_dirty(struct btrfs_root *root, unsigned long nr)
int btrfs_read_buffer(struct extent_buffer *buf, u64 parent_transid)
int btree_lock_page_hook(struct page *page)
static void btrfs_check_super_valid(struct btrfs_fs_info *fs_info,
int read_only)
int btrfs_error_commit_super(struct btrfs_root *root)
static int btrfs_destroy_ordered_operations(struct btrfs_root *root)
static int btrfs_destroy_ordered_extents(struct btrfs_root *root)
static int btrfs_destroy_delayed_refs(struct btrfs_transaction *trans,
struct btrfs_root *root)
static int btrfs_destroy_pending_snapshots(struct btrfs_transaction *t)
static int btrfs_destroy_delalloc_inodes(struct btrfs_root *root)
static int btrfs_destroy_marked_extents(struct btrfs_root *root,
struct extent_io_tree *dirty_pages,
int mark)
static int btrfs_destroy_pinned_extent(struct btrfs_root *root,
struct extent_io_tree *pinned_extents)
static int btrfs_cleanup_transaction(struct btrfs_root *root)
static struct extent_io_ops btree_extent_io_ops = ;
