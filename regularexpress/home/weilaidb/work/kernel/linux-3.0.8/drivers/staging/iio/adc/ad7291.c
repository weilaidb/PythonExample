#define AD7291_COMMAND			0
#define AD7291_VOLTAGE			1
#define AD7291_T_SENSE			2
#define AD7291_T_AVERAGE		3
#define AD7291_VOLTAGE_LIMIT_BASE	4
#define AD7291_VOLTAGE_LIMIT_COUNT	8
#define AD7291_T_SENSE_HIGH		0x1c
#define AD7291_T_SENSE_LOW		0x1d
#define AD7291_T_SENSE_HYST		0x1e
#define AD7291_VOLTAGE_ALERT_STATUS	0x1f
#define AD7291_T_ALERT_STATUS		0x20
#define AD7291_AUTOCYCLE		0x1
#define AD7291_RESET			0x2
#define AD7291_ALART_CLEAR		0x4
#define AD7291_ALART_POLARITY		0x8
#define AD7291_EXT_REF			0x10
#define AD7291_NOISE_DELAY		0x20
#define AD7291_T_SENSE_MASK		0x40
#define AD7291_VOLTAGE_MASK		0xff00
#define AD7291_VOLTAGE_OFFSET		0x8
#define AD7291_CHANNEL_MASK		0xf000
#define AD7291_VALUE_MASK		0xfff
#define AD7291_T_VALUE_SIGN		0x400
#define AD7291_T_VALUE_FLOAT_OFFSET	2
#define AD7291_T_VALUE_FLOAT_MASK	0x2
struct ad7291_chip_info ;
struct ad7291_limit_regs ;
static int ad7291_i2c_read(struct ad7291_chip_info *chip, u8 reg, u16 *data)
static int ad7291_i2c_write(struct ad7291_chip_info *chip, u8 reg, u16 data)
static int ad7291_i2c_read_data(struct ad7291_chip_info *chip, u8 reg, u16 *data)
static ssize_t ad7291_show_mode(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7291_store_mode(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(mode, S_IRUGO | S_IWUSR,
ad7291_show_mode,
ad7291_store_mode,
0);
static ssize_t ad7291_show_available_modes(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(available_modes, S_IRUGO, ad7291_show_available_modes, NULL, 0);
static ssize_t ad7291_store_reset(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(reset, S_IWUSR,
NULL,
ad7291_store_reset,
0);
static ssize_t ad7291_show_ext_ref(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7291_store_ext_ref(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(ext_ref, S_IRUGO | S_IWUSR,
ad7291_show_ext_ref,
ad7291_store_ext_ref,
0);
static ssize_t ad7291_show_noise_delay(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7291_store_noise_delay(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(noise_delay, S_IRUGO | S_IWUSR,
ad7291_show_noise_delay,
ad7291_store_noise_delay,
0);
static ssize_t ad7291_show_t_sense(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(t_sense, S_IRUGO, ad7291_show_t_sense, NULL, 0);
static ssize_t ad7291_show_t_average(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(t_average, S_IRUGO, ad7291_show_t_average, NULL, 0);
static ssize_t ad7291_show_voltage(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(voltage, S_IRUGO, ad7291_show_voltage, NULL, 0);
static ssize_t ad7291_show_channel_mask(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad7291_store_channel_mask(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(channel_mask, S_IRUGO | S_IWUSR,
ad7291_show_channel_mask,
ad7291_store_channel_mask,
0);
static struct attribute *ad7291_attributes[] = ;
static const struct attribute_group ad7291_attribute_group = ;
static irqreturn_t ad7291_event_handler(int irq, void *private)
static inline ssize_t ad7291_show_t_bound(struct device *dev,
struct device_attribute *attr,
char *buf)
static inline ssize_t ad7291_set_t_bound(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static inline ssize_t ad7291_show_v_bound(struct device *dev,
struct device_attribute *attr,
u8 bound_reg,
char *buf)
static inline ssize_t ad7291_set_v_bound(struct device *dev,
struct device_attribute *attr,
u8 bound_reg,
const char *buf,
size_t len)
static IIO_DEVICE_ATTR(t_sense_high_value,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound,
AD7291_T_SENSE_HIGH);
static IIO_DEVICE_ATTR(t_sense_low_value,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound,
AD7291_T_SENSE_LOW);
static IIO_DEVICE_ATTR(t_sense_hyst_value,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound,
AD7291_T_SENSE_HYST);
static IIO_DEVICE_ATTR(v0_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x04);
static IIO_DEVICE_ATTR(v0_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x05);
static IIO_DEVICE_ATTR(v0_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x06);
static IIO_DEVICE_ATTR(v1_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x07);
static IIO_DEVICE_ATTR(v1_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x08);
static IIO_DEVICE_ATTR(v1_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x09);
static IIO_DEVICE_ATTR(v2_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0A);
static IIO_DEVICE_ATTR(v2_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0B);
static IIO_DEVICE_ATTR(v2_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0C);
static IIO_DEVICE_ATTR(v3_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0E);
static IIO_DEVICE_ATTR(v3_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0D);
static IIO_DEVICE_ATTR(v3_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x0F);
static IIO_DEVICE_ATTR(v4_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x10);
static IIO_DEVICE_ATTR(v4_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x11);
static IIO_DEVICE_ATTR(v4_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x12);
static IIO_DEVICE_ATTR(v5_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x13);
static IIO_DEVICE_ATTR(v5_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x14);
static IIO_DEVICE_ATTR(v5_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x15);
static IIO_DEVICE_ATTR(v6_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x16);
static IIO_DEVICE_ATTR(v6_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x17);
static IIO_DEVICE_ATTR(v6_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x18);
static IIO_DEVICE_ATTR(v7_high,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x19);
static IIO_DEVICE_ATTR(v7_low,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x1A);
static IIO_DEVICE_ATTR(v7_hyst,
S_IRUGO | S_IWUSR,
ad7291_show_t_bound, ad7291_set_t_bound, 0x1B);
static struct attribute *ad7291_event_attributes[] = ;
static struct attribute_group ad7291_event_attribute_group = ;
static const struct iio_info ad7291_info = ;
static int __devinit ad7291_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit ad7291_remove(struct i2c_client *client)
static const struct i2c_device_id ad7291_id[] = ;
MODULE_DEVICE_TABLE(i2c, ad7291_id);
static struct i2c_driver ad7291_driver = ;
static __init int ad7291_init(void)
static __exit void ad7291_exit(void)
MODULE_AUTHOR("Sonic Zhang <sonic.zhang@analog.com>");
MODULE_DESCRIPTION("Analog Devices AD7291 digital"
" temperature sensor driver");
MODULE_LICENSE("GPL v2");
module_init(ad7291_init);
module_exit(ad7291_exit);
