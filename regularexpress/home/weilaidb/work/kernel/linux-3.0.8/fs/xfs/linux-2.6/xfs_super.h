#define __XFS_SUPER_H__
extern void xfs_qm_init(void);
extern void xfs_qm_exit(void);
# define vfs_initquota()	xfs_qm_init()
# define vfs_exitquota()	xfs_qm_exit()
# define vfs_initquota()	do  while (0)
# define vfs_exitquota()	do  while (0)
# define XFS_ACL_STRING		"ACLs, "
# define set_posix_acl_flag(sb)	((sb)->s_flags |= MS_POSIXACL)
# define XFS_ACL_STRING
# define set_posix_acl_flag(sb)	do  while (0)
#define XFS_SECURITY_STRING	"security attributes, "
# define XFS_REALTIME_STRING	"realtime, "
# define XFS_REALTIME_STRING
#if XFS_BIG_BLKNOS
# if XFS_BIG_INUMS
#  define XFS_BIGFS_STRING	"large block/inode numbers, "
# else
#  define XFS_BIGFS_STRING	"large block numbers, "
# endif
# define XFS_BIGFS_STRING
# define XFS_DBG_STRING		"debug"
# define XFS_DBG_STRING		"no debug"
#define XFS_VERSION_STRING	"SGI XFS"
#define XFS_BUILD_OPTIONS	XFS_ACL_STRING \
XFS_SECURITY_STRING \
XFS_REALTIME_STRING \
XFS_BIGFS_STRING \
XFS_DBG_STRING
struct xfs_inode;
struct xfs_mount;
struct xfs_buftarg;
struct block_device;
extern __uint64_t xfs_max_file_offset(unsigned int);
extern void xfs_blkdev_issue_flush(struct xfs_buftarg *);
extern const struct export_operations xfs_export_operations;
extern const struct xattr_handler *xfs_xattr_handlers[];
extern const struct quotactl_ops xfs_quotactl_operations;
#define XFS_M(sb)		((struct xfs_mount *)((sb)->s_fs_info))
