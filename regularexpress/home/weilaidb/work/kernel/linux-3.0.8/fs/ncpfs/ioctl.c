#define NCP_OBJECT_NAME_MAX_LEN	4096
#define NCP_PRIVATE_DATA_MAX_LEN 8192
#define NCP_PACKET_SIZE_INTERNAL 65536
static int
ncp_get_fs_info(struct ncp_server * server, struct inode *inode,
struct ncp_fs_info __user *arg)
static int
ncp_get_fs_info_v2(struct ncp_server * server, struct inode *inode,
struct ncp_fs_info_v2 __user * arg)
struct compat_ncp_objectname_ioctl
;
struct compat_ncp_fs_info_v2 ;
struct compat_ncp_ioctl_request ;
struct compat_ncp_privatedata_ioctl
;
#define NCP_IOC_GET_FS_INFO_V2_32	_IOWR('n', 4, struct compat_ncp_fs_info_v2)
#define NCP_IOC_NCPREQUEST_32		_IOR('n', 1, struct compat_ncp_ioctl_request)
#define NCP_IOC_GETOBJECTNAME_32	_IOWR('n', 9, struct compat_ncp_objectname_ioctl)
#define NCP_IOC_SETOBJECTNAME_32	_IOR('n', 9, struct compat_ncp_objectname_ioctl)
#define NCP_IOC_GETPRIVATEDATA_32	_IOWR('n', 10, struct compat_ncp_privatedata_ioctl)
#define NCP_IOC_SETPRIVATEDATA_32	_IOR('n', 10, struct compat_ncp_privatedata_ioctl)
static int
ncp_get_compat_fs_info_v2(struct ncp_server * server, struct inode *inode,
struct compat_ncp_fs_info_v2 __user * arg)
#define NCP_IOC_GETMOUNTUID16		_IOW('n', 2, u16)
#define NCP_IOC_GETMOUNTUID32		_IOW('n', 2, u32)
#define NCP_IOC_GETMOUNTUID64		_IOW('n', 2, u64)
static int
ncp_set_charsets(struct ncp_server* server, struct ncp_nls_ioctl __user *arg)
static int
ncp_get_charsets(struct ncp_server* server, struct ncp_nls_ioctl __user *arg)
static long __ncp_ioctl(struct inode *inode, unsigned int cmd, unsigned long arg)
long ncp_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
long ncp_compat_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
