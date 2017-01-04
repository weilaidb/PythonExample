STATIC struct xfs_buf *
xfs_trans_buf_item_match(
struct xfs_trans	*tp,
struct xfs_buftarg	*target,
xfs_daddr_t		blkno,
int			len)
STATIC void
_xfs_trans_bjoin(
struct xfs_trans	*tp,
struct xfs_buf		*bp,
int			reset_recur)
void
xfs_trans_bjoin(
struct xfs_trans	*tp,
struct xfs_buf		*bp)
xfs_buf_t *
xfs_trans_get_buf(xfs_trans_t	*tp,
xfs_buftarg_t	*target_dev,
xfs_daddr_t	blkno,
int		len,
uint		flags)
xfs_buf_t *
xfs_trans_getsb(xfs_trans_t	*tp,
struct xfs_mount *mp,
int		flags)
xfs_buftarg_t *xfs_error_target;
int	xfs_do_error;
int	xfs_req_num;
int	xfs_error_mod = 33;
int
xfs_trans_read_buf(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_buftarg_t	*target,
xfs_daddr_t	blkno,
int		len,
uint		flags,
xfs_buf_t	**bpp)
void
xfs_trans_brelse(xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_bhold(xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_bhold_release(xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_log_buf(xfs_trans_t	*tp,
xfs_buf_t	*bp,
uint		first,
uint		last)
void
xfs_trans_binval(
xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_inode_buf(
xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_stale_inode_buf(
xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_inode_alloc_buf(
xfs_trans_t	*tp,
xfs_buf_t	*bp)
void
xfs_trans_dquot_buf(
xfs_trans_t	*tp,
xfs_buf_t	*bp,
uint		type)
