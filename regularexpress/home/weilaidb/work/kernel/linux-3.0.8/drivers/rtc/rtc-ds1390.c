#define DS1390_REG_100THS		0x00
#define DS1390_REG_SECONDS		0x01
#define DS1390_REG_MINUTES		0x02
#define DS1390_REG_HOURS		0x03
#define DS1390_REG_DAY			0x04
#define DS1390_REG_DATE			0x05
#define DS1390_REG_MONTH_CENT		0x06
#define DS1390_REG_YEAR			0x07
#define DS1390_REG_ALARM_100THS		0x08
#define DS1390_REG_ALARM_SECONDS	0x09
#define DS1390_REG_ALARM_MINUTES	0x0A
#define DS1390_REG_ALARM_HOURS		0x0B
#define DS1390_REG_ALARM_DAY_DATE	0x0C
#define DS1390_REG_CONTROL		0x0D
#define DS1390_REG_STATUS		0x0E
#define DS1390_REG_TRICKLE		0x0F
struct ds1390 ;
static int ds1390_get_reg(struct device *dev, unsigned char address,
unsigned char *data)
static int ds1390_read_time(struct device *dev, struct rtc_time *dt)
static int ds1390_set_time(struct device *dev, struct rtc_time *dt)
static const struct rtc_class_ops ds1390_rtc_ops = ;
static int __devinit ds1390_probe(struct spi_device *spi)
static int __devexit ds1390_remove(struct spi_device *spi)
static struct spi_driver ds1390_driver = ;
static __init int ds1390_init(void)
module_init(ds1390_init);
static __exit void ds1390_exit(void)
module_exit(ds1390_exit);
MODULE_DESCRIPTION("Dallas/Maxim DS1390/93/94 SPI RTC driver");
MODULE_AUTHOR("Mark Jackson <mpfj@mimc.co.uk>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:rtc-ds1390");
