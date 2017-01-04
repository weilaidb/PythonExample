MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_DESCRIPTION("Hardware watchdog driver for Sun RIO");
MODULE_SUPPORTED_DEVICE("watchdog");
MODULE_LICENSE("GPL");
#define DRIVER_NAME	"riowd"
#define PFX		DRIVER_NAME ": "
struct riowd ;
static struct riowd *riowd_device;
#define WDTO_INDEX	0x05
static int riowd_timeout = 1;
module_param(riowd_timeout, int, 0);
MODULE_PARM_DESC(riowd_timeout, "Watchdog timeout in minutes");
static void riowd_writereg(struct riowd *p, u8 val, int index)
static int riowd_open(struct inode *inode, struct file *filp)
static int riowd_release(struct inode *inode, struct file *filp)
static long riowd_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static ssize_t riowd_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations riowd_fops = ;
static struct miscdevice riowd_miscdev = ;
static int __devinit riowd_probe(struct platform_device *op)
static int __devexit riowd_remove(struct platform_device *op)
static const struct of_device_id riowd_match[] = ;
MODULE_DEVICE_TABLE(of, riowd_match);
static struct platform_driver riowd_driver = ;
static int __init riowd_init(void)
static void __exit riowd_exit(void)
module_init(riowd_init);
module_exit(riowd_exit);
