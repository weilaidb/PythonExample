#define to_channelpath(device) container_of(device, struct channel_path, dev)
#define CHP_INFO_UPDATE_INTERVAL	1*HZ
enum cfg_task_t ;
static enum cfg_task_t chp_cfg_task[__MAX_CSSID + 1][__MAX_CHPID + 1];
static DEFINE_MUTEX(cfg_lock);
static int cfg_busy;
static struct sclp_chp_info chp_info;
static DEFINE_MUTEX(info_lock);
static unsigned long chp_info_expires;
static struct workqueue_struct *chp_wq;
static struct work_struct cfg_work;
static wait_queue_head_t cfg_wait_queue;
static void set_chp_logically_online(struct chp_id chpid, int onoff)
int chp_get_status(struct chp_id chpid)
u8 chp_get_sch_opm(struct subchannel *sch)
EXPORT_SYMBOL_GPL(chp_get_sch_opm);
int chp_is_registered(struct chp_id chpid)
static int s390_vary_chpid(struct chp_id chpid, int on)
static ssize_t chp_measurement_chars_read(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute chp_measurement_chars_attr = ;
static void chp_measurement_copy_block(struct cmg_entry *buf,
struct channel_subsystem *css,
struct chp_id chpid)
static ssize_t chp_measurement_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute chp_measurement_attr = ;
void chp_remove_cmg_attr(struct channel_path *chp)
int chp_add_cmg_attr(struct channel_path *chp)
static ssize_t chp_status_show(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t chp_status_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(status, 0644, chp_status_show, chp_status_write);
static ssize_t chp_configure_show(struct device *dev,
struct device_attribute *attr, char *buf)
static int cfg_wait_idle(void);
static ssize_t chp_configure_write(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(configure, 0644, chp_configure_show, chp_configure_write);
static ssize_t chp_type_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(type, 0444, chp_type_show, NULL);
static ssize_t chp_cmg_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cmg, 0444, chp_cmg_show, NULL);
static ssize_t chp_shared_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(shared, 0444, chp_shared_show, NULL);
static struct attribute *chp_attrs[] = ;
static struct attribute_group chp_attr_group = ;
static void chp_release(struct device *dev)
int chp_new(struct chp_id chpid)
void *chp_get_chp_desc(struct chp_id chpid)
static void chp_process_crw(struct crw *crw0, struct crw *crw1,
int overflow)
int chp_ssd_get_mask(struct chsc_ssd_info *ssd, struct chp_link *link)
EXPORT_SYMBOL_GPL(chp_ssd_get_mask);
static inline int info_bit_num(struct chp_id id)
static void info_expire(void)
static int info_update(void)
int chp_info_get_status(struct chp_id chpid)
static enum cfg_task_t cfg_get_task(struct chp_id chpid)
static void cfg_set_task(struct chp_id chpid, enum cfg_task_t cfg)
static void cfg_func(struct work_struct *work)
void chp_cfg_schedule(struct chp_id chpid, int configure)
void chp_cfg_cancel_deconfigure(struct chp_id chpid)
static int cfg_wait_idle(void)
static int __init chp_init(void)
subsys_initcall(chp_init);
