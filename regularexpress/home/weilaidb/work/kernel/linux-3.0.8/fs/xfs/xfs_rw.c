void
xfs_do_force_shutdown(
xfs_mount_t	*mp,
int		flags,
char		*fname,
int		lnnum)
void
xfs_ioerror_alert(
char			*func,
struct xfs_mount	*mp,
xfs_buf_t		*bp,
xfs_daddr_t		blkno)
int
xfs_read_buf(
struct xfs_mount *mp,
xfs_buftarg_t	 *target,
xfs_daddr_t	 blkno,
int              len,
uint             flags,
xfs_buf_t	 **bpp)
xfs_extlen_t
xfs_get_extsz_hint(
struct xfs_inode	*ip)
