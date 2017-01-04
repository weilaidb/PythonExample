#define DRV_NAME "ad2s120x"
#define AD2S120X_PN	2
#define AD2S120X_HZ	8192000
#define AD2S120X_TSCLK	(1000000000/AD2S120X_HZ)
struct ad2s120x_state ;
static ssize_t ad2s120x_show_pos_vel(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s120x_show_pos(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad2s120x_show_vel(struct device *dev,
struct device_attribute *attr, char *buf)
static IIO_CONST_ATTR(description,
"12-Bit R/D Converter with Reference Oscillator");
static IIO_DEVICE_ATTR(pos_vel, S_IRUGO, ad2s120x_show_pos_vel, NULL, 0);
static IIO_DEVICE_ATTR(pos, S_IRUGO, ad2s120x_show_pos, NULL, 0);
static IIO_DEVICE_ATTR(vel, S_IRUGO, ad2s120x_show_vel, NULL, 0);
static struct attribute *ad2s120x_attributes[] = ;
static const struct attribute_group ad2s120x_attribute_group = ;
static const struct iio_info ad2s120x_info = ;
static int __devinit ad2s120x_probe(struct spi_device *spi)
static int __devexit ad2s120x_remove(struct spi_device *spi)
static struct spi_driver ad2s120x_driver = ;
static __init int ad2s120x_spi_init(void)
module_init(ad2s120x_spi_init);
static __exit void ad2s120x_spi_exit(void)
module_exit(ad2s120x_spi_exit);
MODULE_AUTHOR("Graff Yang <graff.yang@gmail.com>");
MODULE_DESCRIPTION("Analog Devices AD2S1200/1205 Resolver to Digital SPI driver");
MODULE_LICENSE("GPL v2");
