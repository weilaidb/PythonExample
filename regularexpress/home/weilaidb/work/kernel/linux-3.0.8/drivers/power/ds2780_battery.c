#define DS2780_CURRENT_UNITS	1563
#define DS2780_CHARGE_UNITS		6250
#define DS2780_USER_EEPROM_SIZE		(DS2780_EEPROM_BLOCK0_END - \
DS2780_EEPROM_BLOCK0_START + 1)
#define DS2780_PARAM_EEPROM_SIZE	(DS2780_EEPROM_BLOCK1_END - \
DS2780_EEPROM_BLOCK1_START + 1)
struct ds2780_device_info ;
enum current_types ;
static const char model[] = "DS2780";
static const char manufacturer[] = "Maxim/Dallas";
static inline struct ds2780_device_info *to_ds2780_device_info(
struct power_supply *psy)
static inline struct power_supply *to_power_supply(struct device *dev)
static inline int ds2780_read8(struct device *dev, u8 *val, int addr)
static int ds2780_read16(struct device *dev, s16 *val, int addr)
static inline int ds2780_read_block(struct device *dev, u8 *val, int addr,
size_t count)
static inline int ds2780_write(struct device *dev, u8 *val, int addr,
size_t count)
static inline int ds2780_store_eeprom(struct device *dev, int addr)
static inline int ds2780_recall_eeprom(struct device *dev, int addr)
static int ds2780_save_eeprom(struct ds2780_device_info *dev_info, int reg)
static int ds2780_set_sense_register(struct ds2780_device_info *dev_info,
u8 conductance)
static int ds2780_get_rsgain_register(struct ds2780_device_info *dev_info,
u16 *rsgain)
static int ds2780_set_rsgain_register(struct ds2780_device_info *dev_info,
u16 rsgain)
static int ds2780_get_voltage(struct ds2780_device_info *dev_info,
int *voltage_uV)
static int ds2780_get_temperature(struct ds2780_device_info *dev_info,
int *temperature)
static int ds2780_get_current(struct ds2780_device_info *dev_info,
enum current_types type, int *current_uA)
static int ds2780_get_accumulated_current(struct ds2780_device_info *dev_info,
int *accumulated_current)
static int ds2780_get_capacity(struct ds2780_device_info *dev_info,
int *capacity)
static int ds2780_get_status(struct ds2780_device_info *dev_info, int *status)
static int ds2780_get_charge_now(struct ds2780_device_info *dev_info,
int *charge_now)
static int ds2780_get_control_register(struct ds2780_device_info *dev_info,
u8 *control_reg)
static int ds2780_set_control_register(struct ds2780_device_info *dev_info,
u8 control_reg)
static int ds2780_battery_get_property(struct power_supply *psy,
enum power_supply_property psp,
union power_supply_propval *val)
static enum power_supply_property ds2780_battery_props[] = ;
static ssize_t ds2780_get_pmod_enabled(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ds2780_set_pmod_enabled(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t ds2780_get_sense_resistor_value(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ds2780_set_sense_resistor_value(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t ds2780_get_rsgain_setting(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ds2780_set_rsgain_setting(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t ds2780_get_pio_pin(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t ds2780_set_pio_pin(struct device *dev,
struct device_attribute *attr,
const char *buf,
size_t count)
static ssize_t ds2780_read_param_eeprom_bin(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t ds2780_write_param_eeprom_bin(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ds2780_param_eeprom_bin_attr = ;
static ssize_t ds2780_read_user_eeprom_bin(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t ds2780_write_user_eeprom_bin(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static struct bin_attribute ds2780_user_eeprom_bin_attr = ;
static DEVICE_ATTR(pmod_enabled, S_IRUGO | S_IWUSR, ds2780_get_pmod_enabled,
ds2780_set_pmod_enabled);
static DEVICE_ATTR(sense_resistor_value, S_IRUGO | S_IWUSR,
ds2780_get_sense_resistor_value, ds2780_set_sense_resistor_value);
static DEVICE_ATTR(rsgain_setting, S_IRUGO | S_IWUSR, ds2780_get_rsgain_setting,
ds2780_set_rsgain_setting);
static DEVICE_ATTR(pio_pin, S_IRUGO | S_IWUSR, ds2780_get_pio_pin,
ds2780_set_pio_pin);
static struct attribute *ds2780_attributes[] = ;
static const struct attribute_group ds2780_attr_group = ;
static int __devinit ds2780_battery_probe(struct platform_device *pdev)
static int __devexit ds2780_battery_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:ds2780-battery");
static struct platform_driver ds2780_battery_driver = ;
static int __init ds2780_battery_init(void)
static void __exit ds2780_battery_exit(void)
module_init(ds2780_battery_init);
module_exit(ds2780_battery_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Clifton Barnes <cabarnes@indesign-llc.com>");
MODULE_DESCRIPTION("Maxim/Dallas DS2780 Stand-Alone Fuel Gauage IC driver");
