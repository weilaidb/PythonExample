static u64 entry_end(struct btrfs_ordered_extent *entry)
static struct rb_node *tree_insert(struct rb_root *root, u64 file_offset,
struct rb_node *node)
static struct rb_node *__tree_search(struct rb_root *root, u64 file_offset,
struct rb_node **prev_ret)
static int offset_in_entry(struct btrfs_ordered_extent *entry, u64 file_offset)
static int range_overlaps(struct btrfs_ordered_extent *entry, u64 file_offset,
u64 len)
static inline struct rb_node *tree_search(struct btrfs_ordered_inode_tree *tree,
u64 file_offset)
static int __btrfs_add_ordered_extent(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len,
int type, int dio, int compress_type)
int btrfs_add_ordered_extent(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len, int type)
int btrfs_add_ordered_extent_dio(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len, int type)
int btrfs_add_ordered_extent_compress(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len,
int type, int compress_type)
int btrfs_add_ordered_sum(struct inode *inode,
struct btrfs_ordered_extent *entry,
struct btrfs_ordered_sum *sum)
int btrfs_dec_test_first_ordered_pending(struct inode *inode,
struct btrfs_ordered_extent **cached,
u64 *file_offset, u64 io_size)
int btrfs_dec_test_ordered_pending(struct inode *inode,
struct btrfs_ordered_extent **cached,
u64 file_offset, u64 io_size)
int btrfs_put_ordered_extent(struct btrfs_ordered_extent *entry)
static int __btrfs_remove_ordered_extent(struct inode *inode,
struct btrfs_ordered_extent *entry)
int btrfs_remove_ordered_extent(struct inode *inode,
struct btrfs_ordered_extent *entry)
int btrfs_wait_ordered_extents(struct btrfs_root *root,
int nocow_only, int delay_iput)
int btrfs_run_ordered_operations(struct btrfs_root *root, int wait)
void btrfs_start_ordered_extent(struct inode *inode,
struct btrfs_ordered_extent *entry,
int wait)
int btrfs_wait_ordered_range(struct inode *inode, u64 start, u64 len)
struct btrfs_ordered_extent *btrfs_lookup_ordered_extent(struct inode *inode,
u64 file_offset)
struct btrfs_ordered_extent *btrfs_lookup_ordered_range(struct inode *inode,
u64 file_offset,
u64 len)
struct btrfs_ordered_extent *
btrfs_lookup_first_ordered_extent(struct inode *inode, u64 file_offset)
int btrfs_ordered_update_i_size(struct inode *inode, u64 offset,
struct btrfs_ordered_extent *ordered)
int btrfs_find_ordered_sum(struct inode *inode, u64 offset, u64 disk_bytenr,
u32 *sum)
int btrfs_add_ordered_operation(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode)
