#define	__XFS_IALLOC_BTREE_H__
struct xfs_buf;
struct xfs_btree_cur;
struct xfs_mount;
#define	XFS_IBT_MAGIC	0x49414254
typedef	__uint64_t	xfs_inofree_t;
#define	XFS_INODES_PER_CHUNK		(NBBY * sizeof(xfs_inofree_t))
#define	XFS_INODES_PER_CHUNK_LOG	(XFS_NBBYLOG + 3)
#define	XFS_INOBT_ALL_FREE		((xfs_inofree_t)-1)
#define	XFS_INOBT_MASK(i)		((xfs_inofree_t)1 << (i))
static inline xfs_inofree_t xfs_inobt_maskn(int i, int n)
typedef struct xfs_inobt_rec  xfs_inobt_rec_t;
typedef struct xfs_inobt_rec_incore  xfs_inobt_rec_incore_t;
typedef struct xfs_inobt_key  xfs_inobt_key_t;
typedef __be32 xfs_inobt_ptr_t;
#define	XFS_IBT_BLOCK(mp)		((xfs_agblock_t)(XFS_CNT_BLOCK(mp) + 1))
#define	XFS_PREALLOC_BLOCKS(mp)		((xfs_agblock_t)(XFS_IBT_BLOCK(mp) + 1))
#define XFS_INOBT_BLOCK_LEN(mp)	XFS_BTREE_SBLOCK_LEN
#define XFS_INOBT_REC_ADDR(mp, block, index) \
((xfs_inobt_rec_t *) \
((char *)(block) + \
XFS_INOBT_BLOCK_LEN(mp) + \
(((index) - 1) * sizeof(xfs_inobt_rec_t))))
#define XFS_INOBT_KEY_ADDR(mp, block, index) \
((xfs_inobt_key_t *) \
((char *)(block) + \
XFS_INOBT_BLOCK_LEN(mp) + \
((index) - 1) * sizeof(xfs_inobt_key_t)))
#define XFS_INOBT_PTR_ADDR(mp, block, index, maxrecs) \
((xfs_inobt_ptr_t *) \
((char *)(block) + \
XFS_INOBT_BLOCK_LEN(mp) + \
(maxrecs) * sizeof(xfs_inobt_key_t) + \
((index) - 1) * sizeof(xfs_inobt_ptr_t)))
extern struct xfs_btree_cur *xfs_inobt_init_cursor(struct xfs_mount *,
struct xfs_trans *, struct xfs_buf *, xfs_agnumber_t);
extern int xfs_inobt_maxrecs(struct xfs_mount *, int, int);
