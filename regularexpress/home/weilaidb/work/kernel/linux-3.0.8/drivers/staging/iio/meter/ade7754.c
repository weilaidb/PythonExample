static int ade7754_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int ade7754_spi_write_reg_16(struct device *dev,
u8 reg_address,
u16 value)
static int ade7754_spi_read_reg_8(struct device *dev,
u8 reg_address,
u8 *val)
static int ade7754_spi_read_reg_16(struct device *dev,
u8 reg_address,
u16 *val)
static int ade7754_spi_read_reg_24(struct device *dev,
u8 reg_address,
u32 *val)
static ssize_t ade7754_read_8bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7754_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7754_read_24bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7754_write_8bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7754_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int ade7754_reset(struct device *dev)
static ssize_t ade7754_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEV_ATTR_AENERGY(ade7754_read_24bit, ADE7754_AENERGY);
static IIO_DEV_ATTR_LAENERGY(ade7754_read_24bit, ADE7754_LAENERGY);
static IIO_DEV_ATTR_VAENERGY(ade7754_read_24bit, ADE7754_VAENERGY);
static IIO_DEV_ATTR_LVAENERGY(ade7754_read_24bit, ADE7754_LVAENERGY);
static IIO_DEV_ATTR_VPEAK(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_VPEAK);
static IIO_DEV_ATTR_IPEAK(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_VPEAK);
static IIO_DEV_ATTR_APHCAL(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_APHCAL);
static IIO_DEV_ATTR_BPHCAL(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_BPHCAL);
static IIO_DEV_ATTR_CPHCAL(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_CPHCAL);
static IIO_DEV_ATTR_AAPOS(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_AAPOS);
static IIO_DEV_ATTR_BAPOS(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_BAPOS);
static IIO_DEV_ATTR_CAPOS(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CAPOS);
static IIO_DEV_ATTR_WDIV(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_WDIV);
static IIO_DEV_ATTR_VADIV(S_IWUSR | S_IRUGO,
ade7754_read_8bit,
ade7754_write_8bit,
ADE7754_VADIV);
static IIO_DEV_ATTR_CFNUM(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CFNUM);
static IIO_DEV_ATTR_CFDEN(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CFDEN);
static IIO_DEV_ATTR_ACTIVE_POWER_A_GAIN(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_AAPGAIN);
static IIO_DEV_ATTR_ACTIVE_POWER_B_GAIN(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_BAPGAIN);
static IIO_DEV_ATTR_ACTIVE_POWER_C_GAIN(S_IWUSR | S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CAPGAIN);
static IIO_DEV_ATTR_AIRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_AIRMS);
static IIO_DEV_ATTR_BIRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_BIRMS);
static IIO_DEV_ATTR_CIRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_CIRMS);
static IIO_DEV_ATTR_AVRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_AVRMS);
static IIO_DEV_ATTR_BVRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_BVRMS);
static IIO_DEV_ATTR_CVRMS(S_IRUGO,
ade7754_read_24bit,
NULL,
ADE7754_CVRMS);
static IIO_DEV_ATTR_AIRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_AIRMSOS);
static IIO_DEV_ATTR_BIRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_BIRMSOS);
static IIO_DEV_ATTR_CIRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CIRMSOS);
static IIO_DEV_ATTR_AVRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_AVRMSOS);
static IIO_DEV_ATTR_BVRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_BVRMSOS);
static IIO_DEV_ATTR_CVRMSOS(S_IRUGO,
ade7754_read_16bit,
ade7754_write_16bit,
ADE7754_CVRMSOS);
static int ade7754_set_irq(struct device *dev, bool enable)
static int ade7754_stop_device(struct device *dev)
static int ade7754_initial_setup(struct ade7754_state *st)
static ssize_t ade7754_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7754_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_TEMP_RAW(ade7754_read_8bit);
static IIO_CONST_ATTR(temp_offset, "129 C");
static IIO_CONST_ATTR(temp_scale, "4 C");
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
ade7754_read_frequency,
ade7754_write_frequency);
static IIO_DEV_ATTR_RESET(ade7754_write_reset);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("26000 13000 65000 33000");
static struct attribute *ade7754_attributes[] = ;
static const struct attribute_group ade7754_attribute_group = ;
static const struct iio_info ade7754_info = ;
static int __devinit ade7754_probe(struct spi_device *spi)
static int ade7754_remove(struct spi_device *spi)
static struct spi_driver ade7754_driver = ;
static __init int ade7754_init(void)
module_init(ade7754_init);
static __exit void ade7754_exit(void)
module_exit(ade7754_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7754 Polyphase Multifunction Energy Metering IC Driver");
MODULE_LICENSE("GPL v2");
