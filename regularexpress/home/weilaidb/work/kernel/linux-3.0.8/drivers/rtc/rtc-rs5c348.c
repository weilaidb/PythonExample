#define DRV_VERSION "0.2"
#define RS5C348_REG_SECS	0
#define RS5C348_REG_MINS	1
#define RS5C348_REG_HOURS	2
#define RS5C348_REG_WDAY	3
#define RS5C348_REG_DAY	4
#define RS5C348_REG_MONTH	5
#define RS5C348_REG_YEAR	6
#define RS5C348_REG_CTL1	14
#define RS5C348_REG_CTL2	15
#define RS5C348_SECS_MASK	0x7f
#define RS5C348_MINS_MASK	0x7f
#define RS5C348_HOURS_MASK	0x3f
#define RS5C348_WDAY_MASK	0x03
#define RS5C348_DAY_MASK	0x3f
#define RS5C348_MONTH_MASK	0x1f
#define RS5C348_BIT_PM	0x20
#define RS5C348_BIT_Y2K	0x80
#define RS5C348_BIT_24H	0x20
#define RS5C348_BIT_XSTP	0x10
#define RS5C348_BIT_VDET	0x40
#define RS5C348_CMD_W(addr)	(((addr) << 4) | 0x08)
#define RS5C348_CMD_R(addr)	(((addr) << 4) | 0x0c)
#define RS5C348_CMD_MW(addr)	(((addr) << 4) | 0x00)
#define RS5C348_CMD_MR(addr)	(((addr) << 4) | 0x04)
struct rs5c348_plat_data ;
static int
rs5c348_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int
rs5c348_rtc_read_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops rs5c348_rtc_ops = ;
static struct spi_driver rs5c348_driver;
static int __devinit rs5c348_probe(struct spi_device *spi)
static int __devexit rs5c348_remove(struct spi_device *spi)
static struct spi_driver rs5c348_driver = ;
static __init int rs5c348_init(void)
static __exit void rs5c348_exit(void)
module_init(rs5c348_init);
module_exit(rs5c348_exit);
MODULE_AUTHOR("Atsushi Nemoto <anemo@mba.ocn.ne.jp>");
MODULE_DESCRIPTION("Ricoh RS5C348 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
MODULE_ALIAS("spi:rtc-rs5c348");
