struct raw_device_data ;
static struct class *raw_class;
static struct raw_device_data *raw_devices;
static DEFINE_MUTEX(raw_mutex);
static const struct file_operations raw_ctl_fops;
static int max_raw_minors = MAX_RAW_MINORS;
module_param(max_raw_minors, int, 0);
MODULE_PARM_DESC(max_raw_minors, "Maximum number of raw devices (1-65536)");
static int raw_open(struct inode *inode, struct file *filp)
static int raw_release(struct inode *inode, struct file *filp)
static long
raw_ioctl(struct file *filp, unsigned int command, unsigned long arg)
static int bind_set(int number, u64 major, u64 minor)
static int bind_get(int number, dev_t *dev)
static long raw_ctl_ioctl(struct file *filp, unsigned int command,
unsigned long arg)
struct raw32_config_request ;
static long raw_ctl_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations raw_fops = ;
static const struct file_operations raw_ctl_fops = ;
static struct cdev raw_cdev;
static char *raw_devnode(struct device *dev, mode_t *mode)
static int __init raw_init(void)
static void __exit raw_exit(void)
module_init(raw_init);
module_exit(raw_exit);
MODULE_LICENSE("GPL");
