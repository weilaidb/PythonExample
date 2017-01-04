#define __XFS_UTILS_H__
extern int xfs_dir_ialloc(xfs_trans_t **, xfs_inode_t *, mode_t, xfs_nlink_t,
xfs_dev_t, prid_t, int, xfs_inode_t **, int *);
extern int xfs_droplink(xfs_trans_t *, xfs_inode_t *);
extern int xfs_bumplink(xfs_trans_t *, xfs_inode_t *);
extern void xfs_bump_ino_vers2(xfs_trans_t *, xfs_inode_t *);
