struct ocfs2_move_extents_context ;
static int __ocfs2_move_extent(handle_t *handle,
struct ocfs2_move_extents_context *context,
u32 cpos, u32 len, u32 p_cpos, u32 new_p_cpos,
int ext_flags)
static int ocfs2_lock_allocators_move_extents(struct inode *inode,
struct ocfs2_extent_tree *et,
u32 clusters_to_move,
u32 extents_to_split,
struct ocfs2_alloc_context **meta_ac,
struct ocfs2_alloc_context **data_ac,
int extra_blocks,
int *credits)
static int ocfs2_defrag_extent(struct ocfs2_move_extents_context *context,
u32 cpos, u32 phys_cpos, u32 *len, int ext_flags)
static int ocfs2_find_victim_alloc_group(struct inode *inode,
u64 vict_blkno,
int type, int slot,
int *vict_bit,
struct buffer_head **ret_bh)
static int ocfs2_validate_and_adjust_move_goal(struct inode *inode,
struct ocfs2_move_extents *range)
static void ocfs2_probe_alloc_group(struct inode *inode, struct buffer_head *bh,
int *goal_bit, u32 move_len, u32 max_hop,
u32 *phys_cpos)
static int ocfs2_alloc_dinode_update_counts(struct inode *inode,
handle_t *handle,
struct buffer_head *di_bh,
u32 num_bits,
u16 chain)
static inline int ocfs2_block_group_set_bits(handle_t *handle,
struct inode *alloc_inode,
struct ocfs2_group_desc *bg,
struct buffer_head *group_bh,
unsigned int bit_off,
unsigned int num_bits)
static int ocfs2_move_extent(struct ocfs2_move_extents_context *context,
u32 cpos, u32 phys_cpos, u32 *new_phys_cpos,
u32 len, int ext_flags)
static void ocfs2_calc_extent_defrag_len(u32 *alloc_size, u32 *len_defraged,
u32 threshold, int *skip)
static int __ocfs2_move_extents_range(struct buffer_head *di_bh,
struct ocfs2_move_extents_context *context)
static int ocfs2_move_extents(struct ocfs2_move_extents_context *context)
int ocfs2_ioctl_move_extents(struct file *filp, void __user *argp)
