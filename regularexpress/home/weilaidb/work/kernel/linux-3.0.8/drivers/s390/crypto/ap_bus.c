#define KMSG_COMPONENT "ap"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static void ap_scan_bus(struct work_struct *);
static void ap_poll_all(unsigned long);
static enum hrtimer_restart ap_poll_timeout(struct hrtimer *);
static int ap_poll_thread_start(void);
static void ap_poll_thread_stop(void);
static void ap_request_timeout(unsigned long);
static inline void ap_schedule_poll_timer(void);
static int __ap_poll_device(struct ap_device *ap_dev, unsigned long *flags);
static int ap_device_remove(struct device *dev);
static int ap_device_probe(struct device *dev);
static void ap_interrupt_handler(void *unused1, void *unused2);
static void ap_reset(struct ap_device *ap_dev);
static void ap_config_timeout(unsigned long ptr);
static int ap_select_domain(void);
MODULE_AUTHOR("IBM Corporation");
MODULE_DESCRIPTION("Adjunct Processor Bus driver, "
"Copyright 2006 IBM Corporation");
MODULE_LICENSE("GPL");
int ap_domain_index = -1;
module_param_named(domain, ap_domain_index, int, 0000);
MODULE_PARM_DESC(domain, "domain index for ap devices");
EXPORT_SYMBOL(ap_domain_index);
static int ap_thread_flag = 0;
module_param_named(poll_thread, ap_thread_flag, int, 0000);
MODULE_PARM_DESC(poll_thread, "Turn on/off poll thread, default is 0 (off).");
static struct device *ap_root_device = NULL;
static DEFINE_SPINLOCK(ap_device_list_lock);
static LIST_HEAD(ap_device_list);
static struct workqueue_struct *ap_work_queue;
static struct timer_list ap_config_timer;
static int ap_config_time = AP_CONFIG_TIME;
static DECLARE_WORK(ap_config_work, ap_scan_bus);
static DECLARE_TASKLET(ap_tasklet, ap_poll_all, 0);
static atomic_t ap_poll_requests = ATOMIC_INIT(0);
static DECLARE_WAIT_QUEUE_HEAD(ap_poll_wait);
static struct task_struct *ap_poll_kthread = NULL;
static DEFINE_MUTEX(ap_poll_thread_mutex);
static DEFINE_SPINLOCK(ap_poll_timer_lock);
static void *ap_interrupt_indicator;
static struct hrtimer ap_poll_timer;
static unsigned long long poll_timeout = 250000;
static int ap_suspend_flag;
static int user_set_domain = 0;
static struct bus_type ap_bus_type;
static inline int ap_using_interrupts(void)
static inline int ap_instructions_available(void)
static int ap_interrupts_available(void)
static inline struct ap_queue_status
ap_test_queue(ap_qid_t qid, int *queue_depth, int *device_type)
static inline struct ap_queue_status ap_reset_queue(ap_qid_t qid)
static inline struct ap_queue_status
ap_queue_interruption_control(ap_qid_t qid, void *ind)
static inline struct ap_queue_status __ap_4096_commands_available(ap_qid_t qid,
int *support)
int ap_4096_commands_available(ap_qid_t qid)
EXPORT_SYMBOL(ap_4096_commands_available);
static int ap_queue_enable_interruption(ap_qid_t qid, void *ind)
static inline struct ap_queue_status
__ap_send(ap_qid_t qid, unsigned long long psmid, void *msg, size_t length,
unsigned int special)
int ap_send(ap_qid_t qid, unsigned long long psmid, void *msg, size_t length)
EXPORT_SYMBOL(ap_send);
static inline struct ap_queue_status
__ap_recv(ap_qid_t qid, unsigned long long *psmid, void *msg, size_t length)
int ap_recv(ap_qid_t qid, unsigned long long *psmid, void *msg, size_t length)
EXPORT_SYMBOL(ap_recv);
static int ap_query_queue(ap_qid_t qid, int *queue_depth, int *device_type)
static int ap_init_queue(ap_qid_t qid)
static void ap_increase_queue_count(struct ap_device *ap_dev)
static void ap_decrease_queue_count(struct ap_device *ap_dev)
static ssize_t ap_hwtype_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hwtype, 0444, ap_hwtype_show, NULL);
static ssize_t ap_depth_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(depth, 0444, ap_depth_show, NULL);
static ssize_t ap_request_count_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(request_count, 0444, ap_request_count_show, NULL);
static ssize_t ap_modalias_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(modalias, 0444, ap_modalias_show, NULL);
static struct attribute *ap_dev_attrs[] = ;
static struct attribute_group ap_dev_attr_group = ;
static int ap_bus_match(struct device *dev, struct device_driver *drv)
static int ap_uevent (struct device *dev, struct kobj_uevent_env *env)
static int ap_bus_suspend(struct device *dev, pm_message_t state)
static int ap_bus_resume(struct device *dev)
static struct bus_type ap_bus_type = ;
static int ap_device_probe(struct device *dev)
static void __ap_flush_queue(struct ap_device *ap_dev)
void ap_flush_queue(struct ap_device *ap_dev)
EXPORT_SYMBOL(ap_flush_queue);
static int ap_device_remove(struct device *dev)
int ap_driver_register(struct ap_driver *ap_drv, struct module *owner,
char *name)
EXPORT_SYMBOL(ap_driver_register);
void ap_driver_unregister(struct ap_driver *ap_drv)
EXPORT_SYMBOL(ap_driver_unregister);
static ssize_t ap_domain_show(struct bus_type *bus, char *buf)
static BUS_ATTR(ap_domain, 0444, ap_domain_show, NULL);
static ssize_t ap_config_time_show(struct bus_type *bus, char *buf)
static ssize_t ap_interrupts_show(struct bus_type *bus, char *buf)
static BUS_ATTR(ap_interrupts, 0444, ap_interrupts_show, NULL);
static ssize_t ap_config_time_store(struct bus_type *bus,
const char *buf, size_t count)
static BUS_ATTR(config_time, 0644, ap_config_time_show, ap_config_time_store);
static ssize_t ap_poll_thread_show(struct bus_type *bus, char *buf)
static ssize_t ap_poll_thread_store(struct bus_type *bus,
const char *buf, size_t count)
static BUS_ATTR(poll_thread, 0644, ap_poll_thread_show, ap_poll_thread_store);
static ssize_t poll_timeout_show(struct bus_type *bus, char *buf)
static ssize_t poll_timeout_store(struct bus_type *bus, const char *buf,
size_t count)
static BUS_ATTR(poll_timeout, 0644, poll_timeout_show, poll_timeout_store);
static struct bus_attribute *const ap_bus_attrs[] = ;
static int ap_select_domain(void)
static int ap_probe_device_type(struct ap_device *ap_dev)
static void ap_interrupt_handler(void *unused1, void *unused2)
static int __ap_scan_bus(struct device *dev, void *data)
static void ap_device_release(struct device *dev)
static void ap_scan_bus(struct work_struct *unused)
static void
ap_config_timeout(unsigned long ptr)
static inline void ap_schedule_poll_timer(void)
static int ap_poll_read(struct ap_device *ap_dev, unsigned long *flags)
static int ap_poll_write(struct ap_device *ap_dev, unsigned long *flags)
static inline int ap_poll_queue(struct ap_device *ap_dev, unsigned long *flags)
static int __ap_queue_message(struct ap_device *ap_dev, struct ap_message *ap_msg)
void ap_queue_message(struct ap_device *ap_dev, struct ap_message *ap_msg)
EXPORT_SYMBOL(ap_queue_message);
void ap_cancel_message(struct ap_device *ap_dev, struct ap_message *ap_msg)
EXPORT_SYMBOL(ap_cancel_message);
static enum hrtimer_restart ap_poll_timeout(struct hrtimer *unused)
static void ap_reset(struct ap_device *ap_dev)
static int __ap_poll_device(struct ap_device *ap_dev, unsigned long *flags)
static void ap_poll_all(unsigned long dummy)
static int ap_poll_thread(void *data)
static int ap_poll_thread_start(void)
static void ap_poll_thread_stop(void)
static void ap_request_timeout(unsigned long data)
static void ap_reset_domain(void)
static void ap_reset_all(void)
static struct reset_call ap_reset_call = ;
int __init ap_module_init(void)
static int __ap_match_all(struct device *dev, void *data)
void ap_module_exit(void)
module_init(ap_module_init);
module_exit(ap_module_exit);
