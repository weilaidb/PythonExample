void
xfs_synchronize_times(
xfs_inode_t	*ip)
void
xfs_mark_inode_dirty_sync(
xfs_inode_t	*ip)
void
xfs_mark_inode_dirty(
xfs_inode_t	*ip)
STATIC int
xfs_init_security(
struct inode	*inode,
struct inode	*dir,
const struct qstr *qstr)
static void
xfs_dentry_to_name(
struct xfs_name	*namep,
struct dentry	*dentry)
STATIC void
xfs_cleanup_inode(
struct inode	*dir,
struct inode	*inode,
struct dentry	*dentry)
STATIC int
xfs_vn_mknod(
struct inode	*dir,
struct dentry	*dentry,
int		mode,
dev_t		rdev)
STATIC int
xfs_vn_create(
struct inode	*dir,
struct dentry	*dentry,
int		mode,
struct nameidata *nd)
STATIC int
xfs_vn_mkdir(
struct inode	*dir,
struct dentry	*dentry,
int		mode)
STATIC struct dentry *
xfs_vn_lookup(
struct inode	*dir,
struct dentry	*dentry,
struct nameidata *nd)
STATIC struct dentry *
xfs_vn_ci_lookup(
struct inode	*dir,
struct dentry	*dentry,
struct nameidata *nd)
STATIC int
xfs_vn_link(
struct dentry	*old_dentry,
struct inode	*dir,
struct dentry	*dentry)
STATIC int
xfs_vn_unlink(
struct inode	*dir,
struct dentry	*dentry)
STATIC int
xfs_vn_symlink(
struct inode	*dir,
struct dentry	*dentry,
const char	*symname)
STATIC int
xfs_vn_rename(
struct inode	*odir,
struct dentry	*odentry,
struct inode	*ndir,
struct dentry	*ndentry)
STATIC void *
xfs_vn_follow_link(
struct dentry		*dentry,
struct nameidata	*nd)
STATIC void
xfs_vn_put_link(
struct dentry	*dentry,
struct nameidata *nd,
void		*p)
STATIC int
xfs_vn_getattr(
struct vfsmount		*mnt,
struct dentry		*dentry,
struct kstat		*stat)
STATIC int
xfs_vn_setattr(
struct dentry	*dentry,
struct iattr	*iattr)
#define XFS_FIEMAP_FLAGS	(FIEMAP_FLAG_SYNC|FIEMAP_FLAG_XATTR)
STATIC int
xfs_fiemap_format(
void			**arg,
struct getbmapx		*bmv,
int			*full)
STATIC int
xfs_vn_fiemap(
struct inode		*inode,
struct fiemap_extent_info *fieinfo,
u64			start,
u64			length)
static const struct inode_operations xfs_inode_operations = ;
static const struct inode_operations xfs_dir_inode_operations = ;
static const struct inode_operations xfs_dir_ci_inode_operations = ;
static const struct inode_operations xfs_symlink_inode_operations = ;
STATIC void
xfs_diflags_to_iflags(
struct inode		*inode,
struct xfs_inode	*ip)
void
xfs_setup_inode(
struct xfs_inode	*ip)
