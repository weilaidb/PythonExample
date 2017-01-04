static void xfs_dir2_leaf_check(xfs_inode_t *dp, xfs_dabuf_t *bp);
#define	xfs_dir2_leaf_check(dp, bp)
static int xfs_dir2_leaf_lookup_int(xfs_da_args_t *args, xfs_dabuf_t **lbpp,
int *indexp, xfs_dabuf_t **dbpp);
static void xfs_dir2_leaf_log_bests(struct xfs_trans *tp, struct xfs_dabuf *bp,
int first, int last);
static void xfs_dir2_leaf_log_tail(struct xfs_trans *tp, struct xfs_dabuf *bp);
int
xfs_dir2_block_to_leaf(
xfs_da_args_t		*args,
xfs_dabuf_t		*dbp)
int
xfs_dir2_leaf_addname(
xfs_da_args_t		*args)
STATIC void
xfs_dir2_leaf_check(
xfs_inode_t		*dp,
xfs_dabuf_t		*bp)
void
xfs_dir2_leaf_compact(
xfs_da_args_t	*args,
xfs_dabuf_t	*bp)
void
xfs_dir2_leaf_compact_x1(
xfs_dabuf_t	*bp,
int		*indexp,
int		*lowstalep,
int		*highstalep,
int		*lowlogp,
int		*highlogp)
int
xfs_dir2_leaf_getdents(
xfs_inode_t		*dp,
void			*dirent,
size_t			bufsize,
xfs_off_t		*offset,
filldir_t		filldir)
int
xfs_dir2_leaf_init(
xfs_da_args_t		*args,
xfs_dir2_db_t		bno,
xfs_dabuf_t		**bpp,
int			magic)
static void
xfs_dir2_leaf_log_bests(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
int			first,
int			last)
void
xfs_dir2_leaf_log_ents(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
int			first,
int			last)
void
xfs_dir2_leaf_log_header(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp)
STATIC void
xfs_dir2_leaf_log_tail(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp)
int
xfs_dir2_leaf_lookup(
xfs_da_args_t		*args)
static int
xfs_dir2_leaf_lookup_int(
xfs_da_args_t		*args,
xfs_dabuf_t		**lbpp,
int			*indexp,
xfs_dabuf_t		**dbpp)
int
xfs_dir2_leaf_removename(
xfs_da_args_t		*args)
int
xfs_dir2_leaf_replace(
xfs_da_args_t		*args)
int
xfs_dir2_leaf_search_hash(
xfs_da_args_t		*args,
xfs_dabuf_t		*lbp)
int
xfs_dir2_leaf_trim_data(
xfs_da_args_t		*args,
xfs_dabuf_t		*lbp,
xfs_dir2_db_t		db)
int
xfs_dir2_node_to_leaf(
xfs_da_state_t		*state)
