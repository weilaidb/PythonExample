#define DRV_VERSION "1.0.8"
#define CCR_SEC			0
#define CCR_MIN			1
#define CCR_HOUR		2
#define CCR_MDAY		3
#define CCR_MONTH		4
#define CCR_YEAR		5
#define CCR_WDAY		6
#define CCR_Y2K			7
#define X1205_REG_SR		0x3F
#define X1205_REG_Y2K		0x37
#define X1205_REG_DW		0x36
#define X1205_REG_YR		0x35
#define X1205_REG_MO		0x34
#define X1205_REG_DT		0x33
#define X1205_REG_HR		0x32
#define X1205_REG_MN		0x31
#define X1205_REG_SC		0x30
#define X1205_REG_DTR		0x13
#define X1205_REG_ATR		0x12
#define X1205_REG_INT		0x11
#define X1205_REG_0		0x10
#define X1205_REG_Y2K1		0x0F
#define X1205_REG_DWA1		0x0E
#define X1205_REG_YRA1		0x0D
#define X1205_REG_MOA1		0x0C
#define X1205_REG_DTA1		0x0B
#define X1205_REG_HRA1		0x0A
#define X1205_REG_MNA1		0x09
#define X1205_REG_SCA1		0x08
#define X1205_REG_Y2K0		0x07
#define X1205_REG_DWA0		0x06
#define X1205_REG_YRA0		0x05
#define X1205_REG_MOA0		0x04
#define X1205_REG_DTA0		0x03
#define X1205_REG_HRA0		0x02
#define X1205_REG_MNA0		0x01
#define X1205_REG_SCA0		0x00
#define X1205_CCR_BASE		0x30
#define X1205_ALM0_BASE		0x00
#define X1205_SR_RTCF		0x01
#define X1205_SR_WEL		0x02
#define X1205_SR_RWEL		0x04
#define X1205_SR_AL0		0x20
#define X1205_DTR_DTR0		0x01
#define X1205_DTR_DTR1		0x02
#define X1205_DTR_DTR2		0x04
#define X1205_HR_MIL		0x80
#define X1205_INT_AL0E		0x20
static struct i2c_driver x1205_driver;
static int x1205_get_datetime(struct i2c_client *client, struct rtc_time *tm,
unsigned char reg_base)
static int x1205_get_status(struct i2c_client *client, unsigned char *sr)
static int x1205_set_datetime(struct i2c_client *client, struct rtc_time *tm,
u8 reg_base, unsigned char alm_enable)
static int x1205_fix_osc(struct i2c_client *client)
static int x1205_get_dtrim(struct i2c_client *client, int *trim)
static int x1205_get_atrim(struct i2c_client *client, int *trim)
struct x1205_limit
;
static int x1205_validate_client(struct i2c_client *client)
static int x1205_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int x1205_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int x1205_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int x1205_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int x1205_rtc_proc(struct device *dev, struct seq_file *seq)
static const struct rtc_class_ops x1205_rtc_ops = ;
static ssize_t x1205_sysfs_show_atrim(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(atrim, S_IRUGO, x1205_sysfs_show_atrim, NULL);
static ssize_t x1205_sysfs_show_dtrim(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(dtrim, S_IRUGO, x1205_sysfs_show_dtrim, NULL);
static int x1205_sysfs_register(struct device *dev)
static void x1205_sysfs_unregister(struct device *dev)
static int x1205_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int x1205_remove(struct i2c_client *client)
static const struct i2c_device_id x1205_id[] = ;
MODULE_DEVICE_TABLE(i2c, x1205_id);
static struct i2c_driver x1205_driver = ;
static int __init x1205_init(void)
static void __exit x1205_exit(void)
MODULE_AUTHOR(
"Karen Spearel <kas111 at gmail dot com>, "
"Alessandro Zummo <a.zummo@towertech.it>");
MODULE_DESCRIPTION("Xicor/Intersil X1205 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(x1205_init);
module_exit(x1205_exit);
