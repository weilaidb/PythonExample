STATIC int xfs_rtallocate_range(xfs_mount_t *, xfs_trans_t *, xfs_rtblock_t,
xfs_extlen_t, xfs_buf_t **, xfs_fsblock_t *);
STATIC int xfs_rtany_summary(xfs_mount_t *, xfs_trans_t *, int, int,
xfs_rtblock_t, xfs_buf_t **, xfs_fsblock_t *, int *);
STATIC int xfs_rtcheck_range(xfs_mount_t *, xfs_trans_t *, xfs_rtblock_t,
xfs_extlen_t, int, xfs_rtblock_t *, int *);
STATIC int xfs_rtfind_back(xfs_mount_t *, xfs_trans_t *, xfs_rtblock_t,
xfs_rtblock_t, xfs_rtblock_t *);
STATIC int xfs_rtfind_forw(xfs_mount_t *, xfs_trans_t *, xfs_rtblock_t,
xfs_rtblock_t, xfs_rtblock_t *);
STATIC int xfs_rtget_summary( xfs_mount_t *, xfs_trans_t *, int,
xfs_rtblock_t, xfs_buf_t **, xfs_fsblock_t *, xfs_suminfo_t *);
STATIC int xfs_rtmodify_range(xfs_mount_t *, xfs_trans_t *, xfs_rtblock_t,
xfs_extlen_t, int);
STATIC int xfs_rtmodify_summary(xfs_mount_t *, xfs_trans_t *, int,
xfs_rtblock_t, int, xfs_buf_t **, xfs_fsblock_t *);
STATIC int
xfs_growfs_rt_alloc(
xfs_mount_t	*mp,
xfs_extlen_t	oblocks,
xfs_extlen_t	nblocks,
xfs_inode_t	*ip)
STATIC int
xfs_rtallocate_extent_block(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	bbno,
xfs_extlen_t	minlen,
xfs_extlen_t	maxlen,
xfs_extlen_t	*len,
xfs_rtblock_t	*nextp,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
xfs_extlen_t	prod,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtallocate_extent_exact(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	bno,
xfs_extlen_t	minlen,
xfs_extlen_t	maxlen,
xfs_extlen_t	*len,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
xfs_extlen_t	prod,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtallocate_extent_near(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	bno,
xfs_extlen_t	minlen,
xfs_extlen_t	maxlen,
xfs_extlen_t	*len,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
xfs_extlen_t	prod,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtallocate_extent_size(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_extlen_t	minlen,
xfs_extlen_t	maxlen,
xfs_extlen_t	*len,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
xfs_extlen_t	prod,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtallocate_range(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_extlen_t	len,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb)
STATIC int
xfs_rtany_summary(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
int		low,
int		high,
xfs_rtblock_t	bbno,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
int		*stat)
STATIC int
xfs_rtbuf_get(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	block,
int		issum,
xfs_buf_t	**bpp)
STATIC int
xfs_rtcheck_alloc_range(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	bno,
xfs_extlen_t	len,
int		*stat)
STATIC int
xfs_rtcheck_range(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_extlen_t	len,
int		val,
xfs_rtblock_t	*new,
int		*stat)
STATIC int
xfs_rtcopy_summary(
xfs_mount_t	*omp,
xfs_mount_t	*nmp,
xfs_trans_t	*tp)
STATIC int
xfs_rtfind_back(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_rtblock_t	limit,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtfind_forw(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_rtblock_t	limit,
xfs_rtblock_t	*rtblock)
STATIC int
xfs_rtfree_range(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_extlen_t	len,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb)
STATIC int
xfs_rtget_summary(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
int		log,
xfs_rtblock_t	bbno,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb,
xfs_suminfo_t	*sum)
STATIC int
xfs_rtmodify_range(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_rtblock_t	start,
xfs_extlen_t	len,
int		val)
STATIC int
xfs_rtmodify_summary(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
int		log,
xfs_rtblock_t	bbno,
int		delta,
xfs_buf_t	**rbpp,
xfs_fsblock_t	*rsb)
int
xfs_growfs_rt(
xfs_mount_t	*mp,
xfs_growfs_rt_t	*in)
int
xfs_rtallocate_extent(
xfs_trans_t	*tp,
xfs_rtblock_t	bno,
xfs_extlen_t	minlen,
xfs_extlen_t	maxlen,
xfs_extlen_t	*len,
xfs_alloctype_t	type,
int		wasdel,
xfs_extlen_t	prod,
xfs_rtblock_t	*rtblock)
int
xfs_rtfree_extent(
xfs_trans_t	*tp,
xfs_rtblock_t	bno,
xfs_extlen_t	len)
int
xfs_rtmount_init(
xfs_mount_t	*mp)
int
xfs_rtmount_inodes(
xfs_mount_t	*mp)
void
xfs_rtunmount_inodes(
struct xfs_mount	*mp)
int
xfs_rtpick_extent(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_extlen_t	len,
xfs_rtblock_t	*pick)
