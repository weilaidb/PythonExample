#define DS1305_WRITE		0x80
#define DS1305_RTC_LEN		7
#define DS1305_SEC		0x00
#define DS1305_MIN		0x01
#define DS1305_HOUR		0x02
#	define DS1305_HR_12		0x40
#	define DS1305_HR_PM		0x20
#define DS1305_WDAY		0x03
#define DS1305_MDAY		0x04
#define DS1305_MON		0x05
#define DS1305_YEAR		0x06
#define DS1305_ALM_LEN		4
#define DS1305_ALM_DISABLE	0x80
#define DS1305_ALM0(r)		(0x07 + (r))
#define DS1305_ALM1(r)		(0x0b + (r))
#define DS1305_CONTROL_LEN	3
#define DS1305_CONTROL		0x0f
#	define DS1305_nEOSC		0x80
#	define DS1305_WP		0x40
#	define DS1305_INTCN		0x04
#	define DS1306_1HZ		0x04
#	define DS1305_AEI1		0x02
#	define DS1305_AEI0		0x01
#define DS1305_STATUS		0x10
#define DS1305_TRICKLE		0x11
#define DS1305_NVRAM_LEN	96
#define DS1305_NVRAM		0x20
struct ds1305 ;
static unsigned bcd2hour(u8 bcd)
static u8 hour2bcd(bool hr12, int hour)
static int ds1305_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int ds1305_get_time(struct device *dev, struct rtc_time *time)
static int ds1305_set_time(struct device *dev, struct rtc_time *time)
static int ds1305_get_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int ds1305_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int ds1305_proc(struct device *dev, struct seq_file *seq)
#define ds1305_proc	NULL
static const struct rtc_class_ops ds1305_ops = ;
static void ds1305_work(struct work_struct *work)
static irqreturn_t ds1305_irq(int irq, void *p)
static void msg_init(struct spi_message *m, struct spi_transfer *x,
u8 *addr, size_t count, char *tx, char *rx)
static ssize_t
ds1305_nvram_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static ssize_t
ds1305_nvram_write(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute nvram = ;
static int __devinit ds1305_probe(struct spi_device *spi)
static int __devexit ds1305_remove(struct spi_device *spi)
static struct spi_driver ds1305_driver = ;
static int __init ds1305_init(void)
module_init(ds1305_init);
static void __exit ds1305_exit(void)
module_exit(ds1305_exit);
MODULE_DESCRIPTION("RTC driver for DS1305 and DS1306 chips");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:rtc-ds1305");
