#define	__XFS_DIR2_DATA_H__
struct xfs_dabuf;
struct xfs_da_args;
struct xfs_inode;
struct xfs_trans;
#define	XFS_DIR2_DATA_MAGIC	0x58443244
#define	XFS_DIR2_DATA_ALIGN_LOG	3
#define	XFS_DIR2_DATA_ALIGN	(1 << XFS_DIR2_DATA_ALIGN_LOG)
#define	XFS_DIR2_DATA_FREE_TAG	0xffff
#define	XFS_DIR2_DATA_FD_COUNT	3
#define	XFS_DIR2_SPACE_SIZE	(1ULL << (32 + XFS_DIR2_DATA_ALIGN_LOG))
#define	XFS_DIR2_DATA_SPACE	0
#define	XFS_DIR2_DATA_OFFSET	(XFS_DIR2_DATA_SPACE * XFS_DIR2_SPACE_SIZE)
#define	XFS_DIR2_DATA_FIRSTDB(mp)	\
xfs_dir2_byte_to_db(mp, XFS_DIR2_DATA_OFFSET)
#define	XFS_DIR2_DATA_DOT_OFFSET	\
((xfs_dir2_data_aoff_t)sizeof(xfs_dir2_data_hdr_t))
#define	XFS_DIR2_DATA_DOTDOT_OFFSET	\
(XFS_DIR2_DATA_DOT_OFFSET + xfs_dir2_data_entsize(1))
#define	XFS_DIR2_DATA_FIRST_OFFSET		\
(XFS_DIR2_DATA_DOTDOT_OFFSET + xfs_dir2_data_entsize(2))
typedef struct xfs_dir2_data_free  xfs_dir2_data_free_t;
typedef struct xfs_dir2_data_hdr  xfs_dir2_data_hdr_t;
typedef struct xfs_dir2_data_entry  xfs_dir2_data_entry_t;
typedef struct xfs_dir2_data_unused  xfs_dir2_data_unused_t;
typedef union  xfs_dir2_data_union_t;
typedef struct xfs_dir2_data  xfs_dir2_data_t;
static inline int xfs_dir2_data_entsize(int n)
static inline __be16 *
xfs_dir2_data_entry_tag_p(xfs_dir2_data_entry_t *dep)
static inline __be16 *
xfs_dir2_data_unused_tag_p(xfs_dir2_data_unused_t *dup)
extern void xfs_dir2_data_check(struct xfs_inode *dp, struct xfs_dabuf *bp);
#define	xfs_dir2_data_check(dp,bp)
extern xfs_dir2_data_free_t *xfs_dir2_data_freefind(xfs_dir2_data_t *d,
xfs_dir2_data_unused_t *dup);
extern xfs_dir2_data_free_t *xfs_dir2_data_freeinsert(xfs_dir2_data_t *d,
xfs_dir2_data_unused_t *dup, int *loghead);
extern void xfs_dir2_data_freescan(struct xfs_mount *mp, xfs_dir2_data_t *d,
int *loghead);
extern int xfs_dir2_data_init(struct xfs_da_args *args, xfs_dir2_db_t blkno,
struct xfs_dabuf **bpp);
extern void xfs_dir2_data_log_entry(struct xfs_trans *tp, struct xfs_dabuf *bp,
xfs_dir2_data_entry_t *dep);
extern void xfs_dir2_data_log_header(struct xfs_trans *tp,
struct xfs_dabuf *bp);
extern void xfs_dir2_data_log_unused(struct xfs_trans *tp, struct xfs_dabuf *bp,
xfs_dir2_data_unused_t *dup);
extern void xfs_dir2_data_make_free(struct xfs_trans *tp, struct xfs_dabuf *bp,
xfs_dir2_data_aoff_t offset,
xfs_dir2_data_aoff_t len, int *needlogp,
int *needscanp);
extern void xfs_dir2_data_use_free(struct xfs_trans *tp, struct xfs_dabuf *bp,
xfs_dir2_data_unused_t *dup,
xfs_dir2_data_aoff_t offset,
xfs_dir2_data_aoff_t len, int *needlogp,
int *needscanp);
