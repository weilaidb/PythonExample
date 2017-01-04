STATIC void	xfs_trans_alloc_dqinfo(xfs_trans_t *);
void
xfs_trans_dqjoin(
xfs_trans_t	*tp,
xfs_dquot_t	*dqp)
void
xfs_trans_log_dquot(
xfs_trans_t	*tp,
xfs_dquot_t	*dqp)
void
xfs_trans_dup_dqinfo(
xfs_trans_t	*otp,
xfs_trans_t	*ntp)
void
xfs_trans_mod_dquot_byino(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
uint		field,
long		delta)
STATIC xfs_dqtrx_t *
xfs_trans_get_dqtrx(
xfs_trans_t	*tp,
xfs_dquot_t	*dqp)
void
xfs_trans_mod_dquot(
xfs_trans_t	*tp,
xfs_dquot_t	*dqp,
uint		field,
long		delta)
STATIC void
xfs_trans_dqlockedjoin(
xfs_trans_t	*tp,
xfs_dqtrx_t	*q)
void
xfs_trans_apply_dquot_deltas(
xfs_trans_t		*tp)
void
xfs_trans_unreserve_and_mod_dquots(
xfs_trans_t		*tp)
STATIC void
xfs_quota_warn(
struct xfs_mount	*mp,
struct xfs_dquot	*dqp,
int			type)
STATIC int
xfs_trans_dqresv(
xfs_trans_t	*tp,
xfs_mount_t	*mp,
xfs_dquot_t	*dqp,
long		nblks,
long		ninos,
uint		flags)
int
xfs_trans_reserve_quota_bydquots(
xfs_trans_t	*tp,
xfs_mount_t	*mp,
xfs_dquot_t	*udqp,
xfs_dquot_t	*gdqp,
long		nblks,
long		ninos,
uint		flags)
int
xfs_trans_reserve_quota_nblks(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
long			nblks,
long			ninos,
uint			flags)
xfs_qoff_logitem_t *
xfs_trans_get_qoff_item(
xfs_trans_t		*tp,
xfs_qoff_logitem_t	*startqoff,
uint			flags)
void
xfs_trans_log_quotaoff_item(
xfs_trans_t		*tp,
xfs_qoff_logitem_t	*qlp)
STATIC void
xfs_trans_alloc_dqinfo(
xfs_trans_t	*tp)
void
xfs_trans_free_dqinfo(
xfs_trans_t	*tp)
