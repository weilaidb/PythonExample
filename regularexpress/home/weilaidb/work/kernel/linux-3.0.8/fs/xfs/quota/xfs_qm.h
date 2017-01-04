#define __XFS_QM_H__
struct xfs_qm;
struct xfs_inode;
extern uint		ndquot;
extern struct mutex	xfs_Gqm_lock;
extern struct xfs_qm	*xfs_Gqm;
extern kmem_zone_t	*qm_dqzone;
extern kmem_zone_t	*qm_dqtrxzone;
#define XFS_QM_SYNC_MAX_RESTARTS	7
#define XFS_QM_RECLAIM_MAX_RESTARTS	4
#define XFS_QM_DQFREE_RATIO		2
#define XFS_QM_HASHSIZE_LOW		(PAGE_SIZE / sizeof(xfs_dqhash_t))
#define XFS_QM_HASHSIZE_HIGH		((PAGE_SIZE * 4) / sizeof(xfs_dqhash_t))
#define XFS_DQUOT_CLUSTER_SIZE_FSB	(xfs_filblks_t)1
typedef xfs_dqhash_t	xfs_dqlist_t;
typedef struct xfs_qm  xfs_qm_t;
typedef struct xfs_quotainfo  xfs_quotainfo_t;
extern void	xfs_trans_mod_dquot(xfs_trans_t *, xfs_dquot_t *, uint, long);
extern int	xfs_trans_reserve_quota_bydquots(xfs_trans_t *, xfs_mount_t *,
xfs_dquot_t *, xfs_dquot_t *, long, long, uint);
extern void	xfs_trans_dqjoin(xfs_trans_t *, xfs_dquot_t *);
extern void	xfs_trans_log_dquot(xfs_trans_t *, xfs_dquot_t *);
#define XFS_QM_TRANS_MAXDQS		2
typedef struct xfs_dquot_acct  xfs_dquot_acct_t;
#define XFS_QM_BTIMELIMIT	(7 * 24*60*60)
#define XFS_QM_RTBTIMELIMIT	(7 * 24*60*60)
#define XFS_QM_ITIMELIMIT	(7 * 24*60*60)
#define XFS_QM_BWARNLIMIT	5
#define XFS_QM_IWARNLIMIT	5
#define XFS_QM_RTBWARNLIMIT	5
extern void		xfs_qm_destroy_quotainfo(xfs_mount_t *);
extern int		xfs_qm_quotacheck(xfs_mount_t *);
extern int		xfs_qm_write_sb_changes(xfs_mount_t *, __int64_t);
extern boolean_t	xfs_qm_dqalloc_incore(xfs_dquot_t **);
extern int		xfs_qm_dqpurge_all(xfs_mount_t *, uint);
extern void		xfs_qm_dqrele_all_inodes(xfs_mount_t *, uint);
extern int		xfs_qm_scall_trunc_qfiles(xfs_mount_t *, uint);
extern int		xfs_qm_scall_getquota(xfs_mount_t *, xfs_dqid_t, uint,
fs_disk_quota_t *);
extern int		xfs_qm_scall_setqlim(xfs_mount_t *, xfs_dqid_t, uint,
fs_disk_quota_t *);
extern int		xfs_qm_scall_getqstat(xfs_mount_t *, fs_quota_stat_t *);
extern int		xfs_qm_scall_quotaon(xfs_mount_t *, uint);
extern int		xfs_qm_scall_quotaoff(xfs_mount_t *, uint);
extern int		xfs_qm_internalqcheck(xfs_mount_t *);
#define xfs_qm_internalqcheck(mp)	(0)
