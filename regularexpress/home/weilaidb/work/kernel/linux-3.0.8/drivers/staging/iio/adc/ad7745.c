#define AD774X_STATUS		0
#define AD774X_STATUS_RDY	(1 << 2)
#define AD774X_STATUS_RDYVT	(1 << 1)
#define AD774X_STATUS_RDYCAP	(1 << 0)
#define AD774X_CAP_DATA_HIGH	1
#define AD774X_CAP_DATA_MID	2
#define AD774X_CAP_DATA_LOW	3
#define AD774X_VT_DATA_HIGH	4
#define AD774X_VT_DATA_MID	5
#define AD774X_VT_DATA_LOW	6
#define AD774X_CAP_SETUP	7
#define AD774X_VT_SETUP		8
#define AD774X_EXEC_SETUP	9
#define AD774X_CFG		10
#define AD774X_CAPDACA		11
#define AD774X_CAPDACB		12
#define AD774X_CAPDAC_EN	(1 << 7)
#define AD774X_CAP_OFFH		13
#define AD774X_CAP_OFFL		14
#define AD774X_CAP_GAINH	15
#define AD774X_CAP_GAINL	16
#define AD774X_VOLT_GAINH	17
#define AD774X_VOLT_GAINL	18
#define AD774X_MAX_CONV_MODE	6
struct ad774x_chip_info ;
struct ad774x_conversion_mode ;
static struct ad774x_conversion_mode
ad774x_conv_mode_table[AD774X_MAX_CONV_MODE] = ;
static int ad774x_i2c_read(struct ad774x_chip_info *chip, u8 reg, u8 *data, int len)
static int ad774x_i2c_write(struct ad774x_chip_info *chip, u8 reg, u8 data)
#define IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(_show)				\
IIO_DEVICE_ATTR(available_conversion_modes, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_CONVERSION_MODE(_mode, _show, _store)              \
IIO_DEVICE_ATTR(conversion_mode, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CAP_SETUP(_mode, _show, _store)		\
IIO_DEVICE_ATTR(cap_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_VT_SETUP(_mode, _show, _store)              \
IIO_DEVICE_ATTR(in0_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_EXEC_SETUP(_mode, _show, _store)              \
IIO_DEVICE_ATTR(exec_setup, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_VOLT_GAIN(_mode, _show, _store)		\
IIO_DEVICE_ATTR(in0_gain, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CAP_OFFS(_mode, _show, _store)		\
IIO_DEVICE_ATTR(cap_offs, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CAP_GAIN(_mode, _show, _store)		\
IIO_DEVICE_ATTR(cap_gain, _mode, _show, _store, 0)
#define IIO_DEV_ATTR_CAP_DATA(_show)		\
IIO_DEVICE_ATTR(cap0_raw, S_IRUGO, _show, NULL, 0)
#define IIO_DEV_ATTR_VT_DATA(_show)		\
IIO_DEVICE_ATTR(in0_raw, S_IRUGO, _show, NULL, 0)
static ssize_t ad774x_show_conversion_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_AVAIL_CONVERSION_MODES(ad774x_show_conversion_modes);
static ssize_t ad774x_show_conversion_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_conversion_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CONVERSION_MODE(S_IRUGO | S_IWUSR,
ad774x_show_conversion_mode,
ad774x_store_conversion_mode);
static ssize_t ad774x_show_dac_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_dac_value(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(capdac0_raw, S_IRUGO | S_IWUSR,
ad774x_show_dac_value,
ad774x_store_dac_value,
AD774X_CAPDACA);
static IIO_DEVICE_ATTR(capdac1_raw, S_IRUGO | S_IWUSR,
ad774x_show_dac_value,
ad774x_store_dac_value,
AD774X_CAPDACB);
static ssize_t ad774x_show_cap_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_cap_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CAP_SETUP(S_IRUGO | S_IWUSR,
ad774x_show_cap_setup,
ad774x_store_cap_setup);
static ssize_t ad774x_show_vt_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_vt_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_VT_SETUP(S_IRUGO | S_IWUSR,
ad774x_show_vt_setup,
ad774x_store_vt_setup);
static ssize_t ad774x_show_exec_setup(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_exec_setup(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_EXEC_SETUP(S_IRUGO | S_IWUSR,
ad774x_show_exec_setup,
ad774x_store_exec_setup);
static ssize_t ad774x_show_volt_gain(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_volt_gain(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_VOLT_GAIN(S_IRUGO | S_IWUSR,
ad774x_show_volt_gain,
ad774x_store_volt_gain);
static ssize_t ad774x_show_cap_data(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_CAP_DATA(ad774x_show_cap_data);
static ssize_t ad774x_show_vt_data(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEV_ATTR_VT_DATA(ad774x_show_vt_data);
static ssize_t ad774x_show_cap_offs(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_cap_offs(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CAP_OFFS(S_IRUGO | S_IWUSR,
ad774x_show_cap_offs,
ad774x_store_cap_offs);
static ssize_t ad774x_show_cap_gain(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad774x_store_cap_gain(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_CAP_GAIN(S_IRUGO | S_IWUSR,
ad774x_show_cap_gain,
ad774x_store_cap_gain);
static struct attribute *ad774x_attributes[] = ;
static const struct attribute_group ad774x_attribute_group = ;
#define IIO_EVENT_CODE_CAP_RDY     0
#define IIO_EVENT_CODE_VT_RDY      1
#define IIO_EVENT_ATTR_CAP_RDY_SH(_evlist, _show, _store, _mask)	\
IIO_EVENT_ATTR_SH(cap_rdy, _evlist, _show, _store, _mask)
#define IIO_EVENT_ATTR_VT_RDY_SH(_evlist, _show, _store, _mask)	\
IIO_EVENT_ATTR_SH(vt_rdy, _evlist, _show, _store, _mask)
static irqreturn_t ad774x_event_handler(int irq, void *private)
static IIO_CONST_ATTR(cap_rdy_en, "1");
static IIO_CONST_ATTR(vt_rdy_en, "1");
static struct attribute *ad774x_event_attributes[] = ;
static struct attribute_group ad774x_event_attribute_group = ;
static const struct iio_info ad774x_info = ;
static int __devinit ad774x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad774x_remove(struct i2c_client *client)
static const struct i2c_device_id ad774x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad774x_id);
static struct i2c_driver ad774x_driver = ;
static __init int ad774x_init(void)
static __exit void ad774x_exit(void)
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ad7745/6/7 capacitive sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad774x_init);
module_exit(ad774x_exit);
