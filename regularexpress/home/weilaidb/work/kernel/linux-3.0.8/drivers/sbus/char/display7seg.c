#define D7S_MINOR	193
#define DRIVER_NAME	"d7s"
#define PFX		DRIVER_NAME ": "
static DEFINE_MUTEX(d7s_mutex);
static int sol_compat = 0;
module_param(sol_compat, int, 0);
MODULE_PARM_DESC(sol_compat,
"Disables documented functionality omitted from Solaris driver");
MODULE_AUTHOR("Eric Brower <ebrower@usa.net>");
MODULE_DESCRIPTION("7-Segment Display driver for Sun Microsystems CP1400/1500");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("d7s");
struct d7s ;
struct d7s *d7s_device;
static atomic_t d7s_users = ATOMIC_INIT(0);
static int d7s_open(struct inode *inode, struct file *f)
static int d7s_release(struct inode *inode, struct file *f)
static long d7s_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations d7s_fops = ;
static struct miscdevice d7s_miscdev = ;
static int __devinit d7s_probe(struct platform_device *op)
static int __devexit d7s_remove(struct platform_device *op)
static const struct of_device_id d7s_match[] = ;
MODULE_DEVICE_TABLE(of, d7s_match);
static struct platform_driver d7s_driver = ;
static int __init d7s_init(void)
static void __exit d7s_exit(void)
module_init(d7s_init);
module_exit(d7s_exit);
