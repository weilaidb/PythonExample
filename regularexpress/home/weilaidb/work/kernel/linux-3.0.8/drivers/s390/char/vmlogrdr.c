#define KMSG_COMPONENT "vmlogrdr"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
MODULE_AUTHOR
("(C) 2004 IBM Corporation by Xenia Tkatschow (xenia@us.ibm.com)\n"
"                            Stefan Weinhuber (wein@de.ibm.com)");
MODULE_DESCRIPTION ("Character device driver for reading z/VM "
"system service records.");
MODULE_LICENSE("GPL");
#define NET_BUFFER_SIZE	(PAGE_SIZE - sizeof(int) - sizeof(FENCE))
struct vmlogrdr_priv_t ;
static int vmlogrdr_open(struct inode *, struct file *);
static int vmlogrdr_release(struct inode *, struct file *);
static ssize_t vmlogrdr_read (struct file *filp, char __user *data,
size_t count, loff_t * ppos);
static const struct file_operations vmlogrdr_fops = ;
static void vmlogrdr_iucv_path_complete(struct iucv_path *, u8 ipuser[16]);
static void vmlogrdr_iucv_path_severed(struct iucv_path *, u8 ipuser[16]);
static void vmlogrdr_iucv_message_pending(struct iucv_path *,
struct iucv_message *);
static struct iucv_handler vmlogrdr_iucv_handler = ;
static DECLARE_WAIT_QUEUE_HEAD(conn_wait_queue);
static DECLARE_WAIT_QUEUE_HEAD(read_wait_queue);
static struct vmlogrdr_priv_t sys_ser[] = ;
#define MAXMINOR  (sizeof(sys_ser)/sizeof(struct vmlogrdr_priv_t))
static char FENCE[] = ;
static int vmlogrdr_major = 0;
static struct cdev  *vmlogrdr_cdev = NULL;
static int recording_class_AB;
static void vmlogrdr_iucv_path_complete(struct iucv_path *path, u8 ipuser[16])
static void vmlogrdr_iucv_path_severed(struct iucv_path *path, u8 ipuser[16])
static void vmlogrdr_iucv_message_pending(struct iucv_path *path,
struct iucv_message *msg)
static int vmlogrdr_get_recording_class_AB(void)
static int vmlogrdr_recording(struct vmlogrdr_priv_t * logptr,
int action, int purge)
static int vmlogrdr_open (struct inode *inode, struct file *filp)
static int vmlogrdr_release (struct inode *inode, struct file *filp)
static int vmlogrdr_receive_data(struct vmlogrdr_priv_t *priv)
static ssize_t vmlogrdr_read(struct file *filp, char __user *data,
size_t count, loff_t * ppos)
static ssize_t vmlogrdr_autopurge_store(struct device * dev,
struct device_attribute *attr,
const char * buf, size_t count)
static ssize_t vmlogrdr_autopurge_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(autopurge, 0644, vmlogrdr_autopurge_show,
vmlogrdr_autopurge_store);
static ssize_t vmlogrdr_purge_store(struct device * dev,
struct device_attribute *attr,
const char * buf, size_t count)
static DEVICE_ATTR(purge, 0200, NULL, vmlogrdr_purge_store);
static ssize_t vmlogrdr_autorecording_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t vmlogrdr_autorecording_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(autorecording, 0644, vmlogrdr_autorecording_show,
vmlogrdr_autorecording_store);
static ssize_t vmlogrdr_recording_store(struct device * dev,
struct device_attribute *attr,
const char * buf, size_t count)
static DEVICE_ATTR(recording, 0200, NULL, vmlogrdr_recording_store);
static ssize_t vmlogrdr_recording_status_show(struct device_driver *driver,
char *buf)
static DRIVER_ATTR(recording_status, 0444, vmlogrdr_recording_status_show,
NULL);
static struct attribute *vmlogrdr_attrs[] = ;
static int vmlogrdr_pm_prepare(struct device *dev)
static const struct dev_pm_ops vmlogrdr_pm_ops = ;
static struct attribute_group vmlogrdr_attr_group = ;
static struct class *vmlogrdr_class;
static struct device_driver vmlogrdr_driver = ;
static int vmlogrdr_register_driver(void)
static void vmlogrdr_unregister_driver(void)
static int vmlogrdr_register_device(struct vmlogrdr_priv_t *priv)
static int vmlogrdr_unregister_device(struct vmlogrdr_priv_t *priv)
static int vmlogrdr_register_cdev(dev_t dev)
static void vmlogrdr_cleanup(void)
static int __init vmlogrdr_init(void)
static void __exit vmlogrdr_exit(void)
module_init(vmlogrdr_init);
module_exit(vmlogrdr_exit);
