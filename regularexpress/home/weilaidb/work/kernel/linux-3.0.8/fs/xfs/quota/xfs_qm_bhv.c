STATIC void
xfs_fill_statvfs_from_dquot(
struct kstatfs		*statp,
xfs_disk_dquot_t	*dp)
void
xfs_qm_statvfs(
xfs_inode_t		*ip,
struct kstatfs		*statp)
int
xfs_qm_newmount(
xfs_mount_t	*mp,
uint		*needquotamount,
uint		*quotaflags)
void __init
xfs_qm_init(void)
void __exit
xfs_qm_exit(void)
