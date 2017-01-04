#define VERSION "0.2"
#undef DEBUG
#define DBG(args...)	printk(args)
#define DBG(args...)	do  while(0)
static LIST_HEAD(wf_controls);
static LIST_HEAD(wf_sensors);
static DEFINE_MUTEX(wf_lock);
static BLOCKING_NOTIFIER_HEAD(wf_client_list);
static int wf_client_count;
static unsigned int wf_overtemp;
static unsigned int wf_overtemp_counter;
struct task_struct *wf_thread;
static struct platform_device wf_platform_device = ;
static inline void wf_notify(int event, void *param)
int wf_critical_overtemp(void)
EXPORT_SYMBOL_GPL(wf_critical_overtemp);
static int wf_thread_func(void *data)
static void wf_start_thread(void)
static void wf_stop_thread(void)
static void wf_control_release(struct kref *kref)
static ssize_t wf_show_control(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t wf_store_control(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
int wf_register_control(struct wf_control *new_ct)
EXPORT_SYMBOL_GPL(wf_register_control);
void wf_unregister_control(struct wf_control *ct)
EXPORT_SYMBOL_GPL(wf_unregister_control);
struct wf_control * wf_find_control(const char *name)
EXPORT_SYMBOL_GPL(wf_find_control);
int wf_get_control(struct wf_control *ct)
EXPORT_SYMBOL_GPL(wf_get_control);
void wf_put_control(struct wf_control *ct)
EXPORT_SYMBOL_GPL(wf_put_control);
static void wf_sensor_release(struct kref *kref)
static ssize_t wf_show_sensor(struct device *dev,
struct device_attribute *attr, char *buf)
int wf_register_sensor(struct wf_sensor *new_sr)
EXPORT_SYMBOL_GPL(wf_register_sensor);
void wf_unregister_sensor(struct wf_sensor *sr)
EXPORT_SYMBOL_GPL(wf_unregister_sensor);
struct wf_sensor * wf_find_sensor(const char *name)
EXPORT_SYMBOL_GPL(wf_find_sensor);
int wf_get_sensor(struct wf_sensor *sr)
EXPORT_SYMBOL_GPL(wf_get_sensor);
void wf_put_sensor(struct wf_sensor *sr)
EXPORT_SYMBOL_GPL(wf_put_sensor);
int wf_register_client(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(wf_register_client);
int wf_unregister_client(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(wf_unregister_client);
void wf_set_overtemp(void)
EXPORT_SYMBOL_GPL(wf_set_overtemp);
void wf_clear_overtemp(void)
EXPORT_SYMBOL_GPL(wf_clear_overtemp);
int wf_is_overtemp(void)
EXPORT_SYMBOL_GPL(wf_is_overtemp);
static int __init windfarm_core_init(void)
static void __exit windfarm_core_exit(void)
module_init(windfarm_core_init);
module_exit(windfarm_core_exit);
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("Core component of PowerMac thermal control");
MODULE_LICENSE("GPL");
