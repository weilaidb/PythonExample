#define AD7314_PD		0x2000
#define AD7314_TEMP_SIGN		0x200
#define AD7314_TEMP_MASK		0x7FE0
#define AD7314_TEMP_OFFSET		5
#define AD7314_TEMP_FLOAT_OFFSET	2
#define AD7314_TEMP_FLOAT_MASK		0x3
#define ADT7301_TEMP_SIGN		0x2000
#define ADT7301_TEMP_MASK		0x2FFF
#define ADT7301_TEMP_FLOAT_OFFSET	5
#define ADT7301_TEMP_FLOAT_MASK		0x1F
struct ad7314_chip_info ;
static int ad7314_spi_read(struct ad7314_chip_info *chip, u16 *data)
static int ad7314_spi_write(struct ad7314_chip_info *chip, u16 data)
static ssize_t ad7314_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7314_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
ad7314_show_mode,
ad7314_store_mode,
0);
static ssize_t ad7314_show_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(available_modes, S_IRUGO, ad7314_show_available_modes, NULL, 0);
static ssize_t ad7314_show_temperature(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(temperature, S_IRUGO, ad7314_show_temperature, NULL, 0);
static struct attribute *ad7314_attributes[] = ;
static const struct attribute_group ad7314_attribute_group = ;
static const struct iio_info ad7314_info = ;
static int __devinit ad7314_probe(struct spi_device *spi_dev)
static int __devexit ad7314_remove(struct spi_device *spi_dev)
static const struct spi_device_id ad7314_id[] = ;
static struct spi_driver ad7314_driver = ;
static __init int ad7314_init(void)
static __exit void ad7314_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices AD7314, ADT7301 and ADT7302 digital"
" temperature sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad7314_init);
module_exit(ad7314_exit);
