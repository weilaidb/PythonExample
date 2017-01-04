int
xfs_find_handle(
unsigned int		cmd,
xfs_fsop_handlereq_t	*hreq)
STATIC int
xfs_handle_acceptable(
void			*context,
struct dentry		*dentry)
struct dentry *
xfs_handle_to_dentry(
struct file		*parfilp,
void __user		*uhandle,
u32			hlen)
STATIC struct dentry *
xfs_handlereq_to_dentry(
struct file		*parfilp,
xfs_fsop_handlereq_t	*hreq)
int
xfs_open_by_handle(
struct file		*parfilp,
xfs_fsop_handlereq_t	*hreq)
STATIC int
do_readlink(
char __user		*buffer,
int			buflen,
const char		*link)
int
xfs_readlink_by_handle(
struct file		*parfilp,
xfs_fsop_handlereq_t	*hreq)
STATIC int
xfs_fssetdm_by_handle(
struct file		*parfilp,
void			__user *arg)
STATIC int
xfs_attrlist_by_handle(
struct file		*parfilp,
void			__user *arg)
int
xfs_attrmulti_attr_get(
struct inode		*inode,
unsigned char		*name,
unsigned char		__user *ubuf,
__uint32_t		*len,
__uint32_t		flags)
int
xfs_attrmulti_attr_set(
struct inode		*inode,
unsigned char		*name,
const unsigned char	__user *ubuf,
__uint32_t		len,
__uint32_t		flags)
int
xfs_attrmulti_attr_remove(
struct inode		*inode,
unsigned char		*name,
__uint32_t		flags)
STATIC int
xfs_attrmulti_by_handle(
struct file		*parfilp,
void			__user *arg)
int
xfs_ioc_space(
struct xfs_inode	*ip,
struct inode		*inode,
struct file		*filp,
int			ioflags,
unsigned int		cmd,
xfs_flock64_t		*bf)
STATIC int
xfs_ioc_bulkstat(
xfs_mount_t		*mp,
unsigned int		cmd,
void			__user *arg)
STATIC int
xfs_ioc_fsgeometry_v1(
xfs_mount_t		*mp,
void			__user *arg)
STATIC int
xfs_ioc_fsgeometry(
xfs_mount_t		*mp,
void			__user *arg)
STATIC unsigned int
xfs_merge_ioc_xflags(
unsigned int	flags,
unsigned int	start)
STATIC unsigned int
xfs_di2lxflags(
__uint16_t	di_flags)
STATIC int
xfs_ioc_fsgetxattr(
xfs_inode_t		*ip,
int			attr,
void			__user *arg)
STATIC void
xfs_set_diflags(
struct xfs_inode	*ip,
unsigned int		xflags)
STATIC void
xfs_diflags_to_linux(
struct xfs_inode	*ip)
#define FSX_PROJID	1
#define FSX_EXTSIZE	2
#define FSX_XFLAGS	4
#define FSX_NONBLOCK	8
STATIC int
xfs_ioctl_setattr(
xfs_inode_t		*ip,
struct fsxattr		*fa,
int			mask)
STATIC int
xfs_ioc_fssetxattr(
xfs_inode_t		*ip,
struct file		*filp,
void			__user *arg)
STATIC int
xfs_ioc_getxflags(
xfs_inode_t		*ip,
void			__user *arg)
STATIC int
xfs_ioc_setxflags(
xfs_inode_t		*ip,
struct file		*filp,
void			__user *arg)
STATIC int
xfs_getbmap_format(void **ap, struct getbmapx *bmv, int *full)
STATIC int
xfs_ioc_getbmap(
struct xfs_inode	*ip,
int			ioflags,
unsigned int		cmd,
void			__user *arg)
STATIC int
xfs_getbmapx_format(void **ap, struct getbmapx *bmv, int *full)
STATIC int
xfs_ioc_getbmapx(
struct xfs_inode	*ip,
void			__user *arg)
long
xfs_file_ioctl(
struct file		*filp,
unsigned int		cmd,
unsigned long		p)
