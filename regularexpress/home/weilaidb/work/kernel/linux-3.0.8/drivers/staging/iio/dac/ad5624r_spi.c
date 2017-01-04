static const struct ad5624r_chip_info ad5624r_chip_info_tbl[] = ;
static int ad5624r_spi_write(struct spi_device *spi,
u8 cmd, u8 addr, u16 val, u8 len)
static ssize_t ad5624r_write_dac(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5624r_read_powerdown_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad5624r_write_powerdown_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5624r_read_dac_powerdown(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5624r_write_dac_powerdown(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5624r_show_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out_scale, S_IRUGO, ad5624r_show_scale, NULL, 0);
static IIO_DEV_ATTR_OUT_RAW(0, ad5624r_write_dac, AD5624R_ADDR_DAC0);
static IIO_DEV_ATTR_OUT_RAW(1, ad5624r_write_dac, AD5624R_ADDR_DAC1);
static IIO_DEV_ATTR_OUT_RAW(2, ad5624r_write_dac, AD5624R_ADDR_DAC2);
static IIO_DEV_ATTR_OUT_RAW(3, ad5624r_write_dac, AD5624R_ADDR_DAC3);
static IIO_DEVICE_ATTR(out_powerdown_mode, S_IRUGO |
S_IWUSR, ad5624r_read_powerdown_mode,
ad5624r_write_powerdown_mode, 0);
static IIO_CONST_ATTR(out_powerdown_mode_available,
"1kohm_to_gnd 100kohm_to_gnd three_state");
#define IIO_DEV_ATTR_DAC_POWERDOWN(_num, _show, _store, _addr)		\
IIO_DEVICE_ATTR(out##_num##_powerdown,				\
S_IRUGO | S_IWUSR, _show, _store, _addr)
static IIO_DEV_ATTR_DAC_POWERDOWN(0, ad5624r_read_dac_powerdown,
ad5624r_write_dac_powerdown, 0);
static IIO_DEV_ATTR_DAC_POWERDOWN(1, ad5624r_read_dac_powerdown,
ad5624r_write_dac_powerdown, 1);
static IIO_DEV_ATTR_DAC_POWERDOWN(2, ad5624r_read_dac_powerdown,
ad5624r_write_dac_powerdown, 2);
static IIO_DEV_ATTR_DAC_POWERDOWN(3, ad5624r_read_dac_powerdown,
ad5624r_write_dac_powerdown, 3);
static struct attribute *ad5624r_attributes[] = ;
static const struct attribute_group ad5624r_attribute_group = ;
static const struct iio_info ad5624r_info = ;
static int __devinit ad5624r_probe(struct spi_device *spi)
static int __devexit ad5624r_remove(struct spi_device *spi)
static const struct spi_device_id ad5624r_id[] = ;
static struct spi_driver ad5624r_driver = ;
static __init int ad5624r_spi_init(void)
module_init(ad5624r_spi_init);
static __exit void ad5624r_spi_exit(void)
module_exit(ad5624r_spi_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices AD5624/44/64R DAC spi driver");
MODULE_LICENSE("GPL v2");
