#define DRIVER_NAME		"adis16201"
enum adis16201_chan ;
static int adis16201_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int adis16201_spi_write_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 value)
static int adis16201_spi_read_reg_16(struct iio_dev *indio_dev,
u8 lower_reg_address,
u16 *val)
static int adis16201_reset(struct device *dev)
static ssize_t adis16201_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
int adis16201_set_irq(struct iio_dev *indio_dev, bool enable)
static int adis16201_check_status(struct iio_dev *indio_dev)
static int adis16201_self_test(struct iio_dev *indio_dev)
static int adis16201_initial_setup(struct adis16201_state *st)
static u8 adis16201_addresses[7][2] = ;
static int adis16201_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val, int *val2,
long mask)
static int adis16201_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static struct iio_chan_spec adis16201_channels[] = ;
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL, adis16201_write_reset, 0);
static struct attribute *adis16201_attributes[] = ;
static const struct attribute_group adis16201_attribute_group = ;
static const struct iio_info adis16201_info = ;
static int __devinit adis16201_probe(struct spi_device *spi)
static int adis16201_remove(struct spi_device *spi)
static struct spi_driver adis16201_driver = ;
static __init int adis16201_init(void)
module_init(adis16201_init);
static __exit void adis16201_exit(void)
module_exit(adis16201_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16201 Programmable Digital Vibration Sensor driver");
MODULE_LICENSE("GPL v2");
