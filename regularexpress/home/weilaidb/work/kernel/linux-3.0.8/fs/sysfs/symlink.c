static int sysfs_do_create_link(struct kobject *kobj, struct kobject *target,
const char *name, int warn)
int sysfs_create_link(struct kobject *kobj, struct kobject *target,
const char *name)
int sysfs_create_link_nowarn(struct kobject *kobj, struct kobject *target,
const char *name)
void sysfs_delete_link(struct kobject *kobj, struct kobject *targ,
const char *name)
void sysfs_remove_link(struct kobject * kobj, const char * name)
int sysfs_rename_link(struct kobject *kobj, struct kobject *targ,
const char *old, const char *new)
static int sysfs_get_target_path(struct sysfs_dirent *parent_sd,
struct sysfs_dirent *target_sd, char *path)
static int sysfs_getlink(struct dentry *dentry, char * path)
static void *sysfs_follow_link(struct dentry *dentry, struct nameidata *nd)
static void sysfs_put_link(struct dentry *dentry, struct nameidata *nd, void *cookie)
const struct inode_operations sysfs_symlink_inode_operations = ;
EXPORT_SYMBOL_GPL(sysfs_create_link);
EXPORT_SYMBOL_GPL(sysfs_remove_link);
EXPORT_SYMBOL_GPL(sysfs_rename_link);
