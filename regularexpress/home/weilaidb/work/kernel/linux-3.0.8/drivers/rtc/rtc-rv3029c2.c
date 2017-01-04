#define RV3029C2_ONOFF_CTRL		0x00
#define RV3029C2_IRQ_CTRL		0x01
#define RV3029C2_IRQ_CTRL_AIE		(1 << 0)
#define RV3029C2_IRQ_FLAGS		0x02
#define RV3029C2_IRQ_FLAGS_AF		(1 << 0)
#define RV3029C2_STATUS			0x03
#define RV3029C2_STATUS_VLOW1		(1 << 2)
#define RV3029C2_STATUS_VLOW2		(1 << 3)
#define RV3029C2_STATUS_SR		(1 << 4)
#define RV3029C2_STATUS_PON		(1 << 5)
#define RV3029C2_STATUS_EEBUSY		(1 << 7)
#define RV3029C2_RST_CTRL		0x04
#define RV3029C2_CONTROL_SECTION_LEN	0x05
#define RV3029C2_W_SEC			0x08
#define RV3029C2_W_MINUTES		0x09
#define RV3029C2_W_HOURS		0x0A
#define RV3029C2_REG_HR_12_24		(1<<6)
#define RV3029C2_REG_HR_PM		(1<<5)
#define RV3029C2_W_DATE			0x0B
#define RV3029C2_W_DAYS			0x0C
#define RV3029C2_W_MONTHS		0x0D
#define RV3029C2_W_YEARS		0x0E
#define RV3029C2_WATCH_SECTION_LEN	0x07
#define RV3029C2_A_SC			0x10
#define RV3029C2_A_MN			0x11
#define RV3029C2_A_HR			0x12
#define RV3029C2_A_DT			0x13
#define RV3029C2_A_DW			0x14
#define RV3029C2_A_MO			0x15
#define RV3029C2_A_YR			0x16
#define RV3029C2_ALARM_SECTION_LEN	0x07
#define RV3029C2_TIMER_LOW		0x18
#define RV3029C2_TIMER_HIGH		0x19
#define RV3029C2_TEMP_PAGE		0x20
#define RV3029C2_E2P_EEDATA1		0x28
#define RV3029C2_E2P_EEDATA2		0x29
#define RV3029C2_CONTROL_E2P_EECTRL	0x30
#define RV3029C2_TRICKLE_1K		(1<<0)
#define RV3029C2_TRICKLE_5K		(1<<1)
#define RV3029C2_TRICKLE_20K		(1<<2)
#define RV3029C2_TRICKLE_80K		(1<<3)
#define RV3029C2_CONTROL_E2P_XTALOFFSET	0x31
#define RV3029C2_CONTROL_E2P_QCOEF	0x32
#define RV3029C2_CONTROL_E2P_TURNOVER	0x33
#define RV3029C2_USR1_RAM_PAGE		0x38
#define RV3029C2_USR1_SECTION_LEN	0x04
#define RV3029C2_USR2_RAM_PAGE		0x3C
#define RV3029C2_USR2_SECTION_LEN	0x04
static int
rv3029c2_i2c_read_regs(struct i2c_client *client, u8 reg, u8 *buf,
unsigned len)
static int
rv3029c2_i2c_write_regs(struct i2c_client *client, u8 reg, u8 const buf[],
unsigned len)
static int
rv3029c2_i2c_get_sr(struct i2c_client *client, u8 *buf)
static int
rv3029c2_i2c_set_sr(struct i2c_client *client, u8 val)
static int
rv3029c2_i2c_read_time(struct i2c_client *client, struct rtc_time *tm)
static int rv3029c2_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int
rv3029c2_i2c_read_alarm(struct i2c_client *client, struct rtc_wkalrm *alarm)
static int
rv3029c2_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int rv3029c2_rtc_i2c_alarm_set_irq(struct i2c_client *client,
int enable)
static int rv3029c2_rtc_i2c_set_alarm(struct i2c_client *client,
struct rtc_wkalrm *alarm)
static int rv3029c2_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int
rv3029c2_i2c_set_time(struct i2c_client *client, struct rtc_time const *tm)
static int rv3029c2_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops rv3029c2_rtc_ops = ;
static struct i2c_device_id rv3029c2_id[] = ;
MODULE_DEVICE_TABLE(i2c, rv3029c2_id);
static int __devinit
rv3029c2_probe(struct i2c_client *client, const struct i2c_device_id *id)
static int __devexit rv3029c2_remove(struct i2c_client *client)
static struct i2c_driver rv3029c2_driver = ;
static int __init rv3029c2_init(void)
static void __exit rv3029c2_exit(void)
module_init(rv3029c2_init);
module_exit(rv3029c2_exit);
MODULE_AUTHOR("Gregory Hermant <gregory.hermant@calao-systems.com>");
MODULE_DESCRIPTION("Micro Crystal RV3029C2 RTC driver");
MODULE_LICENSE("GPL");
