STATIC xfs_exntst_t
xfs_extent_state(
xfs_filblks_t		blks,
int			extent_flag)
void
xfs_bmdr_to_bmbt(
struct xfs_mount	*mp,
xfs_bmdr_block_t	*dblock,
int			dblocklen,
struct xfs_btree_block	*rblock,
int			rblocklen)
STATIC void
__xfs_bmbt_get_all(
__uint64_t l0,
__uint64_t l1,
xfs_bmbt_irec_t *s)
void
xfs_bmbt_get_all(
xfs_bmbt_rec_host_t *r,
xfs_bmbt_irec_t *s)
xfs_filblks_t
xfs_bmbt_get_blockcount(
xfs_bmbt_rec_host_t	*r)
xfs_fsblock_t
xfs_bmbt_get_startblock(
xfs_bmbt_rec_host_t	*r)
xfs_fileoff_t
xfs_bmbt_get_startoff(
xfs_bmbt_rec_host_t	*r)
xfs_exntst_t
xfs_bmbt_get_state(
xfs_bmbt_rec_host_t	*r)
xfs_filblks_t
xfs_bmbt_disk_get_blockcount(
xfs_bmbt_rec_t	*r)
xfs_fileoff_t
xfs_bmbt_disk_get_startoff(
xfs_bmbt_rec_t	*r)
void
xfs_bmbt_set_allf(
xfs_bmbt_rec_host_t	*r,
xfs_fileoff_t		startoff,
xfs_fsblock_t		startblock,
xfs_filblks_t		blockcount,
xfs_exntst_t		state)
void
xfs_bmbt_set_all(
xfs_bmbt_rec_host_t *r,
xfs_bmbt_irec_t	*s)
void
xfs_bmbt_disk_set_allf(
xfs_bmbt_rec_t		*r,
xfs_fileoff_t		startoff,
xfs_fsblock_t		startblock,
xfs_filblks_t		blockcount,
xfs_exntst_t		state)
STATIC void
xfs_bmbt_disk_set_all(
xfs_bmbt_rec_t	*r,
xfs_bmbt_irec_t *s)
void
xfs_bmbt_set_blockcount(
xfs_bmbt_rec_host_t *r,
xfs_filblks_t	v)
void
xfs_bmbt_set_startblock(
xfs_bmbt_rec_host_t *r,
xfs_fsblock_t	v)
void
xfs_bmbt_set_startoff(
xfs_bmbt_rec_host_t *r,
xfs_fileoff_t	v)
void
xfs_bmbt_set_state(
xfs_bmbt_rec_host_t *r,
xfs_exntst_t	v)
void
xfs_bmbt_to_bmdr(
struct xfs_mount	*mp,
struct xfs_btree_block	*rblock,
int			rblocklen,
xfs_bmdr_block_t	*dblock,
int			dblocklen)
int
xfs_check_nostate_extents(
xfs_ifork_t		*ifp,
xfs_extnum_t		idx,
xfs_extnum_t		num)
STATIC struct xfs_btree_cur *
xfs_bmbt_dup_cursor(
struct xfs_btree_cur	*cur)
STATIC void
xfs_bmbt_update_cursor(
struct xfs_btree_cur	*src,
struct xfs_btree_cur	*dst)
STATIC int
xfs_bmbt_alloc_block(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*start,
union xfs_btree_ptr	*new,
int			length,
int			*stat)
STATIC int
xfs_bmbt_free_block(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp)
STATIC int
xfs_bmbt_get_minrecs(
struct xfs_btree_cur	*cur,
int			level)
int
xfs_bmbt_get_maxrecs(
struct xfs_btree_cur	*cur,
int			level)
STATIC int
xfs_bmbt_get_dmaxrecs(
struct xfs_btree_cur	*cur,
int			level)
STATIC void
xfs_bmbt_init_key_from_rec(
union xfs_btree_key	*key,
union xfs_btree_rec	*rec)
STATIC void
xfs_bmbt_init_rec_from_key(
union xfs_btree_key	*key,
union xfs_btree_rec	*rec)
STATIC void
xfs_bmbt_init_rec_from_cur(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec)
STATIC void
xfs_bmbt_init_ptr_from_cur(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr)
STATIC __int64_t
xfs_bmbt_key_diff(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*key)
STATIC int
xfs_bmbt_keys_inorder(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*k1,
union xfs_btree_key	*k2)
STATIC int
xfs_bmbt_recs_inorder(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*r1,
union xfs_btree_rec	*r2)
ktrace_t	*xfs_bmbt_trace_buf;
STATIC void
xfs_bmbt_trace_enter(
struct xfs_btree_cur	*cur,
const char		*func,
char			*s,
int			type,
int			line,
__psunsigned_t		a0,
__psunsigned_t		a1,
__psunsigned_t		a2,
__psunsigned_t		a3,
__psunsigned_t		a4,
__psunsigned_t		a5,
__psunsigned_t		a6,
__psunsigned_t		a7,
__psunsigned_t		a8,
__psunsigned_t		a9,
__psunsigned_t		a10)
STATIC void
xfs_bmbt_trace_cursor(
struct xfs_btree_cur	*cur,
__uint32_t		*s0,
__uint64_t		*l0,
__uint64_t		*l1)
STATIC void
xfs_bmbt_trace_key(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*key,
__uint64_t		*l0,
__uint64_t		*l1)
STATIC void
xfs_bmbt_disk_get_all(
xfs_bmbt_rec_t	*r,
xfs_bmbt_irec_t *s)
STATIC void
xfs_bmbt_trace_record(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec,
__uint64_t		*l0,
__uint64_t		*l1,
__uint64_t		*l2)
static const struct xfs_btree_ops xfs_bmbt_ops = ;
struct xfs_btree_cur *
xfs_bmbt_init_cursor(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
struct xfs_inode	*ip,
int			whichfork)
int
xfs_bmbt_maxrecs(
struct xfs_mount	*mp,
int			blocklen,
int			leaf)
int
xfs_bmdr_maxrecs(
struct xfs_mount	*mp,
int			blocklen,
int			leaf)
