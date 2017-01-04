#define DRIVER_VERSION			"0.2"
struct dpot_data ;
static inline int dpot_read_d8(struct dpot_data *dpot)
static inline int dpot_read_r8d8(struct dpot_data *dpot, u8 reg)
static inline int dpot_read_r8d16(struct dpot_data *dpot, u8 reg)
static inline int dpot_write_d8(struct dpot_data *dpot, u8 val)
static inline int dpot_write_r8d8(struct dpot_data *dpot, u8 reg, u16 val)
static inline int dpot_write_r8d16(struct dpot_data *dpot, u8 reg, u16 val)
static s32 dpot_read_spi(struct dpot_data *dpot, u8 reg)
static s32 dpot_read_i2c(struct dpot_data *dpot, u8 reg)
static s32 dpot_read(struct dpot_data *dpot, u8 reg)
static s32 dpot_write_spi(struct dpot_data *dpot, u8 reg, u16 value)
static s32 dpot_write_i2c(struct dpot_data *dpot, u8 reg, u16 value)
static s32 dpot_write(struct dpot_data *dpot, u8 reg, u16 value)
static ssize_t sysfs_show_reg(struct device *dev,
struct device_attribute *attr,
char *buf, u32 reg)
static ssize_t sysfs_set_reg(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count, u32 reg)
static ssize_t sysfs_do_cmd(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count, u32 reg)
#define DPOT_DEVICE_SHOW(_name, _reg) static ssize_t \
show_##_name(struct device *dev, \
struct device_attribute *attr, char *buf) \
#define DPOT_DEVICE_SET(_name, _reg) static ssize_t \
set_##_name(struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count) \
#define DPOT_DEVICE_SHOW_SET(name, reg) \
DPOT_DEVICE_SHOW(name, reg) \
DPOT_DEVICE_SET(name, reg) \
static DEVICE_ATTR(name, S_IWUSR | S_IRUGO, show_##name, set_##name);
#define DPOT_DEVICE_SHOW_ONLY(name, reg) \
DPOT_DEVICE_SHOW(name, reg) \
static DEVICE_ATTR(name, S_IWUSR | S_IRUGO, show_##name, NULL);
DPOT_DEVICE_SHOW_SET(rdac0, DPOT_ADDR_RDAC | DPOT_RDAC0);
DPOT_DEVICE_SHOW_SET(eeprom0, DPOT_ADDR_EEPROM | DPOT_RDAC0);
DPOT_DEVICE_SHOW_ONLY(tolerance0, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC0);
DPOT_DEVICE_SHOW_SET(otp0, DPOT_ADDR_OTP | DPOT_RDAC0);
DPOT_DEVICE_SHOW_SET(otp0en, DPOT_ADDR_OTP_EN | DPOT_RDAC0);
DPOT_DEVICE_SHOW_SET(rdac1, DPOT_ADDR_RDAC | DPOT_RDAC1);
DPOT_DEVICE_SHOW_SET(eeprom1, DPOT_ADDR_EEPROM | DPOT_RDAC1);
DPOT_DEVICE_SHOW_ONLY(tolerance1, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC1);
DPOT_DEVICE_SHOW_SET(otp1, DPOT_ADDR_OTP | DPOT_RDAC1);
DPOT_DEVICE_SHOW_SET(otp1en, DPOT_ADDR_OTP_EN | DPOT_RDAC1);
DPOT_DEVICE_SHOW_SET(rdac2, DPOT_ADDR_RDAC | DPOT_RDAC2);
DPOT_DEVICE_SHOW_SET(eeprom2, DPOT_ADDR_EEPROM | DPOT_RDAC2);
DPOT_DEVICE_SHOW_ONLY(tolerance2, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC2);
DPOT_DEVICE_SHOW_SET(otp2, DPOT_ADDR_OTP | DPOT_RDAC2);
DPOT_DEVICE_SHOW_SET(otp2en, DPOT_ADDR_OTP_EN | DPOT_RDAC2);
DPOT_DEVICE_SHOW_SET(rdac3, DPOT_ADDR_RDAC | DPOT_RDAC3);
DPOT_DEVICE_SHOW_SET(eeprom3, DPOT_ADDR_EEPROM | DPOT_RDAC3);
DPOT_DEVICE_SHOW_ONLY(tolerance3, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC3);
DPOT_DEVICE_SHOW_SET(otp3, DPOT_ADDR_OTP | DPOT_RDAC3);
DPOT_DEVICE_SHOW_SET(otp3en, DPOT_ADDR_OTP_EN | DPOT_RDAC3);
DPOT_DEVICE_SHOW_SET(rdac4, DPOT_ADDR_RDAC | DPOT_RDAC4);
DPOT_DEVICE_SHOW_SET(eeprom4, DPOT_ADDR_EEPROM | DPOT_RDAC4);
DPOT_DEVICE_SHOW_ONLY(tolerance4, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC4);
DPOT_DEVICE_SHOW_SET(otp4, DPOT_ADDR_OTP | DPOT_RDAC4);
DPOT_DEVICE_SHOW_SET(otp4en, DPOT_ADDR_OTP_EN | DPOT_RDAC4);
DPOT_DEVICE_SHOW_SET(rdac5, DPOT_ADDR_RDAC | DPOT_RDAC5);
DPOT_DEVICE_SHOW_SET(eeprom5, DPOT_ADDR_EEPROM | DPOT_RDAC5);
DPOT_DEVICE_SHOW_ONLY(tolerance5, DPOT_ADDR_EEPROM | DPOT_TOL_RDAC5);
DPOT_DEVICE_SHOW_SET(otp5, DPOT_ADDR_OTP | DPOT_RDAC5);
DPOT_DEVICE_SHOW_SET(otp5en, DPOT_ADDR_OTP_EN | DPOT_RDAC5);
static const struct attribute *dpot_attrib_wipers[] = ;
static const struct attribute *dpot_attrib_eeprom[] = ;
static const struct attribute *dpot_attrib_otp[] = ;
static const struct attribute *dpot_attrib_otp_en[] = ;
static const struct attribute *dpot_attrib_tolerance[] = ;
#define DPOT_DEVICE_DO_CMD(_name, _cmd) static ssize_t \
set_##_name(struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count) \
\
static DEVICE_ATTR(_name, S_IWUSR | S_IRUGO, NULL, set_##_name);
DPOT_DEVICE_DO_CMD(inc_all, DPOT_INC_ALL);
DPOT_DEVICE_DO_CMD(dec_all, DPOT_DEC_ALL);
DPOT_DEVICE_DO_CMD(inc_all_6db, DPOT_INC_ALL_6DB);
DPOT_DEVICE_DO_CMD(dec_all_6db, DPOT_DEC_ALL_6DB);
static struct attribute *ad525x_attributes_commands[] = ;
static const struct attribute_group ad525x_group_commands = ;
__devinit int ad_dpot_add_files(struct device *dev,
unsigned features, unsigned rdac)
inline void ad_dpot_remove_files(struct device *dev,
unsigned features, unsigned rdac)
__devinit int ad_dpot_probe(struct device *dev,
struct ad_dpot_bus_data *bdata, const struct ad_dpot_id *id)
EXPORT_SYMBOL(ad_dpot_probe);
__devexit int ad_dpot_remove(struct device *dev)
EXPORT_SYMBOL(ad_dpot_remove);
MODULE_AUTHOR("Chris Verges <chrisv@cyberswitching.com>, "
"Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("Digital potentiometer driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRIVER_VERSION);
