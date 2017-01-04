#define DRV_VERSION "0.1"
#define ISL12022_REG_SC		0x00
#define ISL12022_REG_MN		0x01
#define ISL12022_REG_HR		0x02
#define ISL12022_REG_DT		0x03
#define ISL12022_REG_MO		0x04
#define ISL12022_REG_YR		0x05
#define ISL12022_REG_DW		0x06
#define ISL12022_REG_SR		0x07
#define ISL12022_REG_INT	0x08
#define ISL12022_HR_MIL		(1 << 7)
#define ISL12022_SR_LBAT85	(1 << 2)
#define ISL12022_SR_LBAT75	(1 << 1)
#define ISL12022_INT_WRTC	(1 << 6)
static struct i2c_driver isl12022_driver;
struct isl12022 ;
static int isl12022_read_regs(struct i2c_client *client, uint8_t reg,
uint8_t *data, size_t n)
static int isl12022_write_reg(struct i2c_client *client,
uint8_t reg, uint8_t val)
static int isl12022_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int isl12022_set_datetime(struct i2c_client *client, struct rtc_time *tm)
static int isl12022_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int isl12022_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops isl12022_rtc_ops = ;
static int isl12022_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int isl12022_remove(struct i2c_client *client)
static const struct i2c_device_id isl12022_id[] = ;
MODULE_DEVICE_TABLE(i2c, isl12022_id);
static struct i2c_driver isl12022_driver = ;
static int __init isl12022_init(void)
static void __exit isl12022_exit(void)
module_init(isl12022_init);
module_exit(isl12022_exit);
MODULE_AUTHOR("roman.fietze@telemotive.de");
MODULE_DESCRIPTION("ISL 12022 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
