static struct vfsmount *dev_mnt;
#if defined CONFIG_DEVTMPFS_MOUNT
static int mount_dev = 1;
static int mount_dev;
static DEFINE_MUTEX(dirlock);
static int __init mount_param(char *str)
__setup("devtmpfs.mount=", mount_param);
static struct dentry *dev_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *data)
static struct file_system_type dev_fs_type = ;
static inline int is_blockdev(struct device *dev)
static inline int is_blockdev(struct device *dev)
static int dev_mkdir(const char *name, mode_t mode)
static int create_path(const char *nodepath)
int devtmpfs_create_node(struct device *dev)
static int dev_rmdir(const char *name)
static int delete_path(const char *nodepath)
static int dev_mynode(struct device *dev, struct inode *inode, struct kstat *stat)
int devtmpfs_delete_node(struct device *dev)
int devtmpfs_mount(const char *mntdir)
int __init devtmpfs_init(void)
