#define DRV_VERSION "0.6"
#define RS5C372_REG_SECS	0
#define RS5C372_REG_MINS	1
#define RS5C372_REG_HOURS	2
#define RS5C372_REG_WDAY	3
#define RS5C372_REG_DAY		4
#define RS5C372_REG_MONTH	5
#define RS5C372_REG_YEAR	6
#define RS5C372_REG_TRIM	7
#	define RS5C372_TRIM_XSL		0x80
#	define RS5C372_TRIM_MASK	0x7F
#define RS5C_REG_ALARM_A_MIN	8
#define RS5C_REG_ALARM_A_HOURS	9
#define RS5C_REG_ALARM_A_WDAY	10
#define RS5C_REG_ALARM_B_MIN	11
#define RS5C_REG_ALARM_B_HOURS	12
#define RS5C_REG_ALARM_B_WDAY	13
#define RS5C_REG_CTRL1		14
#	define RS5C_CTRL1_AALE		(1 << 7)
#	define RS5C_CTRL1_BALE		(1 << 6)
#	define RV5C387_CTRL1_24		(1 << 5)
#	define RS5C372A_CTRL1_SL1	(1 << 5)
#	define RS5C_CTRL1_CT_MASK	(7 << 0)
#	define RS5C_CTRL1_CT0		(0 << 0)
#	define RS5C_CTRL1_CT4		(4 << 0)
#define RS5C_REG_CTRL2		15
#	define RS5C372_CTRL2_24		(1 << 5)
#	define R2025_CTRL2_XST		(1 << 5)
#	define RS5C_CTRL2_XSTP		(1 << 4)
#	define RS5C_CTRL2_CTFG		(1 << 2)
#	define RS5C_CTRL2_AAFG		(1 << 1)
#	define RS5C_CTRL2_BAFG		(1 << 0)
#define RS5C_ADDR(R)		(((R) << 4) | 0)
enum rtc_type ;
static const struct i2c_device_id rs5c372_id[] = ;
MODULE_DEVICE_TABLE(i2c, rs5c372_id);
struct rs5c372 ;
static int rs5c_get_regs(struct rs5c372 *rs5c)
static unsigned rs5c_reg2hr(struct rs5c372 *rs5c, unsigned reg)
static unsigned rs5c_hr2reg(struct rs5c372 *rs5c, unsigned hour)
static int rs5c372_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int rs5c372_set_datetime(struct i2c_client *client, struct rtc_time *tm)
#if defined(CONFIG_RTC_INTF_PROC) || defined(CONFIG_RTC_INTF_PROC_MODULE)
#define	NEED_TRIM
#if defined(CONFIG_RTC_INTF_SYSFS) || defined(CONFIG_RTC_INTF_SYSFS_MODULE)
#define	NEED_TRIM
static int rs5c372_get_trim(struct i2c_client *client, int *osc, int *trim)
static int rs5c372_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int rs5c372_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int rs5c_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int rs5c_read_alarm(struct device *dev, struct rtc_wkalrm *t)
static int rs5c_set_alarm(struct device *dev, struct rtc_wkalrm *t)
#if defined(CONFIG_RTC_INTF_PROC) || defined(CONFIG_RTC_INTF_PROC_MODULE)
static int rs5c372_rtc_proc(struct device *dev, struct seq_file *seq)
#define	rs5c372_rtc_proc	NULL
static const struct rtc_class_ops rs5c372_rtc_ops = ;
#if defined(CONFIG_RTC_INTF_SYSFS) || defined(CONFIG_RTC_INTF_SYSFS_MODULE)
static ssize_t rs5c372_sysfs_show_trim(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(trim, S_IRUGO, rs5c372_sysfs_show_trim, NULL);
static ssize_t rs5c372_sysfs_show_osc(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(osc, S_IRUGO, rs5c372_sysfs_show_osc, NULL);
static int rs5c_sysfs_register(struct device *dev)
static void rs5c_sysfs_unregister(struct device *dev)
static int rs5c_sysfs_register(struct device *dev)
static void rs5c_sysfs_unregister(struct device *dev)
static struct i2c_driver rs5c372_driver;
static int rs5c_oscillator_setup(struct rs5c372 *rs5c372)
static int rs5c372_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int rs5c372_remove(struct i2c_client *client)
static struct i2c_driver rs5c372_driver = ;
static __init int rs5c372_init(void)
static __exit void rs5c372_exit(void)
module_init(rs5c372_init);
module_exit(rs5c372_exit);
MODULE_AUTHOR(
"Pavel Mironchik <pmironchik@optifacio.net>, "
"Alessandro Zummo <a.zummo@towertech.it>, "
"Paul Mundt <lethal@linux-sh.org>");
MODULE_DESCRIPTION("Ricoh RS5C372 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
