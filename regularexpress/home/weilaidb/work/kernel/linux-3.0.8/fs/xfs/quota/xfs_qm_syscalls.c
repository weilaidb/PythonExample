STATIC int	xfs_qm_log_quotaoff(xfs_mount_t *, xfs_qoff_logitem_t **, uint);
STATIC int	xfs_qm_log_quotaoff_end(xfs_mount_t *, xfs_qoff_logitem_t *,
uint);
STATIC uint	xfs_qm_export_flags(uint);
STATIC uint	xfs_qm_export_qtype_flags(uint);
STATIC void	xfs_qm_export_dquot(xfs_mount_t *, xfs_disk_dquot_t *,
fs_disk_quota_t *);
int
xfs_qm_scall_quotaoff(
xfs_mount_t		*mp,
uint			flags)
STATIC int
xfs_qm_scall_trunc_qfile(
struct xfs_mount	*mp,
xfs_ino_t		ino)
int
xfs_qm_scall_trunc_qfiles(
xfs_mount_t	*mp,
uint		flags)
int
xfs_qm_scall_quotaon(
xfs_mount_t	*mp,
uint		flags)
int
xfs_qm_scall_getqstat(
struct xfs_mount	*mp,
struct fs_quota_stat	*out)
#define XFS_DQ_MASK \
(FS_DQ_LIMIT_MASK | FS_DQ_TIMER_MASK | FS_DQ_WARNS_MASK)
int
xfs_qm_scall_setqlim(
xfs_mount_t		*mp,
xfs_dqid_t		id,
uint			type,
fs_disk_quota_t		*newlim)
int
xfs_qm_scall_getquota(
xfs_mount_t	*mp,
xfs_dqid_t	id,
uint		type,
fs_disk_quota_t *out)
STATIC int
xfs_qm_log_quotaoff_end(
xfs_mount_t		*mp,
xfs_qoff_logitem_t	*startqoff,
uint			flags)
STATIC int
xfs_qm_log_quotaoff(
xfs_mount_t	       *mp,
xfs_qoff_logitem_t     **qoffstartp,
uint		       flags)
STATIC void
xfs_qm_export_dquot(
xfs_mount_t		*mp,
xfs_disk_dquot_t	*src,
struct fs_disk_quota	*dst)
STATIC uint
xfs_qm_export_qtype_flags(
uint flags)
STATIC uint
xfs_qm_export_flags(
uint flags)
STATIC int
xfs_dqrele_inode(
struct xfs_inode	*ip,
struct xfs_perag	*pag,
int			flags)
void
xfs_qm_dqrele_all_inodes(
struct xfs_mount *mp,
uint		 flags)
xfs_dqhash_t *qmtest_udqtab;
xfs_dqhash_t *qmtest_gdqtab;
int	      qmtest_hashmask;
int	      qmtest_nfails;
struct mutex  qcheck_lock;
#define DQTEST_HASHVAL(mp, id) (((__psunsigned_t)(mp) + \
(__psunsigned_t)(id)) & \
(qmtest_hashmask - 1))
#define DQTEST_HASH(mp, id, type)   ((type & XFS_DQ_USER) ? \
(qmtest_udqtab + \
DQTEST_HASHVAL(mp, id)) : \
(qmtest_gdqtab + \
DQTEST_HASHVAL(mp, id)))
#define DQTEST_LIST_PRINT(l, NXT, title) \
typedef struct dqtest  xfs_dqtest_t;
STATIC void
xfs_qm_hashinsert(xfs_dqhash_t *h, xfs_dqtest_t *dqp)
STATIC void
xfs_qm_dqtest_print(
struct xfs_mount	*mp,
struct dqtest		*d)
STATIC void
xfs_qm_dqtest_failed(
xfs_dqtest_t	*d,
xfs_dquot_t	*dqp,
char		*reason,
xfs_qcnt_t	a,
xfs_qcnt_t	b,
int		error)
STATIC int
xfs_dqtest_cmp2(
xfs_dqtest_t	*d,
xfs_dquot_t	*dqp)
STATIC void
xfs_dqtest_cmp(
xfs_dqtest_t	*d)
STATIC int
xfs_qm_internalqcheck_dqget(
xfs_mount_t	*mp,
xfs_dqid_t	id,
uint		type,
xfs_dqtest_t	**O_dq)
STATIC void
xfs_qm_internalqcheck_get_dquots(
xfs_mount_t	*mp,
xfs_dqid_t	uid,
xfs_dqid_t	projid,
xfs_dqid_t	gid,
xfs_dqtest_t	**ud,
xfs_dqtest_t	**gd)
STATIC void
xfs_qm_internalqcheck_dqadjust(
xfs_inode_t		*ip,
xfs_dqtest_t		*d)
STATIC int
xfs_qm_internalqcheck_adjust(
xfs_mount_t	*mp,
xfs_ino_t	ino,
void		__user *buffer,
int		ubsize,
int		*ubused,
int		*res)
int
xfs_qm_internalqcheck(
xfs_mount_t	*mp)
