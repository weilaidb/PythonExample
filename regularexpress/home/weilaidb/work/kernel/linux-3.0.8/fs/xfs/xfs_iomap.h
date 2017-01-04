#define __XFS_IOMAP_H__
struct xfs_inode;
struct xfs_bmbt_irec;
extern int xfs_iomap_write_direct(struct xfs_inode *, xfs_off_t, size_t,
struct xfs_bmbt_irec *, int);
extern int xfs_iomap_write_delay(struct xfs_inode *, xfs_off_t, size_t,
struct xfs_bmbt_irec *);
extern int xfs_iomap_write_allocate(struct xfs_inode *, xfs_off_t, size_t,
struct xfs_bmbt_irec *);
extern int xfs_iomap_write_unwritten(struct xfs_inode *, xfs_off_t, size_t);
