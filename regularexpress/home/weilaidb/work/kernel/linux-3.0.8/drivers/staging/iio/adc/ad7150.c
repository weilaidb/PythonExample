#define AD7150_STATUS              0
#define AD7150_STATUS_OUT1         (1 << 3)
#define AD7150_STATUS_OUT2         (1 << 5)
#define AD7150_CH1_DATA_HIGH       1
#define AD7150_CH1_DATA_LOW        2
#define AD7150_CH2_DATA_HIGH       3
#define AD7150_CH2_DATA_LOW        4
#define AD7150_CH1_AVG_HIGH        5
#define AD7150_CH1_AVG_LOW         6
#define AD7150_CH2_AVG_HIGH        7
#define AD7150_CH2_AVG_LOW         8
#define AD7150_CH1_SENSITIVITY     9
#define AD7150_CH1_THR_HOLD_H      9
#define AD7150_CH1_TIMEOUT         10
#define AD7150_CH1_THR_HOLD_L      10
#define AD7150_CH1_SETUP           11
#define AD7150_CH2_SENSITIVITY     12
#define AD7150_CH2_THR_HOLD_H      12
#define AD7150_CH2_TIMEOUT         13
#define AD7150_CH2_THR_HOLD_L      13
#define AD7150_CH2_SETUP           14
#define AD7150_CFG                 15
#define AD7150_CFG_FIX             (1 << 7)
#define AD7150_PD_TIMER            16
#define AD7150_CH1_CAPDAC          17
#define AD7150_CH2_CAPDAC          18
#define AD7150_SN3                 19
#define AD7150_SN2                 20
#define AD7150_SN1                 21
#define AD7150_SN0                 22
#define AD7150_ID                  23
#define AD7150_MAX_CONV_MODE       4
struct ad7150_chip_info ;
struct ad7150_conversion_mode ;
static struct ad7150_conversion_mode
ad7150_conv_mode_table[AD7150_MAX_CONV_MODE] = ;
static int ad7150_i2c_read(struct ad7150_chip_info *chip, u8 reg, u8 *data, int len)
static int ad7150_i2c_write(struct ad7150_chip_info *chip, u8 reg, u8 data)
#define IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(_show)				\
IIO_DEVICE_ATTR(available_conversion_modes, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CONVERSION_MODE(_mode, _show, _store)              \
IIO_DEVICE_ATTR(conversion_mode, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_AVAIL_THRESHOLD_MODES(_show)				\
IIO_DEVICE_ATTR(available_threshold_modes, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_THRESHOLD_MODE(_mode, _show, _store)		\
IIO_DEVICE_ATTR(threshold_mode, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_THRESHOLD(_mode, _show, _store)              \
IIO_DEVICE_ATTR(ch1_threshold, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_THRESHOLD(_mode, _show, _store)              \
IIO_DEVICE_ATTR(ch2_threshold, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_SENSITIVITY(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_sensitivity, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_SENSITIVITY(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch2_sensitivity, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_TIMEOUT(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_timeout, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_TIMEOUT(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch2_timeout, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_VALUE(_show)		\
IIO_DEVICE_ATTR(ch1_value, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CH2_VALUE(_show)		\
IIO_DEVICE_ATTR(ch2_value, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CH1_SETUP(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_SETUP(_mode, _show, _store)              \
IIO_DEVICE_ATTR(ch2_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_POWERDOWN_TIMER(_mode, _show, _store)              \
IIO_DEVICE_ATTR(powerdown_timer, _mode, _show, _store, 0)
static ssize_t ad7150_show_conversion_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(ad7150_show_conversion_modes);
static ssize_t ad7150_show_conversion_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_conversion_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CONVERSION_MODE(S_IRUGO | S_IWUSR,
ad7150_show_conversion_mode,
ad7150_store_conversion_mode);
static ssize_t ad7150_show_threshold_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_AVAIL_THRESHOLD_MODES(ad7150_show_threshold_modes);
static ssize_t ad7150_show_ch1_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_CH1_VALUE(ad7150_show_ch1_value);
static ssize_t ad7150_show_ch2_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_CH2_VALUE(ad7150_show_ch2_value);
static ssize_t ad7150_show_threshold_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_threshold_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_THRESHOLD_MODE(S_IRUGO | S_IWUSR,
ad7150_show_threshold_mode,
ad7150_store_threshold_mode);
static ssize_t ad7150_show_ch1_threshold(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch1_threshold(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_THRESHOLD(S_IRUGO | S_IWUSR,
ad7150_show_ch1_threshold,
ad7150_store_ch1_threshold);
static ssize_t ad7150_show_ch2_threshold(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch2_threshold(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_THRESHOLD(S_IRUGO | S_IWUSR,
ad7150_show_ch2_threshold,
ad7150_store_ch2_threshold);
static ssize_t ad7150_show_ch1_sensitivity(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch1_sensitivity(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_SENSITIVITY(S_IRUGO | S_IWUSR,
ad7150_show_ch1_sensitivity,
ad7150_store_ch1_sensitivity);
static ssize_t ad7150_show_ch2_sensitivity(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch2_sensitivity(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_SENSITIVITY(S_IRUGO | S_IWUSR,
ad7150_show_ch2_sensitivity,
ad7150_store_ch2_sensitivity);
static ssize_t ad7150_show_ch1_timeout(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch1_timeout(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_TIMEOUT(S_IRUGO | S_IWUSR,
ad7150_show_ch1_timeout,
ad7150_store_ch1_timeout);
static ssize_t ad7150_show_ch2_timeout(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch2_timeout(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_TIMEOUT(S_IRUGO | S_IWUSR,
ad7150_show_ch2_timeout,
ad7150_store_ch2_timeout);
static ssize_t ad7150_show_ch1_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch1_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_SETUP(S_IRUGO | S_IWUSR,
ad7150_show_ch1_setup,
ad7150_store_ch1_setup);
static ssize_t ad7150_show_ch2_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_ch2_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_SETUP(S_IRUGO | S_IWUSR,
ad7150_show_ch2_setup,
ad7150_store_ch2_setup);
static ssize_t ad7150_show_powerdown_timer(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7150_store_powerdown_timer(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_POWERDOWN_TIMER(S_IRUGO | S_IWUSR,
ad7150_show_powerdown_timer,
ad7150_store_powerdown_timer);
static struct attribute *ad7150_attributes[] = ;
static const struct attribute_group ad7150_attribute_group = ;
static irqreturn_t ad7150_event_handler(int irq, void *private)
static IIO_CONST_ATTR(ch1_high_en, "1");
static IIO_CONST_ATTR(ch2_high_en, "1");
static IIO_CONST_ATTR(ch1_low_en, "1");
static IIO_CONST_ATTR(ch2_low_en, "1");
static struct attribute *ad7150_event_attributes[] = ;
static struct attribute_group ad7150_event_attribute_group = ;
static const struct iio_info ad7150_info = ;
static int __devinit ad7150_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad7150_remove(struct i2c_client *client)
static const struct i2c_device_id ad7150_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7150_id);
static struct i2c_driver ad7150_driver = ;
static __init int ad7150_init(void)
static __exit void ad7150_exit(void)
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ad7150/1/6 capacitive sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad7150_init);
module_exit(ad7150_exit);
