static struct class *msr_class;
static loff_t msr_seek(struct file *file, loff_t offset, int orig)
static ssize_t msr_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t msr_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long msr_ioctl(struct file *file, unsigned int ioc, unsigned long arg)
static int msr_open(struct inode *inode, struct file *file)
static const struct file_operations msr_fops = ;
static int __cpuinit msr_device_create(int cpu)
static void msr_device_destroy(int cpu)
static int __cpuinit msr_class_cpu_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block __refdata msr_class_cpu_notifier = ;
static char *msr_devnode(struct device *dev, mode_t *mode)
static int __init msr_init(void)
static void __exit msr_exit(void)
module_init(msr_init);
module_exit(msr_exit)
MODULE_AUTHOR("H. Peter Anvin <hpa@zytor.com>");
MODULE_DESCRIPTION("x86 generic MSR driver");
MODULE_LICENSE("GPL");
