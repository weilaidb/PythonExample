#define DRV_NAME "ad9951"
#define CFR1 0x0
#define CFR2 0x1
#define AUTO_OSK	(1)
#define OSKEN		(1 << 1)
#define LOAD_ARR	(1 << 2)
#define AUTO_SYNC	(1 << 7)
#define LSB_FST		(1)
#define SDIO_IPT	(1 << 1)
#define CLR_PHA		(1 << 2)
#define SINE_OPT	(1 << 4)
#define ACLR_PHA	(1 << 5)
#define VCO_RANGE	(1 << 2)
#define CRS_OPT		(1 << 1)
#define HMANU_SYNC	(1 << 2)
#define HSPD_SYNC	(1 << 3)
struct ad9951_config ;
struct ad9951_state ;
static ssize_t ad9951_set_parameter(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(dds, S_IWUSR, NULL, ad9951_set_parameter, 0);
static void ad9951_init(struct ad9951_state *st)
static struct attribute *ad9951_attributes[] = ;
static const struct attribute_group ad9951_attribute_group = ;
static const struct iio_info ad9951_info = ;
static int __devinit ad9951_probe(struct spi_device *spi)
static int __devexit ad9951_remove(struct spi_device *spi)
static struct spi_driver ad9951_driver = ;
static __init int ad9951_spi_init(void)
module_init(ad9951_spi_init);
static __exit void ad9951_spi_exit(void)
module_exit(ad9951_spi_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("Analog Devices ad9951 driver");
MODULE_LICENSE("GPL v2");
