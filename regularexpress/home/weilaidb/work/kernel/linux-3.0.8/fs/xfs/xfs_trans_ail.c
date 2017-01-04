STATIC void
xfs_ail_check(
struct xfs_ail	*ailp,
xfs_log_item_t	*lip)
#define	xfs_ail_check(a,l)
static xfs_log_item_t *
xfs_ail_min(
struct xfs_ail  *ailp)
static xfs_log_item_t *
xfs_ail_max(
struct xfs_ail  *ailp)
static xfs_log_item_t *
xfs_ail_next(
struct xfs_ail  *ailp,
xfs_log_item_t  *lip)
xfs_lsn_t
xfs_ail_min_lsn(
struct xfs_ail	*ailp)
static xfs_lsn_t
xfs_ail_max_lsn(
struct xfs_ail  *ailp)
STATIC void
xfs_trans_ail_cursor_init(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur)
STATIC void
xfs_trans_ail_cursor_set(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
struct xfs_log_item	*lip)
struct xfs_log_item *
xfs_trans_ail_cursor_next(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur)
void
xfs_trans_ail_cursor_done(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*done)
STATIC void
xfs_trans_ail_cursor_clear(
struct xfs_ail		*ailp,
struct xfs_log_item	*lip)
xfs_log_item_t *
xfs_trans_ail_cursor_first(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
xfs_lsn_t		lsn)
static struct xfs_log_item *
__xfs_trans_ail_cursor_last(
struct xfs_ail		*ailp,
xfs_lsn_t		lsn)
struct xfs_log_item *
xfs_trans_ail_cursor_last(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
xfs_lsn_t		lsn)
static void
xfs_ail_splice(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
struct list_head	*list,
xfs_lsn_t		lsn)
static void
xfs_ail_delete(
struct xfs_ail  *ailp,
xfs_log_item_t  *lip)
static long
xfsaild_push(
struct xfs_ail		*ailp)
static int
xfsaild(
void		*data)
void
xfs_ail_push(
struct xfs_ail	*ailp,
xfs_lsn_t	threshold_lsn)
void
xfs_ail_push_all(
struct xfs_ail  *ailp)
void
xfs_trans_unlocked_item(
struct xfs_ail	*ailp,
xfs_log_item_t	*lip)
void
xfs_trans_ail_update_bulk(
struct xfs_ail		*ailp,
struct xfs_ail_cursor	*cur,
struct xfs_log_item	**log_items,
int			nr_items,
xfs_lsn_t		lsn) __releases(ailp->xa_lock)
void
xfs_trans_ail_delete_bulk(
struct xfs_ail		*ailp,
struct xfs_log_item	**log_items,
int			nr_items) __releases(ailp->xa_lock)
int
xfs_trans_ail_init(
xfs_mount_t	*mp)
void
xfs_trans_ail_destroy(
xfs_mount_t	*mp)
