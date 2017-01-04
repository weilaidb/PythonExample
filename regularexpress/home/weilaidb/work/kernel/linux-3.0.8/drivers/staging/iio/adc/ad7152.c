#define AD7152_STATUS              0
#define AD7152_STATUS_RDY1         (1 << 0)
#define AD7152_STATUS_RDY2         (1 << 1)
#define AD7152_CH1_DATA_HIGH       1
#define AD7152_CH1_DATA_LOW        2
#define AD7152_CH2_DATA_HIGH       3
#define AD7152_CH2_DATA_LOW        4
#define AD7152_CH1_OFFS_HIGH       5
#define AD7152_CH1_OFFS_LOW        6
#define AD7152_CH2_OFFS_HIGH       7
#define AD7152_CH2_OFFS_LOW        8
#define AD7152_CH1_GAIN_HIGH       9
#define AD7152_CH1_GAIN_LOW        10
#define AD7152_CH1_SETUP           11
#define AD7152_CH2_GAIN_HIGH       12
#define AD7152_CH2_GAIN_LOW        13
#define AD7152_CH2_SETUP           14
#define AD7152_CFG                 15
#define AD7152_RESEVERD            16
#define AD7152_CAPDAC_POS          17
#define AD7152_CAPDAC_NEG          18
#define AD7152_CFG2                26
#define AD7152_MAX_CONV_MODE       6
struct ad7152_chip_info ;
struct ad7152_conversion_mode ;
static struct ad7152_conversion_mode
ad7152_conv_mode_table[AD7152_MAX_CONV_MODE] = ;
static int ad7152_i2c_read(struct ad7152_chip_info *chip, u8 reg, u8 *data, int len)
static int ad7152_i2c_write(struct ad7152_chip_info *chip, u8 reg, u8 data)
#define IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(_show)				\
IIO_DEVICE_ATTR(available_conversion_modes, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CONVERSION_MODE(_mode, _show, _store)              \
IIO_DEVICE_ATTR(conversion_mode, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_OFFSET(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_offset, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_OFFSET(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch2_offset, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_GAIN(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_gain, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_GAIN(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch2_gain, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH1_VALUE(_show)		\
IIO_DEVICE_ATTR(ch1_value, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CH2_VALUE(_show)		\
IIO_DEVICE_ATTR(ch2_value, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CH1_SETUP(_mode, _show, _store)		\
IIO_DEVICE_ATTR(ch1_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CH2_SETUP(_mode, _show, _store)              \
IIO_DEVICE_ATTR(ch2_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_FILTER_RATE_SETUP(_mode, _show, _store)              \
IIO_DEVICE_ATTR(filter_rate_setup, _mode, _show, _store, 0)
static ssize_t ad7152_show_conversion_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(ad7152_show_conversion_modes);
static ssize_t ad7152_show_ch1_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_CH1_VALUE(ad7152_show_ch1_value);
static ssize_t ad7152_show_ch2_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_CH2_VALUE(ad7152_show_ch2_value);
static ssize_t ad7152_show_conversion_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_conversion_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CONVERSION_MODE(S_IRUGO | S_IWUSR,
ad7152_show_conversion_mode,
ad7152_store_conversion_mode);
static ssize_t ad7152_show_ch1_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch1_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_OFFSET(S_IRUGO | S_IWUSR,
ad7152_show_ch1_offset,
ad7152_store_ch1_offset);
static ssize_t ad7152_show_ch2_offset(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch2_offset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_OFFSET(S_IRUGO | S_IWUSR,
ad7152_show_ch2_offset,
ad7152_store_ch2_offset);
static ssize_t ad7152_show_ch1_gain(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch1_gain(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_GAIN(S_IRUGO | S_IWUSR,
ad7152_show_ch1_gain,
ad7152_store_ch1_gain);
static ssize_t ad7152_show_ch2_gain(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch2_gain(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_GAIN(S_IRUGO | S_IWUSR,
ad7152_show_ch2_gain,
ad7152_store_ch2_gain);
static ssize_t ad7152_show_ch1_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch1_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH1_SETUP(S_IRUGO | S_IWUSR,
ad7152_show_ch1_setup,
ad7152_store_ch1_setup);
static ssize_t ad7152_show_ch2_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_ch2_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CH2_SETUP(S_IRUGO | S_IWUSR,
ad7152_show_ch2_setup,
ad7152_store_ch2_setup);
static ssize_t ad7152_show_filter_rate_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7152_store_filter_rate_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_FILTER_RATE_SETUP(S_IRUGO | S_IWUSR,
ad7152_show_filter_rate_setup,
ad7152_store_filter_rate_setup);
static struct attribute *ad7152_attributes[] = ;
static const struct attribute_group ad7152_attribute_group = ;
static const struct iio_info ad7152_info = ;
static int __devinit ad7152_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad7152_remove(struct i2c_client *client)
static const struct i2c_device_id ad7152_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7152_id);
static struct i2c_driver ad7152_driver = ;
static __init int ad7152_init(void)
static __exit void ad7152_exit(void)
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ad7152/3 capacitive sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad7152_init);
module_exit(ad7152_exit);
