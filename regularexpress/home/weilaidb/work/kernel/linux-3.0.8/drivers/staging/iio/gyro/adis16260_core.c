#define DRIVER_NAME		"adis16260"
static int adis16260_check_status(struct iio_dev *indio_dev);
static int adis16260_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16260_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16260_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static ssize_t adis16260_read_frequency_available(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16260_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16260_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int adis16260_reset(struct iio_dev *indio_dev)
static ssize_t adis16260_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16260_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16260_stop_device(struct iio_dev *indio_dev)
static int adis16260_self_test(struct iio_dev *indio_dev)
static int adis16260_check_status(struct iio_dev *indio_dev)
static int adis16260_initial_setup(struct iio_dev *indio_dev)
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
adis16260_read_frequency,
adis16260_write_frequency);
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16260_write_reset, 0);
static IIO_DEVICE_ATTR(sampling_frequency_available,
S_IRUGO, adis16260_read_frequency_available, NULL, 0);
enum adis16260_channel ;
#define ADIS16260_GYRO_CHANNEL_SET(axis, mod)				\
struct iio_chan_spec adis16260_channels_##axis[] =
static const ADIS16260_GYRO_CHANNEL_SET(x, IIO_MOD_X);
static const ADIS16260_GYRO_CHANNEL_SET(y, IIO_MOD_Y);
static const ADIS16260_GYRO_CHANNEL_SET(z, IIO_MOD_Z);
static const u8 adis16260_addresses[5][3] = ;
static int adis16260_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static int adis16260_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static struct attribute *adis16260_attributes[] = ;
static const struct attribute_group adis16260_attribute_group = ;
static const struct iio_info adis16260_info = ;
static int __devinit adis16260_probe(struct spi_device *spi)
static int adis16260_remove(struct spi_device *spi)
static const struct spi_device_id adis16260_id[] = ;
static struct spi_driver adis16260_driver = ;
static __init int adis16260_init(void)
module_init(adis16260_init);
static __exit void adis16260_exit(void)
module_exit(adis16260_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16260/5 Digital Gyroscope Sensor");
MODULE_LICENSE("GPL v2");
