static inline struct xfs_dq_logitem *DQUOT_ITEM(struct xfs_log_item *lip)
STATIC uint
xfs_qm_dquot_logitem_size(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_dquot_logitem_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*logvec)
STATIC void
xfs_qm_dquot_logitem_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_dquot_logitem_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC void
xfs_qm_dquot_logitem_push(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_qm_dquot_logitem_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
void
xfs_qm_dqunpin_wait(
struct xfs_dquot	*dqp)
STATIC bool
xfs_qm_dquot_logitem_pushbuf(
struct xfs_log_item	*lip)
STATIC uint
xfs_qm_dquot_logitem_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_dquot_logitem_unlock(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_dquot_logitem_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
static struct xfs_item_ops xfs_dquot_item_ops = ;
void
xfs_qm_dquot_logitem_init(
struct xfs_dquot	*dqp)
static inline struct xfs_qoff_logitem *QOFF_ITEM(struct xfs_log_item *lip)
STATIC uint
xfs_qm_qoff_logitem_size(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_qoff_logitem_format(
struct xfs_log_item	*lip,
struct xfs_log_iovec	*log_vector)
STATIC void
xfs_qm_qoff_logitem_pin(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_qoff_logitem_unpin(
struct xfs_log_item	*lip,
int			remove)
STATIC uint
xfs_qm_qoff_logitem_trylock(
struct xfs_log_item	*lip)
STATIC void
xfs_qm_qoff_logitem_unlock(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_qm_qoff_logitem_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC void
xfs_qm_qoff_logitem_push(
struct xfs_log_item	*lip)
STATIC xfs_lsn_t
xfs_qm_qoffend_logitem_committed(
struct xfs_log_item	*lip,
xfs_lsn_t		lsn)
STATIC void
xfs_qm_qoff_logitem_committing(
struct xfs_log_item	*lip,
xfs_lsn_t		commit_lsn)
static struct xfs_item_ops xfs_qm_qoffend_logitem_ops = ;
static struct xfs_item_ops xfs_qm_qoff_logitem_ops = ;
struct xfs_qoff_logitem *
xfs_qm_qoff_logitem_init(
struct xfs_mount	*mp,
struct xfs_qoff_logitem	*start,
uint			flags)
