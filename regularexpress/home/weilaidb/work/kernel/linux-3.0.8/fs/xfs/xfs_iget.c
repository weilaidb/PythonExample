static struct lock_class_key xfs_iolock_active;
struct lock_class_key xfs_iolock_reclaimable;
STATIC struct xfs_inode *
xfs_inode_alloc(
struct xfs_mount	*mp,
xfs_ino_t		ino)
STATIC void
xfs_inode_free_callback(
struct rcu_head		*head)
void
xfs_inode_free(
struct xfs_inode	*ip)
static int
xfs_iget_cache_hit(
struct xfs_perag	*pag,
struct xfs_inode	*ip,
xfs_ino_t		ino,
int			flags,
int			lock_flags) __releases(RCU)
static int
xfs_iget_cache_miss(
struct xfs_mount	*mp,
struct xfs_perag	*pag,
xfs_trans_t		*tp,
xfs_ino_t		ino,
struct xfs_inode	**ipp,
int			flags,
int			lock_flags)
int
xfs_iget(
xfs_mount_t	*mp,
xfs_trans_t	*tp,
xfs_ino_t	ino,
uint		flags,
uint		lock_flags,
xfs_inode_t	**ipp)
uint
xfs_ilock_map_shared(
xfs_inode_t	*ip)
void
xfs_iunlock_map_shared(
xfs_inode_t	*ip,
unsigned int	lock_mode)
void
xfs_ilock(
xfs_inode_t		*ip,
uint			lock_flags)
int
xfs_ilock_nowait(
xfs_inode_t		*ip,
uint			lock_flags)
void
xfs_iunlock(
xfs_inode_t		*ip,
uint			lock_flags)
void
xfs_ilock_demote(
xfs_inode_t		*ip,
uint			lock_flags)
int
xfs_isilocked(
xfs_inode_t		*ip,
uint			lock_flags)
