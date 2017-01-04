#define __XFS_DQUOT_H__
typedef struct xfs_dqhash  xfs_dqhash_t;
struct xfs_mount;
struct xfs_trans;
typedef struct xfs_dquot  xfs_dquot_t;
enum ;
#define XFS_DQHOLD(dqp)		((dqp)->q_nrefs++)
static inline void xfs_dqflock(xfs_dquot_t *dqp)
static inline int xfs_dqflock_nowait(xfs_dquot_t *dqp)
static inline void xfs_dqfunlock(xfs_dquot_t *dqp)
#define XFS_DQ_IS_LOCKED(dqp)	(mutex_is_locked(&((dqp)->q_qlock)))
#define XFS_DQ_IS_DIRTY(dqp)	((dqp)->dq_flags & XFS_DQ_DIRTY)
#define XFS_QM_ISUDQ(dqp)	((dqp)->dq_flags & XFS_DQ_USER)
#define XFS_QM_ISPDQ(dqp)	((dqp)->dq_flags & XFS_DQ_PROJ)
#define XFS_QM_ISGDQ(dqp)	((dqp)->dq_flags & XFS_DQ_GROUP)
#define XFS_DQ_TO_QINF(dqp)	((dqp)->q_mount->m_quotainfo)
#define XFS_DQ_TO_QIP(dqp)	(XFS_QM_ISUDQ(dqp) ? \
XFS_DQ_TO_QINF(dqp)->qi_uquotaip : \
XFS_DQ_TO_QINF(dqp)->qi_gquotaip)
#define XFS_IS_THIS_QUOTA_OFF(d) (! (XFS_QM_ISUDQ(d) ? \
(XFS_IS_UQUOTA_ON((d)->q_mount)) : \
(XFS_IS_OQUOTA_ON((d)->q_mount))))
extern void		xfs_qm_dqprint(xfs_dquot_t *);
#define xfs_qm_dqprint(a)
extern void		xfs_qm_dqdestroy(xfs_dquot_t *);
extern int		xfs_qm_dqflush(xfs_dquot_t *, uint);
extern int		xfs_qm_dqpurge(xfs_dquot_t *);
extern void		xfs_qm_dqunpin_wait(xfs_dquot_t *);
extern int		xfs_qm_dqlock_nowait(xfs_dquot_t *);
extern void		xfs_qm_dqflock_pushbuf_wait(xfs_dquot_t *dqp);
extern void		xfs_qm_adjust_dqtimers(xfs_mount_t *,
xfs_disk_dquot_t *);
extern void		xfs_qm_adjust_dqlimits(xfs_mount_t *,
xfs_disk_dquot_t *);
extern int		xfs_qm_dqget(xfs_mount_t *, xfs_inode_t *,
xfs_dqid_t, uint, uint, xfs_dquot_t **);
extern void		xfs_qm_dqput(xfs_dquot_t *);
extern void		xfs_dqlock(xfs_dquot_t *);
extern void		xfs_dqlock2(xfs_dquot_t *, xfs_dquot_t *);
extern void		xfs_dqunlock(xfs_dquot_t *);
extern void		xfs_dqunlock_nonotify(xfs_dquot_t *);
