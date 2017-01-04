struct foo_obj ;
#define to_foo_obj(x) container_of(x, struct foo_obj, kobj)
struct foo_attribute ;
#define to_foo_attr(x) container_of(x, struct foo_attribute, attr)
static ssize_t foo_attr_show(struct kobject *kobj,
struct attribute *attr,
char *buf)
static ssize_t foo_attr_store(struct kobject *kobj,
struct attribute *attr,
const char *buf, size_t len)
static const struct sysfs_ops foo_sysfs_ops = ;
static void foo_release(struct kobject *kobj)
static ssize_t foo_show(struct foo_obj *foo_obj, struct foo_attribute *attr,
char *buf)
static ssize_t foo_store(struct foo_obj *foo_obj, struct foo_attribute *attr,
const char *buf, size_t count)
static struct foo_attribute foo_attribute =
__ATTR(foo, 0666, foo_show, foo_store);
static ssize_t b_show(struct foo_obj *foo_obj, struct foo_attribute *attr,
char *buf)
static ssize_t b_store(struct foo_obj *foo_obj, struct foo_attribute *attr,
const char *buf, size_t count)
static struct foo_attribute baz_attribute =
__ATTR(baz, 0666, b_show, b_store);
static struct foo_attribute bar_attribute =
__ATTR(bar, 0666, b_show, b_store);
static struct attribute *foo_default_attrs[] = ;
static struct kobj_type foo_ktype = ;
static struct kset *example_kset;
static struct foo_obj *foo_obj;
static struct foo_obj *bar_obj;
static struct foo_obj *baz_obj;
static struct foo_obj *create_foo_obj(const char *name)
static void destroy_foo_obj(struct foo_obj *foo)
static int __init example_init(void)
static void __exit example_exit(void)
module_init(example_init);
module_exit(example_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Greg Kroah-Hartman <greg@kroah.com>");
