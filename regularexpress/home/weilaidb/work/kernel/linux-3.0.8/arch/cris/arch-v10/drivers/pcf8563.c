#define PCF8563_MAJOR 121
#define DEVICE_NAME "rtc"
#define PCF8563_NAME "PCF8563"
#define DRIVER_VERSION "$Revision: 1.24 $"
#define RTC_I2C_READ		0xa3
#define RTC_I2C_WRITE		0xa2
#define rtc_read(x) i2c_readreg(RTC_I2C_READ, x)
#define rtc_write(x,y) i2c_writereg(RTC_I2C_WRITE, x, y)
static DEFINE_MUTEX(pcf8563_mutex);
static DEFINE_MUTEX(rtc_lock);
static const unsigned char days_in_month[] =
;
static long pcf8563_unlocked_ioctl(struct file *, unsigned int, unsigned long);
static int voltage_low;
static const struct file_operations pcf8563_fops = ;
unsigned char
pcf8563_readreg(int reg)
void
pcf8563_writereg(int reg, unsigned char val)
void
get_rtc_time(struct rtc_time *tm)
int __init
pcf8563_init(void)
void __exit
pcf8563_exit(void)
static int pcf8563_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static long pcf8563_unlocked_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int __init pcf8563_register(void)
module_init(pcf8563_register);
module_exit(pcf8563_exit);
