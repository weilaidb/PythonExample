static ssize_t version_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute attr_version =
__ATTR(interface_revision, S_IFREG | S_IRUGO, version_show, NULL);
static struct attribute *o2cb_attrs[] = ;
static struct attribute_group o2cb_attr_group = ;
static struct kset *o2cb_kset;
void o2cb_sys_shutdown(void)
int o2cb_sys_init(void)
