#define  _NATIVE_IOC(cmd, type) \
_IOC(_IOC_DIR(cmd), _IOC_TYPE(cmd), _IOC_NR(cmd), sizeof(type))
STATIC int
xfs_compat_flock64_copyin(
xfs_flock64_t		*bf,
compat_xfs_flock64_t	__user *arg32)
STATIC int
xfs_compat_ioc_fsgeometry_v1(
struct xfs_mount	  *mp,
compat_xfs_fsop_geom_v1_t __user *arg32)
STATIC int
xfs_compat_growfs_data_copyin(
struct xfs_growfs_data	 *in,
compat_xfs_growfs_data_t __user *arg32)
STATIC int
xfs_compat_growfs_rt_copyin(
struct xfs_growfs_rt	 *in,
compat_xfs_growfs_rt_t	__user *arg32)
STATIC int
xfs_inumbers_fmt_compat(
void			__user *ubuffer,
const xfs_inogrp_t	*buffer,
long			count,
long			*written)
#define xfs_inumbers_fmt_compat xfs_inumbers_fmt
STATIC int
xfs_ioctl32_bstime_copyin(
xfs_bstime_t		*bstime,
compat_xfs_bstime_t	__user *bstime32)
STATIC int
xfs_ioctl32_bstat_copyin(
xfs_bstat_t		*bstat,
compat_xfs_bstat_t	__user *bstat32)
STATIC int
xfs_bstime_store_compat(
compat_xfs_bstime_t	__user *p32,
const xfs_bstime_t	*p)
STATIC int
xfs_bulkstat_one_fmt_compat(
void			__user *ubuffer,
int			ubsize,
int			*ubused,
const xfs_bstat_t	*buffer)
STATIC int
xfs_bulkstat_one_compat(
xfs_mount_t	*mp,
xfs_ino_t	ino,
void		__user *buffer,
int		ubsize,
int		*ubused,
int		*stat)
STATIC int
xfs_compat_ioc_bulkstat(
xfs_mount_t		  *mp,
unsigned int		  cmd,
compat_xfs_fsop_bulkreq_t __user *p32)
STATIC int
xfs_compat_handlereq_copyin(
xfs_fsop_handlereq_t		*hreq,
compat_xfs_fsop_handlereq_t	__user *arg32)
STATIC struct dentry *
xfs_compat_handlereq_to_dentry(
struct file		*parfilp,
compat_xfs_fsop_handlereq_t *hreq)
STATIC int
xfs_compat_attrlist_by_handle(
struct file		*parfilp,
void			__user *arg)
STATIC int
xfs_compat_attrmulti_by_handle(
struct file				*parfilp,
void					__user *arg)
STATIC int
xfs_compat_fssetdm_by_handle(
struct file		*parfilp,
void			__user *arg)
long
xfs_file_compat_ioctl(
struct file		*filp,
unsigned		cmd,
unsigned long		p)
