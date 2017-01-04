#define S35390A_CMD_STATUS1	0
#define S35390A_CMD_STATUS2	1
#define S35390A_CMD_TIME1	2
#define S35390A_BYTE_YEAR	0
#define S35390A_BYTE_MONTH	1
#define S35390A_BYTE_DAY	2
#define S35390A_BYTE_WDAY	3
#define S35390A_BYTE_HOURS	4
#define S35390A_BYTE_MINS	5
#define S35390A_BYTE_SECS	6
#define S35390A_FLAG_POC	0x01
#define S35390A_FLAG_BLD	0x02
#define S35390A_FLAG_24H	0x40
#define S35390A_FLAG_RESET	0x80
#define S35390A_FLAG_TEST	0x01
static const struct i2c_device_id s35390a_id[] = ;
MODULE_DEVICE_TABLE(i2c, s35390a_id);
struct s35390a ;
static int s35390a_set_reg(struct s35390a *s35390a, int reg, char *buf, int len)
static int s35390a_get_reg(struct s35390a *s35390a, int reg, char *buf, int len)
static int s35390a_reset(struct s35390a *s35390a)
static int s35390a_disable_test_mode(struct s35390a *s35390a)
static char s35390a_hr2reg(struct s35390a *s35390a, int hour)
static int s35390a_reg2hr(struct s35390a *s35390a, char reg)
static int s35390a_set_datetime(struct i2c_client *client, struct rtc_time *tm)
static int s35390a_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int s35390a_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int s35390a_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops s35390a_rtc_ops = ;
static struct i2c_driver s35390a_driver;
static int s35390a_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int s35390a_remove(struct i2c_client *client)
static struct i2c_driver s35390a_driver = ;
static int __init s35390a_rtc_init(void)
static void __exit s35390a_rtc_exit(void)
MODULE_AUTHOR("Byron Bradley <byron.bbradley@gmail.com>");
MODULE_DESCRIPTION("S35390A RTC driver");
MODULE_LICENSE("GPL");
module_init(s35390a_rtc_init);
module_exit(s35390a_rtc_exit);
