#define	__XFS_ALLOC_H__
struct xfs_buf;
struct xfs_btree_cur;
struct xfs_mount;
struct xfs_perag;
struct xfs_trans;
struct xfs_busy_extent;
#define XFS_ALLOCTYPE_ANY_AG	0x01
#define XFS_ALLOCTYPE_FIRST_AG	0x02
#define XFS_ALLOCTYPE_START_AG	0x04
#define XFS_ALLOCTYPE_THIS_AG	0x08
#define XFS_ALLOCTYPE_START_BNO	0x10
#define XFS_ALLOCTYPE_NEAR_BNO	0x20
#define XFS_ALLOCTYPE_THIS_BNO	0x40
typedef unsigned int xfs_alloctype_t;
#define XFS_ALLOC_TYPES \
, \
, \
, \
, \
, \
, \
#define	XFS_ALLOC_FLAG_TRYLOCK	0x00000001
#define	XFS_ALLOC_FLAG_FREEING	0x00000002
#define XFS_ALLOC_SET_ASIDE(mp)  (4 + ((mp)->m_sb.sb_agcount * 4))
#define XFS_ALLOC_AG_MAX_USABLE(mp)	\
((mp)->m_sb.sb_agblocks - XFS_BB_TO_FSB(mp, XFS_FSS_TO_BB(mp, 4)) - 7)
typedef struct xfs_alloc_arg  xfs_alloc_arg_t;
#define XFS_ALLOC_USERDATA		1
#define XFS_ALLOC_INITIAL_USER_DATA	2
xfs_extlen_t
xfs_alloc_longest_free_extent(struct xfs_mount *mp,
struct xfs_perag *pag);
void
xfs_alloc_busy_insert(struct xfs_trans *tp, xfs_agnumber_t agno,
xfs_agblock_t bno, xfs_extlen_t len, unsigned int flags);
void
xfs_alloc_busy_clear(struct xfs_mount *mp, struct list_head *list,
bool do_discard);
int
xfs_alloc_busy_search(struct xfs_mount *mp, xfs_agnumber_t agno,
xfs_agblock_t bno, xfs_extlen_t len);
void
xfs_alloc_busy_reuse(struct xfs_mount *mp, xfs_agnumber_t agno,
xfs_agblock_t fbno, xfs_extlen_t flen, bool userdata);
int
xfs_busy_extent_ag_cmp(void *priv, struct list_head *a, struct list_head *b);
static inline void xfs_alloc_busy_sort(struct list_head *list)
void
xfs_alloc_compute_maxlevels(
struct xfs_mount	*mp);
int
xfs_alloc_get_freelist(
struct xfs_trans *tp,
struct xfs_buf	*agbp,
xfs_agblock_t	*bnop,
int		btreeblk);
void
xfs_alloc_log_agf(
struct xfs_trans *tp,
struct xfs_buf	*bp,
int		fields);
int
xfs_alloc_pagf_init(
struct xfs_mount *mp,
struct xfs_trans *tp,
xfs_agnumber_t	agno,
int		flags);
int
xfs_alloc_put_freelist(
struct xfs_trans *tp,
struct xfs_buf	*agbp,
struct xfs_buf	*agflbp,
xfs_agblock_t	bno,
int		btreeblk);
int
xfs_alloc_read_agf(
struct xfs_mount *mp,
struct xfs_trans *tp,
xfs_agnumber_t	agno,
int		flags,
struct xfs_buf	**bpp);
int
xfs_alloc_vextent(
xfs_alloc_arg_t	*args);
int
xfs_free_extent(
struct xfs_trans *tp,
xfs_fsblock_t	bno,
xfs_extlen_t	len);
int
xfs_alloc_lookup_le(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
xfs_extlen_t		len,
int			*stat);
int
xfs_alloc_get_rec(
struct xfs_btree_cur	*cur,
xfs_agblock_t		*bno,
xfs_extlen_t		*len,
int			*stat);
