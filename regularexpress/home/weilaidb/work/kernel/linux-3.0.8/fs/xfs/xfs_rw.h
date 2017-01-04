#define	__XFS_RW_H__
struct xfs_buf;
struct xfs_inode;
struct xfs_mount;
static inline xfs_daddr_t
xfs_fsb_to_db(struct xfs_inode *ip, xfs_fsblock_t fsb)
extern int xfs_read_buf(struct xfs_mount *mp, xfs_buftarg_t *btp,
xfs_daddr_t blkno, int len, uint flags,
struct xfs_buf **bpp);
extern void xfs_ioerror_alert(char *func, struct xfs_mount *mp,
xfs_buf_t *bp, xfs_daddr_t blkno);
extern xfs_extlen_t xfs_get_extsz_hint(struct xfs_inode *ip);
