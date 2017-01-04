#define DRV_NAME "ad9852"
#define addr_phaad1 0x0
#define addr_phaad2 0x1
#define addr_fretu1 0x2
#define addr_fretu2 0x3
#define addr_delfre 0x4
#define addr_updclk 0x5
#define addr_ramclk 0x6
#define addr_contrl 0x7
#define addr_optskm 0x8
#define addr_optskr 0xa
#define addr_dacctl 0xb
#define COMPPD		(1 << 4)
#define REFMULT2	(1 << 2)
#define BYPPLL		(1 << 5)
#define PLLRANG		(1 << 6)
#define IEUPCLK		(1)
#define OSKEN		(1 << 5)
#define read_bit	(1 << 7)
struct ad9852_config ;
struct ad9852_state ;
static ssize_t ad9852_set_parameter(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(dds, S_IWUSR, NULL, ad9852_set_parameter, 0);
static void ad9852_init(struct ad9852_state *st)
static struct attribute *ad9852_attributes[] = ;
static const struct attribute_group ad9852_attribute_group = ;
static const struct iio_info ad9852_info = ;
static int __devinit ad9852_probe(struct spi_device *spi)
static int __devexit ad9852_remove(struct spi_device *spi)
static struct spi_driver ad9852_driver = ;
static __init int ad9852_spi_init(void)
module_init(ad9852_spi_init);
static __exit void ad9852_spi_exit(void)
module_exit(ad9852_spi_exit);
MODULE_AUTHOR("Cliff Cai");
MODULE_DESCRIPTION("Analog Devices ad9852 driver");
MODULE_LICENSE("GPL v2");
