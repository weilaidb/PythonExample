#define __XFS_IOCTL_H__
extern int
xfs_ioc_space(
struct xfs_inode	*ip,
struct inode		*inode,
struct file		*filp,
int			ioflags,
unsigned int		cmd,
xfs_flock64_t		*bf);
extern int
xfs_find_handle(
unsigned int		cmd,
xfs_fsop_handlereq_t	*hreq);
extern int
xfs_open_by_handle(
struct file		*parfilp,
xfs_fsop_handlereq_t	*hreq);
extern int
xfs_readlink_by_handle(
struct file		*parfilp,
xfs_fsop_handlereq_t	*hreq);
extern int
xfs_attrmulti_attr_get(
struct inode		*inode,
unsigned char		*name,
unsigned char		__user *ubuf,
__uint32_t		*len,
__uint32_t		flags);
extern int
xfs_attrmulti_attr_set(
struct inode		*inode,
unsigned char		*name,
const unsigned char	__user *ubuf,
__uint32_t		len,
__uint32_t		flags);
extern int
xfs_attrmulti_attr_remove(
struct inode		*inode,
unsigned char		*name,
__uint32_t		flags);
extern struct dentry *
xfs_handle_to_dentry(
struct file		*parfilp,
void __user		*uhandle,
u32			hlen);
extern long
xfs_file_ioctl(
struct file		*filp,
unsigned int		cmd,
unsigned long		p);
extern long
xfs_file_compat_ioctl(
struct file		*file,
unsigned int		cmd,
unsigned long		arg);
