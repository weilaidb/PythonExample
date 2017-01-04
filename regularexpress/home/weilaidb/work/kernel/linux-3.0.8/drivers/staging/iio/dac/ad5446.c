static void ad5446_store_sample(struct ad5446_state *st, unsigned val)
static void ad5542_store_sample(struct ad5446_state *st, unsigned val)
static void ad5620_store_sample(struct ad5446_state *st, unsigned val)
static void ad5660_store_sample(struct ad5446_state *st, unsigned val)
static void ad5620_store_pwr_down(struct ad5446_state *st, unsigned mode)
static void ad5660_store_pwr_down(struct ad5446_state *st, unsigned mode)
static ssize_t ad5446_write(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_OUT_RAW(0, ad5446_write, 0);
static ssize_t ad5446_show_scale(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(out_scale, S_IRUGO, ad5446_show_scale, NULL, 0);
static ssize_t ad5446_write_powerdown_mode(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static ssize_t ad5446_read_powerdown_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t ad5446_read_dac_powerdown(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ad5446_write_dac_powerdown(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEVICE_ATTR(out_powerdown_mode, S_IRUGO | S_IWUSR,
ad5446_read_powerdown_mode,
ad5446_write_powerdown_mode, 0);
static IIO_CONST_ATTR(out_powerdown_mode_available,
"1kohm_to_gnd 100kohm_to_gnd three_state");
static IIO_DEVICE_ATTR(out0_powerdown, S_IRUGO | S_IWUSR,
ad5446_read_dac_powerdown,
ad5446_write_dac_powerdown, 0);
static struct attribute *ad5446_attributes[] = ;
static mode_t ad5446_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int n)
static const struct attribute_group ad5446_attribute_group = ;
static const struct ad5446_chip_info ad5446_chip_info_tbl[] = ;
static const struct iio_info ad5446_info = ;
static int __devinit ad5446_probe(struct spi_device *spi)
static int ad5446_remove(struct spi_device *spi)
static const struct spi_device_id ad5446_id[] = ;
static struct spi_driver ad5446_driver = ;
static int __init ad5446_init(void)
module_init(ad5446_init);
static void __exit ad5446_exit(void)
module_exit(ad5446_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD5444/AD5446 DAC");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad5446");
