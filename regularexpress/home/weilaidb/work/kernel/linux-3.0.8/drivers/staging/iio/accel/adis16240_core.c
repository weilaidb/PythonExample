#define DRIVER_NAME		"adis16240"
static int adis16240_check_status(struct iio_dev *indio_dev);
static int adis16240_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int adis16240_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16240_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static ssize_t adis16240_spi_read_signed(struct device *dev,
struct device_attribute *attr,
char *buf,
unsigned bits)
static ssize_t adis16240_read_12bit_signed(struct device *dev,
struct device_attribute *attr,
char *buf)
static int adis16240_reset(struct iio_dev *indio_dev)
static ssize_t adis16240_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16240_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16240_self_test(struct iio_dev *indio_dev)
static int adis16240_check_status(struct iio_dev *indio_dev)
static int adis16240_initial_setup(struct iio_dev *indio_dev)
static IIO_DEVICE_ATTR(accel_xyz_squared_peak_raw, S_IRUGO,
adis16240_read_12bit_signed, NULL,
ADIS16240_XYZPEAK_OUT);
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16240_write_reset, 0);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("4096");
enum adis16240_chan ;
static const u8 adis16240_addresses[6][3] = ;
static int adis16240_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static int adis16240_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static struct iio_chan_spec adis16240_channels[] = ;
static struct attribute *adis16240_attributes[] = ;
static const struct attribute_group adis16240_attribute_group = ;
static const struct iio_info adis16240_info = ;
static int __devinit adis16240_probe(struct spi_device *spi)
static int adis16240_remove(struct spi_device *spi)
static struct spi_driver adis16240_driver = ;
static __init int adis16240_init(void)
module_init(adis16240_init);
static __exit void adis16240_exit(void)
module_exit(adis16240_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices Programmable Impact Sensor and Recorder");
MODULE_LICENSE("GPL v2");
