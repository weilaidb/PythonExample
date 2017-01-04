#define DS1374_REG_TOD0		0x00
#define DS1374_REG_TOD1		0x01
#define DS1374_REG_TOD2		0x02
#define DS1374_REG_TOD3		0x03
#define DS1374_REG_WDALM0	0x04
#define DS1374_REG_WDALM1	0x05
#define DS1374_REG_WDALM2	0x06
#define DS1374_REG_CR		0x07
#define DS1374_REG_CR_AIE	0x01
#define DS1374_REG_CR_WDALM	0x20
#define DS1374_REG_CR_WACE	0x40
#define DS1374_REG_SR		0x08
#define DS1374_REG_SR_OSF	0x80
#define DS1374_REG_SR_AF	0x01
#define DS1374_REG_TCR		0x09
static const struct i2c_device_id ds1374_id[] = ;
MODULE_DEVICE_TABLE(i2c, ds1374_id);
struct ds1374 ;
static struct i2c_driver ds1374_driver;
static int ds1374_read_rtc(struct i2c_client *client, u32 *time,
int reg, int nbytes)
static int ds1374_write_rtc(struct i2c_client *client, u32 time,
int reg, int nbytes)
static int ds1374_check_rtc_status(struct i2c_client *client)
static int ds1374_read_time(struct device *dev, struct rtc_time *time)
static int ds1374_set_time(struct device *dev, struct rtc_time *time)
static int ds1374_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int ds1374_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t ds1374_irq(int irq, void *dev_id)
static void ds1374_work(struct work_struct *work)
static int ds1374_alarm_irq_enable(struct device *dev, unsigned int enabled)
static const struct rtc_class_ops ds1374_rtc_ops = ;
static int ds1374_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ds1374_remove(struct i2c_client *client)
static int ds1374_suspend(struct device *dev)
static int ds1374_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(ds1374_pm, ds1374_suspend, ds1374_resume);
#define DS1374_PM (&ds1374_pm)
#define DS1374_PM NULL
static struct i2c_driver ds1374_driver = ;
static int __init ds1374_init(void)
static void __exit ds1374_exit(void)
module_init(ds1374_init);
module_exit(ds1374_exit);
MODULE_AUTHOR("Scott Wood <scottwood@freescale.com>");
MODULE_DESCRIPTION("Maxim/Dallas DS1374 RTC Driver");
MODULE_LICENSE("GPL");
