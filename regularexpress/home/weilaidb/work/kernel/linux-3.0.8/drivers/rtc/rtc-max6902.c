#define MAX6902_REG_SECONDS		0x01
#define MAX6902_REG_MINUTES		0x03
#define MAX6902_REG_HOURS		0x05
#define MAX6902_REG_DATE		0x07
#define MAX6902_REG_MONTH		0x09
#define MAX6902_REG_DAY			0x0B
#define MAX6902_REG_YEAR		0x0D
#define MAX6902_REG_CONTROL		0x0F
#define MAX6902_REG_CENTURY		0x13
static int max6902_set_reg(struct device *dev, unsigned char address,
unsigned char data)
static int max6902_get_reg(struct device *dev, unsigned char address,
unsigned char *data)
static int max6902_read_time(struct device *dev, struct rtc_time *dt)
static int max6902_set_time(struct device *dev, struct rtc_time *dt)
static const struct rtc_class_ops max6902_rtc_ops = ;
static int __devinit max6902_probe(struct spi_device *spi)
static int __devexit max6902_remove(struct spi_device *spi)
static struct spi_driver max6902_driver = ;
static __init int max6902_init(void)
module_init(max6902_init);
static __exit void max6902_exit(void)
module_exit(max6902_exit);
MODULE_DESCRIPTION ("max6902 spi RTC driver");
MODULE_AUTHOR ("Raphael Assenat");
MODULE_LICENSE ("GPL");
MODULE_ALIAS("spi:rtc-max6902");
