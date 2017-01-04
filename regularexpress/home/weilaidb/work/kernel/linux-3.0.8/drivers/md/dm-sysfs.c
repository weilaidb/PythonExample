struct dm_sysfs_attr ;
#define DM_ATTR_RO(_name) \
struct dm_sysfs_attr dm_attr_##_name = \
__ATTR(_name, S_IRUGO, dm_attr_##_name##_show, NULL)
static ssize_t dm_attr_show(struct kobject *kobj, struct attribute *attr,
char *page)
static ssize_t dm_attr_name_show(struct mapped_device *md, char *buf)
static ssize_t dm_attr_uuid_show(struct mapped_device *md, char *buf)
static ssize_t dm_attr_suspended_show(struct mapped_device *md, char *buf)
static DM_ATTR_RO(name);
static DM_ATTR_RO(uuid);
static DM_ATTR_RO(suspended);
static struct attribute *dm_attrs[] = ;
static const struct sysfs_ops dm_sysfs_ops = ;
static struct kobj_type dm_ktype = ;
int dm_sysfs_init(struct mapped_device *md)
void dm_sysfs_exit(struct mapped_device *md)
