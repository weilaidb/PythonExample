STATIC struct xfs_btree_cur *
xfs_allocbt_dup_cursor(
struct xfs_btree_cur	*cur)
STATIC void
xfs_allocbt_set_root(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr,
int			inc)
STATIC int
xfs_allocbt_alloc_block(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*start,
union xfs_btree_ptr	*new,
int			length,
int			*stat)
STATIC int
xfs_allocbt_free_block(
struct xfs_btree_cur	*cur,
struct xfs_buf		*bp)
STATIC void
xfs_allocbt_update_lastrec(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
union xfs_btree_rec	*rec,
int			ptr,
int			reason)
STATIC int
xfs_allocbt_get_minrecs(
struct xfs_btree_cur	*cur,
int			level)
STATIC int
xfs_allocbt_get_maxrecs(
struct xfs_btree_cur	*cur,
int			level)
STATIC void
xfs_allocbt_init_key_from_rec(
union xfs_btree_key	*key,
union xfs_btree_rec	*rec)
STATIC void
xfs_allocbt_init_rec_from_key(
union xfs_btree_key	*key,
union xfs_btree_rec	*rec)
STATIC void
xfs_allocbt_init_rec_from_cur(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec)
STATIC void
xfs_allocbt_init_ptr_from_cur(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	*ptr)
STATIC __int64_t
xfs_allocbt_key_diff(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*key)
STATIC int
xfs_allocbt_keys_inorder(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*k1,
union xfs_btree_key	*k2)
STATIC int
xfs_allocbt_recs_inorder(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*r1,
union xfs_btree_rec	*r2)
ktrace_t	*xfs_allocbt_trace_buf;
STATIC void
xfs_allocbt_trace_enter(
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
xfs_allocbt_trace_cursor(
struct xfs_btree_cur	*cur,
__uint32_t		*s0,
__uint64_t		*l0,
__uint64_t		*l1)
STATIC void
xfs_allocbt_trace_key(
struct xfs_btree_cur	*cur,
union xfs_btree_key	*key,
__uint64_t		*l0,
__uint64_t		*l1)
STATIC void
xfs_allocbt_trace_record(
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec,
__uint64_t		*l0,
__uint64_t		*l1,
__uint64_t		*l2)
static const struct xfs_btree_ops xfs_allocbt_ops = ;
struct xfs_btree_cur *
xfs_allocbt_init_cursor(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
struct xfs_buf		*agbp,
xfs_agnumber_t		agno,
xfs_btnum_t		btnum)
int
xfs_allocbt_maxrecs(
struct xfs_mount	*mp,
int			blocklen,
int			leaf)
