#define DS3234_REG_SECONDS	0x00
#define DS3234_REG_MINUTES	0x01
#define DS3234_REG_HOURS	0x02
#define DS3234_REG_DAY		0x03
#define DS3234_REG_DATE		0x04
#define DS3234_REG_MONTH	0x05
#define DS3234_REG_YEAR		0x06
#define DS3234_REG_CENTURY	(1 << 7)
#define DS3234_REG_CONTROL	0x0E
#define DS3234_REG_CONT_STAT	0x0F
static int ds3234_set_reg(struct device *dev, unsigned char address,
unsigned char data)
static int ds3234_get_reg(struct device *dev, unsigned char address,
unsigned char *data)
static int ds3234_read_time(struct device *dev, struct rtc_time *dt)
static int ds3234_set_time(struct device *dev, struct rtc_time *dt)
static const struct rtc_class_ops ds3234_rtc_ops = ;
static int __devinit ds3234_probe(struct spi_device *spi)
static int __devexit ds3234_remove(struct spi_device *spi)
static struct spi_driver ds3234_driver = ;
static __init int ds3234_init(void)
module_init(ds3234_init);
static __exit void ds3234_exit(void)
module_exit(ds3234_exit);
MODULE_DESCRIPTION("DS3234 SPI RTC driver");
MODULE_AUTHOR("Dennis Aberilla <denzzzhome@yahoo.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:ds3234");
