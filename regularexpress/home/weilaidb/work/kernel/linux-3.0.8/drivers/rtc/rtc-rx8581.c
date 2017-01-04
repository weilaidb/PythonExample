#define DRV_VERSION "0.1"
#define RX8581_REG_SC		0x00
#define RX8581_REG_MN		0x01
#define RX8581_REG_HR		0x02
#define RX8581_REG_DW		0x03
#define RX8581_REG_DM		0x04
#define RX8581_REG_MO		0x05
#define RX8581_REG_YR		0x06
#define RX8581_REG_RAM		0x07
#define RX8581_REG_AMN		0x08
#define RX8581_REG_AHR		0x09
#define RX8581_REG_ADM		0x0A
#define RX8581_REG_ADW		0x0A
#define RX8581_REG_TMR0		0x0B
#define RX8581_REG_TMR1		0x0C
#define RX8581_REG_EXT		0x0D
#define RX8581_REG_FLAG		0x0E
#define RX8581_REG_CTRL		0x0F
#define RX8581_FLAG_UF		0x20
#define RX8581_FLAG_TF		0x10
#define RX8581_FLAG_AF		0x08
#define RX8581_FLAG_VLF		0x02
#define RX8581_CTRL_UIE		0x20
#define RX8581_CTRL_TIE		0x10
#define RX8581_CTRL_AIE		0x08
#define RX8581_CTRL_STOP	0x02
#define RX8581_CTRL_RESET	0x01
static struct i2c_driver rx8581_driver;
static int rx8581_get_datetime(struct i2c_client *client, struct rtc_time *tm)
static int rx8581_set_datetime(struct i2c_client *client, struct rtc_time *tm)
static int rx8581_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int rx8581_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops rx8581_rtc_ops = ;
static int __devinit rx8581_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit rx8581_remove(struct i2c_client *client)
static const struct i2c_device_id rx8581_id[] = ;
MODULE_DEVICE_TABLE(i2c, rx8581_id);
static struct i2c_driver rx8581_driver = ;
static int __init rx8581_init(void)
static void __exit rx8581_exit(void)
MODULE_AUTHOR("Martyn Welch <martyn.welch@ge.com>");
MODULE_DESCRIPTION("Epson RX-8581 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(rx8581_init);
module_exit(rx8581_exit);
