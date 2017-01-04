#define WDRTAS_MAGIC_CHAR		42
#define WDRTAS_SUPPORTED_MASK		(WDIOF_SETTIMEOUT | \
WDIOF_MAGICCLOSE)
MODULE_AUTHOR("Utz Bacher <utz.bacher@de.ibm.com>");
MODULE_DESCRIPTION("RTAS watchdog driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(WATCHDOG_MINOR);
MODULE_ALIAS_MISCDEV(TEMP_MINOR);
static int wdrtas_nowayout = WATCHDOG_NOWAYOUT;
static atomic_t wdrtas_miscdev_open = ATOMIC_INIT(0);
static char wdrtas_expect_close;
static int wdrtas_interval;
#define WDRTAS_THERMAL_SENSOR		3
static int wdrtas_token_get_sensor_state;
#define WDRTAS_SURVEILLANCE_IND		9000
static int wdrtas_token_set_indicator;
#define WDRTAS_SP_SPI			28
static int wdrtas_token_get_sp;
static int wdrtas_token_event_scan;
#define WDRTAS_DEFAULT_INTERVAL		300
#define WDRTAS_LOGBUFFER_LEN		128
static char wdrtas_logbuffer[WDRTAS_LOGBUFFER_LEN];
static int wdrtas_set_interval(int interval)
#define WDRTAS_SP_SPI_LEN 4
static int wdrtas_get_interval(int fallback_value)
static void wdrtas_timer_start(void)
static void wdrtas_timer_stop(void)
static void wdrtas_log_scanned_event(void)
static void wdrtas_timer_keepalive(void)
static int wdrtas_get_temperature(void)
static int wdrtas_get_status(void)
static int wdrtas_get_boot_status(void)
static ssize_t wdrtas_write(struct file *file, const char __user *buf,
size_t len, loff_t *ppos)
static long wdrtas_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int wdrtas_open(struct inode *inode, struct file *file)
static int wdrtas_close(struct inode *inode, struct file *file)
static ssize_t wdrtas_temp_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int wdrtas_temp_open(struct inode *inode, struct file *file)
static int wdrtas_temp_close(struct inode *inode, struct file *file)
static int wdrtas_reboot(struct notifier_block *this,
unsigned long code, void *ptr)
static const struct file_operations wdrtas_fops = ;
static struct miscdevice wdrtas_miscdev = ;
static const struct file_operations wdrtas_temp_fops = ;
static struct miscdevice wdrtas_tempdev = ;
static struct notifier_block wdrtas_notifier = ;
static int wdrtas_get_tokens(void)
static void wdrtas_unregister_devs(void)
static int wdrtas_register_devs(void)
static int __init wdrtas_init(void)
static void __exit wdrtas_exit(void)
module_init(wdrtas_init);
module_exit(wdrtas_exit);
