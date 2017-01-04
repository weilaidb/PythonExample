STATIC int xfs_da_root_split(xfs_da_state_t *state,
xfs_da_state_blk_t *existing_root,
xfs_da_state_blk_t *new_child);
STATIC int xfs_da_node_split(xfs_da_state_t *state,
xfs_da_state_blk_t *existing_blk,
xfs_da_state_blk_t *split_blk,
xfs_da_state_blk_t *blk_to_add,
int treelevel,
int *result);
STATIC void xfs_da_node_rebalance(xfs_da_state_t *state,
xfs_da_state_blk_t *node_blk_1,
xfs_da_state_blk_t *node_blk_2);
STATIC void xfs_da_node_add(xfs_da_state_t *state,
xfs_da_state_blk_t *old_node_blk,
xfs_da_state_blk_t *new_node_blk);
STATIC int xfs_da_root_join(xfs_da_state_t *state,
xfs_da_state_blk_t *root_blk);
STATIC int xfs_da_node_toosmall(xfs_da_state_t *state, int *retval);
STATIC void xfs_da_node_remove(xfs_da_state_t *state,
xfs_da_state_blk_t *drop_blk);
STATIC void xfs_da_node_unbalance(xfs_da_state_t *state,
xfs_da_state_blk_t *src_node_blk,
xfs_da_state_blk_t *dst_node_blk);
STATIC uint	xfs_da_node_lasthash(xfs_dabuf_t *bp, int *count);
STATIC int	xfs_da_node_order(xfs_dabuf_t *node1_bp, xfs_dabuf_t *node2_bp);
STATIC xfs_dabuf_t *xfs_da_buf_make(int nbuf, xfs_buf_t **bps, inst_t *ra);
STATIC int	xfs_da_blk_unlink(xfs_da_state_t *state,
xfs_da_state_blk_t *drop_blk,
xfs_da_state_blk_t *save_blk);
STATIC void	xfs_da_state_kill_altpath(xfs_da_state_t *state);
int
xfs_da_node_create(xfs_da_args_t *args, xfs_dablk_t blkno, int level,
xfs_dabuf_t **bpp, int whichfork)
int
xfs_da_split(xfs_da_state_t *state)
STATIC int
xfs_da_root_split(xfs_da_state_t *state, xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2)
STATIC int
xfs_da_node_split(xfs_da_state_t *state, xfs_da_state_blk_t *oldblk,
xfs_da_state_blk_t *newblk,
xfs_da_state_blk_t *addblk,
int treelevel, int *result)
STATIC void
xfs_da_node_rebalance(xfs_da_state_t *state, xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2)
STATIC void
xfs_da_node_add(xfs_da_state_t *state, xfs_da_state_blk_t *oldblk,
xfs_da_state_blk_t *newblk)
int
xfs_da_join(xfs_da_state_t *state)
STATIC int
xfs_da_root_join(xfs_da_state_t *state, xfs_da_state_blk_t *root_blk)
STATIC int
xfs_da_node_toosmall(xfs_da_state_t *state, int *action)
void
xfs_da_fixhashpath(xfs_da_state_t *state, xfs_da_state_path_t *path)
STATIC void
xfs_da_node_remove(xfs_da_state_t *state, xfs_da_state_blk_t *drop_blk)
STATIC void
xfs_da_node_unbalance(xfs_da_state_t *state, xfs_da_state_blk_t *drop_blk,
xfs_da_state_blk_t *save_blk)
int
xfs_da_node_lookup_int(xfs_da_state_t *state, int *result)
int
xfs_da_blk_link(xfs_da_state_t *state, xfs_da_state_blk_t *old_blk,
xfs_da_state_blk_t *new_blk)
STATIC int
xfs_da_node_order(xfs_dabuf_t *node1_bp, xfs_dabuf_t *node2_bp)
STATIC uint
xfs_da_node_lasthash(xfs_dabuf_t *bp, int *count)
STATIC int
xfs_da_blk_unlink(xfs_da_state_t *state, xfs_da_state_blk_t *drop_blk,
xfs_da_state_blk_t *save_blk)
int
xfs_da_path_shift(xfs_da_state_t *state, xfs_da_state_path_t *path,
int forward, int release, int *result)
xfs_dahash_t
xfs_da_hashname(const __uint8_t *name, int namelen)
enum xfs_dacmp
xfs_da_compname(
struct xfs_da_args *args,
const unsigned char *name,
int		len)
static xfs_dahash_t
xfs_default_hashname(
struct xfs_name	*name)
const struct xfs_nameops xfs_default_nameops = ;
int
xfs_da_grow_inode(xfs_da_args_t *args, xfs_dablk_t *new_blkno)
STATIC int
xfs_da_swap_lastblock(xfs_da_args_t *args, xfs_dablk_t *dead_blknop,
xfs_dabuf_t **dead_bufp)
int
xfs_da_shrink_inode(xfs_da_args_t *args, xfs_dablk_t dead_blkno,
xfs_dabuf_t *dead_buf)
STATIC int
xfs_da_map_covers_blocks(
int		nmap,
xfs_bmbt_irec_t	*mapp,
xfs_dablk_t	bno,
int		count)
STATIC int
xfs_da_do_buf(
xfs_trans_t	*trans,
xfs_inode_t	*dp,
xfs_dablk_t	bno,
xfs_daddr_t	*mappedbnop,
xfs_dabuf_t	**bpp,
int		whichfork,
int		caller,
inst_t		*ra)
int
xfs_da_get_buf(
xfs_trans_t	*trans,
xfs_inode_t	*dp,
xfs_dablk_t	bno,
xfs_daddr_t		mappedbno,
xfs_dabuf_t	**bpp,
int		whichfork)
int
xfs_da_read_buf(
xfs_trans_t	*trans,
xfs_inode_t	*dp,
xfs_dablk_t	bno,
xfs_daddr_t		mappedbno,
xfs_dabuf_t	**bpp,
int		whichfork)
xfs_daddr_t
xfs_da_reada_buf(
xfs_trans_t	*trans,
xfs_inode_t	*dp,
xfs_dablk_t	bno,
int		whichfork)
kmem_zone_t *xfs_da_state_zone;
kmem_zone_t *xfs_dabuf_zone;
xfs_da_state_t *
xfs_da_state_alloc(void)
STATIC void
xfs_da_state_kill_altpath(xfs_da_state_t *state)
void
xfs_da_state_free(xfs_da_state_t *state)
xfs_dabuf_t	*xfs_dabuf_global_list;
static DEFINE_SPINLOCK(xfs_dabuf_global_lock);
STATIC xfs_dabuf_t *
xfs_da_buf_make(int nbuf, xfs_buf_t **bps, inst_t *ra)
STATIC void
xfs_da_buf_clean(xfs_dabuf_t *dabuf)
void
xfs_da_buf_done(xfs_dabuf_t *dabuf)
void
xfs_da_log_buf(xfs_trans_t *tp, xfs_dabuf_t *dabuf, uint first, uint last)
void
xfs_da_brelse(xfs_trans_t *tp, xfs_dabuf_t *dabuf)
void
xfs_da_binval(xfs_trans_t *tp, xfs_dabuf_t *dabuf)
xfs_daddr_t
xfs_da_blkno(xfs_dabuf_t *dabuf)
