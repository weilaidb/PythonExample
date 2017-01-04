MODULE_LICENSE("GPL");
MODULE_AUTHOR("Alexander Shishkin");
struct tracectx ;
static struct tracectx tracer;
static inline bool trace_isrunning(struct tracectx *t)
static int etm_setup_address_range(struct tracectx *t, int n,
unsigned long start, unsigned long end, int exclude, int data)
static int trace_start(struct tracectx *t)
static int trace_stop(struct tracectx *t)
static int etb_getdatalen(struct tracectx *t)
static void etm_dump(void)
static void sysrq_etm_dump(int key)
static struct sysrq_key_op sysrq_etm_op = ;
static int etb_open(struct inode *inode, struct file *file)
static ssize_t etb_read(struct file *file, char __user *data,
size_t len, loff_t *ppos)
static int etb_release(struct inode *inode, struct file *file)
static const struct file_operations etb_fops = ;
static struct miscdevice etb_miscdev = ;
static int __devinit etb_probe(struct amba_device *dev, const struct amba_id *id)
static int etb_remove(struct amba_device *dev)
static struct amba_id etb_ids[] = ;
static struct amba_driver etb_driver = ;
static ssize_t trace_running_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t trace_running_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
static struct kobj_attribute trace_running_attr =
__ATTR(trace_running, 0644, trace_running_show, trace_running_store);
static ssize_t trace_info_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static struct kobj_attribute trace_info_attr =
__ATTR(trace_info, 0444, trace_info_show, NULL);
static ssize_t trace_mode_show(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t trace_mode_store(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t n)
static struct kobj_attribute trace_mode_attr =
__ATTR(trace_mode, 0644, trace_mode_show, trace_mode_store);
static int __devinit etm_probe(struct amba_device *dev, const struct amba_id *id)
static int etm_remove(struct amba_device *dev)
static struct amba_id etm_ids[] = ;
static struct amba_driver etm_driver = ;
static int __init etm_init(void)
device_initcall(etm_init);
