#define	__XFS_TRANS_PRIV_H__
struct xfs_log_item;
struct xfs_log_item_desc;
struct xfs_mount;
struct xfs_trans;
struct xfs_ail;
struct xfs_log_vec;
void	xfs_trans_add_item(struct xfs_trans *, struct xfs_log_item *);
void	xfs_trans_del_item(struct xfs_log_item *);
void	xfs_trans_free_items(struct xfs_trans *tp, xfs_lsn_t commit_lsn,
int flags);
void	xfs_trans_unreserve_and_mod_sb(struct xfs_trans *tp);
void	xfs_trans_committed_bulk(struct xfs_ail *ailp, struct xfs_log_vec *lv,
xfs_lsn_t commit_lsn, int aborted);
struct xfs_ail_cursor ;
struct xfs_ail ;
void	xfs_trans_ail_update_bulk(struct xfs_ail *ailp,
struct xfs_ail_cursor *cur,
struct xfs_log_item **log_items, int nr_items,
xfs_lsn_t lsn) __releases(ailp->xa_lock);
static inline void
xfs_trans_ail_update(
struct xfs_ail		*ailp,
struct xfs_log_item	*lip,
xfs_lsn_t		lsn) __releases(ailp->xa_lock)
void	xfs_trans_ail_delete_bulk(struct xfs_ail *ailp,
struct xfs_log_item **log_items, int nr_items)
__releases(ailp->xa_lock);
static inline void
xfs_trans_ail_delete(
struct xfs_ail	*ailp,
xfs_log_item_t	*lip) __releases(ailp->xa_lock)
void			xfs_ail_push(struct xfs_ail *, xfs_lsn_t);
void			xfs_ail_push_all(struct xfs_ail *);
xfs_lsn_t		xfs_ail_min_lsn(struct xfs_ail *ailp);
void			xfs_trans_unlocked_item(struct xfs_ail *,
xfs_log_item_t *);
struct xfs_log_item *	xfs_trans_ail_cursor_first(struct xfs_ail *ailp,
struct xfs_ail_cursor *cur,
xfs_lsn_t lsn);
struct xfs_log_item *	xfs_trans_ail_cursor_last(struct xfs_ail *ailp,
struct xfs_ail_cursor *cur,
xfs_lsn_t lsn);
struct xfs_log_item *	xfs_trans_ail_cursor_next(struct xfs_ail *ailp,
struct xfs_ail_cursor *cur);
void			xfs_trans_ail_cursor_done(struct xfs_ail *ailp,
struct xfs_ail_cursor *cur);
#if BITS_PER_LONG != 64
static inline void
xfs_trans_ail_copy_lsn(
struct xfs_ail	*ailp,
xfs_lsn_t	*dst,
xfs_lsn_t	*src)
static inline void
xfs_trans_ail_copy_lsn(
struct xfs_ail	*ailp,
xfs_lsn_t	*dst,
xfs_lsn_t	*src)
