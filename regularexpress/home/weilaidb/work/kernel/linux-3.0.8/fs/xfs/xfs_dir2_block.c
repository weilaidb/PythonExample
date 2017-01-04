static void xfs_dir2_block_log_leaf(xfs_trans_t *tp, xfs_dabuf_t *bp, int first,
int last);
static void xfs_dir2_block_log_tail(xfs_trans_t *tp, xfs_dabuf_t *bp);
static int xfs_dir2_block_lookup_int(xfs_da_args_t *args, xfs_dabuf_t **bpp,
int *entno);
static int xfs_dir2_block_sort(const void *a, const void *b);
static xfs_dahash_t xfs_dir_hash_dot, xfs_dir_hash_dotdot;
void
xfs_dir_startup(void)
int
xfs_dir2_block_addname(
xfs_da_args_t		*args)
int
xfs_dir2_block_getdents(
xfs_inode_t		*dp,
void			*dirent,
xfs_off_t		*offset,
filldir_t		filldir)
static void
xfs_dir2_block_log_leaf(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp,
int			first,
int			last)
static void
xfs_dir2_block_log_tail(
xfs_trans_t		*tp,
xfs_dabuf_t		*bp)
int
xfs_dir2_block_lookup(
xfs_da_args_t		*args)
static int
xfs_dir2_block_lookup_int(
xfs_da_args_t		*args,
xfs_dabuf_t		**bpp,
int			*entno)
int
xfs_dir2_block_removename(
xfs_da_args_t		*args)
int
xfs_dir2_block_replace(
xfs_da_args_t		*args)
static int
xfs_dir2_block_sort(
const void			*a,
const void			*b)
int
xfs_dir2_leaf_to_block(
xfs_da_args_t		*args,
xfs_dabuf_t		*lbp,
xfs_dabuf_t		*dbp)
int
xfs_dir2_sf_to_block(
xfs_da_args_t		*args)
