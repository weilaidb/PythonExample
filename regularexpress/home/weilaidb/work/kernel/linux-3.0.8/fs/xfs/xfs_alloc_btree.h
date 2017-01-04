#define	__XFS_ALLOC_BTREE_H__
struct xfs_buf;
struct xfs_btree_cur;
struct xfs_mount;
#define	XFS_ABTB_MAGIC	0x41425442
#define	XFS_ABTC_MAGIC	0x41425443
typedef struct xfs_alloc_rec  xfs_alloc_rec_t, xfs_alloc_key_t;
typedef struct xfs_alloc_rec_incore  xfs_alloc_rec_incore_t;
typedef __be32 xfs_alloc_ptr_t;
#define XFS_MIN_BLOCKSIZE_LOG	9
#define XFS_MAX_BLOCKSIZE_LOG	16
#define XFS_MIN_BLOCKSIZE	(1 << XFS_MIN_BLOCKSIZE_LOG)
#define XFS_MAX_BLOCKSIZE	(1 << XFS_MAX_BLOCKSIZE_LOG)
#define XFS_MIN_SECTORSIZE_LOG	9
#define XFS_MAX_SECTORSIZE_LOG	15
#define XFS_MIN_SECTORSIZE	(1 << XFS_MIN_SECTORSIZE_LOG)
#define XFS_MAX_SECTORSIZE	(1 << XFS_MAX_SECTORSIZE_LOG)
#define	XFS_BNO_BLOCK(mp)	((xfs_agblock_t)(XFS_AGFL_BLOCK(mp) + 1))
#define	XFS_CNT_BLOCK(mp)	((xfs_agblock_t)(XFS_BNO_BLOCK(mp) + 1))
#define XFS_ALLOC_BLOCK_LEN(mp)	XFS_BTREE_SBLOCK_LEN
#define XFS_ALLOC_REC_ADDR(mp, block, index) \
((xfs_alloc_rec_t *) \
((char *)(block) + \
XFS_ALLOC_BLOCK_LEN(mp) + \
(((index) - 1) * sizeof(xfs_alloc_rec_t))))
#define XFS_ALLOC_KEY_ADDR(mp, block, index) \
((xfs_alloc_key_t *) \
((char *)(block) + \
XFS_ALLOC_BLOCK_LEN(mp) + \
((index) - 1) * sizeof(xfs_alloc_key_t)))
#define XFS_ALLOC_PTR_ADDR(mp, block, index, maxrecs) \
((xfs_alloc_ptr_t *) \
((char *)(block) + \
XFS_ALLOC_BLOCK_LEN(mp) + \
(maxrecs) * sizeof(xfs_alloc_key_t) + \
((index) - 1) * sizeof(xfs_alloc_ptr_t)))
extern struct xfs_btree_cur *xfs_allocbt_init_cursor(struct xfs_mount *,
struct xfs_trans *, struct xfs_buf *,
xfs_agnumber_t, xfs_btnum_t);
extern int xfs_allocbt_maxrecs(struct xfs_mount *, int, int);
