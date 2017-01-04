#define MAX1363_MODE_SINGLE(_num, _mask)
#define MAX1363_MODE_SCAN_TO_CHANNEL(_num, _mask)
#define MAX1236_MODE_SCAN_MID_TO_CHANNEL(_mid, _num, _mask)
#define MAX1363_MODE_DIFF_SINGLE(_nump, _numm, _mask)
#define MAX1363_MODE_DIFF_SCAN_TO_CHANNEL(_num, _numvals, _mask)
#define MAX1236_MODE_DIFF_SCAN_MID_TO_CHANNEL(_num, _numvals, _mask)
static const struct max1363_mode max1363_mode_table[] = ;
const struct max1363_mode
*max1363_match_mode(u32 mask, const struct max1363_chip_info *ci)
static int max1363_write_basic_config(struct i2c_client *client,
unsigned char d1,
unsigned char d2)
int max1363_set_scan_mode(struct max1363_state *st)
static int max1363_read_single_chan(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
long m)
static int max1363_read_raw(struct iio_dev *indio_dev,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static const enum max1363_modes max1363_mode_list[] = ;
#define MAX1363_EV_M						\
(IIO_EV_BIT(IIO_EV_TYPE_THRESH, IIO_EV_DIR_RISING)	\
| IIO_EV_BIT(IIO_EV_TYPE_THRESH, IIO_EV_DIR_FALLING))
#define MAX1363_INFO_MASK (1 << IIO_CHAN_INFO_SCALE_SHARED)
static struct iio_chan_spec max1363_channels[] = ;
static struct iio_chan_spec max1361_channels[] = ;
#define MAX1363_CHAN_U(num, address, scan_index, bits)		\
IIO_CHAN(IIO_IN, 0, 1, 0, NULL, num, 0, MAX1363_INFO_MASK,	\
address, scan_index, IIO_ST('u', bits,		\
(bits == 8) ? 8 : 16, 0), 0)
#define MAX1363_CHAN_B(num, num2, address, scan_index, bits)		\
IIO_CHAN(IIO_IN_DIFF, 0, 1, 0, NULL, num, num2, MAX1363_INFO_MASK,\
address, scan_index, IIO_ST('s', bits,		\
(bits == 8) ? 8 : 16, 0), 0)
#define MAX1363_4X_CHANS(bits)
static struct iio_chan_spec max1036_channels[] = MAX1363_4X_CHANS(8);
static struct iio_chan_spec max1136_channels[] = MAX1363_4X_CHANS(10);
static struct iio_chan_spec max1236_channels[] = MAX1363_4X_CHANS(12);
static const enum max1363_modes max1236_mode_list[] = ;
static const enum max1363_modes max1238_mode_list[] = ;
#define MAX1363_12X_CHANS(bits)
static struct iio_chan_spec max1038_channels[] = MAX1363_12X_CHANS(8);
static struct iio_chan_spec max1138_channels[] = MAX1363_12X_CHANS(10);
static struct iio_chan_spec max1238_channels[] = MAX1363_12X_CHANS(12);
static const enum max1363_modes max11607_mode_list[] = ;
static const enum max1363_modes max11608_mode_list[] = ;
#define MAX1363_8X_CHANS(bits)
static struct iio_chan_spec max11602_channels[] = MAX1363_8X_CHANS(8);
static struct iio_chan_spec max11608_channels[] = MAX1363_8X_CHANS(10);
static struct iio_chan_spec max11614_channels[] = MAX1363_8X_CHANS(12);
static const enum max1363_modes max11644_mode_list[] = ;
#define MAX1363_2X_CHANS(bits)
static struct iio_chan_spec max11646_channels[] = MAX1363_2X_CHANS(10);
static struct iio_chan_spec max11644_channels[] = MAX1363_2X_CHANS(12);
enum ;
static const int max1363_monitor_speeds[] = ;
static ssize_t max1363_monitor_show_freq(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t max1363_monitor_store_freq(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_SAMP_FREQ(S_IRUGO | S_IWUSR,
max1363_monitor_show_freq,
max1363_monitor_store_freq);
static IIO_CONST_ATTR(sampling_frequency_available,
"133000 665000 33300 16600 8300 4200 2000 1000");
static int max1363_read_thresh(struct iio_dev *indio_dev,
int event_code,
int *val)
static int max1363_write_thresh(struct iio_dev *indio_dev,
int event_code,
int val)
static const int max1363_event_codes[] = ;
static irqreturn_t max1363_event_handler(int irq, void *private)
static int max1363_read_event_config(struct iio_dev *indio_dev,
int event_code)
static int max1363_monitor_mode_update(struct max1363_state *st, int enabled)
static inline int __max1363_check_event_mask(int thismask, int checkmask)
static int max1363_write_event_config(struct iio_dev *indio_dev,
int event_code,
int state)
static struct attribute *max1363_event_attributes[] = ;
static struct attribute_group max1363_event_attribute_group = ;
#define MAX1363_EVENT_FUNCS						\
static const struct iio_info max1238_info = ;
static const struct iio_info max1363_info = ;
static const struct max1363_chip_info max1363_chip_info_tbl[] = ;
static int max1363_initial_setup(struct max1363_state *st)
static int __devinit max1363_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int max1363_remove(struct i2c_client *client)
static const struct i2c_device_id max1363_id[] = ;
MODULE_DEVICE_TABLE(i2c, max1363_id);
static struct i2c_driver max1363_driver = ;
static __init int max1363_init(void)
static __exit void max1363_exit(void)
MODULE_AUTHOR("Jonathan Cameron <jic23@cam.ac.uk>");
MODULE_DESCRIPTION("Maxim 1363 ADC");
MODULE_LICENSE("GPL v2");
module_init(max1363_init);
module_exit(max1363_exit);
