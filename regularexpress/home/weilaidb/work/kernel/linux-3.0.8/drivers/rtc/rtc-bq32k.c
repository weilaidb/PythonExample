#define BQ32K_SECONDS		0x00
#define BQ32K_SECONDS_MASK	0x7F
#define BQ32K_STOP		0x80
#define BQ32K_MINUTES		0x01
#define BQ32K_MINUTES_MASK	0x7F
#define BQ32K_OF		0x80
#define BQ32K_HOURS_MASK	0x3F
#define BQ32K_CENT		0x40
#define BQ32K_CENT_EN		0x80
struct bq32k_regs ;
static struct i2c_driver bq32k_driver;
static int bq32k_read(struct device *dev, void *data, uint8_t off, uint8_t len)
static int bq32k_write(struct device *dev, void *data, uint8_t off, uint8_t len)
static int bq32k_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int bq32k_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops bq32k_rtc_ops = ;
static int bq32k_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit bq32k_remove(struct i2c_client *client)
static const struct i2c_device_id bq32k_id[] = ;
MODULE_DEVICE_TABLE(i2c, bq32k_id);
static struct i2c_driver bq32k_driver = ;
static __init int bq32k_init(void)
module_init(bq32k_init);
static __exit void bq32k_exit(void)
module_exit(bq32k_exit);
MODULE_AUTHOR("Semihalf, Piotr Ziecik <kosmo@semihalf.com>");
MODULE_DESCRIPTION("TI BQ32000 I2C RTC driver");
MODULE_LICENSE("GPL");
