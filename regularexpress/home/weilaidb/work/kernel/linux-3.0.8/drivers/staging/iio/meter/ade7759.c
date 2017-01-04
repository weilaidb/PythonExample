static int ade7759_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int ade7759_spi_write_reg_16(struct device *dev,
u8 reg_address,
u16 value)
static int ade7759_spi_read_reg_8(struct device *dev,
u8 reg_address,
u8 *val)
static int ade7759_spi_read_reg_16(struct device *dev,
u8 reg_address,
u16 *val)
static int ade7759_spi_read_reg_40(struct device *dev,
u8 reg_address,
u64 *val)
static ssize_t ade7759_read_8bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7759_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7759_read_40bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7759_write_8bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7759_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int ade7759_reset(struct device *dev)
static ssize_t ade7759_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEV_ATTR_AENERGY(ade7759_read_40bit, ADE7759_AENERGY);
static IIO_DEV_ATTR_CFDEN(S_IWUSR | S_IRUGO,
ade7759_read_16bit,
ade7759_write_16bit,
ADE7759_CFDEN);
static IIO_DEV_ATTR_CFNUM(S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_CFNUM);
static IIO_DEV_ATTR_CHKSUM(ade7759_read_8bit, ADE7759_CHKSUM);
static IIO_DEV_ATTR_PHCAL(S_IWUSR | S_IRUGO,
ade7759_read_16bit,
ade7759_write_16bit,
ADE7759_PHCAL);
static IIO_DEV_ATTR_APOS(S_IWUSR | S_IRUGO,
ade7759_read_16bit,
ade7759_write_16bit,
ADE7759_APOS);
static IIO_DEV_ATTR_SAGCYC(S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_SAGCYC);
static IIO_DEV_ATTR_SAGLVL(S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_SAGLVL);
static IIO_DEV_ATTR_LINECYC(S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_LINECYC);
static IIO_DEV_ATTR_LENERGY(ade7759_read_40bit, ADE7759_LENERGY);
static IIO_DEV_ATTR_PGA_GAIN(S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_GAIN);
static IIO_DEV_ATTR_ACTIVE_POWER_GAIN(S_IWUSR | S_IRUGO,
ade7759_read_16bit,
ade7759_write_16bit,
ADE7759_APGAIN);
static IIO_DEV_ATTR_CH_OFF(1, S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_CH1OS);
static IIO_DEV_ATTR_CH_OFF(2, S_IWUSR | S_IRUGO,
ade7759_read_8bit,
ade7759_write_8bit,
ADE7759_CH2OS);
static int ade7759_set_irq(struct device *dev, bool enable)
static int ade7759_stop_device(struct device *dev)
static int ade7759_initial_setup(struct ade7759_state *st)
static ssize_t ade7759_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7759_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_TEMP_RAW(ade7759_read_8bit);
static IIO_CONST_ATTR(temp_offset, "70 C");
static IIO_CONST_ATTR(temp_scale, "1 C");
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
ade7759_read_frequency,
ade7759_write_frequency);
static IIO_DEV_ATTR_RESET(ade7759_write_reset);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("27900 14000 7000 3500");
static struct attribute *ade7759_attributes[] = ;
static const struct attribute_group ade7759_attribute_group = ;
static const struct iio_info ade7759_info = ;
static int __devinit ade7759_probe(struct spi_device *spi)
static int ade7759_remove(struct spi_device *spi)
static struct spi_driver ade7759_driver = ;
static __init int ade7759_init(void)
module_init(ade7759_init);
static __exit void ade7759_exit(void)
module_exit(ade7759_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7759 Active Energy Metering IC Driver");
MODULE_LICENSE("GPL v2");
