static unsigned int ad9834_calc_freqreg(unsigned long mclk, unsigned long fout)
static int ad9834_write_frequency(struct ad9834_state *st,
unsigned long addr, unsigned long fout)
static int ad9834_write_phase(struct ad9834_state *st,
unsigned long addr, unsigned long phase)
static ssize_t ad9834_write(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ad9834_store_wavetype(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ad9834_show_out0_wavetype_available(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(dds0_out0_wavetype_available, S_IRUGO,
ad9834_show_out0_wavetype_available, NULL, 0);
static ssize_t ad9834_show_out1_wavetype_available(struct device *dev,
struct device_attribute *attr,
char *buf)
static IIO_DEVICE_ATTR(dds0_out1_wavetype_available, S_IRUGO,
ad9834_show_out1_wavetype_available, NULL, 0);
static IIO_DEV_ATTR_FREQ(0, 0, S_IWUSR, NULL, ad9834_write, AD9834_REG_FREQ0);
static IIO_DEV_ATTR_FREQ(0, 1, S_IWUSR, NULL, ad9834_write, AD9834_REG_FREQ1);
static IIO_DEV_ATTR_FREQSYMBOL(0, S_IWUSR, NULL, ad9834_write, AD9834_FSEL);
static IIO_CONST_ATTR_FREQ_SCALE(0, "1");
static IIO_DEV_ATTR_PHASE(0, 0, S_IWUSR, NULL, ad9834_write, AD9834_REG_PHASE0);
static IIO_DEV_ATTR_PHASE(0, 1, S_IWUSR, NULL, ad9834_write, AD9834_REG_PHASE1);
static IIO_DEV_ATTR_PHASESYMBOL(0, S_IWUSR, NULL, ad9834_write, AD9834_PSEL);
static IIO_CONST_ATTR_PHASE_SCALE(0, "0.0015339808");
static IIO_DEV_ATTR_PINCONTROL_EN(0, S_IWUSR, NULL,
ad9834_write, AD9834_PIN_SW);
static IIO_DEV_ATTR_OUT_ENABLE(0, S_IWUSR, NULL, ad9834_write, AD9834_RESET);
static IIO_DEV_ATTR_OUTY_ENABLE(0, 1, S_IWUSR, NULL,
ad9834_write, AD9834_OPBITEN);
static IIO_DEV_ATTR_OUT_WAVETYPE(0, 0, ad9834_store_wavetype, 0);
static IIO_DEV_ATTR_OUT_WAVETYPE(0, 1, ad9834_store_wavetype, 1);
static struct attribute *ad9834_attributes[] = ;
static mode_t ad9834_attr_is_visible(struct kobject *kobj,
struct attribute *attr, int n)
static const struct attribute_group ad9834_attribute_group = ;
static const struct iio_info ad9834_info = ;
static int __devinit ad9834_probe(struct spi_device *spi)
static int __devexit ad9834_remove(struct spi_device *spi)
static const struct spi_device_id ad9834_id[] = ;
static struct spi_driver ad9834_driver = ;
static int __init ad9834_init(void)
module_init(ad9834_init);
static void __exit ad9834_exit(void)
module_exit(ad9834_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD9833/AD9834/AD9837/AD9838 DDS");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad9834");
