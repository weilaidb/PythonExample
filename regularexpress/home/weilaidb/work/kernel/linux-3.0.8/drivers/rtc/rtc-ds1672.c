#define DRV_VERSION "0.4"
#define DS1672_REG_CNT_BASE	0
#define DS1672_REG_CONTROL	4
#define DS1672_REG_TRICKLE	5
#define DS1672_REG_CONTROL_EOSC	0x80
static struct i2c_driver ds1672_driver;
static int ds1672_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int ds1672_set_mmss(struct i2c_client *client, unsigned long secs)
static int ds1672_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ds1672_rtc_set_mmss(struct device *dev, unsigned long secs)
static int ds1672_get_control(struct i2c_client *client, u8 *status)
static ssize_t show_control(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(control, S_IRUGO, show_control, NULL);
static const struct rtc_class_ops ds1672_rtc_ops = ;
static int ds1672_remove(struct i2c_client *client)
static int ds1672_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static struct i2c_device_id ds1672_id[] = ;
static struct i2c_driver ds1672_driver = ;
static int __init ds1672_init(void)
static void __exit ds1672_exit(void)
MODULE_AUTHOR("Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("Dallas/Maxim DS1672 timekeeper driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(ds1672_init);
module_exit(ds1672_exit);
