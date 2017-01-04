static ssize_t ade7854_read_8bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7854_read_16bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7854_read_24bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7854_read_32bit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ade7854_write_8bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7854_write_16bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7854_write_24bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static ssize_t ade7854_write_32bit(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t len)
static int ade7854_reset(struct device *dev)
static ssize_t ade7854_write_reset(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t len)
static IIO_DEV_ATTR_AIGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AIGAIN);
static IIO_DEV_ATTR_BIGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BIGAIN);
static IIO_DEV_ATTR_CIGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CIGAIN);
static IIO_DEV_ATTR_NIGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_NIGAIN);
static IIO_DEV_ATTR_AVGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AVGAIN);
static IIO_DEV_ATTR_BVGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BVGAIN);
static IIO_DEV_ATTR_CVGAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CVGAIN);
static IIO_DEV_ATTR_APPARENT_POWER_A_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AVAGAIN);
static IIO_DEV_ATTR_APPARENT_POWER_B_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BVAGAIN);
static IIO_DEV_ATTR_APPARENT_POWER_C_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CVAGAIN);
static IIO_DEV_ATTR_ACTIVE_POWER_A_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AWATTOS);
static IIO_DEV_ATTR_ACTIVE_POWER_B_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BWATTOS);
static IIO_DEV_ATTR_ACTIVE_POWER_C_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CWATTOS);
static IIO_DEV_ATTR_REACTIVE_POWER_A_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AVARGAIN);
static IIO_DEV_ATTR_REACTIVE_POWER_B_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BVARGAIN);
static IIO_DEV_ATTR_REACTIVE_POWER_C_GAIN(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CVARGAIN);
static IIO_DEV_ATTR_REACTIVE_POWER_A_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_AVAROS);
static IIO_DEV_ATTR_REACTIVE_POWER_B_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_BVAROS);
static IIO_DEV_ATTR_REACTIVE_POWER_C_OFFSET(S_IWUSR | S_IRUGO,
ade7854_read_24bit,
ade7854_write_24bit,
ADE7854_CVAROS);
static IIO_DEV_ATTR_VPEAK(S_IWUSR | S_IRUGO,
ade7854_read_32bit,
ade7854_write_32bit,
ADE7854_VPEAK);
static IIO_DEV_ATTR_IPEAK(S_IWUSR | S_IRUGO,
ade7854_read_32bit,
ade7854_write_32bit,
ADE7854_VPEAK);
static IIO_DEV_ATTR_APHCAL(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_APHCAL);
static IIO_DEV_ATTR_BPHCAL(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_BPHCAL);
static IIO_DEV_ATTR_CPHCAL(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CPHCAL);
static IIO_DEV_ATTR_CF1DEN(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CF1DEN);
static IIO_DEV_ATTR_CF2DEN(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CF2DEN);
static IIO_DEV_ATTR_CF3DEN(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CF3DEN);
static IIO_DEV_ATTR_LINECYC(S_IWUSR | S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_LINECYC);
static IIO_DEV_ATTR_SAGCYC(S_IWUSR | S_IRUGO,
ade7854_read_8bit,
ade7854_write_8bit,
ADE7854_SAGCYC);
static IIO_DEV_ATTR_CFCYC(S_IWUSR | S_IRUGO,
ade7854_read_8bit,
ade7854_write_8bit,
ADE7854_CFCYC);
static IIO_DEV_ATTR_PEAKCYC(S_IWUSR | S_IRUGO,
ade7854_read_8bit,
ade7854_write_8bit,
ADE7854_PEAKCYC);
static IIO_DEV_ATTR_CHKSUM(ade7854_read_24bit,
ADE7854_CHECKSUM);
static IIO_DEV_ATTR_ANGLE0(ade7854_read_24bit,
ADE7854_ANGLE0);
static IIO_DEV_ATTR_ANGLE1(ade7854_read_24bit,
ADE7854_ANGLE1);
static IIO_DEV_ATTR_ANGLE2(ade7854_read_24bit,
ADE7854_ANGLE2);
static IIO_DEV_ATTR_AIRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_AIRMS);
static IIO_DEV_ATTR_BIRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_BIRMS);
static IIO_DEV_ATTR_CIRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_CIRMS);
static IIO_DEV_ATTR_NIRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_NIRMS);
static IIO_DEV_ATTR_AVRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_AVRMS);
static IIO_DEV_ATTR_BVRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_BVRMS);
static IIO_DEV_ATTR_CVRMS(S_IRUGO,
ade7854_read_24bit,
NULL,
ADE7854_CVRMS);
static IIO_DEV_ATTR_AIRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_AIRMSOS);
static IIO_DEV_ATTR_BIRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_BIRMSOS);
static IIO_DEV_ATTR_CIRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CIRMSOS);
static IIO_DEV_ATTR_AVRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_AVRMSOS);
static IIO_DEV_ATTR_BVRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_BVRMSOS);
static IIO_DEV_ATTR_CVRMSOS(S_IRUGO,
ade7854_read_16bit,
ade7854_write_16bit,
ADE7854_CVRMSOS);
static IIO_DEV_ATTR_VOLT_A(ade7854_read_24bit,
ADE7854_VAWV);
static IIO_DEV_ATTR_VOLT_B(ade7854_read_24bit,
ADE7854_VBWV);
static IIO_DEV_ATTR_VOLT_C(ade7854_read_24bit,
ADE7854_VCWV);
static IIO_DEV_ATTR_CURRENT_A(ade7854_read_24bit,
ADE7854_IAWV);
static IIO_DEV_ATTR_CURRENT_B(ade7854_read_24bit,
ADE7854_IBWV);
static IIO_DEV_ATTR_CURRENT_C(ade7854_read_24bit,
ADE7854_ICWV);
static IIO_DEV_ATTR_AWATTHR(ade7854_read_32bit,
ADE7854_AWATTHR);
static IIO_DEV_ATTR_BWATTHR(ade7854_read_32bit,
ADE7854_BWATTHR);
static IIO_DEV_ATTR_CWATTHR(ade7854_read_32bit,
ADE7854_CWATTHR);
static IIO_DEV_ATTR_AFWATTHR(ade7854_read_32bit,
ADE7854_AFWATTHR);
static IIO_DEV_ATTR_BFWATTHR(ade7854_read_32bit,
ADE7854_BFWATTHR);
static IIO_DEV_ATTR_CFWATTHR(ade7854_read_32bit,
ADE7854_CFWATTHR);
static IIO_DEV_ATTR_AVARHR(ade7854_read_32bit,
ADE7854_AVARHR);
static IIO_DEV_ATTR_BVARHR(ade7854_read_32bit,
ADE7854_BVARHR);
static IIO_DEV_ATTR_CVARHR(ade7854_read_32bit,
ADE7854_CVARHR);
static IIO_DEV_ATTR_AVAHR(ade7854_read_32bit,
ADE7854_AVAHR);
static IIO_DEV_ATTR_BVAHR(ade7854_read_32bit,
ADE7854_BVAHR);
static IIO_DEV_ATTR_CVAHR(ade7854_read_32bit,
ADE7854_CVAHR);
static int ade7854_set_irq(struct device *dev, bool enable)
static int ade7854_initial_setup(struct ade7854_state *st)
static IIO_DEV_ATTR_RESET(ade7854_write_reset);
static IIO_CONST_ATTR_SAMP_FREQ_AVAIL("8000");
static IIO_CONST_ATTR(name, "ade7854");
static struct attribute *ade7854_attributes[] = ;
static const struct attribute_group ade7854_attribute_group = ;
static const struct iio_info ade7854_info = ;
int ade7854_probe(struct ade7854_state *st, struct device *dev)
EXPORT_SYMBOL(ade7854_probe);
int ade7854_remove(struct ade7854_state *st)
EXPORT_SYMBOL(ade7854_remove);
MODULE_AUTHOR("Barry Song <21cnbao@gmail.com>");
MODULE_DESCRIPTION("Analog Devices ADE7854/58/68/78 Polyphase Energy Meter");
MODULE_LICENSE("GPL v2");
