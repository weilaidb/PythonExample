#define	__XFS_FSOPS_H__
extern int xfs_fs_geometry(xfs_mount_t *mp, xfs_fsop_geom_t *geo, int nversion);
extern int xfs_growfs_data(xfs_mount_t *mp, xfs_growfs_data_t *in);
extern int xfs_growfs_log(xfs_mount_t *mp, xfs_growfs_log_t *in);
extern int xfs_fs_counts(xfs_mount_t *mp, xfs_fsop_counts_t *cnt);
extern int xfs_reserve_blocks(xfs_mount_t *mp, __uint64_t *inval,
xfs_fsop_resblks_t *outval);
extern int xfs_fs_goingdown(xfs_mount_t *mp, __uint32_t inflags);
extern int xfs_fs_log_dummy(struct xfs_mount *mp);
