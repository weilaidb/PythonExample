#define AD7816_FULL			0x1
#define AD7816_PD			0x2
#define AD7816_CS_MASK			0x7
#define AD7816_CS_MAX			0x4
#define AD7816_VALUE_OFFSET		6
#define AD7816_BOUND_VALUE_BASE		0x8
#define AD7816_BOUND_VALUE_MIN		-95
#define AD7816_BOUND_VALUE_MAX		152
#define AD7816_TEMP_FLOAT_OFFSET	2
#define AD7816_TEMP_FLOAT_MASK		0x3
struct ad7816_chip_info ;
static int ad7816_spi_read(struct ad7816_chip_info *chip, u16 *data)
static int ad7816_spi_write(struct ad7816_chip_info *chip, u8 data)
static ssize_t ad7816_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7816_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
ad7816_show_mode,
ad7816_store_mode,
0);
static ssize_t ad7816_show_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(available_modes, S_IRUGO, ad7816_show_available_modes, NULL, 0);
static ssize_t ad7816_show_channel(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7816_store_channel(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(channel, S_IRUGO | S_IWUSR,
ad7816_show_channel,
ad7816_store_channel,
0);
static ssize_t ad7816_show_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(value, S_IRUGO, ad7816_show_value, NULL, 0);
static struct attribute *ad7816_attributes[] = ;
static const struct attribute_group ad7816_attribute_group = ;
#define IIO_EVENT_CODE_AD7816_OTI IIO_UNMOD_EVENT_CODE(IIO_EV_CLASS_TEMP, \
0,		\
IIO_EV_TYPE_THRESH, \
IIO_EV_DIR_FALLING)
static irqreturn_t ad7816_event_handler(int irq, void *private)
static ssize_t ad7816_show_oti(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t ad7816_set_oti(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(oti, S_IRUGO | S_IWUSR,
ad7816_show_oti, ad7816_set_oti, 0);
static struct attribute *ad7816_event_attributes[] = ;
static struct attribute_group ad7816_event_attribute_group = ;
static const struct iio_info ad7816_info = ;
static int __devinit ad7816_probe(struct spi_device *spi_dev)
static int __devexit ad7816_remove(struct spi_device *spi_dev)
static const struct spi_device_id ad7816_id[] = ;
MODULE_DEVICE_TABLE(spi, ad7816_id);
static struct spi_driver ad7816_driver = ;
static __init int ad7816_init(void)
static __exit void ad7816_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices AD7816/7/8 digital"
" temperature sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad7816_init);
module_exit(ad7816_exit);
