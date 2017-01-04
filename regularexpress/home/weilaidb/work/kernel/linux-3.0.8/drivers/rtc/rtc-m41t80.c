#define M41T80_REG_SSEC	0
#define M41T80_REG_SEC	1
#define M41T80_REG_MIN	2
#define M41T80_REG_HOUR	3
#define M41T80_REG_WDAY	4
#define M41T80_REG_DAY	5
#define M41T80_REG_MON	6
#define M41T80_REG_YEAR	7
#define M41T80_REG_ALARM_MON	0xa
#define M41T80_REG_ALARM_DAY	0xb
#define M41T80_REG_ALARM_HOUR	0xc
#define M41T80_REG_ALARM_MIN	0xd
#define M41T80_REG_ALARM_SEC	0xe
#define M41T80_REG_FLAGS	0xf
#define M41T80_REG_SQW	0x13
#define M41T80_DATETIME_REG_SIZE	(M41T80_REG_YEAR + 1)
#define M41T80_ALARM_REG_SIZE	\
(M41T80_REG_ALARM_SEC + 1 - M41T80_REG_ALARM_MON)
#define M41T80_SEC_ST		(1 << 7)
#define M41T80_ALMON_AFE	(1 << 7)
#define M41T80_ALMON_SQWE	(1 << 6)
#define M41T80_ALHOUR_HT	(1 << 6)
#define M41T80_FLAGS_AF		(1 << 6)
#define M41T80_FLAGS_BATT_LOW	(1 << 4)
#define M41T80_WATCHDOG_RB2	(1 << 7)
#define M41T80_WATCHDOG_RB1	(1 << 1)
#define M41T80_WATCHDOG_RB0	(1 << 0)
#define M41T80_FEATURE_HT	(1 << 0)
#define M41T80_FEATURE_BL	(1 << 1)
#define M41T80_FEATURE_SQ	(1 << 2)
#define M41T80_FEATURE_WD	(1 << 3)
#define M41T80_FEATURE_SQ_ALT	(1 << 4)
#define DRV_VERSION "0.05"
static DEFINE_MUTEX(m41t80_rtc_mutex);
static const struct i2c_device_id m41t80_id[] = ;
MODULE_DEVICE_TABLE(i2c, m41t80_id);
struct m41t80_data ;
static int m41t80_get_datetime(struct i2c_client *client,
struct rtc_time *tm)
static int m41t80_set_datetime(struct i2c_client *client, struct rtc_time *tm)
#if defined(CONFIG_RTC_INTF_PROC) || defined(CONFIG_RTC_INTF_PROC_MODULE)
static int m41t80_rtc_proc(struct device *dev, struct seq_file *seq)
#define m41t80_rtc_proc NULL
static int m41t80_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int m41t80_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int m41t80_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int m41t80_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *t)
static int m41t80_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static struct rtc_class_ops m41t80_rtc_ops = ;
#if defined(CONFIG_RTC_INTF_SYSFS) || defined(CONFIG_RTC_INTF_SYSFS_MODULE)
static ssize_t m41t80_sysfs_show_flags(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(flags, S_IRUGO, m41t80_sysfs_show_flags, NULL);
static ssize_t m41t80_sysfs_show_sqwfreq(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t m41t80_sysfs_set_sqwfreq(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(sqwfreq, S_IRUGO | S_IWUSR,
m41t80_sysfs_show_sqwfreq, m41t80_sysfs_set_sqwfreq);
static struct attribute *attrs[] = ;
static struct attribute_group attr_group = ;
static int m41t80_sysfs_register(struct device *dev)
static int m41t80_sysfs_register(struct device *dev)
static struct i2c_client *save_client;
#define WD_TIMO 60
static int wdt_margin = WD_TIMO;
module_param(wdt_margin, int, 0);
MODULE_PARM_DESC(wdt_margin, "Watchdog timeout in seconds (default 60s)");
static unsigned long wdt_is_open;
static int boot_flag;
static void wdt_ping(void)
static void wdt_disable(void)
static ssize_t wdt_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t wdt_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int wdt_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long wdt_unlocked_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int wdt_open(struct inode *inode, struct file *file)
static int wdt_release(struct inode *inode, struct file *file)
static int wdt_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static const struct file_operations wdt_fops = ;
static struct miscdevice wdt_dev = ;
static struct notifier_block wdt_notifier = ;
static int m41t80_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int m41t80_remove(struct i2c_client *client)
static struct i2c_driver m41t80_driver = ;
static int __init m41t80_rtc_init(void)
static void __exit m41t80_rtc_exit(void)
MODULE_AUTHOR("Alexander Bigga <ab@mycable.de>");
MODULE_DESCRIPTION("ST Microelectronics M41T80 series RTC I2C Client Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(m41t80_rtc_init);
module_exit(m41t80_rtc_exit);
