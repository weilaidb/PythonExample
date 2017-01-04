STATIC void	xfs_unmountfs_wait(xfs_mount_t *);
STATIC void	xfs_icsb_balance_counter(xfs_mount_t *, xfs_sb_field_t,
int);
STATIC void	xfs_icsb_balance_counter_locked(xfs_mount_t *, xfs_sb_field_t,
int);
STATIC void	xfs_icsb_disable_counter(xfs_mount_t *, xfs_sb_field_t);
#define xfs_icsb_balance_counter(mp, a, b)		do  while (0)
#define xfs_icsb_balance_counter_locked(mp, a, b)	do  while (0)
static const struct  xfs_sb_info[] = ;
static DEFINE_MUTEX(xfs_uuid_table_mutex);
static int xfs_uuid_table_size;
static uuid_t *xfs_uuid_table;
STATIC int
xfs_uuid_mount(
struct xfs_mount	*mp)
STATIC void
xfs_uuid_unmount(
struct xfs_mount	*mp)
struct xfs_perag *
xfs_perag_get(struct xfs_mount *mp, xfs_agnumber_t agno)
struct xfs_perag *
xfs_perag_get_tag(
struct xfs_mount	*mp,
xfs_agnumber_t		first,
int			tag)
void
xfs_perag_put(struct xfs_perag *pag)
STATIC void
__xfs_free_perag(
struct rcu_head	*head)
STATIC void
xfs_free_perag(
xfs_mount_t	*mp)
int
xfs_sb_validate_fsb_count(
xfs_sb_t	*sbp,
__uint64_t	nblocks)
STATIC int
xfs_mount_validate_sb(
xfs_mount_t	*mp,
xfs_sb_t	*sbp,
int		flags)
int
xfs_initialize_perag(
xfs_mount_t	*mp,
xfs_agnumber_t	agcount,
xfs_agnumber_t	*maxagi)
void
xfs_sb_from_disk(
xfs_sb_t	*to,
xfs_dsb_t	*from)
void
xfs_sb_to_disk(
xfs_dsb_t	*to,
xfs_sb_t	*from,
__int64_t	fields)
int
xfs_readsb(xfs_mount_t *mp, int flags)
STATIC void
xfs_mount_common(xfs_mount_t *mp, xfs_sb_t *sbp)
STATIC int
xfs_initialize_perag_data(xfs_mount_t *mp, xfs_agnumber_t agcount)
STATIC int
xfs_update_alignment(xfs_mount_t *mp)
STATIC void
xfs_set_maxicount(xfs_mount_t *mp)
STATIC void
xfs_set_rw_sizes(xfs_mount_t *mp)
void
xfs_set_low_space_thresholds(
struct xfs_mount	*mp)
STATIC void
xfs_set_inoalignment(xfs_mount_t *mp)
STATIC int
xfs_check_sizes(xfs_mount_t *mp)
int
xfs_mount_reset_sbqflags(
struct xfs_mount	*mp)
__uint64_t
xfs_default_resblks(xfs_mount_t *mp)
int
xfs_mountfs(
xfs_mount_t	*mp)
void
xfs_unmountfs(
struct xfs_mount	*mp)
STATIC void
xfs_unmountfs_wait(xfs_mount_t *mp)
int
xfs_fs_writable(xfs_mount_t *mp)
int
xfs_log_sbcount(
xfs_mount_t	*mp,
uint		sync)
int
xfs_unmountfs_writesb(xfs_mount_t *mp)
void
xfs_mod_sb(xfs_trans_t *tp, __int64_t fields)
STATIC int
xfs_mod_incore_sb_unlocked(
xfs_mount_t	*mp,
xfs_sb_field_t	field,
int64_t		delta,
int		rsvd)
int
xfs_mod_incore_sb(
struct xfs_mount	*mp,
xfs_sb_field_t		field,
int64_t			delta,
int			rsvd)
int
xfs_mod_incore_sb_batch(
struct xfs_mount	*mp,
xfs_mod_sb_t		*msb,
uint			nmsb,
int			rsvd)
xfs_buf_t *
xfs_getsb(
xfs_mount_t	*mp,
int		flags)
void
xfs_freesb(
struct xfs_mount	*mp)
int
xfs_mount_log_sb(
xfs_mount_t	*mp,
__int64_t	fields)
int
xfs_dev_is_read_only(
struct xfs_mount	*mp,
char			*message)
STATIC int
xfs_icsb_cpu_notify(
struct notifier_block *nfb,
unsigned long action,
void *hcpu)
int
xfs_icsb_init_counters(
xfs_mount_t	*mp)
void
xfs_icsb_reinit_counters(
xfs_mount_t	*mp)
void
xfs_icsb_destroy_counters(
xfs_mount_t	*mp)
STATIC void
xfs_icsb_lock_cntr(
xfs_icsb_cnts_t	*icsbp)
STATIC void
xfs_icsb_unlock_cntr(
xfs_icsb_cnts_t	*icsbp)
STATIC void
xfs_icsb_lock_all_counters(
xfs_mount_t	*mp)
STATIC void
xfs_icsb_unlock_all_counters(
xfs_mount_t	*mp)
STATIC void
xfs_icsb_count(
xfs_mount_t	*mp,
xfs_icsb_cnts_t	*cnt,
int		flags)
STATIC int
xfs_icsb_counter_disabled(
xfs_mount_t	*mp,
xfs_sb_field_t	field)
STATIC void
xfs_icsb_disable_counter(
xfs_mount_t	*mp,
xfs_sb_field_t	field)
STATIC void
xfs_icsb_enable_counter(
xfs_mount_t	*mp,
xfs_sb_field_t	field,
uint64_t	count,
uint64_t	resid)
void
xfs_icsb_sync_counters_locked(
xfs_mount_t	*mp,
int		flags)
void
xfs_icsb_sync_counters(
xfs_mount_t	*mp,
int		flags)
#define XFS_ICSB_INO_CNTR_REENABLE	(uint64_t)64
#define XFS_ICSB_FDBLK_CNTR_REENABLE(mp) \
(uint64_t)(512 + XFS_ALLOC_SET_ASIDE(mp))
STATIC void
xfs_icsb_balance_counter_locked(
xfs_mount_t	*mp,
xfs_sb_field_t  field,
int		min_per_cpu)
STATIC void
xfs_icsb_balance_counter(
xfs_mount_t	*mp,
xfs_sb_field_t  fields,
int		min_per_cpu)
int
xfs_icsb_modify_counters(
xfs_mount_t	*mp,
xfs_sb_field_t	field,
int64_t		delta,
int		rsvd)
