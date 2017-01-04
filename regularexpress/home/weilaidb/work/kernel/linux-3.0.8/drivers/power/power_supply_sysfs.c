#define POWER_SUPPLY_ATTR(_name)					\
static struct device_attribute power_supply_attrs[];
static ssize_t power_supply_show_property(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t power_supply_store_property(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute power_supply_attrs[] = ;
static struct attribute *
__power_supply_attrs[ARRAY_SIZE(power_supply_attrs) + 1];
static mode_t power_supply_attr_is_visible(struct kobject *kobj,
struct attribute *attr,
int attrno)
static struct attribute_group power_supply_attr_group = ;
static const struct attribute_group *power_supply_attr_groups[] = ;
void power_supply_init_attrs(struct device_type *dev_type)
static char *kstruprdup(const char *str, gfp_t gfp)
int power_supply_uevent(struct device *dev, struct kobj_uevent_env *env)
