#define VERSION "0.6"
#define WATCHDOG_NAME "mixcomwd"
#define PFX WATCHDOG_NAME ": "
#define MIXCOM_ID 0x11
#define FLASHCOM_ID 0x18
static struct  mixcomwd_io_info[] __devinitdata = ;
static void mixcomwd_timerfun(unsigned long d);
static unsigned long mixcomwd_opened;
static int watchdog_port;
static int mixcomwd_timer_alive;
static DEFINE_TIMER(mixcomwd_timer, mixcomwd_timerfun, 0, 0);
static char expect_close;
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
static void mixcomwd_ping(void)
static void mixcomwd_timerfun(unsigned long d)
static int mixcomwd_open(struct inode *inode, struct file *file)
static int mixcomwd_release(struct inode *inode, struct file *file)
static ssize_t mixcomwd_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static long mixcomwd_ioctl(struct file *file,
unsigned int cmd, unsigned long arg)
static const struct file_operations mixcomwd_fops = ;
static struct miscdevice mixcomwd_miscdev = ;
static int __init checkcard(int port, int card_id)
static int __init mixcomwd_init(void)
static void __exit mixcomwd_exit(void)
module_init(mixcomwd_init);
module_exit(mixcomwd_exit);
MODULE_AUTHOR("Gergely Madarasz <gorgo@itc.hu>");
MODULE_DESCRIPTION("MixCom Watchdog driver");
MODULE_VERSION(VERSION);
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
