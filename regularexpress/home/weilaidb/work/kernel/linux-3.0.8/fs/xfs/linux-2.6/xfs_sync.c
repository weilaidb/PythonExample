struct workqueue_struct	*xfs_syncd_wq;
#define XFS_LOOKUP_BATCH	32
STATIC int
xfs_inode_ag_walk_grab(
struct xfs_inode	*ip)
STATIC int
xfs_inode_ag_walk(
struct xfs_mount	*mp,
struct xfs_perag	*pag,
int			(*execute)(struct xfs_inode *ip,
struct xfs_perag *pag, int flags),
int			flags)
int
xfs_inode_ag_iterator(
struct xfs_mount	*mp,
int			(*execute)(struct xfs_inode *ip,
struct xfs_perag *pag, int flags),
int			flags)
STATIC int
xfs_sync_inode_data(
struct xfs_inode	*ip,
struct xfs_perag	*pag,
int			flags)
STATIC int
xfs_sync_inode_attr(
struct xfs_inode	*ip,
struct xfs_perag	*pag,
int			flags)
STATIC int
xfs_sync_data(
struct xfs_mount	*mp,
int			flags)
STATIC int
xfs_sync_attr(
struct xfs_mount	*mp,
int			flags)
STATIC int
xfs_sync_fsdata(
struct xfs_mount	*mp)
int
xfs_quiesce_data(
struct xfs_mount	*mp)
STATIC void
xfs_quiesce_fs(
struct xfs_mount	*mp)
void
xfs_quiesce_attr(
struct xfs_mount	*mp)
static void
xfs_syncd_queue_sync(
struct xfs_mount        *mp)
STATIC void
xfs_sync_worker(
struct work_struct *work)
static void
xfs_syncd_queue_reclaim(
struct xfs_mount        *mp)
STATIC void
xfs_reclaim_worker(
struct work_struct *work)
void
xfs_flush_inodes(
struct xfs_inode	*ip)
STATIC void
xfs_flush_worker(
struct work_struct *work)
int
xfs_syncd_init(
struct xfs_mount	*mp)
void
xfs_syncd_stop(
struct xfs_mount	*mp)
void
__xfs_inode_set_reclaim_tag(
struct xfs_perag	*pag,
struct xfs_inode	*ip)
void
xfs_inode_set_reclaim_tag(
xfs_inode_t	*ip)
STATIC void
__xfs_inode_clear_reclaim(
xfs_perag_t	*pag,
xfs_inode_t	*ip)
void
__xfs_inode_clear_reclaim_tag(
xfs_mount_t	*mp,
xfs_perag_t	*pag,
xfs_inode_t	*ip)
STATIC int
xfs_reclaim_inode_grab(
struct xfs_inode	*ip,
int			flags)
STATIC int
xfs_reclaim_inode(
struct xfs_inode	*ip,
struct xfs_perag	*pag,
int			sync_mode)
int
xfs_reclaim_inodes_ag(
struct xfs_mount	*mp,
int			flags,
int			*nr_to_scan)
int
xfs_reclaim_inodes(
xfs_mount_t	*mp,
int		mode)
static int
xfs_reclaim_inode_shrink(
struct shrinker	*shrink,
struct shrink_control *sc)
void
xfs_inode_shrinker_register(
struct xfs_mount	*mp)
void
xfs_inode_shrinker_unregister(
struct xfs_mount	*mp)
