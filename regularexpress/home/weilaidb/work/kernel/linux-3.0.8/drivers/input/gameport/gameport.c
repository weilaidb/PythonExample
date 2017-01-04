#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Generic gameport layer");
MODULE_LICENSE("GPL");
static DEFINE_MUTEX(gameport_mutex);
static LIST_HEAD(gameport_list);
static struct bus_type gameport_bus;
static void gameport_add_port(struct gameport *gameport);
static void gameport_attach_driver(struct gameport_driver *drv);
static void gameport_reconnect_port(struct gameport *gameport);
static void gameport_disconnect_port(struct gameport *gameport);
#if defined(__i386__)
#define DELTA(x,y)      ((y)-(x)+((y)<(x)?1193182/HZ:0))
#define GET_TIME(x)     do  while (0)
static unsigned int get_time_pit(void)
static int gameport_measure_speed(struct gameport *gameport)
void gameport_start_polling(struct gameport *gameport)
EXPORT_SYMBOL(gameport_start_polling);
void gameport_stop_polling(struct gameport *gameport)
EXPORT_SYMBOL(gameport_stop_polling);
static void gameport_run_poll_handler(unsigned long d)
static int gameport_bind_driver(struct gameport *gameport, struct gameport_driver *drv)
static void gameport_find_driver(struct gameport *gameport)
enum gameport_event_type ;
struct gameport_event ;
static DEFINE_SPINLOCK(gameport_event_lock);
static LIST_HEAD(gameport_event_list);
static struct gameport_event *gameport_get_event(void)
static void gameport_free_event(struct gameport_event *event)
static void gameport_remove_duplicate_events(struct gameport_event *event)
static void gameport_handle_events(struct work_struct *work)
static DECLARE_WORK(gameport_event_work, gameport_handle_events);
static int gameport_queue_event(void *object, struct module *owner,
enum gameport_event_type event_type)
static void gameport_remove_pending_events(void *object)
static struct gameport *gameport_get_pending_child(struct gameport *parent)
static ssize_t gameport_show_description(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t gameport_rebind_driver(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static struct device_attribute gameport_device_attrs[] = ;
static void gameport_release_port(struct device *dev)
void gameport_set_phys(struct gameport *gameport, const char *fmt, ...)
EXPORT_SYMBOL(gameport_set_phys);
static void gameport_init_port(struct gameport *gameport)
static void gameport_add_port(struct gameport *gameport)
static void gameport_destroy_port(struct gameport *gameport)
static void gameport_reconnect_port(struct gameport *gameport)
static void gameport_disconnect_port(struct gameport *gameport)
void __gameport_register_port(struct gameport *gameport, struct module *owner)
EXPORT_SYMBOL(__gameport_register_port);
void gameport_unregister_port(struct gameport *gameport)
EXPORT_SYMBOL(gameport_unregister_port);
static ssize_t gameport_driver_show_description(struct device_driver *drv, char *buf)
static struct driver_attribute gameport_driver_attrs[] = ;
static int gameport_driver_probe(struct device *dev)
static int gameport_driver_remove(struct device *dev)
static void gameport_attach_driver(struct gameport_driver *drv)
int __gameport_register_driver(struct gameport_driver *drv, struct module *owner,
const char *mod_name)
EXPORT_SYMBOL(__gameport_register_driver);
void gameport_unregister_driver(struct gameport_driver *drv)
EXPORT_SYMBOL(gameport_unregister_driver);
static int gameport_bus_match(struct device *dev, struct device_driver *drv)
static struct bus_type gameport_bus = ;
static void gameport_set_drv(struct gameport *gameport, struct gameport_driver *drv)
int gameport_open(struct gameport *gameport, struct gameport_driver *drv, int mode)
EXPORT_SYMBOL(gameport_open);
void gameport_close(struct gameport *gameport)
EXPORT_SYMBOL(gameport_close);
static int __init gameport_init(void)
static void __exit gameport_exit(void)
subsys_initcall(gameport_init);
module_exit(gameport_exit);
