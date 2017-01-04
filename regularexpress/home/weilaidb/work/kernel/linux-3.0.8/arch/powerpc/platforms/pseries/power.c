unsigned long rtas_poweron_auto;
static ssize_t auto_poweron_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t auto_poweron_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
static struct kobj_attribute auto_poweron_attr =
__ATTR(auto_poweron, 0644, auto_poweron_show, auto_poweron_store);
struct kobject *power_kobj;
static struct attribute *g[] = ;
static struct attribute_group attr_group = ;
static int __init pm_init(void)
core_initcall(pm_init);
static int __init apo_pm_init(void)
__initcall(apo_pm_init);
