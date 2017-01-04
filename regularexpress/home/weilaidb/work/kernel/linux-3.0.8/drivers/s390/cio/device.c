#define KMSG_COMPONENT "cio"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static struct timer_list recovery_timer;
static DEFINE_SPINLOCK(recovery_lock);
static int recovery_phase;
static const unsigned long recovery_delay[] = ;
static int
ccw_bus_match (struct device * dev, struct device_driver * drv)
static int snprint_alias(char *buf, size_t size,
struct ccw_device_id *id, const char *suffix)
static int ccw_uevent(struct device *dev, struct kobj_uevent_env *env)
static struct bus_type ccw_bus_type;
static void io_subchannel_irq(struct subchannel *);
static int io_subchannel_probe(struct subchannel *);
static int io_subchannel_remove(struct subchannel *);
static void io_subchannel_shutdown(struct subchannel *);
static int io_subchannel_sch_event(struct subchannel *, int);
static int io_subchannel_chp_event(struct subchannel *, struct chp_link *,
int);
static void recovery_func(unsigned long data);
wait_queue_head_t ccw_device_init_wq;
atomic_t ccw_device_init_count;
static struct css_device_id io_subchannel_ids[] = ;
MODULE_DEVICE_TABLE(css, io_subchannel_ids);
static int io_subchannel_prepare(struct subchannel *sch)
static int io_subchannel_settle(void)
static struct css_driver io_subchannel_driver = ;
int __init io_subchannel_init(void)
static ssize_t
chpids_show (struct device * dev, struct device_attribute *attr, char * buf)
static ssize_t
pimpampom_show (struct device * dev, struct device_attribute *attr, char * buf)
static ssize_t
devtype_show (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
cutype_show (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
modalias_show (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
online_show (struct device *dev, struct device_attribute *attr, char *buf)
int ccw_device_is_orphan(struct ccw_device *cdev)
static void ccw_device_unregister(struct ccw_device *cdev)
static void io_subchannel_quiesce(struct subchannel *);
int ccw_device_set_offline(struct ccw_device *cdev)
int ccw_device_set_online(struct ccw_device *cdev)
static int online_store_handle_offline(struct ccw_device *cdev)
static int online_store_recog_and_online(struct ccw_device *cdev)
static int online_store_handle_online(struct ccw_device *cdev, int force)
static ssize_t online_store (struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
available_show (struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
initiate_logging(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(chpids, 0444, chpids_show, NULL);
static DEVICE_ATTR(pimpampom, 0444, pimpampom_show, NULL);
static DEVICE_ATTR(devtype, 0444, devtype_show, NULL);
static DEVICE_ATTR(cutype, 0444, cutype_show, NULL);
static DEVICE_ATTR(modalias, 0444, modalias_show, NULL);
static DEVICE_ATTR(online, 0644, online_show, online_store);
static DEVICE_ATTR(availability, 0444, available_show, NULL);
static DEVICE_ATTR(logging, 0200, NULL, initiate_logging);
static struct attribute *io_subchannel_attrs[] = ;
static struct attribute_group io_subchannel_attr_group = ;
static struct attribute * ccwdev_attrs[] = ;
static struct attribute_group ccwdev_attr_group = ;
static const struct attribute_group *ccwdev_attr_groups[] = ;
static int ccw_device_register(struct ccw_device *cdev)
static int match_dev_id(struct device *dev, void *data)
static struct ccw_device *get_ccwdev_by_dev_id(struct ccw_dev_id *dev_id)
static void ccw_device_do_unbind_bind(struct ccw_device *cdev)
static void
ccw_device_release(struct device *dev)
static struct ccw_device * io_subchannel_allocate_dev(struct subchannel *sch)
static void ccw_device_todo(struct work_struct *work);
static int io_subchannel_initialize_dev(struct subchannel *sch,
struct ccw_device *cdev)
static struct ccw_device * io_subchannel_create_ccwdev(struct subchannel *sch)
static void io_subchannel_recog(struct ccw_device *, struct subchannel *);
static void sch_create_and_recog_new_device(struct subchannel *sch)
static void io_subchannel_register(struct ccw_device *cdev)
static void ccw_device_call_sch_unregister(struct ccw_device *cdev)
void
io_subchannel_recog_done(struct ccw_device *cdev)
static void io_subchannel_recog(struct ccw_device *cdev, struct subchannel *sch)
static int ccw_device_move_to_sch(struct ccw_device *cdev,
struct subchannel *sch)
static int ccw_device_move_to_orph(struct ccw_device *cdev)
static void io_subchannel_irq(struct subchannel *sch)
void io_subchannel_init_config(struct subchannel *sch)
static void io_subchannel_init_fields(struct subchannel *sch)
static int io_subchannel_probe(struct subchannel *sch)
static int
io_subchannel_remove (struct subchannel *sch)
static void io_subchannel_verify(struct subchannel *sch)
static void io_subchannel_terminate_path(struct subchannel *sch, u8 mask)
static int io_subchannel_chp_event(struct subchannel *sch,
struct chp_link *link, int event)
static void io_subchannel_quiesce(struct subchannel *sch)
static void io_subchannel_shutdown(struct subchannel *sch)
static int device_is_disconnected(struct ccw_device *cdev)
static int recovery_check(struct device *dev, void *data)
static void recovery_work_func(struct work_struct *unused)
static DECLARE_WORK(recovery_work, recovery_work_func);
static void recovery_func(unsigned long data)
static void ccw_device_schedule_recovery(void)
static int purge_fn(struct device *dev, void *data)
int ccw_purge_blacklisted(void)
void ccw_device_set_disconnected(struct ccw_device *cdev)
void ccw_device_set_notoper(struct ccw_device *cdev)
enum io_sch_action ;
static enum io_sch_action sch_get_action(struct subchannel *sch)
static int io_subchannel_sch_event(struct subchannel *sch, int process)
static struct ccw_device console_cdev;
static struct ccw_device_private console_private;
static int console_cdev_in_use;
static DEFINE_SPINLOCK(ccw_console_lock);
spinlock_t * cio_get_console_lock(void)
static int ccw_device_console_enable(struct ccw_device *cdev,
struct subchannel *sch)
struct ccw_device *
ccw_device_probe_console(void)
static int ccw_device_pm_restore(struct device *dev);
int ccw_device_force_console(void)
EXPORT_SYMBOL_GPL(ccw_device_force_console);
static int
__ccwdev_check_busid(struct device *dev, void *id)
struct ccw_device *get_ccwdev_by_busid(struct ccw_driver *cdrv,
const char *bus_id)
static int
ccw_device_probe (struct device *dev)
static int
ccw_device_remove (struct device *dev)
static void ccw_device_shutdown(struct device *dev)
static int ccw_device_pm_prepare(struct device *dev)
static void ccw_device_pm_complete(struct device *dev)
static int ccw_device_pm_freeze(struct device *dev)
static int ccw_device_pm_thaw(struct device *dev)
static void __ccw_device_pm_restore(struct ccw_device *cdev)
static int resume_handle_boxed(struct ccw_device *cdev)
static int resume_handle_disc(struct ccw_device *cdev)
static int ccw_device_pm_restore(struct device *dev)
static const struct dev_pm_ops ccw_pm_ops = ;
static struct bus_type ccw_bus_type = ;
int ccw_driver_register(struct ccw_driver *cdriver)
void ccw_driver_unregister(struct ccw_driver *cdriver)
struct subchannel_id
ccw_device_get_subchannel_id(struct ccw_device *cdev)
static void ccw_device_todo(struct work_struct *work)
void ccw_device_sched_todo(struct ccw_device *cdev, enum cdev_todo todo)
int ccw_device_siosl(struct ccw_device *cdev)
EXPORT_SYMBOL_GPL(ccw_device_siosl);
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ccw_device_set_online);
EXPORT_SYMBOL(ccw_device_set_offline);
EXPORT_SYMBOL(ccw_driver_register);
EXPORT_SYMBOL(ccw_driver_unregister);
EXPORT_SYMBOL(get_ccwdev_by_busid);
EXPORT_SYMBOL_GPL(ccw_device_get_subchannel_id);
