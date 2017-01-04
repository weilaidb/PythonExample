static int ad5504_spi_write(struct spi_device *spi, u8 addr, u16 val)
static int ad5504_spi_read(struct spi_device *spi, u8 addr, u16 *val)
static ssize_t ad5504_write_dac(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5504_read_dac(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5504_read_powerdown_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad5504_write_powerdown_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5504_read_dac_powerdown(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5504_write_dac_powerdown(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5504_show_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out_scale, S_IRUGO, ad5504_show_scale, NULL, 0);
#define IIO_DEV_ATTR_OUT_RW_RAW(_num, _show, _store, _addr)		\
IIO_DEVICE_ATTR(out##_num##_raw,				\
S_IRUGO | S_IWUSR, _show, _store, _addr)
static IIO_DEV_ATTR_OUT_RW_RAW(0, ad5504_read_dac,
ad5504_write_dac, AD5504_ADDR_DAC0);
static IIO_DEV_ATTR_OUT_RW_RAW(1, ad5504_read_dac,
ad5504_write_dac, AD5504_ADDR_DAC1);
static IIO_DEV_ATTR_OUT_RW_RAW(2, ad5504_read_dac,
ad5504_write_dac, AD5504_ADDR_DAC2);
static IIO_DEV_ATTR_OUT_RW_RAW(3, ad5504_read_dac,
ad5504_write_dac, AD5504_ADDR_DAC3);
static IIO_DEVICE_ATTR(out_powerdown_mode, S_IRUGO |
S_IWUSR, ad5504_read_powerdown_mode,
ad5504_write_powerdown_mode, 0);
static IIO_CONST_ATTR(out_powerdown_mode_available,
"20kohm_to_gnd three_state");
#define IIO_DEV_ATTR_DAC_POWERDOWN(_num, _show, _store, _addr)		\
IIO_DEVICE_ATTR(out##_num##_powerdown,				\
S_IRUGO | S_IWUSR, _show, _store, _addr)
static IIO_DEV_ATTR_DAC_POWERDOWN(0, ad5504_read_dac_powerdown,
ad5504_write_dac_powerdown, 0);
static IIO_DEV_ATTR_DAC_POWERDOWN(1, ad5504_read_dac_powerdown,
ad5504_write_dac_powerdown, 1);
static IIO_DEV_ATTR_DAC_POWERDOWN(2, ad5504_read_dac_powerdown,
ad5504_write_dac_powerdown, 2);
static IIO_DEV_ATTR_DAC_POWERDOWN(3, ad5504_read_dac_powerdown,
ad5504_write_dac_powerdown, 3);
static struct attribute *ad5504_attributes[] = ;
static const struct attribute_group ad5504_attribute_group = ;
static struct attribute *ad5501_attributes[] = ;
static const struct attribute_group ad5501_attribute_group = ;
static IIO_CONST_ATTR(temp0_thresh_rising_value, "110000");
static IIO_CONST_ATTR(temp0_thresh_rising_en, "1");
static struct attribute *ad5504_ev_attributes[] = ;
static struct attribute_group ad5504_ev_attribute_group = ;
static irqreturn_t ad5504_event_handler(int irq, void *private)
static const struct iio_info ad5504_info = ;
static const struct iio_info ad5501_info = ;
static int __devinit ad5504_probe(struct spi_device *spi)
static int __devexit ad5504_remove(struct spi_device *spi)
static const struct spi_device_id ad5504_id[] = ;
static struct spi_driver ad5504_driver = ;
static __init int ad5504_spi_init(void)
module_init(ad5504_spi_init);
static __exit void ad5504_spi_exit(void)
module_exit(ad5504_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD5501/AD5501 DAC");
MODULE_LICENSE("GPL v2");
