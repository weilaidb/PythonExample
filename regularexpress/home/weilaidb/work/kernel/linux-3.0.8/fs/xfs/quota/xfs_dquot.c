xfs_buftarg_t *xfs_dqerror_target;
int xfs_do_dqerror;
int xfs_dqreq_num;
int xfs_dqerror_mod = 33;
static struct lock_class_key xfs_dquot_other_class;
STATIC xfs_dquot_t *
xfs_qm_dqinit(
xfs_mount_t  *mp,
xfs_dqid_t   id,
uint	     type)
void
xfs_qm_dqdestroy(
xfs_dquot_t	*dqp)
STATIC void
xfs_qm_dqinit_core(
xfs_dqid_t	id,
uint		type,
xfs_dqblk_t	*d)
void
xfs_qm_adjust_dqlimits(
xfs_mount_t		*mp,
xfs_disk_dquot_t	*d)
void
xfs_qm_adjust_dqtimers(
xfs_mount_t		*mp,
xfs_disk_dquot_t	*d)
STATIC void
xfs_qm_init_dquot_blk(
xfs_trans_t	*tp,
xfs_mount_t	*mp,
xfs_dqid_t	id,
uint		type,
xfs_buf_t	*bp)
STATIC int
xfs_qm_dqalloc(
xfs_trans_t	**tpp,
xfs_mount_t	*mp,
xfs_dquot_t	*dqp,
xfs_inode_t	*quotip,
xfs_fileoff_t	offset_fsb,
xfs_buf_t	**O_bpp)
STATIC int
xfs_qm_dqtobp(
xfs_trans_t		**tpp,
xfs_dquot_t		*dqp,
xfs_disk_dquot_t	**O_ddpp,
xfs_buf_t		**O_bpp,
uint			flags)
STATIC int
xfs_qm_dqread(
xfs_trans_t	**tpp,
xfs_dqid_t	id,
xfs_dquot_t	*dqp,
uint		flags)
STATIC int
xfs_qm_idtodq(
xfs_mount_t	*mp,
xfs_dqid_t	id,
uint		type,
uint		flags,
xfs_dquot_t	**O_dqpp)
STATIC int
xfs_qm_dqlookup(
xfs_mount_t		*mp,
xfs_dqid_t		id,
xfs_dqhash_t		*qh,
xfs_dquot_t		**O_dqpp)
int
xfs_qm_dqget(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
xfs_dqid_t	id,
uint		type,
uint		flags,
xfs_dquot_t	**O_dqpp)
void
xfs_qm_dqput(
xfs_dquot_t	*dqp)
void
xfs_qm_dqrele(
xfs_dquot_t	*dqp)
STATIC void
xfs_qm_dqflush_done(
struct xfs_buf		*bp,
struct xfs_log_item	*lip)
int
xfs_qm_dqflush(
xfs_dquot_t		*dqp,
uint			flags)
int
xfs_qm_dqlock_nowait(
xfs_dquot_t *dqp)
void
xfs_dqlock(
xfs_dquot_t *dqp)
void
xfs_dqunlock(
xfs_dquot_t *dqp)
void
xfs_dqunlock_nonotify(
xfs_dquot_t *dqp)
void
xfs_dqlock2(
xfs_dquot_t	*d1,
xfs_dquot_t	*d2)
int
xfs_qm_dqpurge(
xfs_dquot_t	*dqp)
void
xfs_qm_dqprint(xfs_dquot_t *dqp)
void
xfs_qm_dqflock_pushbuf_wait(
xfs_dquot_t	*dqp)
