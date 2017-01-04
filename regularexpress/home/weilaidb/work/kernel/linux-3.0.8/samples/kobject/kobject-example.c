static int foo;
static int baz;
static int bar;
static ssize_t foo_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t foo_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute foo_attribute =
__ATTR(foo, 0666, foo_show, foo_store);
static ssize_t b_show(struct kobject *kobj, struct kobj_attribute *attr,
char *buf)
static ssize_t b_store(struct kobject *kobj, struct kobj_attribute *attr,
const char *buf, size_t count)
static struct kobj_attribute baz_attribute =
__ATTR(baz, 0666, b_show, b_store);
static struct kobj_attribute bar_attribute =
__ATTR(bar, 0666, b_show, b_store);
static struct attribute *attrs[] = ;
static struct attribute_group attr_group = ;
static struct kobject *example_kobj;
static int __init example_init(void)
static void __exit example_exit(void)
module_init(example_init);
module_exit(example_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Kroah-Hartman <greg@kroah.com>");
