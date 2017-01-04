#define DRV_VERSION "0.6"
#define PCF2123_REG_CTRL1	(0x00)
#define PCF2123_REG_CTRL2	(0x01)
#define PCF2123_REG_SC		(0x02)
#define PCF2123_REG_MN		(0x03)
#define PCF2123_REG_HR		(0x04)
#define PCF2123_REG_DM		(0x05)
#define PCF2123_REG_DW		(0x06)
#define PCF2123_REG_MO		(0x07)
#define PCF2123_REG_YR		(0x08)
#define PCF2123_SUBADDR		(1 << 4)
#define PCF2123_WRITE		((0 << 7) | PCF2123_SUBADDR)
#define PCF2123_READ		((1 << 7) | PCF2123_SUBADDR)
static struct spi_driver pcf2123_driver;
struct pcf2123_sysfs_reg ;
struct pcf2123_plat_data ;
static inline void pcf2123_delay_trec(void)
static ssize_t pcf2123_show(struct device *dev, struct device_attribute *attr,
char *buffer)
static ssize_t pcf2123_store(struct device *dev, struct device_attribute *attr,
const char *buffer, size_t count)
static int pcf2123_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pcf2123_rtc_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops pcf2123_rtc_ops = ;
static int __devinit pcf2123_probe(struct spi_device *spi)
static int __devexit pcf2123_remove(struct spi_device *spi)
static struct spi_driver pcf2123_driver = ;
static int __init pcf2123_init(void)
static void __exit pcf2123_exit(void)
MODULE_AUTHOR("Chris Verges <chrisv@cyberswitching.com>");
MODULE_DESCRIPTION("NXP PCF2123 RTC driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(pcf2123_init);
module_exit(pcf2123_exit);
