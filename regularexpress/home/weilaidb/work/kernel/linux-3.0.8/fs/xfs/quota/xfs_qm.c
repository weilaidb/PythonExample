struct mutex	xfs_Gqm_lock;
struct xfs_qm	*xfs_Gqm;
uint		ndquot;
kmem_zone_t	*qm_dqzone;
kmem_zone_t	*qm_dqtrxzone;
STATIC void	xfs_qm_list_init(xfs_dqlist_t *, char *, int);
STATIC void	xfs_qm_list_destroy(xfs_dqlist_t *);
STATIC int	xfs_qm_init_quotainos(xfs_mount_t *);
STATIC int	xfs_qm_init_quotainfo(xfs_mount_t *);
STATIC int	xfs_qm_shake(struct shrinker *, struct shrink_control *);
static struct shrinker xfs_qm_shaker = ;
extern struct mutex	qcheck_lock;
static void
xfs_qm_dquot_list_print(
struct xfs_mount *mp)
static void xfs_qm_dquot_list_print(struct xfs_mount *mp)
STATIC struct xfs_qm *
xfs_Gqm_init(void)
STATIC void
xfs_qm_destroy(
struct xfs_qm	*xqm)
STATIC int
xfs_qm_hold_quotafs_ref(
struct xfs_mount *mp)
STATIC void
xfs_qm_rele_quotafs_ref(
struct xfs_mount *mp)
void
xfs_qm_unmount(
struct xfs_mount	*mp)
void
xfs_qm_mount_quotas(
xfs_mount_t	*mp)
void
xfs_qm_unmount_quotas(
xfs_mount_t	*mp)
STATIC int
xfs_qm_dqflush_all(
struct xfs_mount	*mp,
int			sync_mode)
STATIC void
xfs_qm_detach_gdquots(
struct xfs_mount	*mp)
STATIC int
xfs_qm_dqpurge_int(
struct xfs_mount	*mp,
uint			flags)
int
xfs_qm_dqpurge_all(
xfs_mount_t	*mp,
uint		flags)
STATIC int
xfs_qm_dqattach_one(
xfs_inode_t	*ip,
xfs_dqid_t	id,
uint		type,
uint		doalloc,
xfs_dquot_t	*udqhint,
xfs_dquot_t	**IO_idqpp)
STATIC void
xfs_qm_dqattach_grouphint(
xfs_dquot_t	*udq,
xfs_dquot_t	*gdq)
int
xfs_qm_dqattach_locked(
xfs_inode_t	*ip,
uint		flags)
int
xfs_qm_dqattach(
struct xfs_inode	*ip,
uint			flags)
void
xfs_qm_dqdetach(
xfs_inode_t	*ip)
int
xfs_qm_sync(
struct xfs_mount	*mp,
int			flags)
static struct lock_class_key xfs_quota_mplist_class;
STATIC int
xfs_qm_init_quotainfo(
xfs_mount_t	*mp)
void
xfs_qm_destroy_quotainfo(
xfs_mount_t	*mp)
STATIC void
xfs_qm_list_init(
xfs_dqlist_t	*list,
char		*str,
int		n)
STATIC void
xfs_qm_list_destroy(
xfs_dqlist_t	*list)
STATIC int
xfs_qm_qino_alloc(
xfs_mount_t	*mp,
xfs_inode_t	**ip,
__int64_t	sbfields,
uint		flags)
STATIC void
xfs_qm_reset_dqcounts(
xfs_mount_t	*mp,
xfs_buf_t	*bp,
xfs_dqid_t	id,
uint		type)
STATIC int
xfs_qm_dqiter_bufs(
xfs_mount_t	*mp,
xfs_dqid_t	firstid,
xfs_fsblock_t	bno,
xfs_filblks_t	blkcnt,
uint		flags)
STATIC int
xfs_qm_dqiterate(
xfs_mount_t	*mp,
xfs_inode_t	*qip,
uint		flags)
STATIC int
xfs_qm_quotacheck_dqadjust(
struct xfs_inode	*ip,
xfs_dqid_t		id,
uint			type,
xfs_qcnt_t		nblks,
xfs_qcnt_t		rtblks)
STATIC int
xfs_qm_get_rtblks(
xfs_inode_t	*ip,
xfs_qcnt_t	*O_rtblks)
STATIC int
xfs_qm_dqusage_adjust(
xfs_mount_t	*mp,
xfs_ino_t	ino,
void		__user *buffer,
int		ubsize,
int		*ubused,
int		*res)
int
xfs_qm_quotacheck(
xfs_mount_t	*mp)
STATIC int
xfs_qm_init_quotainos(
xfs_mount_t	*mp)
STATIC xfs_dquot_t *
xfs_qm_dqreclaim_one(void)
STATIC int
xfs_qm_shake_freelist(
int	howmany)
STATIC int
xfs_qm_shake(
struct shrinker	*shrink,
struct shrink_control *sc)
boolean_t
xfs_qm_dqalloc_incore(
xfs_dquot_t **O_dqpp)
int
xfs_qm_write_sb_changes(
xfs_mount_t	*mp,
__int64_t	flags)
int
xfs_qm_vop_dqalloc(
struct xfs_inode	*ip,
uid_t			uid,
gid_t			gid,
prid_t			prid,
uint			flags,
struct xfs_dquot	**O_udqpp,
struct xfs_dquot	**O_gdqpp)
xfs_dquot_t *
xfs_qm_vop_chown(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_dquot_t	**IO_olddq,
xfs_dquot_t	*newdq)
int
xfs_qm_vop_chown_reserve(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
xfs_dquot_t	*udqp,
xfs_dquot_t	*gdqp,
uint		flags)
int
xfs_qm_vop_rename_dqattach(
struct xfs_inode	**i_tab)
void
xfs_qm_vop_create_dqattach(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
struct xfs_dquot	*udqp,
struct xfs_dquot	*gdqp)
