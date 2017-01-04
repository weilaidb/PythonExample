#define DRV_VERSION "0.3"
#define ISL1208_REG_SC  0x00
#define ISL1208_REG_MN  0x01
#define ISL1208_REG_HR  0x02
#define ISL1208_REG_HR_MIL     (1<<7)
#define ISL1208_REG_HR_PM      (1<<5)
#define ISL1208_REG_DT  0x03
#define ISL1208_REG_MO  0x04
#define ISL1208_REG_YR  0x05
#define ISL1208_REG_DW  0x06
#define ISL1208_RTC_SECTION_LEN 7
#define ISL1208_REG_SR  0x07
#define ISL1208_REG_SR_ARST    (1<<7)
#define ISL1208_REG_SR_XTOSCB  (1<<6)
#define ISL1208_REG_SR_WRTC    (1<<4)
#define ISL1208_REG_SR_ALM     (1<<2)
#define ISL1208_REG_SR_BAT     (1<<1)
#define ISL1208_REG_SR_RTCF    (1<<0)
#define ISL1208_REG_INT 0x08
#define ISL1208_REG_INT_ALME   (1<<6)
#define ISL1208_REG_INT_IM     (1<<7)
#define ISL1208_REG_09  0x09
#define ISL1208_REG_ATR 0x0a
#define ISL1208_REG_DTR 0x0b
#define ISL1208_REG_SCA 0x0c
#define ISL1208_REG_MNA 0x0d
#define ISL1208_REG_HRA 0x0e
#define ISL1208_REG_DTA 0x0f
#define ISL1208_REG_MOA 0x10
#define ISL1208_REG_DWA 0x11
#define ISL1208_ALARM_SECTION_LEN 6
#define ISL1208_REG_USR1 0x12
#define ISL1208_REG_USR2 0x13
#define ISL1208_USR_SECTION_LEN 2
static struct i2c_driver isl1208_driver;
static int
isl1208_i2c_read_regs(struct i2c_client *client, u8 reg, u8 buf[],
unsigned len)
static int
isl1208_i2c_set_regs(struct i2c_client *client, u8 reg, u8 const buf[],
unsigned len)
static int
isl1208_i2c_validate_client(struct i2c_client *client)
static int
isl1208_i2c_get_sr(struct i2c_client *client)
static int
isl1208_i2c_get_atr(struct i2c_client *client)
static int
isl1208_i2c_get_dtr(struct i2c_client *client)
static int
isl1208_i2c_get_usr(struct i2c_client *client)
static int
isl1208_i2c_set_usr(struct i2c_client *client, u16 usr)
static int
isl1208_rtc_toggle_alarm(struct i2c_client *client, int enable)
static int
isl1208_rtc_proc(struct device *dev, struct seq_file *seq)
static int
isl1208_i2c_read_time(struct i2c_client *client, struct rtc_time *tm)
static int
isl1208_i2c_read_alarm(struct i2c_client *client, struct rtc_wkalrm *alarm)
static int
isl1208_i2c_set_alarm(struct i2c_client *client, struct rtc_wkalrm *alarm)
static int
isl1208_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int
isl1208_i2c_set_time(struct i2c_client *client, struct rtc_time const *tm)
static int
isl1208_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int
isl1208_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int
isl1208_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t
isl1208_rtc_interrupt(int irq, void *data)
static const struct rtc_class_ops isl1208_rtc_ops = ;
static ssize_t
isl1208_sysfs_show_atrim(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(atrim, S_IRUGO, isl1208_sysfs_show_atrim, NULL);
static ssize_t
isl1208_sysfs_show_dtrim(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(dtrim, S_IRUGO, isl1208_sysfs_show_dtrim, NULL);
static ssize_t
isl1208_sysfs_show_usr(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t
isl1208_sysfs_store_usr(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(usr, S_IRUGO | S_IWUSR, isl1208_sysfs_show_usr,
isl1208_sysfs_store_usr);
static struct attribute *isl1208_rtc_attrs[] = ;
static const struct attribute_group isl1208_rtc_sysfs_files = ;
static int
isl1208_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int
isl1208_remove(struct i2c_client *client)
static const struct i2c_device_id isl1208_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl1208_id);
static struct i2c_driver isl1208_driver = ;
static int __init
isl1208_init(void)
static void __exit
isl1208_exit(void)
MODULE_AUTHOR("Herbert Valerio Riedel <hvr@gnu.org>");
MODULE_DESCRIPTION("Intersil ISL1208 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(isl1208_init);
module_exit(isl1208_exit);
