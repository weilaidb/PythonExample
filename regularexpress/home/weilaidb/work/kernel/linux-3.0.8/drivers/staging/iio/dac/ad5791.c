static int ad5791_spi_write(struct spi_device *spi, u8 addr, u32 val)
static int ad5791_spi_read(struct spi_device *spi, u8 addr, u32 *val)
static ssize_t ad5791_write_dac(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5791_read_dac(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5791_read_powerdown_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad5791_write_powerdown_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5791_read_dac_powerdown(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5791_write_dac_powerdown(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5791_show_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out_scale, S_IRUGO, ad5791_show_scale, NULL, 0);
static ssize_t ad5791_show_name(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(name, S_IRUGO, ad5791_show_name, NULL, 0);
#define IIO_DEV_ATTR_OUT_RW_RAW(_num, _show, _store, _addr)		\
IIO_DEVICE_ATTR(out##_num##_raw,				\
S_IRUGO | S_IWUSR, _show, _store, _addr)
static IIO_DEV_ATTR_OUT_RW_RAW(0, ad5791_read_dac,
ad5791_write_dac, AD5791_ADDR_DAC0);
static IIO_DEVICE_ATTR(out_powerdown_mode, S_IRUGO |
S_IWUSR, ad5791_read_powerdown_mode,
ad5791_write_powerdown_mode, 0);
static IIO_CONST_ATTR(out_powerdown_mode_available,
"6kohm_to_gnd three_state");
#define IIO_DEV_ATTR_DAC_POWERDOWN(_num, _show, _store, _addr)		\
IIO_DEVICE_ATTR(out##_num##_powerdown,				\
S_IRUGO | S_IWUSR, _show, _store, _addr)
static IIO_DEV_ATTR_DAC_POWERDOWN(0, ad5791_read_dac_powerdown,
ad5791_write_dac_powerdown, 0);
static struct attribute *ad5791_attributes[] = ;
static const struct attribute_group ad5791_attribute_group = ;
static int ad5791_get_lin_comp(unsigned int span)
static int ad5780_get_lin_comp(unsigned int span)
static const struct ad5791_chip_info ad5791_chip_info_tbl[] = ;
static const struct iio_info ad5791_info = ;
static int __devinit ad5791_probe(struct spi_device *spi)
static int __devexit ad5791_remove(struct spi_device *spi)
static const struct spi_device_id ad5791_id[] = ;
static struct spi_driver ad5791_driver = ;
static __init int ad5791_spi_init(void)
module_init(ad5791_spi_init);
static __exit void ad5791_spi_exit(void)
module_exit(ad5791_spi_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD5760/AD5780/AD5781/AD5791 DAC");
MODULE_LICENSE("GPL v2");
