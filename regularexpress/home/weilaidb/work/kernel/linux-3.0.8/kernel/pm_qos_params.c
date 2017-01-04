enum pm_qos_type ;
struct pm_qos_object ;
static DEFINE_SPINLOCK(pm_qos_lock);
static struct pm_qos_object null_pm_qos;
static BLOCKING_NOTIFIER_HEAD(cpu_dma_lat_notifier);
static struct pm_qos_object cpu_dma_pm_qos = ;
static BLOCKING_NOTIFIER_HEAD(network_lat_notifier);
static struct pm_qos_object network_lat_pm_qos = ;
static BLOCKING_NOTIFIER_HEAD(network_throughput_notifier);
static struct pm_qos_object network_throughput_pm_qos = ;
static struct pm_qos_object *pm_qos_array[] = ;
static ssize_t pm_qos_power_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos);
static ssize_t pm_qos_power_read(struct file *filp, char __user *buf,
size_t count, loff_t *f_pos);
static int pm_qos_power_open(struct inode *inode, struct file *filp);
static int pm_qos_power_release(struct inode *inode, struct file *filp);
static const struct file_operations pm_qos_power_fops = ;
static inline int pm_qos_get_value(struct pm_qos_object *o)
static inline s32 pm_qos_read_value(struct pm_qos_object *o)
static inline void pm_qos_set_value(struct pm_qos_object *o, s32 value)
static void update_target(struct pm_qos_object *o, struct plist_node *node,
int del, int value)
static int register_pm_qos_misc(struct pm_qos_object *qos)
static int find_pm_qos_object_by_minor(int minor)
int pm_qos_request(int pm_qos_class)
EXPORT_SYMBOL_GPL(pm_qos_request);
int pm_qos_request_active(struct pm_qos_request_list *req)
EXPORT_SYMBOL_GPL(pm_qos_request_active);
void pm_qos_add_request(struct pm_qos_request_list *dep,
int pm_qos_class, s32 value)
EXPORT_SYMBOL_GPL(pm_qos_add_request);
void pm_qos_update_request(struct pm_qos_request_list *pm_qos_req,
s32 new_value)
EXPORT_SYMBOL_GPL(pm_qos_update_request);
void pm_qos_remove_request(struct pm_qos_request_list *pm_qos_req)
EXPORT_SYMBOL_GPL(pm_qos_remove_request);
int pm_qos_add_notifier(int pm_qos_class, struct notifier_block *notifier)
EXPORT_SYMBOL_GPL(pm_qos_add_notifier);
int pm_qos_remove_notifier(int pm_qos_class, struct notifier_block *notifier)
EXPORT_SYMBOL_GPL(pm_qos_remove_notifier);
static int pm_qos_power_open(struct inode *inode, struct file *filp)
static int pm_qos_power_release(struct inode *inode, struct file *filp)
static ssize_t pm_qos_power_read(struct file *filp, char __user *buf,
size_t count, loff_t *f_pos)
static ssize_t pm_qos_power_write(struct file *filp, const char __user *buf,
size_t count, loff_t *f_pos)
static int __init pm_qos_power_init(void)
late_initcall(pm_qos_power_init);
