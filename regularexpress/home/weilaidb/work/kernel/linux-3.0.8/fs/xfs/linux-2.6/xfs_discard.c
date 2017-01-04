STATIC int
xfs_trim_extents(
struct xfs_mount	*mp,
xfs_agnumber_t		agno,
xfs_fsblock_t		start,
xfs_fsblock_t		len,
xfs_fsblock_t		minlen,
__uint64_t		*blocks_trimmed)
int
xfs_ioc_trim(
struct xfs_mount		*mp,
struct fstrim_range __user	*urange)
int
xfs_discard_extents(
struct xfs_mount	*mp,
struct list_head	*list)
