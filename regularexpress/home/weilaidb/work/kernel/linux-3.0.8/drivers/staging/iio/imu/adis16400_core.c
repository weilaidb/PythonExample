#define DRIVER_NAME		"adis16400"
enum adis16400_chip_variant ;
static int adis16400_check_status(struct iio_dev *indio_dev);
static int adis16400_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16400_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16400_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static ssize_t adis16400_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16400_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int adis16400_reset(struct iio_dev *indio_dev)
static ssize_t adis16400_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16400_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16400_stop_device(struct iio_dev *indio_dev)
static int adis16400_self_test(struct iio_dev *indio_dev)
static int adis16400_check_status(struct iio_dev *indio_dev)
static int adis16400_initial_setup(struct iio_dev *indio_dev)
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
adis16400_read_frequency,
adis16400_write_frequency);
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16400_write_reset, 0);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("409 546 819 1638");
enum adis16400_chan ;
static u8 adis16400_addresses[16][2] = ;
static int adis16400_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static int adis16400_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long mask)
static struct iio_chan_spec adis16400_channels[] = ;
static struct iio_chan_spec adis16350_channels[] = ;
static struct iio_chan_spec adis16300_channels[] = ;
static struct attribute *adis16400_attributes[] = ;
static const struct attribute_group adis16400_attribute_group = ;
static struct adis16400_chip_info adis16400_chips[] = ;
static const struct iio_info adis16400_info = ;
static int __devinit adis16400_probe(struct spi_device *spi)
static int adis16400_remove(struct spi_device *spi)
static const struct spi_device_id adis16400_id[] = ;
static struct spi_driver adis16400_driver = ;
static __init int adis16400_init(void)
module_init(adis16400_init);
static __exit void adis16400_exit(void)
module_exit(adis16400_exit);
MODULE_AUTHOR("Manuel Stahl <manuel.stahl@iis.fraunhofer.de>");
MODULE_DESCRIPTION("Analog Devices ADIS16400/5 IMU SPI driver");
MODULE_LICENSE("GPL v2");
