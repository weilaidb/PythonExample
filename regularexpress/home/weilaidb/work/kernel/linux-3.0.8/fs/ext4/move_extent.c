static inline int
get_ext_path(struct inode *inode, ext4_lblk_t lblock,
struct ext4_ext_path **path)
static void
copy_extent_status(struct ext4_extent *src, struct ext4_extent *dest)
static int
mext_next_extent(struct inode *inode, struct ext4_ext_path *path,
struct ext4_extent **extent)
static int
mext_check_null_inode(struct inode *inode1, struct inode *inode2,
const char *function, unsigned int line)
static void
double_down_write_data_sem(struct inode *orig_inode, struct inode *donor_inode)
static void
double_up_write_data_sem(struct inode *orig_inode, struct inode *donor_inode)
static int
mext_insert_across_blocks(handle_t *handle, struct inode *orig_inode,
struct ext4_extent *o_start, struct ext4_extent *o_end,
struct ext4_extent *start_ext, struct ext4_extent *new_ext,
struct ext4_extent *end_ext)
static void
mext_insert_inside_block(struct ext4_extent *o_start,
struct ext4_extent *o_end,
struct ext4_extent *start_ext,
struct ext4_extent *new_ext,
struct ext4_extent *end_ext,
struct ext4_extent_header *eh,
int range_to_move)
static int
mext_insert_extents(handle_t *handle, struct inode *orig_inode,
struct ext4_ext_path *orig_path,
struct ext4_extent *o_start,
struct ext4_extent *o_end,
struct ext4_extent *start_ext,
struct ext4_extent *new_ext,
struct ext4_extent *end_ext)
static int
mext_leaf_block(handle_t *handle, struct inode *orig_inode,
struct ext4_ext_path *orig_path, struct ext4_extent *dext,
ext4_lblk_t *from)
static int
mext_calc_swap_extents(struct ext4_extent *tmp_dext,
struct ext4_extent *tmp_oext,
ext4_lblk_t orig_off, ext4_lblk_t donor_off,
ext4_lblk_t max_count)
static int
mext_replace_branches(handle_t *handle, struct inode *orig_inode,
struct inode *donor_inode, ext4_lblk_t from,
ext4_lblk_t count, int *err)
static int
move_extent_per_page(struct file *o_filp, struct inode *donor_inode,
pgoff_t orig_page_offset, int data_offset_in_page,
int block_len_in_page, int uninit, int *err)
static int
mext_check_arguments(struct inode *orig_inode,
struct inode *donor_inode, __u64 orig_start,
__u64 donor_start, __u64 *len)
static int
mext_inode_double_lock(struct inode *inode1, struct inode *inode2)
static int
mext_inode_double_unlock(struct inode *inode1, struct inode *inode2)
int
ext4_move_extents(struct file *o_filp, struct file *d_filp,
__u64 orig_start, __u64 donor_start, __u64 len,
__u64 *moved_len)
