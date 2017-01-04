#define MEI_READ_TIMEOUT 45
#define MEI_DRIVER_NAME	"mei"
#define MEI_DEV_NAME "mei"
static char mei_driver_name[] = MEI_DRIVER_NAME;
static const char mei_driver_string[] = "Intel(R) Management Engine Interface";
static const char mei_driver_version[] = MEI_DRIVER_VERSION;
static struct cdev mei_cdev;
static int mei_major;
static struct pci_dev *mei_device;
static struct class *mei_class;
static DEFINE_PCI_DEVICE_TABLE(mei_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, mei_pci_tbl);
static DEFINE_MUTEX(mei_mutex);
static int __devinit mei_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit mei_remove(struct pci_dev *pdev)
static bool mei_clear_list(struct mei_device *dev,
struct file *file, struct list_head *mei_cb_list)
static bool mei_clear_lists(struct mei_device *dev, struct file *file)
static struct mei_cl_cb *find_read_list_entry(
struct mei_device *dev,
struct mei_cl *cl)
static int mei_open(struct inode *inode, struct file *file)
static int mei_release(struct inode *inode, struct file *file)
static ssize_t mei_read(struct file *file, char __user *ubuf,
size_t length, loff_t *offset)
static ssize_t mei_write(struct file *file, const char __user *ubuf,
size_t length, loff_t *offset)
static long mei_ioctl(struct file *file, unsigned int cmd, unsigned long data)
static long mei_compat_ioctl(struct file *file,
unsigned int cmd, unsigned long data)
static unsigned int mei_poll(struct file *file, poll_table *wait)
static int mei_pci_suspend(struct device *device)
static int mei_pci_resume(struct device *device)
static SIMPLE_DEV_PM_OPS(mei_pm_ops, mei_pci_suspend, mei_pci_resume);
#define MEI_PM_OPS	(&mei_pm_ops)
#define MEI_PM_OPS	NULL
static struct pci_driver mei_driver = ;
static const struct file_operations mei_fops = ;
static int mei_registration_cdev(struct cdev *dev, int hminor,
const struct file_operations *fops)
static int mei_register_cdev(void)
static void mei_unregister_cdev(void)
static int mei_sysfs_device_create(void)
static void mei_sysfs_device_remove(void)
static int __init mei_init_module(void)
module_init(mei_init_module);
static void __exit mei_exit_module(void)
module_exit(mei_exit_module);
MODULE_AUTHOR("Intel Corporation");
MODULE_DESCRIPTION("Intel(R) Management Engine Interface");
MODULE_LICENSE("GPL v2");
MODULE_VERSION(MEI_DRIVER_VERSION);
