STATIC void
xfs_btree_trace_ptr(
struct xfs_btree_cur	*cur,
union xfs_btree_ptr	ptr,
__psunsigned_t		*high,
__psunsigned_t		*low)
void
xfs_btree_trace_argbi(
const char		*func,
struct xfs_btree_cur	*cur,
struct xfs_buf		*b,
int			i,
int			line)
void
xfs_btree_trace_argbii(
const char		*func,
struct xfs_btree_cur	*cur,
struct xfs_buf		*b,
int			i0,
int			i1,
int			line)
void
xfs_btree_trace_argfffi(
const char		*func,
struct xfs_btree_cur	*cur,
xfs_dfiloff_t		o,
xfs_dfsbno_t		b,
xfs_dfilblks_t		i,
int			j,
int			line)
void
xfs_btree_trace_argi(
const char		*func,
struct xfs_btree_cur	*cur,
int			i,
int			line)
void
xfs_btree_trace_argipk(
const char		*func,
struct xfs_btree_cur	*cur,
int			i,
union xfs_btree_ptr	ptr,
union xfs_btree_key	*key,
int			line)
void
xfs_btree_trace_argipr(
const char		*func,
struct xfs_btree_cur	*cur,
int			i,
union xfs_btree_ptr	ptr,
union xfs_btree_rec	*rec,
int			line)
void
xfs_btree_trace_argik(
const char		*func,
struct xfs_btree_cur	*cur,
int			i,
union xfs_btree_key	*key,
int			line)
void
xfs_btree_trace_argr(
const char		*func,
struct xfs_btree_cur	*cur,
union xfs_btree_rec	*rec,
int			line)
void
xfs_btree_trace_cursor(
const char		*func,
struct xfs_btree_cur	*cur,
int			type,
int			line)
