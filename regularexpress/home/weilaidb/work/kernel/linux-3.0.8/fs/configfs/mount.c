#define CONFIGFS_MAGIC 0x62656570
struct vfsmount * configfs_mount = NULL;
struct super_block * configfs_sb = NULL;
struct kmem_cache *configfs_dir_cachep;
static int configfs_mnt_count = 0;
static const struct super_operations configfs_ops = ;
static struct config_group configfs_root_group = ;
int configfs_is_root(struct config_item *item)
static struct configfs_dirent configfs_root = ;
static int configfs_fill_super(struct super_block *sb, void *data, int silent)
static struct dentry *configfs_do_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *data)
static struct file_system_type configfs_fs_type = ;
int configfs_pin_fs(void)
void configfs_release_fs(void)
static struct kobject *config_kobj;
static int __init configfs_init(void)
static void __exit configfs_exit(void)
MODULE_AUTHOR("Oracle");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.0.2");
MODULE_DESCRIPTION("Simple RAM filesystem for user driven kernel subsystem configuration.");
module_init(configfs_init);
module_exit(configfs_exit);
