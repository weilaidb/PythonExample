#define M41T93_REG_SSEC			0
#define M41T93_REG_ST_SEC		1
#define M41T93_REG_MIN			2
#define M41T93_REG_CENT_HOUR		3
#define M41T93_REG_WDAY			4
#define M41T93_REG_DAY			5
#define M41T93_REG_MON			6
#define M41T93_REG_YEAR			7
#define M41T93_REG_ALM_HOUR_HT		0xc
#define M41T93_REG_FLAGS		0xf
#define M41T93_FLAG_ST			(1 << 7)
#define M41T93_FLAG_OF			(1 << 2)
#define M41T93_FLAG_BL			(1 << 4)
#define M41T93_FLAG_HT			(1 << 6)
static inline int m41t93_set_reg(struct spi_device *spi, u8 addr, u8 data)
static int m41t93_set_time(struct device *dev, struct rtc_time *tm)
static int m41t93_get_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops m41t93_rtc_ops = ;
static struct spi_driver m41t93_driver;
static int __devinit m41t93_probe(struct spi_device *spi)
static int __devexit m41t93_remove(struct spi_device *spi)
static struct spi_driver m41t93_driver = ;
static __init int m41t93_init(void)
module_init(m41t93_init);
static __exit void m41t93_exit(void)
module_exit(m41t93_exit);
MODULE_AUTHOR("Nikolaus Voss <n.voss@weinmann.de>");
MODULE_DESCRIPTION("Driver for ST M41T93 SPI RTC");
MODULE_LICENSE("GPL");
MODULE_ALIAS("spi:rtc-m41t93");
