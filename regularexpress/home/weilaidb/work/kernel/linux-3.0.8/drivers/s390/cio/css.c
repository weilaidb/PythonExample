#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
int css_init_done = 0;
int max_ssid;
struct channel_subsystem *channel_subsystems[__MAX_CSSID + 1];
static struct bus_type css_bus_type;
int
for_each_subchannel(int(*fn)(struct subchannel_id, void *), void *data)
struct cb_data ;
static int call_fn_known_sch(struct device *dev, void *data)
static int call_fn_unknown_sch(struct subchannel_id schid, void *data)
static int call_fn_all_sch(struct subchannel_id schid, void *data)
int for_each_subchannel_staged(int (*fn_known)(struct subchannel *, void *),
int (*fn_unknown)(struct subchannel_id,
void *), void *data)
static void css_sch_todo(struct work_struct *work);
static struct subchannel *
css_alloc_subchannel(struct subchannel_id schid)
static void
css_subchannel_release(struct device *dev)
static int css_sch_device_register(struct subchannel *sch)
void css_sch_device_unregister(struct subchannel *sch)
EXPORT_SYMBOL_GPL(css_sch_device_unregister);
static void css_sch_todo(struct work_struct *work)
void css_sched_sch_todo(struct subchannel *sch, enum sch_todo todo)
static void ssd_from_pmcw(struct chsc_ssd_info *ssd, struct pmcw *pmcw)
static void ssd_register_chpids(struct chsc_ssd_info *ssd)
void css_update_ssd_info(struct subchannel *sch)
static ssize_t type_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(type, 0444, type_show, NULL);
static ssize_t modalias_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(modalias, 0444, modalias_show, NULL);
static struct attribute *subch_attrs[] = ;
static struct attribute_group subch_attr_group = ;
static const struct attribute_group *default_subch_attr_groups[] = ;
static int css_register_subchannel(struct subchannel *sch)
int css_probe_device(struct subchannel_id schid)
static int
check_subchannel(struct device * dev, void * data)
struct subchannel *
get_subchannel_by_schid(struct subchannel_id schid)
int css_sch_is_valid(struct schib *schib)
EXPORT_SYMBOL_GPL(css_sch_is_valid);
static int css_evaluate_new_subchannel(struct subchannel_id schid, int slow)
static int css_evaluate_known_subchannel(struct subchannel *sch, int slow)
static void css_evaluate_subchannel(struct subchannel_id schid, int slow)
static struct idset *slow_subchannel_set;
static spinlock_t slow_subchannel_lock;
static wait_queue_head_t css_eval_wq;
static atomic_t css_eval_scheduled;
static int __init slow_subchannel_init(void)
static int slow_eval_known_fn(struct subchannel *sch, void *data)
static int slow_eval_unknown_fn(struct subchannel_id schid, void *data)
static void css_slow_path_func(struct work_struct *unused)
static DECLARE_WORK(slow_path_work, css_slow_path_func);
struct workqueue_struct *cio_work_q;
void css_schedule_eval(struct subchannel_id schid)
void css_schedule_eval_all(void)
static int __unset_registered(struct device *dev, void *data)
static void css_schedule_eval_all_unreg(void)
void css_wait_for_slow_path(void)
void css_schedule_reprobe(void)
EXPORT_SYMBOL_GPL(css_schedule_reprobe);
static void css_process_crw(struct crw *crw0, struct crw *crw1, int overflow)
static void __init
css_generate_pgid(struct channel_subsystem *css, u32 tod_high)
static void
channel_subsystem_release(struct device *dev)
static ssize_t
css_cm_enable_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
css_cm_enable_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(cm_enable, 0644, css_cm_enable_show, css_cm_enable_store);
static int __init setup_css(int nr)
static int css_reboot_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static struct notifier_block css_reboot_notifier = ;
static int css_power_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block css_power_notifier = ;
static int __init css_bus_init(void)
static void __init css_bus_cleanup(void)
static int __init channel_subsystem_init(void)
subsys_initcall(channel_subsystem_init);
static int css_settle(struct device_driver *drv, void *unused)
int css_complete_work(void)
static int __init channel_subsystem_init_sync(void)
subsys_initcall_sync(channel_subsystem_init_sync);
void channel_subsystem_reinit(void)
static ssize_t cio_settle_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations cio_settle_proc_fops = ;
static int __init cio_settle_init(void)
device_initcall(cio_settle_init);
int sch_is_pseudo_sch(struct subchannel *sch)
static int css_bus_match(struct device *dev, struct device_driver *drv)
static int css_probe(struct device *dev)
static int css_remove(struct device *dev)
static void css_shutdown(struct device *dev)
static int css_uevent(struct device *dev, struct kobj_uevent_env *env)
static int css_pm_prepare(struct device *dev)
static void css_pm_complete(struct device *dev)
static int css_pm_freeze(struct device *dev)
static int css_pm_thaw(struct device *dev)
static int css_pm_restore(struct device *dev)
static const struct dev_pm_ops css_pm_ops = ;
static struct bus_type css_bus_type = ;
int css_driver_register(struct css_driver *cdrv)
EXPORT_SYMBOL_GPL(css_driver_register);
void css_driver_unregister(struct css_driver *cdrv)
EXPORT_SYMBOL_GPL(css_driver_unregister);
MODULE_LICENSE("GPL");
