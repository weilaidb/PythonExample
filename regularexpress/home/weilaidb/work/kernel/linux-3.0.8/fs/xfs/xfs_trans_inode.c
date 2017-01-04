STATIC void
xfs_trans_inode_broot_debug(
xfs_inode_t	*ip);
#define	xfs_trans_inode_broot_debug(ip)
void
xfs_trans_ijoin(
struct xfs_trans	*tp,
struct xfs_inode	*ip)
void
xfs_trans_ijoin_ref(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
uint			lock_flags)
void
xfs_trans_ichgtime(
struct xfs_trans	*tp,
struct xfs_inode	*ip,
int			flags)
void
xfs_trans_log_inode(
xfs_trans_t	*tp,
xfs_inode_t	*ip,
uint		flags)
STATIC void
xfs_trans_inode_broot_debug(
xfs_inode_t	*ip)
