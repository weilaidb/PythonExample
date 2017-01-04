static DEFINE_SPINLOCK(list_lock);
static LIST_HEAD(scsi_dh_list);
static int scsi_dh_list_idx = 1;
static struct scsi_device_handler *get_device_handler(const char *name)
static struct scsi_device_handler *get_device_handler_by_idx(int idx)
static struct scsi_device_handler *
device_handler_match(struct scsi_device_handler *scsi_dh,
struct scsi_device *sdev)
static int scsi_dh_handler_attach(struct scsi_device *sdev,
struct scsi_device_handler *scsi_dh)
static void __detach_handler (struct kref *kref)
static void scsi_dh_handler_detach(struct scsi_device *sdev,
struct scsi_device_handler *scsi_dh)
static ssize_t
store_dh_state(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_dh_state(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute scsi_dh_state_attr =
__ATTR(dh_state, S_IRUGO | S_IWUSR, show_dh_state,
store_dh_state);
static int scsi_dh_sysfs_attr_add(struct device *dev, void *data)
static int scsi_dh_sysfs_attr_remove(struct device *dev, void *data)
static int scsi_dh_notifier(struct notifier_block *nb,
unsigned long action, void *data)
static int scsi_dh_notifier_add(struct device *dev, void *data)
static int scsi_dh_notifier_remove(struct device *dev, void *data)
int scsi_register_device_handler(struct scsi_device_handler *scsi_dh)
EXPORT_SYMBOL_GPL(scsi_register_device_handler);
int scsi_unregister_device_handler(struct scsi_device_handler *scsi_dh)
EXPORT_SYMBOL_GPL(scsi_unregister_device_handler);
int scsi_dh_activate(struct request_queue *q, activate_complete fn, void *data)
EXPORT_SYMBOL_GPL(scsi_dh_activate);
int scsi_dh_set_params(struct request_queue *q, const char *params)
EXPORT_SYMBOL_GPL(scsi_dh_set_params);
int scsi_dh_handler_exist(const char *name)
EXPORT_SYMBOL_GPL(scsi_dh_handler_exist);
int scsi_dh_attach(struct request_queue *q, const char *name)
EXPORT_SYMBOL_GPL(scsi_dh_attach);
void scsi_dh_detach(struct request_queue *q)
EXPORT_SYMBOL_GPL(scsi_dh_detach);
static struct notifier_block scsi_dh_nb = ;
static int __init scsi_dh_init(void)
static void __exit scsi_dh_exit(void)
module_init(scsi_dh_init);
module_exit(scsi_dh_exit);
MODULE_DESCRIPTION("SCSI device handler");
MODULE_AUTHOR("Chandra Seetharaman <sekharan@us.ibm.com>");
MODULE_LICENSE("GPL");
