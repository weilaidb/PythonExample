static int ad799x_i2c_read16(struct ad799x_state *st, u8 reg, u16 *data)
static int ad799x_i2c_read8(struct ad799x_state *st, u8 reg, u8 *data)
static int ad799x_i2c_write16(struct ad799x_state *st, u8 reg, u16 data)
static int ad799x_i2c_write8(struct ad799x_state *st, u8 reg, u8 data)
int ad7997_8_set_scan_mode(struct ad799x_state *st, unsigned mask)
static int ad799x_scan_direct(struct ad799x_state *st, unsigned ch)
static int ad799x_read_raw(struct iio_dev *dev_info,
struct iio_chan_spec const *chan,
int *val,
int *val2,
long m)
static ssize_t ad799x_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad799x_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ad799x_read_channel_config(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad799x_write_channel_config(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static irqreturn_t ad799x_event_handler(int irq, void *private)
static IIO_DEVICE_ATTR(in0_thresh_low_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATALOW_CH1_REG);
static IIO_DEVICE_ATTR(in0_thresh_high_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATAHIGH_CH1_REG);
static IIO_DEVICE_ATTR(in0_thresh_both_hyst_raw,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_HYST_CH1_REG);
static IIO_DEVICE_ATTR(in1_thresh_low_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATALOW_CH2_REG);
static IIO_DEVICE_ATTR(in1_thresh_high_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATAHIGH_CH2_REG);
static IIO_DEVICE_ATTR(in1_thresh_both_hyst_raw,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_HYST_CH2_REG);
static IIO_DEVICE_ATTR(in2_thresh_low_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATALOW_CH3_REG);
static IIO_DEVICE_ATTR(in2_thresh_high_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATAHIGH_CH3_REG);
static IIO_DEVICE_ATTR(in2_thresh_both_hyst_raw,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_HYST_CH3_REG);
static IIO_DEVICE_ATTR(in3_thresh_low_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATALOW_CH4_REG);
static IIO_DEVICE_ATTR(in3_thresh_high_value,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_DATAHIGH_CH4_REG);
static IIO_DEVICE_ATTR(in3_thresh_both_hyst_raw,
S_IRUGO | S_IWUSR,
ad799x_read_channel_config,
ad799x_write_channel_config,
AD7998_HYST_CH4_REG);
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
ad799x_read_frequency,
ad799x_write_frequency);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("15625 7812 3906 1953 976 488 244 0");
static struct attribute *ad7993_4_7_8_event_attributes[] = ;
static struct attribute_group ad7993_4_7_8_event_attrs_group = ;
static struct attribute *ad7992_event_attributes[] = ;
static struct attribute_group ad7992_event_attrs_group = ;
static const struct iio_info ad7991_info = ;
static const struct iio_info ad7992_info = ;
static const struct iio_info ad7993_4_7_8_info = ;
static const struct ad799x_chip_info ad799x_chip_info_tbl[] = ;
static int __devinit ad799x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int ad799x_remove(struct i2c_client *client)
static const struct i2c_device_id ad799x_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad799x_id);
static struct i2c_driver ad799x_driver = ;
static __init int ad799x_init(void)
static __exit void ad799x_exit(void)
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD799x ADC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("i2c:ad799x");
module_init(ad799x_init);
module_exit(ad799x_exit);
