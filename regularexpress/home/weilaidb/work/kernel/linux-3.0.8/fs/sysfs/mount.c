#define DEBUG
static struct vfsmount *sysfs_mnt;
struct kmem_cache *sysfs_dir_cachep;
static const struct super_operations sysfs_ops = ;
struct sysfs_dirent sysfs_root = ;
static int sysfs_fill_super(struct super_block *sb, void *data, int silent)
static int sysfs_test_super(struct super_block *sb, void *data)
static int sysfs_set_super(struct super_block *sb, void *data)
static void free_sysfs_super_info(struct sysfs_super_info *info)
static struct dentry *sysfs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static void sysfs_kill_sb(struct super_block *sb)
static struct file_system_type sysfs_fs_type = ;
int __init sysfs_init(void)
#undef sysfs_get
struct sysfs_dirent *sysfs_get(struct sysfs_dirent *sd)
EXPORT_SYMBOL_GPL(sysfs_get);
#undef sysfs_put
void sysfs_put(struct sysfs_dirent *sd)
EXPORT_SYMBOL_GPL(sysfs_put);
