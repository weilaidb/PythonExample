#define RAID_NUM_ATTRS	3
struct raid_internal ;
struct raid_component ;
#define to_raid_internal(tmpl)	container_of(tmpl, struct raid_internal, r)
#define tc_to_raid_internal(tcont) ()
#define ac_to_raid_internal(acont) ()
#define device_to_raid_internal(dev) ()
static int raid_match(struct attribute_container *cont, struct device *dev)
static int raid_setup(struct transport_container *tc, struct device *dev,
struct device *cdev)
static int raid_remove(struct transport_container *tc, struct device *dev,
struct device *cdev)
static DECLARE_TRANSPORT_CLASS(raid_class,
"raid_devices",
raid_setup,
raid_remove,
NULL);
static const struct  raid_states[] = ;
static const char *raid_state_name(enum raid_state state)
static struct  raid_levels[] = ;
static const char *raid_level_name(enum raid_level level)
#define raid_attr_show_internal(attr, fmt, var, code)			\
static ssize_t raid_show_##attr(struct device *dev, 			\
struct device_attribute *attr, 		\
char *buf)				\
#define raid_attr_ro_states(attr, states, code)				\
raid_attr_show_internal(attr, %s, name,					\
const char *name;						\
code								\
name = raid_##states##_name(rd->attr);				\
)									\
static DEVICE_ATTR(attr, S_IRUGO, raid_show_##attr, NULL)
#define raid_attr_ro_internal(attr, code)				\
raid_attr_show_internal(attr, %d, rd->attr, code)			\
static DEVICE_ATTR(attr, S_IRUGO, raid_show_##attr, NULL)
#define ATTR_CODE(attr)							\
struct raid_internal *i = device_to_raid_internal(dev);		\
if (i->f->get_##attr)						\
i->f->get_##attr(dev->parent);
#define raid_attr_ro(attr)	raid_attr_ro_internal(attr, )
#define raid_attr_ro_fn(attr)	raid_attr_ro_internal(attr, ATTR_CODE(attr))
#define raid_attr_ro_state(attr)	raid_attr_ro_states(attr, attr, )
#define raid_attr_ro_state_fn(attr)	raid_attr_ro_states(attr, attr, ATTR_CODE(attr))
raid_attr_ro_state(level);
raid_attr_ro_fn(resync);
raid_attr_ro_state_fn(state);
static void raid_component_release(struct device *dev)
int raid_component_add(struct raid_template *r,struct device *raid_dev,
struct device *component_dev)
EXPORT_SYMBOL(raid_component_add);
struct raid_template *
raid_class_attach(struct raid_function_template *ft)
EXPORT_SYMBOL(raid_class_attach);
void
raid_class_release(struct raid_template *r)
EXPORT_SYMBOL(raid_class_release);
static __init int raid_init(void)
static __exit void raid_exit(void)
MODULE_AUTHOR("James Bottomley");
MODULE_DESCRIPTION("RAID device class");
MODULE_LICENSE("GPL");
module_init(raid_init);
module_exit(raid_exit);
