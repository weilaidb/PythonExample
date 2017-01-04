static void remove_files(struct sysfs_dirent *dir_sd, struct kobject *kobj,
const struct attribute_group *grp)
static int create_files(struct sysfs_dirent *dir_sd, struct kobject *kobj,
const struct attribute_group *grp, int update)
static int internal_create_group(struct kobject *kobj, int update,
const struct attribute_group *grp)
int sysfs_create_group(struct kobject *kobj,
const struct attribute_group *grp)
int sysfs_update_group(struct kobject *kobj,
const struct attribute_group *grp)
void sysfs_remove_group(struct kobject * kobj,
const struct attribute_group * grp)
int sysfs_merge_group(struct kobject *kobj,
const struct attribute_group *grp)
EXPORT_SYMBOL_GPL(sysfs_merge_group);
void sysfs_unmerge_group(struct kobject *kobj,
const struct attribute_group *grp)
EXPORT_SYMBOL_GPL(sysfs_unmerge_group);
EXPORT_SYMBOL_GPL(sysfs_create_group);
EXPORT_SYMBOL_GPL(sysfs_update_group);
EXPORT_SYMBOL_GPL(sysfs_remove_group);
