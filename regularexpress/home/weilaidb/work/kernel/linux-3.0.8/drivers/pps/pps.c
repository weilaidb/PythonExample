#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static dev_t pps_devt;
static struct class *pps_class;
static DEFINE_MUTEX(pps_idr_lock);
static DEFINE_IDR(pps_idr);
static unsigned int pps_cdev_poll(struct file *file, poll_table *wait)
static int pps_cdev_fasync(int fd, struct file *file, int on)
static long pps_cdev_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static int pps_cdev_open(struct inode *inode, struct file *file)
static int pps_cdev_release(struct inode *inode, struct file *file)
static const struct file_operations pps_cdev_fops = ;
static void pps_device_destruct(struct device *dev)
int pps_register_cdev(struct pps_device *pps)
void pps_unregister_cdev(struct pps_device *pps)
static void __exit pps_exit(void)
static int __init pps_init(void)
subsys_initcall(pps_init);
module_exit(pps_exit);
MODULE_AUTHOR("Rodolfo Giometti <giometti@linux.it>");
MODULE_DESCRIPTION("LinuxPPS support (RFC 2783) - ver. " PPS_VERSION);
MODULE_LICENSE("GPL");
