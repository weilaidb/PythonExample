static irqreturn_t lis3l02dq_noring(int irq, void *private)
int lis3l02dq_spi_read_reg_8(struct iio_dev *indio_dev,
u8 reg_address, u8 *val)
int lis3l02dq_spi_write_reg_8(struct iio_dev *indio_dev,
u8 reg_address,
u8 val)
static int lis3l02dq_spi_write_reg_s16(struct iio_dev *indio_dev,
u8 lower_reg_address,
s16 value)
static int lis3l02dq_read_reg_s16(struct iio_dev *indio_dev,
u8 lower_reg_address,
int *val)
enum lis3l02dq_rm_ind ;
static u8 lis3l02dq_axis_map[3][3] = ;
static int lis3l02dq_read_thresh(struct iio_dev *indio_dev,
int e,
int *val)
static int lis3l02dq_write_thresh(struct iio_dev *indio_dev,
int event_code,
int val)
static int lis3l02dq_write_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int val,
int val2,
long mask)
static int lis3l02dq_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long mask)
static ssize_t lis3l02dq_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t lis3l02dq_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int lis3l02dq_initial_setup(struct iio_dev *indio_dev)
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
lis3l02dq_read_frequency,
lis3l02dq_write_frequency);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("280 560 1120 4480");
static irqreturn_t lis3l02dq_event_handler(int irq, void *private)
#define LIS3L02DQ_INFO_MASK				\
((1 << IIO_CHAN_INFO_SCALE_SHARED) |		\
(1 << IIO_CHAN_INFO_CALIBSCALE_SEPARATE) |	\
(1 << IIO_CHAN_INFO_CALIBBIAS_SEPARATE))
#define LIS3L02DQ_EVENT_MASK					\
(IIO_EV_BIT(IIO_EV_TYPE_THRESH, IIO_EV_DIR_RISING) |	\
IIO_EV_BIT(IIO_EV_TYPE_THRESH, IIO_EV_DIR_FALLING))
static struct iio_chan_spec lis3l02dq_channels[] = ;
static ssize_t lis3l02dq_read_event_config(struct iio_dev *indio_dev,
int event_code)
int lis3l02dq_disable_all_events(struct iio_dev *indio_dev)
static int lis3l02dq_write_event_config(struct iio_dev *indio_dev,
int event_code,
int state)
static struct attribute *lis3l02dq_attributes[] = ;
static const struct attribute_group lis3l02dq_attribute_group = ;
static const struct iio_info lis3l02dq_info = ;
static int __devinit lis3l02dq_probe(struct spi_device *spi)
static int lis3l02dq_stop_device(struct iio_dev *indio_dev)
static int lis3l02dq_remove(struct spi_device *spi)
static struct spi_driver lis3l02dq_driver = ;
static __init int lis3l02dq_init(void)
module_init(lis3l02dq_init);
static __exit void lis3l02dq_exit(void)
module_exit(lis3l02dq_exit);
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("ST LIS3L02DQ Accelerometer SPI driver");
MODULE_LICENSE("GPL v2");
