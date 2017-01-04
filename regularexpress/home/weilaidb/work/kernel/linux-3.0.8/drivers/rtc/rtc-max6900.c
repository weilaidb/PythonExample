#define DRV_VERSION "0.2"
#define MAX6900_REG_SC			0
#define MAX6900_REG_MN			1
#define MAX6900_REG_HR			2
#define MAX6900_REG_DT			3
#define MAX6900_REG_MO			4
#define MAX6900_REG_DW			5
#define MAX6900_REG_YR			6
#define MAX6900_REG_CT			7
#define MAX6900_REG_CENTURY		9
#define MAX6900_REG_LEN			10
#define MAX6900_BURST_LEN		8
#define MAX6900_REG_CT_WP		(1 << 7)
#define MAX6900_REG_CONTROL_WRITE	0x8e
#define MAX6900_REG_CENTURY_WRITE	0x92
#define MAX6900_REG_CENTURY_READ	0x93
#define MAX6900_REG_RESERVED_READ	0x96
#define MAX6900_REG_BURST_WRITE		0xbe
#define MAX6900_REG_BURST_READ		0xbf
#define MAX6900_IDLE_TIME_AFTER_WRITE	3
static struct i2c_driver max6900_driver;
static int max6900_i2c_read_regs(struct i2c_client *client, u8 *buf)
static int max6900_i2c_write_regs(struct i2c_client *client, u8 const *buf)
static int max6900_i2c_read_time(struct i2c_client *client, struct rtc_time *tm)
static int max6900_i2c_clear_write_protect(struct i2c_client *client)
static int
max6900_i2c_set_time(struct i2c_client *client, struct rtc_time const *tm)
static int max6900_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int max6900_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int max6900_remove(struct i2c_client *client)
static const struct rtc_class_ops max6900_rtc_ops = ;
static int
max6900_probe(struct i2c_client *client, const struct i2c_device_id *id)
static struct i2c_device_id max6900_id[] = ;
static struct i2c_driver max6900_driver = ;
static int __init max6900_init(void)
static void __exit max6900_exit(void)
MODULE_DESCRIPTION("Maxim MAX6900 RTC driver");
MODULE_AUTHOR("Dale Farnsworth <dale@farnsworth.org>");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(max6900_init);
module_exit(max6900_exit);
