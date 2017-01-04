struct rtc_mem ;
struct pcf8583 ;
#define CTRL_STOP	0x80
#define CTRL_HOLD	0x40
#define CTRL_32KHZ	0x00
#define CTRL_MASK	0x08
#define CTRL_ALARMEN	0x04
#define CTRL_ALARM	0x02
#define CTRL_TIMER	0x01
static struct i2c_driver pcf8583_driver;
#define get_ctrl(x)    ((struct pcf8583 *)i2c_get_clientdata(x))->ctrl
#define set_ctrl(x, v) get_ctrl(x) = v
#define CMOS_YEAR	(64 + 128)
#define CMOS_CHECKSUM	(63)
static int pcf8583_get_datetime(struct i2c_client *client, struct rtc_time *dt)
static int pcf8583_set_datetime(struct i2c_client *client, struct rtc_time *dt, int datetoo)
static int pcf8583_get_ctrl(struct i2c_client *client, unsigned char *ctrl)
static int pcf8583_set_ctrl(struct i2c_client *client, unsigned char *ctrl)
static int pcf8583_read_mem(struct i2c_client *client, struct rtc_mem *mem)
static int pcf8583_write_mem(struct i2c_client *client, struct rtc_mem *mem)
static int pcf8583_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pcf8583_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops pcf8583_rtc_ops = ;
static int pcf8583_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit pcf8583_remove(struct i2c_client *client)
static const struct i2c_device_id pcf8583_id[] = ;
MODULE_DEVICE_TABLE(i2c, pcf8583_id);
static struct i2c_driver pcf8583_driver = ;
static __init int pcf8583_init(void)
static __exit void pcf8583_exit(void)
module_init(pcf8583_init);
module_exit(pcf8583_exit);
MODULE_AUTHOR("Russell King");
MODULE_DESCRIPTION("PCF8583 I2C RTC driver");
MODULE_LICENSE("GPL");
