#define DRIVER_NAME		"adis16203"
static int adis16203_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16203_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16203_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static int adis16203_check_status(struct iio_dev *indio_dev)
static int adis16203_reset(struct iio_dev *indio_dev)
static ssize_t adis16203_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16203_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16203_self_test(struct iio_dev *indio_dev)
static int adis16203_initial_setup(struct iio_dev *indio_dev)
enum adis16203_chan ;
static u8 adis16203_addresses[5][2] = ;
static int adis16203_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static int adis16203_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static struct iio_chan_spec adis16203_channels[] = ;
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16203_write_reset, 0);
static struct attribute *adis16203_attributes[] = ;
static const struct attribute_group adis16203_attribute_group = ;
static const struct iio_info adis16203_info = ;
static int __devinit adis16203_probe(struct spi_device *spi)
static int adis16203_remove(struct spi_device *spi)
static struct spi_driver adis16203_driver = ;
static __init int adis16203_init(void)
module_init(adis16203_init);
static __exit void adis16203_exit(void)
module_exit(adis16203_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16203 Programmable Digital Vibration Sensor driver");
MODULE_LICENSE("GPL v2");
