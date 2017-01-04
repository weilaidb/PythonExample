#define KMSG_COMPONENT "vmwatchdog"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define MAX_CMDLEN 240
#define MIN_INTERVAL 15
static char vmwdt_cmd[MAX_CMDLEN] = "IPL";
static int vmwdt_conceal;
static int vmwdt_nowayout = WATCHDOG_NOWAYOUT;
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Arnd Bergmann <arndb@de.ibm.com>");
MODULE_DESCRIPTION("z/VM Watchdog Timer");
module_param_string(cmd, vmwdt_cmd, MAX_CMDLEN, 0644);
MODULE_PARM_DESC(cmd, "CP command that is run when the watchdog triggers");
module_param_named(conceal, vmwdt_conceal, bool, 0644);
MODULE_PARM_DESC(conceal, "Enable the CONCEAL CP option while the watchdog "
" is active");
module_param_named(nowayout, vmwdt_nowayout, bool, 0);
MODULE_PARM_DESC(nowayout, "Watchdog cannot be stopped once started"
" (default=CONFIG_WATCHDOG_NOWAYOUT)");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
static unsigned int vmwdt_interval = 60;
static unsigned long vmwdt_is_open;
static int vmwdt_expect_close;
static DEFINE_MUTEX(vmwdt_mutex);
#define VMWDT_OPEN	0
#define VMWDT_RUNNING	1
enum vmwdt_func ;
static int __diag288(enum vmwdt_func func, unsigned int timeout,
char *cmd, size_t len)
static int vmwdt_keepalive(void)
static int vmwdt_disable(void)
static int __init vmwdt_probe(void)
static int vmwdt_open(struct inode *i, struct file *f)
static int vmwdt_close(struct inode *i, struct file *f)
static struct watchdog_info vmwdt_info = ;
static int __vmwdt_ioctl(unsigned int cmd, unsigned long arg)
static long vmwdt_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
static ssize_t vmwdt_write(struct file *f, const char __user *buf,
size_t count, loff_t *ppos)
static int vmwdt_resume(void)
static int vmwdt_suspend(void)
static int vmwdt_power_event(struct notifier_block *this, unsigned long event,
void *ptr)
static struct notifier_block vmwdt_power_notifier = ;
static const struct file_operations vmwdt_fops = ;
static struct miscdevice vmwdt_dev = ;
static int __init vmwdt_init(void)
module_init(vmwdt_init);
static void __exit vmwdt_exit(void)
module_exit(vmwdt_exit);
