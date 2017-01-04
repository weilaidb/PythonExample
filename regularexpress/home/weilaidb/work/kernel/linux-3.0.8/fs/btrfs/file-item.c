#define MAX_CSUM_ITEMS(r, size) ((((BTRFS_LEAF_DATA_SIZE(r) - \
sizeof(struct btrfs_item) * 2) / \
size) - 1))
#define MAX_ORDERED_SUM_BYTES(r) ((PAGE_SIZE - \
sizeof(struct btrfs_ordered_sum)) / \
sizeof(struct btrfs_sector_sum) * \
(r)->sectorsize - (r)->sectorsize)
int btrfs_insert_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
u64 objectid, u64 pos,
u64 disk_offset, u64 disk_num_bytes,
u64 num_bytes, u64 offset, u64 ram_bytes,
u8 compression, u8 encryption, u16 other_encoding)
struct btrfs_csum_item *btrfs_lookup_csum(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
u64 bytenr, int cow)
int btrfs_lookup_file_extent(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path, u64 objectid,
u64 offset, int mod)
static int __btrfs_lookup_bio_sums(struct btrfs_root *root,
struct inode *inode, struct bio *bio,
u64 logical_offset, u32 *dst, int dio)
int btrfs_lookup_bio_sums(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u32 *dst)
int btrfs_lookup_bio_sums_dio(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u64 offset, u32 *dst)
int btrfs_lookup_csums_range(struct btrfs_root *root, u64 start, u64 end,
struct list_head *list, int search_commit)
int btrfs_csum_one_bio(struct btrfs_root *root, struct inode *inode,
struct bio *bio, u64 file_start, int contig)
static noinline int truncate_one_csum(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_key *key,
u64 bytenr, u64 len)
int btrfs_del_csums(struct btrfs_trans_handle *trans,
struct btrfs_root *root, u64 bytenr, u64 len)
int btrfs_csum_file_blocks(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_ordered_sum *sums)
