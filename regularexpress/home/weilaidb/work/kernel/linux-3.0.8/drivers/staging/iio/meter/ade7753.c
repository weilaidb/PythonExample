static int ade7753_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int ade7753_spi_write_reg_16(struct device *dev,
u8 reg_address,
u16 value)
static int ade7753_spi_read_reg_8(struct device *dev,
u8 reg_address,
u8 *val)
static int ade7753_spi_read_reg_16(struct device *dev,
u8 reg_address,
u16 *val)
static int ade7753_spi_read_reg_24(struct device *dev,
u8 reg_address,
u32 *val)
static ssize_t ade7753_read_8bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7753_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7753_read_24bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7753_write_8bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7753_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int ade7753_reset(struct device *dev)
static ssize_t ade7753_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEV_ATTR_AENERGY(ade7753_read_24bit, ADE7753_AENERGY);
static IIO_DEV_ATTR_LAENERGY(ade7753_read_24bit, ADE7753_LAENERGY);
static IIO_DEV_ATTR_VAENERGY(ade7753_read_24bit, ADE7753_VAENERGY);
static IIO_DEV_ATTR_LVAENERGY(ade7753_read_24bit, ADE7753_LVAENERGY);
static IIO_DEV_ATTR_CFDEN(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_CFDEN);
static IIO_DEV_ATTR_CFNUM(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_CFNUM);
static IIO_DEV_ATTR_CHKSUM(ade7753_read_8bit, ADE7753_CHKSUM);
static IIO_DEV_ATTR_PHCAL(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_PHCAL);
static IIO_DEV_ATTR_APOS(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_APOS);
static IIO_DEV_ATTR_SAGCYC(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_SAGCYC);
static IIO_DEV_ATTR_SAGLVL(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_SAGLVL);
static IIO_DEV_ATTR_LINECYC(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_LINECYC);
static IIO_DEV_ATTR_WDIV(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_WDIV);
static IIO_DEV_ATTR_IRMS(S_IWUSR | S_IRUGO,
ade7753_read_24bit,
NULL,
ADE7753_IRMS);
static IIO_DEV_ATTR_VRMS(S_IRUGO,
ade7753_read_24bit,
NULL,
ADE7753_VRMS);
static IIO_DEV_ATTR_IRMSOS(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_IRMSOS);
static IIO_DEV_ATTR_VRMSOS(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_VRMSOS);
static IIO_DEV_ATTR_WGAIN(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_WGAIN);
static IIO_DEV_ATTR_VAGAIN(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_VAGAIN);
static IIO_DEV_ATTR_PGA_GAIN(S_IWUSR | S_IRUGO,
ade7753_read_16bit,
ade7753_write_16bit,
ADE7753_GAIN);
static IIO_DEV_ATTR_IPKLVL(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_IPKLVL);
static IIO_DEV_ATTR_VPKLVL(S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_VPKLVL);
static IIO_DEV_ATTR_IPEAK(S_IRUGO,
ade7753_read_24bit,
NULL,
ADE7753_IPEAK);
static IIO_DEV_ATTR_VPEAK(S_IRUGO,
ade7753_read_24bit,
NULL,
ADE7753_VPEAK);
static IIO_DEV_ATTR_VPERIOD(S_IRUGO,
ade7753_read_16bit,
NULL,
ADE7753_PERIOD);
static IIO_DEV_ATTR_CH_OFF(1, S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_CH1OS);
static IIO_DEV_ATTR_CH_OFF(2, S_IWUSR | S_IRUGO,
ade7753_read_8bit,
ade7753_write_8bit,
ADE7753_CH2OS);
static int ade7753_set_irq(struct device *dev, bool enable)
static int ade7753_stop_device(struct device *dev)
static int ade7753_initial_setup(struct ade7753_state *st)
static ssize_t ade7753_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7753_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_TEMP_RAW(ade7753_read_8bit);
static IIO_CONST_ATTR(temp_offset, "-25 C");
static IIO_CONST_ATTR(temp_scale, "0.67 C");
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
ade7753_read_frequency,
ade7753_write_frequency);
static IIO_DEV_ATTR_RESET(ade7753_write_reset);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("27900 14000 7000 3500");
static struct attribute *ade7753_attributes[] = ;
static const struct attribute_group ade7753_attribute_group = ;
static const struct iio_info ade7753_info = ;
static int __devinit ade7753_probe(struct spi_device *spi)
static int ade7753_remove(struct spi_device *spi)
static struct spi_driver ade7753_driver = ;
static __init int ade7753_init(void)
module_init(ade7753_init);
static __exit void ade7753_exit(void)
module_exit(ade7753_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7753/6 Single-Phase Multifunction Meter");
MODULE_LICENSE("GPL v2");
