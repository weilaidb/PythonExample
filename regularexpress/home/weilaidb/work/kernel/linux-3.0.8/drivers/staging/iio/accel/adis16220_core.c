#define DRIVER_NAME		"adis16220"
static int adis16220_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int adis16220_spi_write_reg_16(struct device *dev,
u8 lower_reg_address,
u16 value)
static int adis16220_spi_read_reg_16(struct device *dev,
u8 lower_reg_address,
u16 *val)
static ssize_t adis16220_spi_read_signed(struct device *dev,
struct device_attribute *attr,
char *buf,
unsigned bits)
static ssize_t adis16220_read_12bit_unsigned(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16220_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t adis16220_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int adis16220_capture(struct device *dev)
static int adis16220_reset(struct device *dev)
static ssize_t adis16220_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t adis16220_write_capture(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static int adis16220_check_status(struct device *dev)
static int adis16220_self_test(struct device *dev)
static int adis16220_initial_setup(struct adis16220_state *st)
static ssize_t adis16220_capture_buffer_read(struct adis16220_state *st,
char *buf,
loff_t off,
size_t count,
int addr)
static ssize_t adis16220_accel_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf,
loff_t off,
size_t count)
static struct bin_attribute accel_bin = ;
static ssize_t adis16220_adc1_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off,
size_t count)
static struct bin_attribute adc1_bin = ;
static ssize_t adis16220_adc2_bin_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t off,
size_t count)
static struct bin_attribute adc2_bin = ;
static IIO_DEV_ATTR_IN_NAMED_RAW(0, supply, adis16220_read_12bit_unsigned,
ADIS16220_CAPT_SUPPLY);
static IIO_CONST_ATTR_IN_NAMED_SCALE(0, supply, "0.0012207");
static IIO_DEV_ATTR_ACCEL(adis16220_read_16bit, ADIS16220_CAPT_BUFA);
static IIO_DEVICE_ATTR(accel_peak_raw, S_IRUGO, adis16220_read_16bit,
NULL, ADIS16220_CAPT_PEAKA);
static IIO_DEV_ATTR_ACCEL_OFFSET(S_IWUSR | S_IRUGO,
adis16220_read_16bit,
adis16220_write_16bit,
ADIS16220_ACCL_NULL);
static IIO_CONST_ATTR_ACCEL_SCALE("0.18704223545");
static IIO_DEV_ATTR_TEMP_RAW(adis16220_read_12bit_unsigned);
static IIO_CONST_ATTR_TEMP_OFFSET("25");
static IIO_CONST_ATTR_TEMP_SCALE("-0.47");
static IIO_DEV_ATTR_IN_RAW(1, adis16220_read_16bit, ADIS16220_CAPT_BUF1);
static IIO_DEV_ATTR_IN_RAW(2, adis16220_read_16bit, ADIS16220_CAPT_BUF2);
static IIO_DEVICE_ATTR(reset, S_IWUSR, NULL,
adis16220_write_reset, 0);
#define IIO_DEV_ATTR_CAPTURE(_store)				\
IIO_DEVICE_ATTR(capture, S_IWUSR, NULL, _store, 0)
static IIO_DEV_ATTR_CAPTURE(adis16220_write_capture);
#define IIO_DEV_ATTR_CAPTURE_COUNT(_mode, _show, _store, _addr)		\
IIO_DEVICE_ATTR(capture_count, _mode, _show, _store, _addr)
static IIO_DEV_ATTR_CAPTURE_COUNT(S_IWUSR | S_IRUGO,
adis16220_read_16bit,
adis16220_write_16bit,
ADIS16220_CAPT_PNTR);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("100200");
static struct attribute *adis16220_attributes[] = ;
static const struct attribute_group adis16220_attribute_group = ;
static const struct iio_info adis16220_info = ;
static int __devinit adis16220_probe(struct spi_device *spi)
static int adis16220_remove(struct spi_device *spi)
static struct spi_driver adis16220_driver = ;
static __init int adis16220_init(void)
module_init(adis16220_init);
static __exit void adis16220_exit(void)
module_exit(adis16220_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADIS16220 Digital Vibration Sensor");
MODULE_LICENSE("GPL v2");
