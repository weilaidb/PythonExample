#define	__XFS_BTREE_H__
struct xfs_buf;
struct xfs_bmap_free;
struct xfs_inode;
struct xfs_mount;
struct xfs_trans;
extern kmem_zone_t	*xfs_btree_cur_zone;
#define	XFS_LOOKUP_EQ	((xfs_lookup_t)XFS_LOOKUP_EQi)
#define	XFS_LOOKUP_LE	((xfs_lookup_t)XFS_LOOKUP_LEi)
#define	XFS_LOOKUP_GE	((xfs_lookup_t)XFS_LOOKUP_GEi)
#define	XFS_BTNUM_BNO	((xfs_btnum_t)XFS_BTNUM_BNOi)
#define	XFS_BTNUM_CNT	((xfs_btnum_t)XFS_BTNUM_CNTi)
#define	XFS_BTNUM_BMAP	((xfs_btnum_t)XFS_BTNUM_BMAPi)
#define	XFS_BTNUM_INO	((xfs_btnum_t)XFS_BTNUM_INOi)
struct xfs_btree_block ;
#define XFS_BTREE_SBLOCK_LEN	16
#define XFS_BTREE_LBLOCK_LEN	24
union xfs_btree_ptr ;
union xfs_btree_key ;
union xfs_btree_rec ;
#define	XFS_BB_MAGIC		0x01
#define	XFS_BB_LEVEL		0x02
#define	XFS_BB_NUMRECS		0x04
#define	XFS_BB_LEFTSIB		0x08
#define	XFS_BB_RIGHTSIB		0x10
#define	XFS_BB_NUM_BITS		5
#define	XFS_BB_ALL_BITS		((1 << XFS_BB_NUM_BITS) - 1)
extern const __uint32_t	xfs_magics[];
#define __XFS_BTREE_STATS_INC(type, stat) \
XFS_STATS_INC(xs_ ## type ## _2_ ## stat)
#define XFS_BTREE_STATS_INC(cur, stat)  \
do  while (0)
#define __XFS_BTREE_STATS_ADD(type, stat, val) \
XFS_STATS_ADD(xs_ ## type ## _2_ ## stat, val)
#define XFS_BTREE_STATS_ADD(cur, stat, val)  \
do  while (0)
#define	XFS_BTREE_MAXLEVELS	8
struct xfs_btree_ops ;
#define LASTREC_UPDATE	0
#define LASTREC_INSREC	1
#define LASTREC_DELREC	2
typedef struct xfs_btree_cur
xfs_btree_cur_t;
#define XFS_BTREE_LONG_PTRS		(1<<0)
#define XFS_BTREE_ROOT_IN_INODE		(1<<1)
#define XFS_BTREE_LASTREC_UPDATE	(1<<2)
#define	XFS_BTREE_NOERROR	0
#define	XFS_BTREE_ERROR		1
#define	XFS_BUF_TO_BLOCK(bp)	((struct xfs_btree_block *)XFS_BUF_PTR(bp))
int
xfs_btree_check_block(
struct xfs_btree_cur	*cur,
struct xfs_btree_block	*block,
int			level,
struct xfs_buf		*bp);
int
xfs_btree_check_lptr(
struct xfs_btree_cur	*cur,
xfs_dfsbno_t		ptr,
int			level);
void
xfs_btree_del_cursor(
xfs_btree_cur_t		*cur,
int			error);
int
xfs_btree_dup_cursor(
xfs_btree_cur_t		*cur,
xfs_btree_cur_t		**ncur);
struct xfs_buf *
xfs_btree_get_bufl(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_fsblock_t		fsbno,
uint			lock);
struct xfs_buf *
xfs_btree_get_bufs(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
xfs_agblock_t		agbno,
uint			lock);
int
xfs_btree_islastblock(
xfs_btree_cur_t		*cur,
int			level);
void
xfs_btree_offsets(
__int64_t		fields,
const short		*offsets,
int			nbits,
int			*first,
int			*last);
int
xfs_btree_read_bufl(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_fsblock_t		fsbno,
uint			lock,
struct xfs_buf		**bpp,
int			refval);
void
xfs_btree_reada_bufl(
struct xfs_mount	*mp,
xfs_fsblock_t		fsbno,
xfs_extlen_t		count);
void
xfs_btree_reada_bufs(
struct xfs_mount	*mp,
xfs_agnumber_t		agno,
xfs_agblock_t		agbno,
xfs_extlen_t		count);
int xfs_btree_increment(struct xfs_btree_cur *, int, int *);
int xfs_btree_decrement(struct xfs_btree_cur *, int, int *);
int xfs_btree_lookup(struct xfs_btree_cur *, xfs_lookup_t, int *);
int xfs_btree_update(struct xfs_btree_cur *, union xfs_btree_rec *);
int xfs_btree_new_iroot(struct xfs_btree_cur *, int *, int *);
int xfs_btree_insert(struct xfs_btree_cur *, int *);
int xfs_btree_delete(struct xfs_btree_cur *, int *);
int xfs_btree_get_rec(struct xfs_btree_cur *, union xfs_btree_rec **, int *);
void xfs_btree_log_block(struct xfs_btree_cur *, struct xfs_buf *, int);
void xfs_btree_log_recs(struct xfs_btree_cur *, struct xfs_buf *, int, int);
static inline int xfs_btree_get_numrecs(struct xfs_btree_block *block)
static inline void xfs_btree_set_numrecs(struct xfs_btree_block *block,
__uint16_t numrecs)
static inline int xfs_btree_get_level(struct xfs_btree_block *block)
#define	XFS_EXTLEN_MIN(a,b)	min_t(xfs_extlen_t, (a), (b))
#define	XFS_EXTLEN_MAX(a,b)	max_t(xfs_extlen_t, (a), (b))
#define	XFS_AGBLOCK_MIN(a,b)	min_t(xfs_agblock_t, (a), (b))
#define	XFS_AGBLOCK_MAX(a,b)	max_t(xfs_agblock_t, (a), (b))
#define	XFS_FILEOFF_MIN(a,b)	min_t(xfs_fileoff_t, (a), (b))
#define	XFS_FILEOFF_MAX(a,b)	max_t(xfs_fileoff_t, (a), (b))
#define	XFS_FILBLKS_MIN(a,b)	min_t(xfs_filblks_t, (a), (b))
#define	XFS_FILBLKS_MAX(a,b)	max_t(xfs_filblks_t, (a), (b))
#define	XFS_FSB_SANITY_CHECK(mp,fsb)	\
(XFS_FSB_TO_AGNO(mp, fsb) < mp->m_sb.sb_agcount && \
XFS_FSB_TO_AGBNO(mp, fsb) < mp->m_sb.sb_agblocks)
