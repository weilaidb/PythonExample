#define BITS_PER_BITMAP		(PAGE_CACHE_SIZE * 8)
#define MAX_CACHE_BYTES_PER_GIG	(32 * 1024)
static int link_free_space(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info);
static struct inode *__lookup_free_space_inode(struct btrfs_root *root,
struct btrfs_path *path,
u64 offset)
struct inode *lookup_free_space_inode(struct btrfs_root *root,
struct btrfs_block_group_cache
*block_group, struct btrfs_path *path)
int __create_free_space_inode(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path, u64 ino, u64 offset)
int create_free_space_inode(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_block_group_cache *block_group,
struct btrfs_path *path)
int btrfs_truncate_free_space_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path,
struct inode *inode)
static int readahead_cache(struct inode *inode)
int __load_free_space_cache(struct btrfs_root *root, struct inode *inode,
struct btrfs_free_space_ctl *ctl,
struct btrfs_path *path, u64 offset)
int load_free_space_cache(struct btrfs_fs_info *fs_info,
struct btrfs_block_group_cache *block_group)
int __btrfs_write_out_cache(struct btrfs_root *root, struct inode *inode,
struct btrfs_free_space_ctl *ctl,
struct btrfs_block_group_cache *block_group,
struct btrfs_trans_handle *trans,
struct btrfs_path *path, u64 offset)
int btrfs_write_out_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_block_group_cache *block_group,
struct btrfs_path *path)
static inline unsigned long offset_to_bit(u64 bitmap_start, u32 unit,
u64 offset)
static inline unsigned long bytes_to_bits(u64 bytes, u32 unit)
static inline u64 offset_to_bitmap(struct btrfs_free_space_ctl *ctl,
u64 offset)
static int tree_insert_offset(struct rb_root *root, u64 offset,
struct rb_node *node, int bitmap)
static struct btrfs_free_space *
tree_search_offset(struct btrfs_free_space_ctl *ctl,
u64 offset, int bitmap_only, int fuzzy)
static inline void
__unlink_free_space(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static void unlink_free_space(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static int link_free_space(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static void recalculate_thresholds(struct btrfs_free_space_ctl *ctl)
static void bitmap_clear_bits(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info, u64 offset,
u64 bytes)
static void bitmap_set_bits(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info, u64 offset,
u64 bytes)
static int search_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *bitmap_info, u64 *offset,
u64 *bytes)
static struct btrfs_free_space *
find_free_space(struct btrfs_free_space_ctl *ctl, u64 *offset, u64 *bytes)
static void add_new_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info, u64 offset)
static void free_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *bitmap_info)
static noinline int remove_from_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *bitmap_info,
u64 *offset, u64 *bytes)
static u64 add_bytes_to_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info, u64 offset,
u64 bytes)
static bool use_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static struct btrfs_free_space_op free_space_op = ;
static int insert_into_bitmap(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info)
static bool try_merge_free_space(struct btrfs_free_space_ctl *ctl,
struct btrfs_free_space *info, bool update_stat)
int __btrfs_add_free_space(struct btrfs_free_space_ctl *ctl,
u64 offset, u64 bytes)
int btrfs_remove_free_space(struct btrfs_block_group_cache *block_group,
u64 offset, u64 bytes)
void btrfs_dump_free_space(struct btrfs_block_group_cache *block_group,
u64 bytes)
void btrfs_init_free_space_ctl(struct btrfs_block_group_cache *block_group)
static int
__btrfs_return_cluster_to_free_space(
struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster)
void __btrfs_remove_free_space_cache_locked(struct btrfs_free_space_ctl *ctl)
void __btrfs_remove_free_space_cache(struct btrfs_free_space_ctl *ctl)
void btrfs_remove_free_space_cache(struct btrfs_block_group_cache *block_group)
u64 btrfs_find_space_for_alloc(struct btrfs_block_group_cache *block_group,
u64 offset, u64 bytes, u64 empty_size)
int btrfs_return_cluster_to_free_space(
struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster)
static u64 btrfs_alloc_from_bitmap(struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster,
struct btrfs_free_space *entry,
u64 bytes, u64 min_start)
u64 btrfs_alloc_from_cluster(struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster, u64 bytes,
u64 min_start)
static int btrfs_bitmap_cluster(struct btrfs_block_group_cache *block_group,
struct btrfs_free_space *entry,
struct btrfs_free_cluster *cluster,
u64 offset, u64 bytes, u64 min_bytes)
static noinline int
setup_cluster_no_bitmap(struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster,
struct list_head *bitmaps, u64 offset, u64 bytes,
u64 min_bytes)
static noinline int
setup_cluster_bitmap(struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster,
struct list_head *bitmaps, u64 offset, u64 bytes,
u64 min_bytes)
int btrfs_find_space_cluster(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_block_group_cache *block_group,
struct btrfs_free_cluster *cluster,
u64 offset, u64 bytes, u64 empty_size)
void btrfs_init_free_cluster(struct btrfs_free_cluster *cluster)
int btrfs_trim_block_group(struct btrfs_block_group_cache *block_group,
u64 *trimmed, u64 start, u64 end, u64 minlen)
u64 btrfs_find_ino_for_alloc(struct btrfs_root *fs_root)
struct inode *lookup_free_ino_inode(struct btrfs_root *root,
struct btrfs_path *path)
int create_free_ino_inode(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path)
int load_free_ino_cache(struct btrfs_fs_info *fs_info, struct btrfs_root *root)
int btrfs_write_out_ino_cache(struct btrfs_root *root,
struct btrfs_trans_handle *trans,
struct btrfs_path *path)
