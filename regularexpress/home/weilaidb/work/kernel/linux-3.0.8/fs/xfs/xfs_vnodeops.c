int
xfs_setattr(
struct xfs_inode	*ip,
struct iattr		*iattr,
int			flags)
#define SYMLINK_MAPS 2
STATIC int
xfs_readlink_bmap(
xfs_inode_t	*ip,
char		*link)
int
xfs_readlink(
xfs_inode_t     *ip,
char		*link)
#define XFS_FREE_EOF_TRYLOCK	(1<<0)
STATIC int
xfs_free_eofblocks(
xfs_mount_t	*mp,
xfs_inode_t	*ip,
int		flags)
STATIC int
xfs_inactive_symlink_rmt(
xfs_inode_t	*ip,
xfs_trans_t	**tpp)
STATIC int
xfs_inactive_symlink_local(
xfs_inode_t	*ip,
xfs_trans_t	**tpp)
STATIC int
xfs_inactive_attrs(
xfs_inode_t	*ip,
xfs_trans_t	**tpp)
int
xfs_release(
xfs_inode_t	*ip)
int
xfs_inactive(
xfs_inode_t	*ip)
int
xfs_lookup(
xfs_inode_t		*dp,
struct xfs_name		*name,
xfs_inode_t		**ipp,
struct xfs_name		*ci_name)
int
xfs_create(
xfs_inode_t		*dp,
struct xfs_name		*name,
mode_t			mode,
xfs_dev_t		rdev,
xfs_inode_t		**ipp)
int xfs_locked_n;
int xfs_small_retries;
int xfs_middle_retries;
int xfs_lots_retries;
int xfs_lock_delays;
static inline int
xfs_lock_inumorder(int lock_mode, int subclass)
void
xfs_lock_inodes(
xfs_inode_t	**ips,
int		inodes,
uint		lock_mode)
void
xfs_lock_two_inodes(
xfs_inode_t		*ip0,
xfs_inode_t		*ip1,
uint			lock_mode)
int
xfs_remove(
xfs_inode_t             *dp,
struct xfs_name		*name,
xfs_inode_t		*ip)
int
xfs_link(
xfs_inode_t		*tdp,
xfs_inode_t		*sip,
struct xfs_name		*target_name)
int
xfs_symlink(
xfs_inode_t		*dp,
struct xfs_name		*link_name,
const char		*target_path,
mode_t			mode,
xfs_inode_t		**ipp)
int
xfs_set_dmattrs(
xfs_inode_t     *ip,
u_int		evmask,
u_int16_t	state)
STATIC int
xfs_alloc_file_space(
xfs_inode_t		*ip,
xfs_off_t		offset,
xfs_off_t		len,
int			alloc_type,
int			attr_flags)
STATIC int
xfs_zero_remaining_bytes(
xfs_inode_t		*ip,
xfs_off_t		startoff,
xfs_off_t		endoff)
STATIC int
xfs_free_file_space(
xfs_inode_t		*ip,
xfs_off_t		offset,
xfs_off_t		len,
int			attr_flags)
int
xfs_change_file_space(
xfs_inode_t	*ip,
int		cmd,
xfs_flock64_t	*bf,
xfs_off_t	offset,
int		attr_flags)
