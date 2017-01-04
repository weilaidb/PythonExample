#define _LINUX_FUSE_H
#define FUSE_KERNEL_VERSION 7
#define FUSE_KERNEL_MINOR_VERSION 16
#define FUSE_ROOT_ID 1
struct fuse_attr ;
struct fuse_kstatfs ;
struct fuse_file_lock ;
#define FATTR_MODE	(1 << 0)
#define FATTR_UID	(1 << 1)
#define FATTR_GID	(1 << 2)
#define FATTR_SIZE	(1 << 3)
#define FATTR_ATIME	(1 << 4)
#define FATTR_MTIME	(1 << 5)
#define FATTR_FH	(1 << 6)
#define FATTR_ATIME_NOW	(1 << 7)
#define FATTR_MTIME_NOW	(1 << 8)
#define FATTR_LOCKOWNER	(1 << 9)
#define FOPEN_DIRECT_IO		(1 << 0)
#define FOPEN_KEEP_CACHE	(1 << 1)
#define FOPEN_NONSEEKABLE	(1 << 2)
#define FUSE_ASYNC_READ		(1 << 0)
#define FUSE_POSIX_LOCKS	(1 << 1)
#define FUSE_FILE_OPS		(1 << 2)
#define FUSE_ATOMIC_O_TRUNC	(1 << 3)
#define FUSE_EXPORT_SUPPORT	(1 << 4)
#define FUSE_BIG_WRITES		(1 << 5)
#define FUSE_DONT_MASK		(1 << 6)
#define CUSE_UNRESTRICTED_IOCTL	(1 << 0)
#define FUSE_RELEASE_FLUSH	(1 << 0)
#define FUSE_GETATTR_FH		(1 << 0)
#define FUSE_LK_FLOCK		(1 << 0)
#define FUSE_WRITE_CACHE	(1 << 0)
#define FUSE_WRITE_LOCKOWNER	(1 << 1)
#define FUSE_READ_LOCKOWNER	(1 << 1)
#define FUSE_IOCTL_COMPAT	(1 << 0)
#define FUSE_IOCTL_UNRESTRICTED	(1 << 1)
#define FUSE_IOCTL_RETRY	(1 << 2)
#define FUSE_IOCTL_32BIT	(1 << 3)
#define FUSE_IOCTL_MAX_IOV	256
#define FUSE_POLL_SCHEDULE_NOTIFY (1 << 0)
enum fuse_opcode ;
enum fuse_notify_code ;
#define FUSE_MIN_READ_BUFFER 8192
#define FUSE_COMPAT_ENTRY_OUT_SIZE 120
struct fuse_entry_out ;
struct fuse_forget_in ;
struct fuse_forget_one ;
struct fuse_batch_forget_in ;
struct fuse_getattr_in ;
#define FUSE_COMPAT_ATTR_OUT_SIZE 96
struct fuse_attr_out ;
#define FUSE_COMPAT_MKNOD_IN_SIZE 8
struct fuse_mknod_in ;
struct fuse_mkdir_in ;
struct fuse_rename_in ;
struct fuse_link_in ;
struct fuse_setattr_in ;
struct fuse_open_in ;
struct fuse_create_in ;
struct fuse_open_out ;
struct fuse_release_in ;
struct fuse_flush_in ;
struct fuse_read_in ;
#define FUSE_COMPAT_WRITE_IN_SIZE 24
struct fuse_write_in ;
struct fuse_write_out ;
#define FUSE_COMPAT_STATFS_SIZE 48
struct fuse_statfs_out ;
struct fuse_fsync_in ;
struct fuse_setxattr_in ;
struct fuse_getxattr_in ;
struct fuse_getxattr_out ;
struct fuse_lk_in ;
struct fuse_lk_out ;
struct fuse_access_in ;
struct fuse_init_in ;
struct fuse_init_out ;
#define CUSE_INIT_INFO_MAX 4096
struct cuse_init_in ;
struct cuse_init_out ;
struct fuse_interrupt_in ;
struct fuse_bmap_in ;
struct fuse_bmap_out ;
struct fuse_ioctl_in ;
struct fuse_ioctl_iovec ;
struct fuse_ioctl_out ;
struct fuse_poll_in ;
struct fuse_poll_out ;
struct fuse_notify_poll_wakeup_out ;
struct fuse_in_header ;
struct fuse_out_header ;
struct fuse_dirent ;
#define FUSE_NAME_OFFSET offsetof(struct fuse_dirent, name)
#define FUSE_DIRENT_ALIGN(x) (((x) + sizeof(__u64) - 1) & ~(sizeof(__u64) - 1))
#define FUSE_DIRENT_SIZE(d) \
FUSE_DIRENT_ALIGN(FUSE_NAME_OFFSET + (d)->namelen)
struct fuse_notify_inval_inode_out ;
struct fuse_notify_inval_entry_out ;
struct fuse_notify_store_out ;
struct fuse_notify_retrieve_out ;
struct fuse_notify_retrieve_in ;
