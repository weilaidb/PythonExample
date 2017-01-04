#define __XFS_DQUOT_ITEM_H__
struct xfs_dquot;
struct xfs_trans;
struct xfs_mount;
struct xfs_qoff_logitem;
typedef struct xfs_dq_logitem  xfs_dq_logitem_t;
typedef struct xfs_qoff_logitem  xfs_qoff_logitem_t;
extern void		   xfs_qm_dquot_logitem_init(struct xfs_dquot *);
extern xfs_qoff_logitem_t *xfs_qm_qoff_logitem_init(struct xfs_mount *,
struct xfs_qoff_logitem *, uint);
extern xfs_qoff_logitem_t *xfs_trans_get_qoff_item(struct xfs_trans *,
struct xfs_qoff_logitem *, uint);
extern void		   xfs_trans_log_quotaoff_item(struct xfs_trans *,
struct xfs_qoff_logitem *);
