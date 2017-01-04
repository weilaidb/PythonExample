#define __BTRFS_ORDERED_DATA__
struct btrfs_ordered_inode_tree ;
struct btrfs_sector_sum ;
struct btrfs_ordered_sum ;
#define BTRFS_ORDERED_IO_DONE 0
#define BTRFS_ORDERED_COMPLETE 1
#define BTRFS_ORDERED_NOCOW 2
#define BTRFS_ORDERED_COMPRESSED 3
#define BTRFS_ORDERED_PREALLOC 4
#define BTRFS_ORDERED_DIRECT 5
struct btrfs_ordered_extent ;
static inline int btrfs_ordered_sum_size(struct btrfs_root *root,
unsigned long bytes)
static inline void
btrfs_ordered_inode_tree_init(struct btrfs_ordered_inode_tree *t)
int btrfs_put_ordered_extent(struct btrfs_ordered_extent *entry);
int btrfs_remove_ordered_extent(struct inode *inode,
struct btrfs_ordered_extent *entry);
int btrfs_dec_test_ordered_pending(struct inode *inode,
struct btrfs_ordered_extent **cached,
u64 file_offset, u64 io_size);
int btrfs_dec_test_first_ordered_pending(struct inode *inode,
struct btrfs_ordered_extent **cached,
u64 *file_offset, u64 io_size);
int btrfs_add_ordered_extent(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len, int type);
int btrfs_add_ordered_extent_dio(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len, int type);
int btrfs_add_ordered_extent_compress(struct inode *inode, u64 file_offset,
u64 start, u64 len, u64 disk_len,
int type, int compress_type);
int btrfs_add_ordered_sum(struct inode *inode,
struct btrfs_ordered_extent *entry,
struct btrfs_ordered_sum *sum);
struct btrfs_ordered_extent *btrfs_lookup_ordered_extent(struct inode *inode,
u64 file_offset);
void btrfs_start_ordered_extent(struct inode *inode,
struct btrfs_ordered_extent *entry, int wait);
int btrfs_wait_ordered_range(struct inode *inode, u64 start, u64 len);
struct btrfs_ordered_extent *
btrfs_lookup_first_ordered_extent(struct inode * inode, u64 file_offset);
struct btrfs_ordered_extent *btrfs_lookup_ordered_range(struct inode *inode,
u64 file_offset,
u64 len);
int btrfs_ordered_update_i_size(struct inode *inode, u64 offset,
struct btrfs_ordered_extent *ordered);
int btrfs_find_ordered_sum(struct inode *inode, u64 offset, u64 disk_bytenr, u32 *sum);
int btrfs_run_ordered_operations(struct btrfs_root *root, int wait);
int btrfs_add_ordered_operation(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct inode *inode);
int btrfs_wait_ordered_extents(struct btrfs_root *root,
int nocow_only, int delay_iput);
