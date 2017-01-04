#define FS_CEPH_IOCTL_H
#define CEPH_IOCTL_MAGIC 0x97
struct ceph_ioctl_layout ;
#define CEPH_IOC_GET_LAYOUT _IOR(CEPH_IOCTL_MAGIC, 1,		\
struct ceph_ioctl_layout)
#define CEPH_IOC_SET_LAYOUT _IOW(CEPH_IOCTL_MAGIC, 2,		\
struct ceph_ioctl_layout)
#define CEPH_IOC_SET_LAYOUT_POLICY _IOW(CEPH_IOCTL_MAGIC, 5,	\
struct ceph_ioctl_layout)
struct ceph_ioctl_dataloc ;
#define CEPH_IOC_GET_DATALOC _IOWR(CEPH_IOCTL_MAGIC, 3,	\
struct ceph_ioctl_dataloc)
#define CEPH_IOC_LAZYIO _IO(CEPH_IOCTL_MAGIC, 4)
