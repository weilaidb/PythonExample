#define XFS_ABSDIFF(a,b)	(((a) <= (b)) ? ((b) - (a)) : ((a) - (b)))
#define	XFSA_FIXUP_BNO_OK	1
#define	XFSA_FIXUP_CNT_OK	2
STATIC int xfs_alloc_ag_vextent_exact(xfs_alloc_arg_t *);
STATIC int xfs_alloc_ag_vextent_near(xfs_alloc_arg_t *);
STATIC int xfs_alloc_ag_vextent_size(xfs_alloc_arg_t *);
STATIC int xfs_alloc_ag_vextent_small(xfs_alloc_arg_t *,
xfs_btree_cur_t *, xfs_agblock_t *, xfs_extlen_t *, int *);
STATIC void xfs_alloc_busy_trim(struct xfs_alloc_arg *,
xfs_agblock_t, xfs_extlen_t, xfs_agblock_t *, xfs_extlen_t *);
STATIC int
xfs_alloc_lookup_eq(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
xfs_extlen_t		len,
int			*stat)
STATIC int
xfs_alloc_lookup_ge(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
xfs_extlen_t		len,
int			*stat)
int
xfs_alloc_lookup_le(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
xfs_extlen_t		len,
int			*stat)
STATIC int
xfs_alloc_update(
struct xfs_btree_cur	*cur,
xfs_agblock_t		bno,
xfs_extlen_t		len)
int
xfs_alloc_get_rec(
struct xfs_btree_cur	*cur,
xfs_agblock_t		*bno,
xfs_extlen_t		*len,
int			*stat)
STATIC void
xfs_alloc_compute_aligned(
xfs_alloc_arg_t	*args,
xfs_agblock_t	foundbno,
xfs_extlen_t	foundlen,
xfs_agblock_t	*resbno,
xfs_extlen_t	*reslen)
STATIC xfs_extlen_t
xfs_alloc_compute_diff(
xfs_agblock_t	wantbno,
xfs_extlen_t	wantlen,
xfs_extlen_t	alignment,
xfs_agblock_t	freebno,
xfs_extlen_t	freelen,
xfs_agblock_t	*newbnop)
STATIC void
xfs_alloc_fix_len(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_fix_minleft(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_fixup_trees(
xfs_btree_cur_t	*cnt_cur,
xfs_btree_cur_t	*bno_cur,
xfs_agblock_t	fbno,
xfs_extlen_t	flen,
xfs_agblock_t	rbno,
xfs_extlen_t	rlen,
int		flags)
STATIC int
xfs_alloc_read_agfl(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_agnumber_t	agno,
xfs_buf_t	**bpp)
STATIC int
xfs_alloc_update_counters(
struct xfs_trans	*tp,
struct xfs_perag	*pag,
struct xfs_buf		*agbp,
long			len)
STATIC int
xfs_alloc_ag_vextent(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_ag_vextent_exact(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_find_best_extent(
struct xfs_alloc_arg	*args,
struct xfs_btree_cur	**gcur,
struct xfs_btree_cur	**scur,
xfs_agblock_t		gdiff,
xfs_agblock_t		*sbno,
xfs_extlen_t		*slen,
xfs_agblock_t		*sbnoa,
xfs_extlen_t		*slena,
int			dir)
STATIC int
xfs_alloc_ag_vextent_near(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_ag_vextent_size(
xfs_alloc_arg_t	*args)
STATIC int
xfs_alloc_ag_vextent_small(
xfs_alloc_arg_t	*args,
xfs_btree_cur_t	*ccur,
xfs_agblock_t	*fbnop,
xfs_extlen_t	*flenp,
int		*stat)
STATIC int
xfs_free_ag_extent(
xfs_trans_t	*tp,
xfs_buf_t	*agbp,
xfs_agnumber_t	agno,
xfs_agblock_t	bno,
xfs_extlen_t	len,
int		isfl)
void
xfs_alloc_compute_maxlevels(
xfs_mount_t	*mp)
xfs_extlen_t
xfs_alloc_longest_free_extent(
struct xfs_mount	*mp,
struct xfs_perag	*pag)
STATIC int
xfs_alloc_fix_freelist(
xfs_alloc_arg_t	*args,
int		flags)
int
xfs_alloc_get_freelist(
xfs_trans_t	*tp,
xfs_buf_t	*agbp,
xfs_agblock_t	*bnop,
int		btreeblk)
void
xfs_alloc_log_agf(
xfs_trans_t	*tp,
xfs_buf_t	*bp,
int		fields)
int
xfs_alloc_pagf_init(
xfs_mount_t		*mp,
xfs_trans_t		*tp,
xfs_agnumber_t		agno,
int			flags)
int
xfs_alloc_put_freelist(
xfs_trans_t		*tp,
xfs_buf_t		*agbp,
xfs_buf_t		*agflbp,
xfs_agblock_t		bno,
int			btreeblk)
int
xfs_read_agf(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
int			flags,
struct xfs_buf		**bpp)
int
xfs_alloc_read_agf(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
int			flags,
struct xfs_buf		**bpp)
int
xfs_alloc_vextent(
xfs_alloc_arg_t	*args)
int
xfs_free_extent(
xfs_trans_t	*tp,
xfs_fsblock_t	bno,
xfs_extlen_t	len)
void
xfs_alloc_busy_insert(
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
xfs_agblock_t		bno,
xfs_extlen_t		len,
unsigned int		flags)
int
xfs_alloc_busy_search(
struct xfs_mount	*mp,
xfs_agnumber_t		agno,
xfs_agblock_t		bno,
xfs_extlen_t		len)
STATIC bool
xfs_alloc_busy_update_extent(
struct xfs_mount	*mp,
struct xfs_perag	*pag,
struct xfs_busy_extent	*busyp,
xfs_agblock_t		fbno,
xfs_extlen_t		flen,
bool			userdata)
void
xfs_alloc_busy_reuse(
struct xfs_mount	*mp,
xfs_agnumber_t		agno,
xfs_agblock_t		fbno,
xfs_extlen_t		flen,
bool			userdata)
STATIC void
xfs_alloc_busy_trim(
struct xfs_alloc_arg	*args,
xfs_agblock_t		bno,
xfs_extlen_t		len,
xfs_agblock_t		*rbno,
xfs_extlen_t		*rlen)
static void
xfs_alloc_busy_clear_one(
struct xfs_mount	*mp,
struct xfs_perag	*pag,
struct xfs_busy_extent	*busyp)
void
xfs_alloc_busy_clear(
struct xfs_mount	*mp,
struct list_head	*list,
bool			do_discard)
int
xfs_busy_extent_ag_cmp(
void			*priv,
struct list_head	*a,
struct list_head	*b)
