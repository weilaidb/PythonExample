static inline int
xfs_ialloc_cluster_alignment(
xfs_alloc_arg_t	*args)
int
xfs_inobt_lookup(
struct xfs_btree_cur	*cur,
xfs_agino_t		ino,
xfs_lookup_t		dir,
int			*stat)
STATIC int
xfs_inobt_update(
struct xfs_btree_cur	*cur,
xfs_inobt_rec_incore_t	*irec)
int
xfs_inobt_get_rec(
struct xfs_btree_cur	*cur,
xfs_inobt_rec_incore_t	*irec,
int			*stat)
STATIC int
xfs_check_agi_freecount(
struct xfs_btree_cur	*cur,
struct xfs_agi		*agi)
#define xfs_check_agi_freecount(cur, agi)	0
STATIC void
xfs_ialloc_inode_init(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
xfs_agblock_t		agbno,
xfs_agblock_t		length,
unsigned int		gen)
STATIC int
xfs_ialloc_ag_alloc(
xfs_trans_t	*tp,
xfs_buf_t	*agbp,
int		*alloc)
STATIC xfs_agnumber_t
xfs_ialloc_next_ag(
xfs_mount_t	*mp)
STATIC xfs_buf_t *
xfs_ialloc_ag_select(
xfs_trans_t	*tp,
xfs_ino_t	parent,
mode_t		mode,
int		okalloc)
STATIC int
xfs_ialloc_next_rec(
struct xfs_btree_cur	*cur,
xfs_inobt_rec_incore_t	*rec,
int			*done,
int			left)
STATIC int
xfs_ialloc_get_rec(
struct xfs_btree_cur	*cur,
xfs_agino_t		agino,
xfs_inobt_rec_incore_t	*rec,
int			*done,
int			left)
int
xfs_dialloc(
xfs_trans_t	*tp,
xfs_ino_t	parent,
mode_t		mode,
int		okalloc,
xfs_buf_t	**IO_agbp,
boolean_t	*alloc_done,
xfs_ino_t	*inop)
int
xfs_difree(
xfs_trans_t	*tp,
xfs_ino_t	inode,
xfs_bmap_free_t	*flist,
int		*delete,
xfs_ino_t	*first_ino)
STATIC int
xfs_imap_lookup(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
xfs_agino_t		agino,
xfs_agblock_t		agbno,
xfs_agblock_t		*chunk_agbno,
xfs_agblock_t		*offset_agbno,
int			flags)
int
xfs_imap(
xfs_mount_t	 *mp,
xfs_trans_t	 *tp,
xfs_ino_t	ino,
struct xfs_imap	*imap,
uint		flags)
void
xfs_ialloc_compute_maxlevels(
xfs_mount_t	*mp)
void
xfs_ialloc_log_agi(
xfs_trans_t	*tp,
xfs_buf_t	*bp,
int		fields)
STATIC void
xfs_check_agi_unlinked(
struct xfs_agi		*agi)
#define xfs_check_agi_unlinked(agi)
int
xfs_read_agi(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
struct xfs_buf		**bpp)
int
xfs_ialloc_read_agi(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_agnumber_t		agno,
struct xfs_buf		**bpp)
int
xfs_ialloc_pagi_init(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_agnumber_t	agno)
