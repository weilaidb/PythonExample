static int ext4_split_extent(handle_t *handle,
struct inode *inode,
struct ext4_ext_path *path,
struct ext4_map_blocks *map,
int split_flag,
int flags);
static int ext4_ext_truncate_extend_restart(handle_t *handle,
struct inode *inode,
int needed)
static int ext4_ext_get_access(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path)
static int ext4_ext_dirty(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path)
static ext4_fsblk_t ext4_ext_find_goal(struct inode *inode,
struct ext4_ext_path *path,
ext4_lblk_t block)
static ext4_fsblk_t
ext4_ext_new_meta_block(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path,
struct ext4_extent *ex, int *err, unsigned int flags)
static inline int ext4_ext_space_block(struct inode *inode, int check)
static inline int ext4_ext_space_block_idx(struct inode *inode, int check)
static inline int ext4_ext_space_root(struct inode *inode, int check)
static inline int ext4_ext_space_root_idx(struct inode *inode, int check)
int ext4_ext_calc_metadata_amount(struct inode *inode, ext4_lblk_t lblock)
static int
ext4_ext_max_entries(struct inode *inode, int depth)
static int ext4_valid_extent(struct inode *inode, struct ext4_extent *ext)
static int ext4_valid_extent_idx(struct inode *inode,
struct ext4_extent_idx *ext_idx)
static int ext4_valid_extent_entries(struct inode *inode,
struct ext4_extent_header *eh,
int depth)
static int __ext4_ext_check(const char *function, unsigned int line,
struct inode *inode, struct ext4_extent_header *eh,
int depth)
#define ext4_ext_check(inode, eh, depth)	\
__ext4_ext_check(__func__, __LINE__, inode, eh, depth)
int ext4_ext_check_inode(struct inode *inode)
static void ext4_ext_show_path(struct inode *inode, struct ext4_ext_path *path)
static void ext4_ext_show_leaf(struct inode *inode, struct ext4_ext_path *path)
static void ext4_ext_show_move(struct inode *inode, struct ext4_ext_path *path,
ext4_fsblk_t newblock, int level)
#define ext4_ext_show_path(inode, path)
#define ext4_ext_show_leaf(inode, path)
#define ext4_ext_show_move(inode, path, newblock, level)
void ext4_ext_drop_refs(struct ext4_ext_path *path)
static void
ext4_ext_binsearch_idx(struct inode *inode,
struct ext4_ext_path *path, ext4_lblk_t block)
static void
ext4_ext_binsearch(struct inode *inode,
struct ext4_ext_path *path, ext4_lblk_t block)
int ext4_ext_tree_init(handle_t *handle, struct inode *inode)
struct ext4_ext_path *
ext4_ext_find_extent(struct inode *inode, ext4_lblk_t block,
struct ext4_ext_path *path)
static int ext4_ext_insert_index(handle_t *handle, struct inode *inode,
struct ext4_ext_path *curp,
int logical, ext4_fsblk_t ptr)
static int ext4_ext_split(handle_t *handle, struct inode *inode,
unsigned int flags,
struct ext4_ext_path *path,
struct ext4_extent *newext, int at)
static int ext4_ext_grow_indepth(handle_t *handle, struct inode *inode,
unsigned int flags,
struct ext4_ext_path *path,
struct ext4_extent *newext)
static int ext4_ext_create_new_leaf(handle_t *handle, struct inode *inode,
unsigned int flags,
struct ext4_ext_path *path,
struct ext4_extent *newext)
static int ext4_ext_search_left(struct inode *inode,
struct ext4_ext_path *path,
ext4_lblk_t *logical, ext4_fsblk_t *phys)
static int ext4_ext_search_right(struct inode *inode,
struct ext4_ext_path *path,
ext4_lblk_t *logical, ext4_fsblk_t *phys)
static ext4_lblk_t
ext4_ext_next_allocated_block(struct ext4_ext_path *path)
static ext4_lblk_t ext4_ext_next_leaf_block(struct inode *inode,
struct ext4_ext_path *path)
static int ext4_ext_correct_indexes(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path)
int
ext4_can_extents_be_merged(struct inode *inode, struct ext4_extent *ex1,
struct ext4_extent *ex2)
static int ext4_ext_try_to_merge_right(struct inode *inode,
struct ext4_ext_path *path,
struct ext4_extent *ex)
static int ext4_ext_try_to_merge(struct inode *inode,
struct ext4_ext_path *path,
struct ext4_extent *ex)
static unsigned int ext4_ext_check_overlap(struct inode *inode,
struct ext4_extent *newext,
struct ext4_ext_path *path)
int ext4_ext_insert_extent(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path,
struct ext4_extent *newext, int flag)
static int ext4_ext_walk_space(struct inode *inode, ext4_lblk_t block,
ext4_lblk_t num, ext_prepare_callback func,
void *cbdata)
static void
ext4_ext_put_in_cache(struct inode *inode, ext4_lblk_t block,
__u32 len, ext4_fsblk_t start)
static void
ext4_ext_put_gap_in_cache(struct inode *inode, struct ext4_ext_path *path,
ext4_lblk_t block)
static int ext4_ext_check_cache(struct inode *inode, ext4_lblk_t block,
struct ext4_ext_cache *ex)
static int
ext4_ext_in_cache(struct inode *inode, ext4_lblk_t block,
struct ext4_extent *ex)
static int ext4_ext_rm_idx(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path)
int ext4_ext_calc_credits_for_single_extent(struct inode *inode, int nrblocks,
struct ext4_ext_path *path)
int ext4_ext_index_trans_blocks(struct inode *inode, int nrblocks, int chunk)
static int ext4_remove_blocks(handle_t *handle, struct inode *inode,
struct ext4_extent *ex,
ext4_lblk_t from, ext4_lblk_t to)
static int
ext4_ext_rm_leaf(handle_t *handle, struct inode *inode,
struct ext4_ext_path *path, ext4_lblk_t start,
ext4_lblk_t end)
static int
ext4_ext_more_to_rm(struct ext4_ext_path *path)
static int ext4_ext_remove_space(struct inode *inode, ext4_lblk_t start,
ext4_lblk_t end)
void ext4_ext_init(struct super_block *sb)
void ext4_ext_release(struct super_block *sb)
static int ext4_ext_zeroout(struct inode *inode, struct ext4_extent *ex)
#define EXT4_EXT_MAY_ZEROOUT	0x1
#define EXT4_EXT_MARK_UNINIT1	0x2
#define EXT4_EXT_MARK_UNINIT2	0x4
static int ext4_split_extent_at(handle_t *handle,
struct inode *inode,
struct ext4_ext_path *path,
ext4_lblk_t split,
int split_flag,
int flags)
static int ext4_split_extent(handle_t *handle,
struct inode *inode,
struct ext4_ext_path *path,
struct ext4_map_blocks *map,
int split_flag,
int flags)
#define EXT4_EXT_ZERO_LEN 7
static int ext4_ext_convert_to_initialized(handle_t *handle,
struct inode *inode,
struct ext4_map_blocks *map,
struct ext4_ext_path *path)
static int ext4_split_unwritten_extents(handle_t *handle,
struct inode *inode,
struct ext4_map_blocks *map,
struct ext4_ext_path *path,
int flags)
static int ext4_convert_unwritten_extents_endio(handle_t *handle,
struct inode *inode,
struct ext4_ext_path *path)
static void unmap_underlying_metadata_blocks(struct block_device *bdev,
sector_t block, int count)
static int check_eofblocks_fl(handle_t *handle, struct inode *inode,
ext4_lblk_t lblk,
struct ext4_ext_path *path,
unsigned int len)
static int
ext4_ext_handle_uninitialized_extents(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map,
struct ext4_ext_path *path, int flags,
unsigned int allocated, ext4_fsblk_t newblock)
int ext4_ext_map_blocks(handle_t *handle, struct inode *inode,
struct ext4_map_blocks *map, int flags)
void ext4_ext_truncate(struct inode *inode)
static void ext4_falloc_update_inode(struct inode *inode,
int mode, loff_t new_size, int update_ctime)
long ext4_fallocate(struct file *file, int mode, loff_t offset, loff_t len)
int ext4_convert_unwritten_extents(struct inode *inode, loff_t offset,
ssize_t len)
static int ext4_ext_fiemap_cb(struct inode *inode, ext4_lblk_t next,
struct ext4_ext_cache *newex, struct ext4_extent *ex,
void *data)
#define EXT4_FIEMAP_FLAGS	(FIEMAP_FLAG_SYNC|FIEMAP_FLAG_XATTR)
static int ext4_xattr_fiemap(struct inode *inode,
struct fiemap_extent_info *fieinfo)
int ext4_ext_punch_hole(struct file *file, loff_t offset, loff_t length)
int ext4_fiemap(struct inode *inode, struct fiemap_extent_info *fieinfo,
__u64 start, __u64 len)
