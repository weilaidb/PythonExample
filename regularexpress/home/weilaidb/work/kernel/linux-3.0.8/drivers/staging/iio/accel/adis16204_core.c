#define DRIVER_NAME		"adis16204"
static int adis16204_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16204_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16204_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static int adis16204_check_status(struct iio_dev *indio_dev)
static ssize_t adis16204_read_14bit_signed(struct device *dev,
struct device_attribute *attr,
char *buf)
static int adis16204_reset(struct iio_dev *indio_dev)
static ssize_t adis16204_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16204_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16204_self_test(struct iio_dev *indio_dev)
static int adis16204_initial_setup(struct iio_dev *indio_dev)
static IIO_DEV_ATTR_ACCEL_XY(adis16204_read_14bit_signed,
ADIS16204_XY_RSS_OUT);
static IIO_DEV_ATTR_ACCEL_XPEAK(adis16204_read_14bit_signed,
ADIS16204_X_PEAK_OUT);
static IIO_DEV_ATTR_ACCEL_YPEAK(adis16204_read_14bit_signed,
ADIS16204_Y_PEAK_OUT);
static IIO_DEV_ATTR_ACCEL_XYPEAK(adis16204_read_14bit_signed,
ADIS16204_XY_PEAK_OUT);
static IIO_CONST_ATTR(accel_xy_scale, "0.017125");
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16204_write_reset, 0);
enum adis16204_channel ;
static u8 adis16204_addresses[5][2] = ;
static int adis16204_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static int adis16204_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static struct iio_chan_spec adis16204_channels[] = ;
static struct attribute *adis16204_attributes[] = ;
static const struct attribute_group adis16204_attribute_group = ;
static const struct iio_info adis16204_info = ;
static int __devinit adis16204_probe(struct spi_device *spi)
static int adis16204_remove(struct spi_device *spi)
static struct spi_driver adis16204_driver = ;
static __init int adis16204_init(void)
module_init(adis16204_init);
static __exit void adis16204_exit(void)
module_exit(adis16204_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("ADIS16204 High-g Digital Impact Sensor and Recorder");
MODULE_LICENSE("GPL v2");
