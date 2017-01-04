STATIC int
xfs_quota_type(int type)
STATIC int
xfs_fs_get_xstate(
struct super_block	*sb,
struct fs_quota_stat	*fqs)
STATIC int
xfs_fs_set_xstate(
struct super_block	*sb,
unsigned int		uflags,
int			op)
STATIC int
xfs_fs_get_dqblk(
struct super_block	*sb,
int			type,
qid_t			id,
struct fs_disk_quota	*fdq)
STATIC int
xfs_fs_set_dqblk(
struct super_block	*sb,
int			type,
qid_t			id,
struct fs_disk_quota	*fdq)
const struct quotactl_ops xfs_quotactl_operations = ;
