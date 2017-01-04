static void xfs_dir2_free_log_header(xfs_trans_t *tp, xfs_dabuf_t *bp);
static int xfs_dir2_leafn_add(xfs_dabuf_t *bp, xfs_da_args_t *args, int index);
static void xfs_dir2_leafn_check(xfs_inode_t *dp, xfs_dabuf_t *bp);
#define	xfs_dir2_leafn_check(dp, bp)
static void xfs_dir2_leafn_moveents(xfs_da_args_t *args, xfs_dabuf_t *bp_s,
int start_s, xfs_dabuf_t *bp_d, int start_d,
int count);
static void xfs_dir2_leafn_rebalance(xfs_da_state_t *state,
xfs_da_state_blk_t *blk1,
xfs_da_state_blk_t *blk2);
static int xfs_dir2_leafn_remove(xfs_da_args_t *args, xfs_dabuf_t *bp,
int index, xfs_da_state_blk_t *dblk,
int *rval);
static int xfs_dir2_node_addname_int(xfs_da_args_t *args,
xfs_da_state_blk_t *fblk);
STATIC void
xfs_dir2_free_log_bests(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
int			first,
int			last)
static void
xfs_dir2_free_log_header(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp)
int
xfs_dir2_leaf_to_node(
xfs_da_args_t		*args,
xfs_dabuf_t		*lbp)
static int
xfs_dir2_leafn_add(
xfs_dabuf_t		*bp,
xfs_da_args_t		*args,
int			index)
void
xfs_dir2_leafn_check(
xfs_inode_t	*dp,
xfs_dabuf_t	*bp)
xfs_dahash_t
xfs_dir2_leafn_lasthash(
xfs_dabuf_t	*bp,
int		*count)
STATIC int
xfs_dir2_leafn_lookup_for_addname(
xfs_dabuf_t		*bp,
xfs_da_args_t		*args,
int			*indexp,
xfs_da_state_t		*state)
STATIC int
xfs_dir2_leafn_lookup_for_entry(
xfs_dabuf_t		*bp,
xfs_da_args_t		*args,
int			*indexp,
xfs_da_state_t		*state)
int
xfs_dir2_leafn_lookup_int(
xfs_dabuf_t		*bp,
xfs_da_args_t		*args,
int			*indexp,
xfs_da_state_t		*state)
static void
xfs_dir2_leafn_moveents(
xfs_da_args_t	*args,
xfs_dabuf_t	*bp_s,
int		start_s,
xfs_dabuf_t	*bp_d,
int		start_d,
int		count)
int
xfs_dir2_leafn_order(
xfs_dabuf_t	*leaf1_bp,
xfs_dabuf_t	*leaf2_bp)
static void
xfs_dir2_leafn_rebalance(
xfs_da_state_t		*state,
xfs_da_state_blk_t	*blk1,
xfs_da_state_blk_t	*blk2)
static int
xfs_dir2_leafn_remove(
xfs_da_args_t		*args,
xfs_dabuf_t		*bp,
int			index,
xfs_da_state_blk_t	*dblk,
int			*rval)
int
xfs_dir2_leafn_split(
xfs_da_state_t		*state,
xfs_da_state_blk_t	*oldblk,
xfs_da_state_blk_t	*newblk)
int
xfs_dir2_leafn_toosmall(
xfs_da_state_t		*state,
int			*action)
void
xfs_dir2_leafn_unbalance(
xfs_da_state_t		*state,
xfs_da_state_blk_t	*drop_blk,
xfs_da_state_blk_t	*save_blk)
int
xfs_dir2_node_addname(
xfs_da_args_t		*args)
static int
xfs_dir2_node_addname_int(
xfs_da_args_t		*args,
xfs_da_state_blk_t	*fblk)
int
xfs_dir2_node_lookup(
xfs_da_args_t	*args)
int
xfs_dir2_node_removename(
xfs_da_args_t		*args)
int
xfs_dir2_node_replace(
xfs_da_args_t		*args)
int
xfs_dir2_node_trim_free(
xfs_da_args_t		*args,
xfs_fileoff_t		fo,
int			*rvalp)
