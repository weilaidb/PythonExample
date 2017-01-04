static unsigned long ad9832_calc_freqreg(unsigned long mclk, unsigned long fout)
static int ad9832_write_frequency(struct ad9832_state *st,
unsigned addr, unsigned long fout)
static int ad9832_write_phase(struct ad9832_state *st,
unsigned long addr, unsigned long phase)
static ssize_t ad9832_write(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_FREQ(0, 0, S_IWUSR, NULL, ad9832_write, AD9832_FREQ0HM);
static IIO_DEV_ATTR_FREQ(0, 1, S_IWUSR, NULL, ad9832_write, AD9832_FREQ1HM);
static IIO_DEV_ATTR_FREQSYMBOL(0, S_IWUSR, NULL, ad9832_write, AD9832_FREQ_SYM);
static IIO_CONST_ATTR_FREQ_SCALE(0, "1");
static IIO_DEV_ATTR_PHASE(0, 0, S_IWUSR, NULL, ad9832_write, AD9832_PHASE0H);
static IIO_DEV_ATTR_PHASE(0, 1, S_IWUSR, NULL, ad9832_write, AD9832_PHASE1H);
static IIO_DEV_ATTR_PHASE(0, 2, S_IWUSR, NULL, ad9832_write, AD9832_PHASE2H);
static IIO_DEV_ATTR_PHASE(0, 3, S_IWUSR, NULL, ad9832_write, AD9832_PHASE3H);
static IIO_DEV_ATTR_PHASESYMBOL(0, S_IWUSR, NULL,
ad9832_write, AD9832_PHASE_SYM);
static IIO_CONST_ATTR_PHASE_SCALE(0, "0.0015339808");
static IIO_DEV_ATTR_PINCONTROL_EN(0, S_IWUSR, NULL,
ad9832_write, AD9832_PINCTRL_EN);
static IIO_DEV_ATTR_OUT_ENABLE(0, S_IWUSR, NULL,
ad9832_write, AD9832_OUTPUT_EN);
static struct attribute *ad9832_attributes[] = ;
static const struct attribute_group ad9832_attribute_group = ;
static const struct iio_info ad9832_info = ;
static int __devinit ad9832_probe(struct spi_device *spi)
static int __devexit ad9832_remove(struct spi_device *spi)
static const struct spi_device_id ad9832_id[] = ;
static struct spi_driver ad9832_driver = ;
static int __init ad9832_init(void)
module_init(ad9832_init);
static void __exit ad9832_exit(void)
module_exit(ad9832_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Analog Devices AD9832/AD9835 DDS");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("spi:ad9832");
