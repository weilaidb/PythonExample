int	xfs_etrap[XFS_ERROR_NTRAP] = ;
int
xfs_error_trap(int e)
int	xfs_etest[XFS_NUM_INJECT_ERROR];
int64_t	xfs_etest_fsid[XFS_NUM_INJECT_ERROR];
char *	xfs_etest_fsname[XFS_NUM_INJECT_ERROR];
int	xfs_error_test_active;
int
xfs_error_test(int error_tag, int *fsidp, char *expression,
int line, char *file, unsigned long randfactor)
int
xfs_errortag_add(int error_tag, xfs_mount_t *mp)
int
xfs_errortag_clearall(xfs_mount_t *mp, int loud)
void
xfs_error_report(
const char		*tag,
int			level,
struct xfs_mount	*mp,
const char		*filename,
int			linenum,
inst_t			*ra)
void
xfs_corruption_error(
const char		*tag,
int			level,
struct xfs_mount	*mp,
void			*p,
const char		*filename,
int			linenum,
inst_t			*ra)
