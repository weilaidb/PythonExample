STATIC int xfs_attr_leaf_create(xfs_da_args_t *args, xfs_dablk_t which_block,
xfs_dabuf_t **bpp);
STATIC int xfs_attr_leaf_add_work(xfs_dabuf_t *leaf_buffer, xfs_da_args_t *args,
int freemap_index);
STATIC void xfs_attr_leaf_compact(xfs_trans_t *trans, xfs_dabuf_t *leaf_buffer);
STATIC void xfs_attr_leaf_rebalance(xfs_da_state_t *state,
xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2);
STATIC int xfs_attr_leaf_figure_balance(xfs_da_state_t *state,
xfs_da_state_blk_t *leaf_blk_1,
xfs_da_state_blk_t *leaf_blk_2,
int *number_entries_in_blk1,
int *number_usedbytes_in_blk1);
STATIC int xfs_attr_node_inactive(xfs_trans_t **trans, xfs_inode_t *dp,
xfs_dabuf_t *bp, int level);
STATIC int xfs_attr_leaf_inactive(xfs_trans_t **trans, xfs_inode_t *dp,
xfs_dabuf_t *bp);
STATIC int xfs_attr_leaf_freextent(xfs_trans_t **trans, xfs_inode_t *dp,
xfs_dablk_t blkno, int blkcnt);
STATIC void xfs_attr_leaf_moveents(xfs_attr_leafblock_t *src_leaf,
int src_start,
xfs_attr_leafblock_t *dst_leaf,
int dst_start, int move_count,
xfs_mount_t *mp);
STATIC int xfs_attr_leaf_entsize(xfs_attr_leafblock_t *leaf, int index);
STATIC int
xfs_attr_namesp_match(int arg_flags, int ondisk_flags)
int
xfs_attr_shortform_bytesfit(xfs_inode_t *dp, int bytes)
STATIC void
xfs_sbversion_add_attr2(xfs_mount_t *mp, xfs_trans_t *tp)
void
xfs_attr_shortform_create(xfs_da_args_t *args)
void
xfs_attr_shortform_add(xfs_da_args_t *args, int forkoff)
STATIC void
xfs_attr_fork_reset(
struct xfs_inode	*ip,
struct xfs_trans	*tp)
int
xfs_attr_shortform_remove(xfs_da_args_t *args)
int
xfs_attr_shortform_lookup(xfs_da_args_t *args)
int
xfs_attr_shortform_getvalue(xfs_da_args_t *args)
int
xfs_attr_shortform_to_leaf(xfs_da_args_t *args)
STATIC int
xfs_attr_shortform_compare(const void *a, const void *b)
#define XFS_ISRESET_CURSOR(cursor) \
(!((cursor)->initted) && !((cursor)->hashval) && \
!((cursor)->blkno) && !((cursor)->offset))
int
xfs_attr_shortform_list(xfs_attr_list_context_t *context)
int
xfs_attr_shortform_allfit(xfs_dabuf_t *bp, xfs_inode_t *dp)
int
xfs_attr_leaf_to_shortform(xfs_dabuf_t *bp, xfs_da_args_t *args, int forkoff)
int
xfs_attr_leaf_to_node(xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_create(xfs_da_args_t *args, xfs_dablk_t blkno, xfs_dabuf_t **bpp)
int
xfs_attr_leaf_split(xfs_da_state_t *state, xfs_da_state_blk_t *oldblk,
xfs_da_state_blk_t *newblk)
int
xfs_attr_leaf_add(xfs_dabuf_t *bp, xfs_da_args_t *args)
STATIC int
xfs_attr_leaf_add_work(xfs_dabuf_t *bp, xfs_da_args_t *args, int mapindex)
STATIC void
xfs_attr_leaf_compact(xfs_trans_t *trans, xfs_dabuf_t *bp)
STATIC void
xfs_attr_leaf_rebalance(xfs_da_state_t *state, xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2)
STATIC int
xfs_attr_leaf_figure_balance(xfs_da_state_t *state,
xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2,
int *countarg, int *usedbytesarg)
int
xfs_attr_leaf_toosmall(xfs_da_state_t *state, int *action)
int
xfs_attr_leaf_remove(xfs_dabuf_t *bp, xfs_da_args_t *args)
void
xfs_attr_leaf_unbalance(xfs_da_state_t *state, xfs_da_state_blk_t *drop_blk,
xfs_da_state_blk_t *save_blk)
int
xfs_attr_leaf_lookup_int(xfs_dabuf_t *bp, xfs_da_args_t *args)
int
xfs_attr_leaf_getvalue(xfs_dabuf_t *bp, xfs_da_args_t *args)
STATIC void
xfs_attr_leaf_moveents(xfs_attr_leafblock_t *leaf_s, int start_s,
xfs_attr_leafblock_t *leaf_d, int start_d,
int count, xfs_mount_t *mp)
int
xfs_attr_leaf_order(xfs_dabuf_t *leaf1_bp, xfs_dabuf_t *leaf2_bp)
xfs_dahash_t
xfs_attr_leaf_lasthash(xfs_dabuf_t *bp, int *count)
STATIC int
xfs_attr_leaf_entsize(xfs_attr_leafblock_t *leaf, int index)
int
xfs_attr_leaf_newentsize(int namelen, int valuelen, int blocksize, int *local)
int
xfs_attr_leaf_list_int(xfs_dabuf_t *bp, xfs_attr_list_context_t *context)
int
xfs_attr_leaf_clearflag(xfs_da_args_t *args)
int
xfs_attr_leaf_setflag(xfs_da_args_t *args)
int
xfs_attr_leaf_flipflags(xfs_da_args_t *args)
int
xfs_attr_root_inactive(xfs_trans_t **trans, xfs_inode_t *dp)
STATIC int
xfs_attr_node_inactive(xfs_trans_t **trans, xfs_inode_t *dp, xfs_dabuf_t *bp,
int level)
STATIC int
xfs_attr_leaf_inactive(xfs_trans_t **trans, xfs_inode_t *dp, xfs_dabuf_t *bp)
STATIC int
xfs_attr_leaf_freextent(xfs_trans_t **trans, xfs_inode_t *dp,
xfs_dablk_t blkno, int blkcnt)
