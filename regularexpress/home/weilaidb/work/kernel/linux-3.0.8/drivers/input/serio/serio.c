#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Serio abstraction core");
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(serio_mutex);
static LIST_HEAD(serio_list);
static struct bus_type serio_bus;
static void serio_add_port(struct serio *serio);
static int serio_reconnect_port(struct serio *serio);
static void serio_disconnect_port(struct serio *serio);
static void serio_reconnect_subtree(struct serio *serio);
static void serio_attach_driver(struct serio_driver *drv);
static int serio_connect_driver(struct serio *serio, struct serio_driver *drv)
static int serio_reconnect_driver(struct serio *serio)
static void serio_disconnect_driver(struct serio *serio)
static int serio_match_port(const struct serio_device_id *ids, struct serio *serio)
static int serio_bind_driver(struct serio *serio, struct serio_driver *drv)
static void serio_find_driver(struct serio *serio)
enum serio_event_type ;
struct serio_event ;
static DEFINE_SPINLOCK(serio_event_lock);
static LIST_HEAD(serio_event_list);
static struct serio_event *serio_get_event(void)
static void serio_free_event(struct serio_event *event)
static void serio_remove_duplicate_events(void *object,
enum serio_event_type type)
static void serio_handle_event(struct work_struct *work)
static DECLARE_WORK(serio_event_work, serio_handle_event);
static int serio_queue_event(void *object, struct module *owner,
enum serio_event_type event_type)
static void serio_remove_pending_events(void *object)
static struct serio *serio_get_pending_child(struct serio *parent)
static ssize_t serio_show_description(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_show_modalias(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_show_id_type(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_show_id_proto(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_show_id_id(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_show_id_extra(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(type, S_IRUGO, serio_show_id_type, NULL);
static DEVICE_ATTR(proto, S_IRUGO, serio_show_id_proto, NULL);
static DEVICE_ATTR(id, S_IRUGO, serio_show_id_id, NULL);
static DEVICE_ATTR(extra, S_IRUGO, serio_show_id_extra, NULL);
static struct attribute *serio_device_id_attrs[] = ;
static struct attribute_group serio_id_attr_group = ;
static const struct attribute_group *serio_device_attr_groups[] = ;
static ssize_t serio_rebind_driver(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static ssize_t serio_show_bind_mode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t serio_set_bind_mode(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static struct device_attribute serio_device_attrs[] = ;
static void serio_release_port(struct device *dev)
static void serio_init_port(struct serio *serio)
static void serio_add_port(struct serio *serio)
static void serio_destroy_port(struct serio *serio)
static int serio_reconnect_port(struct serio *serio)
static void serio_reconnect_subtree(struct serio *root)
static void serio_disconnect_port(struct serio *serio)
void serio_rescan(struct serio *serio)
EXPORT_SYMBOL(serio_rescan);
void serio_reconnect(struct serio *serio)
EXPORT_SYMBOL(serio_reconnect);
void __serio_register_port(struct serio *serio, struct module *owner)
EXPORT_SYMBOL(__serio_register_port);
void serio_unregister_port(struct serio *serio)
EXPORT_SYMBOL(serio_unregister_port);
void serio_unregister_child_port(struct serio *serio)
EXPORT_SYMBOL(serio_unregister_child_port);
static ssize_t serio_driver_show_description(struct device_driver *drv, char *buf)
static ssize_t serio_driver_show_bind_mode(struct device_driver *drv, char *buf)
static ssize_t serio_driver_set_bind_mode(struct device_driver *drv, const char *buf, size_t count)
static struct driver_attribute serio_driver_attrs[] = ;
static int serio_driver_probe(struct device *dev)
static int serio_driver_remove(struct device *dev)
static void serio_cleanup(struct serio *serio)
static void serio_shutdown(struct device *dev)
static void serio_attach_driver(struct serio_driver *drv)
int __serio_register_driver(struct serio_driver *drv, struct module *owner, const char *mod_name)
EXPORT_SYMBOL(__serio_register_driver);
void serio_unregister_driver(struct serio_driver *drv)
EXPORT_SYMBOL(serio_unregister_driver);
static void serio_set_drv(struct serio *serio, struct serio_driver *drv)
static int serio_bus_match(struct device *dev, struct device_driver *drv)
#define SERIO_ADD_UEVENT_VAR(fmt, val...)				\
do  while (0)
static int serio_uevent(struct device *dev, struct kobj_uevent_env *env)
#undef SERIO_ADD_UEVENT_VAR
static int serio_uevent(struct device *dev, struct kobj_uevent_env *env)
static int serio_suspend(struct device *dev)
static int serio_resume(struct device *dev)
static const struct dev_pm_ops serio_pm_ops = ;
int serio_open(struct serio *serio, struct serio_driver *drv)
EXPORT_SYMBOL(serio_open);
void serio_close(struct serio *serio)
EXPORT_SYMBOL(serio_close);
irqreturn_t serio_interrupt(struct serio *serio,
unsigned char data, unsigned int dfl)
EXPORT_SYMBOL(serio_interrupt);
static struct bus_type serio_bus = ;
static int __init serio_init(void)
static void __exit serio_exit(void)
subsys_initcall(serio_init);
module_exit(serio_exit);
