static unsigned long db1x_pm_sleep_secs;
static unsigned long db1x_pm_wakemsk;
static unsigned long db1x_pm_last_wakesrc;
static int db1x_pm_enter(suspend_state_t state)
static int db1x_pm_begin(suspend_state_t state)
static void db1x_pm_end(void)
static const struct platform_suspend_ops db1x_pm_ops = ;
#define ATTRCMP(x) (0 == strcmp(attr->attr.name, #x))
static ssize_t db1x_pmattr_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t db1x_pmattr_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *instr,
size_t bytes)
#define ATTR(x)							\
static struct kobj_attribute x##_attribute = 		\
__ATTR(x, 0664, db1x_pmattr_show,		\
db1x_pmattr_store);
ATTR(gpio0)
ATTR(gpio1)
ATTR(gpio2)
ATTR(gpio3)
ATTR(gpio4)
ATTR(gpio5)
ATTR(gpio6)
ATTR(gpio7)
ATTR(timer)
ATTR(timer_timeout)
ATTR(wakesrc)
ATTR(wakemsk)
#define ATTR_LIST(x)	& x ## _attribute.attr
static struct attribute *db1x_pmattrs[] = ;
static struct attribute_group db1x_pmattr_group = ;
static int __init pm_init(void)
late_initcall(pm_init);
