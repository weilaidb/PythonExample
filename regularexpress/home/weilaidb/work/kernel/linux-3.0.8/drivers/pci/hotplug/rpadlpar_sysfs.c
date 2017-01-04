#define DLPAR_KOBJ_NAME       "control"
#define ADD_SLOT_ATTR_NAME    add_slot
#define REMOVE_SLOT_ATTR_NAME remove_slot
#define MAX_DRC_NAME_LEN 64
static ssize_t add_slot_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t nbytes)
static ssize_t add_slot_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t remove_slot_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t nbytes)
static ssize_t remove_slot_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static struct kobj_attribute add_slot_attr =
__ATTR(ADD_SLOT_ATTR_NAME, 0644, add_slot_show, add_slot_store);
static struct kobj_attribute remove_slot_attr =
__ATTR(REMOVE_SLOT_ATTR_NAME, 0644, remove_slot_show, remove_slot_store);
static struct attribute *default_attrs[] = ;
static struct attribute_group dlpar_attr_group = ;
static struct kobject *dlpar_kobj;
int dlpar_sysfs_init(void)
void dlpar_sysfs_exit(void)
