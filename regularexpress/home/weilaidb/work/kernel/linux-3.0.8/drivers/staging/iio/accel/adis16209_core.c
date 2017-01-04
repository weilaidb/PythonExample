#define DRIVER_NAME		"adis16209"
static int adis16209_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16209_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16209_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static int adis16209_reset(struct iio_dev *indio_dev)
static ssize_t adis16209_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16209_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16209_check_status(struct iio_dev *indio_dev)
static int adis16209_self_test(struct iio_dev *indio_dev)
static int adis16209_initial_setup(struct iio_dev *indio_dev)
enum adis16209_chan ;
static const u8 adis16209_addresses[8][2] = ;
static int adis16209_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static int adis16209_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static struct iio_chan_spec adis16209_channels[] = ;
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16209_write_reset, 0);
static struct attribute *adis16209_attributes[] = ;
static const struct attribute_group adis16209_attribute_group = ;
static const struct iio_info adis16209_info = ;
static int __devinit adis16209_probe(struct spi_device *spi)
static int adis16209_remove(struct spi_device *spi)
static struct spi_driver adis16209_driver = ;
static __init int adis16209_init(void)
module_init(adis16209_init);
static __exit void adis16209_exit(void)
module_exit(adis16209_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16209 Digital Vibration Sensor driver");
MODULE_LICENSE("GPL v2");
