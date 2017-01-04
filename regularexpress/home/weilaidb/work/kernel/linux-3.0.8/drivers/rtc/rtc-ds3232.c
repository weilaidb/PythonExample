#define DS3232_REG_SECONDS	0x00
#define DS3232_REG_MINUTES	0x01
#define DS3232_REG_HOURS	0x02
#define DS3232_REG_AMPM		0x02
#define DS3232_REG_DAY		0x03
#define DS3232_REG_DATE		0x04
#define DS3232_REG_MONTH	0x05
#define DS3232_REG_CENTURY	0x05
#define DS3232_REG_YEAR		0x06
#define DS3232_REG_ALARM1         0x07
#define DS3232_REG_ALARM2         0x0B
#define DS3232_REG_CR		0x0E
#	define DS3232_REG_CR_nEOSC        0x80
#       define DS3232_REG_CR_INTCN        0x04
#       define DS3232_REG_CR_A2IE        0x02
#       define DS3232_REG_CR_A1IE        0x01
#define DS3232_REG_SR	0x0F
#	define DS3232_REG_SR_OSF   0x80
#       define DS3232_REG_SR_BSY   0x04
#       define DS3232_REG_SR_A2F   0x02
#       define DS3232_REG_SR_A1F   0x01
struct ds3232 ;
static struct i2c_driver ds3232_driver;
static int ds3232_check_rtc_status(struct i2c_client *client)
static int ds3232_read_time(struct device *dev, struct rtc_time *time)
static int ds3232_set_time(struct device *dev, struct rtc_time *time)
static int ds3232_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int ds3232_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static void ds3232_update_alarm(struct i2c_client *client)
static int ds3232_alarm_irq_enable(struct device *dev, unsigned int enabled)
static irqreturn_t ds3232_irq(int irq, void *dev_id)
static void ds3232_work(struct work_struct *work)
static const struct rtc_class_ops ds3232_rtc_ops = ;
static int __devinit ds3232_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ds3232_remove(struct i2c_client *client)
static const struct i2c_device_id ds3232_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds3232_id);
static struct i2c_driver ds3232_driver = ;
static int __init ds3232_init(void)
static void __exit ds3232_exit(void)
module_init(ds3232_init);
module_exit(ds3232_exit);
MODULE_AUTHOR("Srikanth Srinivasan <srikanth.srinivasan@freescale.com>");
MODULE_DESCRIPTION("Maxim/Dallas DS3232 RTC Driver");
MODULE_LICENSE("GPL");
