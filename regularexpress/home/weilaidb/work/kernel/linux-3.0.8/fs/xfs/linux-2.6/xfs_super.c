static const struct super_operations xfs_super_operations;
static kmem_zone_t *xfs_ioend_zone;
mempool_t *xfs_ioend_pool;
#define MNTOPT_LOGBUFS	"logbufs"
#define MNTOPT_LOGBSIZE	"logbsize"
#define MNTOPT_LOGDEV	"logdev"
#define MNTOPT_RTDEV	"rtdev"
#define MNTOPT_BIOSIZE	"biosize"
#define MNTOPT_WSYNC	"wsync"
#define MNTOPT_NOALIGN	"noalign"
#define MNTOPT_SWALLOC	"swalloc"
#define MNTOPT_SUNIT	"sunit"
#define MNTOPT_SWIDTH	"swidth"
#define MNTOPT_NOUUID	"nouuid"
#define MNTOPT_MTPT	"mtpt"
#define MNTOPT_GRPID	"grpid"
#define MNTOPT_NOGRPID	"nogrpid"
#define MNTOPT_BSDGROUPS    "bsdgroups"
#define MNTOPT_SYSVGROUPS   "sysvgroups"
#define MNTOPT_ALLOCSIZE    "allocsize"
#define MNTOPT_NORECOVERY   "norecovery"
#define MNTOPT_BARRIER	"barrier"
#define MNTOPT_NOBARRIER "nobarrier"
#define MNTOPT_64BITINODE   "inode64"
#define MNTOPT_IKEEP	"ikeep"
#define MNTOPT_NOIKEEP	"noikeep"
#define MNTOPT_LARGEIO	   "largeio"
#define MNTOPT_NOLARGEIO   "nolargeio"
#define MNTOPT_ATTR2	"attr2"
#define MNTOPT_NOATTR2	"noattr2"
#define MNTOPT_FILESTREAM  "filestreams"
#define MNTOPT_QUOTA	"quota"
#define MNTOPT_NOQUOTA	"noquota"
#define MNTOPT_USRQUOTA	"usrquota"
#define MNTOPT_GRPQUOTA	"grpquota"
#define MNTOPT_PRJQUOTA	"prjquota"
#define MNTOPT_UQUOTA	"uquota"
#define MNTOPT_GQUOTA	"gquota"
#define MNTOPT_PQUOTA	"pquota"
#define MNTOPT_UQUOTANOENF "uqnoenforce"
#define MNTOPT_GQUOTANOENF "gqnoenforce"
#define MNTOPT_PQUOTANOENF "pqnoenforce"
#define MNTOPT_QUOTANOENF  "qnoenforce"
#define MNTOPT_DELAYLOG    "delaylog"
#define MNTOPT_NODELAYLOG  "nodelaylog"
#define MNTOPT_DISCARD	   "discard"
#define MNTOPT_NODISCARD   "nodiscard"
enum ;
static const match_table_t tokens = ;
STATIC unsigned long
suffix_strtoul(char *s, char **endp, unsigned int base)
STATIC int
xfs_parseargs(
struct xfs_mount	*mp,
char			*options)
struct proc_xfs_info ;
STATIC int
xfs_showargs(
struct xfs_mount	*mp,
struct seq_file		*m)
__uint64_t
xfs_max_file_offset(
unsigned int		blockshift)
STATIC int
xfs_blkdev_get(
xfs_mount_t		*mp,
const char		*name,
struct block_device	**bdevp)
STATIC void
xfs_blkdev_put(
struct block_device	*bdev)
void
xfs_blkdev_issue_flush(
xfs_buftarg_t		*buftarg)
STATIC void
xfs_close_devices(
struct xfs_mount	*mp)
STATIC int
xfs_open_devices(
struct xfs_mount	*mp)
STATIC int
xfs_setup_devices(
struct xfs_mount	*mp)
STATIC struct inode *
xfs_fs_alloc_inode(
struct super_block	*sb)
STATIC void
xfs_fs_destroy_inode(
struct inode		*inode)
STATIC void
xfs_fs_inode_init_once(
void			*inode)
STATIC void
xfs_fs_dirty_inode(
struct inode	*inode,
int		flags)
STATIC int
xfs_log_inode(
struct xfs_inode	*ip)
STATIC int
xfs_fs_write_inode(
struct inode		*inode,
struct writeback_control *wbc)
STATIC void
xfs_fs_evict_inode(
struct inode		*inode)
STATIC void
xfs_free_fsname(
struct xfs_mount	*mp)
STATIC void
xfs_fs_put_super(
struct super_block	*sb)
STATIC int
xfs_fs_sync_fs(
struct super_block	*sb,
int			wait)
STATIC int
xfs_fs_statfs(
struct dentry		*dentry,
struct kstatfs		*statp)
STATIC void
xfs_save_resvblks(struct xfs_mount *mp)
STATIC void
xfs_restore_resvblks(struct xfs_mount *mp)
STATIC int
xfs_fs_remount(
struct super_block	*sb,
int			*flags,
char			*options)
STATIC int
xfs_fs_freeze(
struct super_block	*sb)
STATIC int
xfs_fs_unfreeze(
struct super_block	*sb)
STATIC int
xfs_fs_show_options(
struct seq_file		*m,
struct vfsmount		*mnt)
STATIC int
xfs_finish_flags(
struct xfs_mount	*mp)
STATIC int
xfs_fs_fill_super(
struct super_block	*sb,
void			*data,
int			silent)
STATIC struct dentry *
xfs_fs_mount(
struct file_system_type	*fs_type,
int			flags,
const char		*dev_name,
void			*data)
static const struct super_operations xfs_super_operations = ;
static struct file_system_type xfs_fs_type = ;
STATIC int __init
xfs_init_zones(void)
STATIC void
xfs_destroy_zones(void)
STATIC int __init
xfs_init_workqueues(void)
STATIC void
xfs_destroy_workqueues(void)
STATIC int __init
init_xfs_fs(void)
STATIC void __exit
exit_xfs_fs(void)
module_init(init_xfs_fs);
module_exit(exit_xfs_fs);
MODULE_AUTHOR("Silicon Graphics, Inc.");
MODULE_DESCRIPTION(XFS_VERSION_STRING " with " XFS_BUILD_OPTIONS " enabled");
MODULE_LICENSE("GPL");
