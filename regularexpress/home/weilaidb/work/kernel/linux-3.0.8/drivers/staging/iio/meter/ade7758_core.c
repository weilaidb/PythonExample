int ade7758_spi_write_reg_8(struct device *dev,
u8 reg_address,
u8 val)
static int ade7758_spi_write_reg_16(struct device *dev,
u8 reg_address,
u16 value)
static int ade7758_spi_write_reg_24(struct device *dev,
u8 reg_address,
u32 value)
int ade7758_spi_read_reg_8(struct device *dev,
u8 reg_address,
u8 *val)
static int ade7758_spi_read_reg_16(struct device *dev,
u8 reg_address,
u16 *val)
static int ade7758_spi_read_reg_24(struct device *dev,
u8 reg_address,
u32 *val)
static ssize_t ade7758_read_8bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7758_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7758_read_24bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7758_write_8bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7758_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int ade7758_reset(struct device *dev)
static ssize_t ade7758_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEV_ATTR_VPEAK(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_VPEAK);
static IIO_DEV_ATTR_IPEAK(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_VPEAK);
static IIO_DEV_ATTR_APHCAL(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_APHCAL);
static IIO_DEV_ATTR_BPHCAL(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_BPHCAL);
static IIO_DEV_ATTR_CPHCAL(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_CPHCAL);
static IIO_DEV_ATTR_WDIV(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_WDIV);
static IIO_DEV_ATTR_VADIV(S_IWUSR | S_IRUGO,
ade7758_read_8bit,
ade7758_write_8bit,
ADE7758_VADIV);
static IIO_DEV_ATTR_AIRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_AIRMS);
static IIO_DEV_ATTR_BIRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_BIRMS);
static IIO_DEV_ATTR_CIRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_CIRMS);
static IIO_DEV_ATTR_AVRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_AVRMS);
static IIO_DEV_ATTR_BVRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_BVRMS);
static IIO_DEV_ATTR_CVRMS(S_IRUGO,
ade7758_read_24bit,
NULL,
ADE7758_CVRMS);
static IIO_DEV_ATTR_AIRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_AIRMSOS);
static IIO_DEV_ATTR_BIRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_BIRMSOS);
static IIO_DEV_ATTR_CIRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_CIRMSOS);
static IIO_DEV_ATTR_AVRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_AVRMSOS);
static IIO_DEV_ATTR_BVRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_BVRMSOS);
static IIO_DEV_ATTR_CVRMSOS(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_CVRMSOS);
static IIO_DEV_ATTR_AIGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_AIGAIN);
static IIO_DEV_ATTR_BIGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_BIGAIN);
static IIO_DEV_ATTR_CIGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_CIGAIN);
static IIO_DEV_ATTR_AVRMSGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_AVRMSGAIN);
static IIO_DEV_ATTR_BVRMSGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_BVRMSGAIN);
static IIO_DEV_ATTR_CVRMSGAIN(S_IWUSR | S_IRUGO,
ade7758_read_16bit,
ade7758_write_16bit,
ADE7758_CVRMSGAIN);
int ade7758_set_irq(struct device *dev, bool enable)
static int ade7758_stop_device(struct device *dev)
static int ade7758_initial_setup(struct iio_dev *indio_dev)
static ssize_t ade7758_read_frequency(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7758_write_frequency(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static IIO_DEV_ATTR_TEMP_RAW(ade7758_read_8bit);
static IIO_CONST_ATTR(temp_offset, "129 C");
static IIO_CONST_ATTR(temp_scale, "4 C");
static IIO_DEV_ATTR_AWATTHR(ade7758_read_16bit,
ADE7758_AWATTHR);
static IIO_DEV_ATTR_BWATTHR(ade7758_read_16bit,
ADE7758_BWATTHR);
static IIO_DEV_ATTR_CWATTHR(ade7758_read_16bit,
ADE7758_CWATTHR);
static IIO_DEV_ATTR_AVARHR(ade7758_read_16bit,
ADE7758_AVARHR);
static IIO_DEV_ATTR_BVARHR(ade7758_read_16bit,
ADE7758_BVARHR);
static IIO_DEV_ATTR_CVARHR(ade7758_read_16bit,
ADE7758_CVARHR);
static IIO_DEV_ATTR_AVAHR(ade7758_read_16bit,
ADE7758_AVAHR);
static IIO_DEV_ATTR_BVAHR(ade7758_read_16bit,
ADE7758_BVAHR);
static IIO_DEV_ATTR_CVAHR(ade7758_read_16bit,
ADE7758_CVAHR);
static IIO_DEV_ATTR_SAMP_FREQ(S_IWUSR | S_IRUGO,
ade7758_read_frequency,
ade7758_write_frequency);
static IIO_DEV_ATTR_RESET(ade7758_write_reset);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("26040 13020 6510 3255");
static struct attribute *ade7758_attributes[] = ;
static const struct attribute_group ade7758_attribute_group = ;
static struct iio_chan_spec ade7758_channels[] = ;
static const struct iio_info ade7758_info = ;
static int __devinit ade7758_probe(struct spi_device *spi)
static int ade7758_remove(struct spi_device *spi)
static const struct spi_device_id ade7758_id[] = ;
static struct spi_driver ade7758_driver = ;
static __init int ade7758_init(void)
module_init(ade7758_init);
static __exit void ade7758_exit(void)
module_exit(ade7758_exit);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7758 Polyphase Multifunction Energy Metering IC Driver");
MODULE_LICENSE("GPL v2");
