kmem_zone_t	*xfs_trans_zone;
kmem_zone_t	*xfs_log_item_desc_zone;
STATIC uint
xfs_calc_write_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_itruncate_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_rename_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_link_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_remove_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_symlink_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_create_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_mkdir_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_ifree_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_ichange_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_growdata_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_growrtalloc_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_growrtzero_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_growrtfree_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_swrite_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_writeid_reservation(xfs_mount_t *mp)
STATIC uint
xfs_calc_addafork_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_attrinval_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_attrset_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_attrrm_reservation(
struct xfs_mount	*mp)
STATIC uint
xfs_calc_clear_agi_bucket_reservation(
struct xfs_mount	*mp)
void
xfs_trans_init(
struct xfs_mount	*mp)
xfs_trans_t *
xfs_trans_alloc(
xfs_mount_t	*mp,
uint		type)
xfs_trans_t *
_xfs_trans_alloc(
xfs_mount_t	*mp,
uint		type,
uint		memflags)
STATIC void
xfs_trans_free(
struct xfs_trans	*tp)
xfs_trans_t *
xfs_trans_dup(
xfs_trans_t	*tp)
int
xfs_trans_reserve(
xfs_trans_t	*tp,
uint		blocks,
uint		logspace,
uint		rtextents,
uint		flags,
uint		logcount)
void
xfs_trans_mod_sb(
xfs_trans_t	*tp,
uint		field,
int64_t		delta)
STATIC void
xfs_trans_apply_sb_deltas(
xfs_trans_t	*tp)
void
xfs_trans_unreserve_and_mod_sb(
xfs_trans_t	*tp)
void
xfs_trans_add_item(
struct xfs_trans	*tp,
struct xfs_log_item	*lip)
STATIC void
xfs_trans_free_item_desc(
struct xfs_log_item_desc *lidp)
void
xfs_trans_del_item(
struct xfs_log_item	*lip)
void
xfs_trans_free_items(
struct xfs_trans	*tp,
xfs_lsn_t		commit_lsn,
int			flags)
STATIC void
xfs_trans_unlock_items(
struct xfs_trans	*tp,
xfs_lsn_t		commit_lsn)
static uint
xfs_trans_count_vecs(
struct xfs_trans	*tp)
static void
xfs_trans_fill_vecs(
struct xfs_trans	*tp,
struct xfs_log_iovec	*log_vector)
static void
xfs_trans_item_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		commit_lsn,
int			aborted)
STATIC void
xfs_trans_committed(
void			*arg,
int			abortflag)
static inline void
xfs_log_item_batch_insert(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
struct xfs_log_item	**log_items,
int			nr_items,
xfs_lsn_t		commit_lsn)
void
xfs_trans_committed_bulk(
struct xfs_ail		*ailp,
struct xfs_log_vec	*log_vector,
xfs_lsn_t		commit_lsn,
int			aborted)
STATIC void
xfs_trans_uncommit(
struct xfs_trans	*tp,
uint			flags)
static int
xfs_trans_commit_iclog(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_lsn_t		*commit_lsn,
int			flags)
STATIC struct xfs_log_vec *
xfs_trans_alloc_log_vecs(
xfs_trans_t	*tp)
static int
xfs_trans_commit_cil(
struct xfs_mount	*mp,
struct xfs_trans	*tp,
xfs_lsn_t		*commit_lsn,
int			flags)
int
_xfs_trans_commit(
struct xfs_trans	*tp,
uint			flags,
int			*log_flushed)
void
xfs_trans_cancel(
xfs_trans_t		*tp,
int			flags)
int
xfs_trans_roll(
struct xfs_trans	**tpp,
struct xfs_inode	*dp)
