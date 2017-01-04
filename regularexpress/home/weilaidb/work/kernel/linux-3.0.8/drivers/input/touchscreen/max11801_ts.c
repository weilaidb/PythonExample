#define GENERNAL_STATUS_REG		0x00
#define GENERNAL_CONF_REG		0x01
#define MESURE_RES_CONF_REG		0x02
#define MESURE_AVER_CONF_REG		0x03
#define ADC_SAMPLE_TIME_CONF_REG	0x04
#define PANEL_SETUPTIME_CONF_REG	0x05
#define DELAY_CONVERSION_CONF_REG	0x06
#define TOUCH_DETECT_PULLUP_CONF_REG	0x07
#define AUTO_MODE_TIME_CONF_REG		0x08
#define APERTURE_CONF_REG		0x09
#define AUX_MESURE_CONF_REG		0x0a
#define OP_MODE_CONF_REG		0x0b
#define FIFO_RD_CMD			(0x50 << 1)
#define MAX11801_FIFO_INT		(1 << 2)
#define MAX11801_FIFO_OVERFLOW		(1 << 3)
#define XY_BUFSIZE			4
#define XY_BUF_OFFSET			4
#define MAX11801_MAX_X			0xfff
#define MAX11801_MAX_Y			0xfff
#define MEASURE_TAG_OFFSET		2
#define MEASURE_TAG_MASK		(3 << MEASURE_TAG_OFFSET)
#define EVENT_TAG_OFFSET		0
#define EVENT_TAG_MASK			(3 << EVENT_TAG_OFFSET)
#define MEASURE_X_TAG			(0 << MEASURE_TAG_OFFSET)
#define MEASURE_Y_TAG			(1 << MEASURE_TAG_OFFSET)
enum ;
struct max11801_data ;
static u8 read_register(struct i2c_client *client, int addr)
static int max11801_write_reg(struct i2c_client *client, int addr, int data)
static irqreturn_t max11801_ts_interrupt(int irq, void *dev_id)
static void __devinit max11801_ts_phy_init(struct max11801_data *data)
static int __devinit max11801_ts_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int max11801_ts_remove(struct i2c_client *client)
static const struct i2c_device_id max11801_ts_id[] = ;
MODULE_DEVICE_TABLE(i2c, max11801_ts_id);
static struct i2c_driver max11801_ts_driver = ;
static int __init max11801_ts_init(void)
static void __exit max11801_ts_exit(void)
module_init(max11801_ts_init);
module_exit(max11801_ts_exit);
MODULE_AUTHOR("Zhang Jiejing <jiejing.zhang@freescale.com>");
MODULE_DESCRIPTION("Touchscreen driver for MAXI MAX11801 controller");
MODULE_LICENSE("GPL");
