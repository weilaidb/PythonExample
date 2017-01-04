#define M41T94_REG_SECONDS	0x01
#define M41T94_REG_MINUTES	0x02
#define M41T94_REG_HOURS	0x03
#define M41T94_REG_WDAY		0x04
#define M41T94_REG_DAY		0x05
#define M41T94_REG_MONTH	0x06
#define M41T94_REG_YEAR		0x07
#define M41T94_REG_HT		0x0c
#define M41T94_BIT_HALT		0x40
#define M41T94_BIT_STOP		0x80
#define M41T94_BIT_CB		0x40
#define M41T94_BIT_CEB		0x80
static int m41t94_set_time(struct device *dev, struct rtc_time *tm)
static int m41t94_read_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops m41t94_rtc_ops = ;
static struct spi_driver m41t94_driver;
static int __devinit m41t94_probe(struct spi_device *spi)
static int __devexit m41t94_remove(struct spi_device *spi)
static struct spi_driver m41t94_driver = ;
static __init int m41t94_init(void)
module_init(m41t94_init);
static __exit void m41t94_exit(void)
module_exit(m41t94_exit);
MODULE_AUTHOR("Kim B. Heino <Kim.Heino@bluegiga.com>");
MODULE_DESCRIPTION("Driver for ST M41T94 SPI RTC");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:rtc-m41t94");
