#define PMBUS_MAX_INPUT_SENSORS		11
#define PMBUS_VOUT_SENSORS_PER_PAGE	5
#define PMBUS_IOUT_SENSORS_PER_PAGE	4
#define PMBUS_POUT_SENSORS_PER_PAGE	4
#define PMBUS_MAX_SENSORS_PER_FAN	1
#define PMBUS_MAX_SENSORS_PER_TEMP	5
#define PMBUS_MAX_INPUT_BOOLEANS	7
#define PMBUS_VOUT_BOOLEANS_PER_PAGE	4
#define PMBUS_IOUT_BOOLEANS_PER_PAGE	3
#define PMBUS_POUT_BOOLEANS_PER_PAGE	2
#define PMBUS_MAX_BOOLEANS_PER_FAN	2
#define PMBUS_MAX_BOOLEANS_PER_TEMP	4
#define PMBUS_MAX_INPUT_LABELS		4
#define PB_NUM_STATUS_REG	(PMBUS_PAGES * 6 + 1)
#define PB_STATUS_BASE		0
#define PB_STATUS_VOUT_BASE	(PB_STATUS_BASE + PMBUS_PAGES)
#define PB_STATUS_IOUT_BASE	(PB_STATUS_VOUT_BASE + PMBUS_PAGES)
#define PB_STATUS_FAN_BASE	(PB_STATUS_IOUT_BASE + PMBUS_PAGES)
#define PB_STATUS_FAN34_BASE	(PB_STATUS_FAN_BASE + PMBUS_PAGES)
#define PB_STATUS_INPUT_BASE	(PB_STATUS_FAN34_BASE + PMBUS_PAGES)
#define PB_STATUS_TEMP_BASE	(PB_STATUS_INPUT_BASE + 1)
struct pmbus_sensor ;
struct pmbus_boolean ;
struct pmbus_label ;
struct pmbus_data ;
int pmbus_set_page(struct i2c_client *client, u8 page)
EXPORT_SYMBOL_GPL(pmbus_set_page);
static int pmbus_write_byte(struct i2c_client *client, u8 page, u8 value)
static int pmbus_write_word_data(struct i2c_client *client, u8 page, u8 reg,
u16 word)
int pmbus_read_word_data(struct i2c_client *client, u8 page, u8 reg)
EXPORT_SYMBOL_GPL(pmbus_read_word_data);
static int pmbus_read_byte_data(struct i2c_client *client, u8 page, u8 reg)
static void pmbus_clear_fault_page(struct i2c_client *client, int page)
void pmbus_clear_faults(struct i2c_client *client)
EXPORT_SYMBOL_GPL(pmbus_clear_faults);
static int pmbus_check_status_cml(struct i2c_client *client, int page)
bool pmbus_check_byte_register(struct i2c_client *client, int page, int reg)
EXPORT_SYMBOL_GPL(pmbus_check_byte_register);
bool pmbus_check_word_register(struct i2c_client *client, int page, int reg)
EXPORT_SYMBOL_GPL(pmbus_check_word_register);
const struct pmbus_driver_info *pmbus_get_driver_info(struct i2c_client *client)
EXPORT_SYMBOL_GPL(pmbus_get_driver_info);
static int _pmbus_read_byte_data(struct i2c_client *client, int page, int reg)
static struct pmbus_data *pmbus_update_device(struct device *dev)
static long pmbus_reg2data_linear(struct pmbus_data *data,
struct pmbus_sensor *sensor)
static long pmbus_reg2data_direct(struct pmbus_data *data,
struct pmbus_sensor *sensor)
static long pmbus_reg2data(struct pmbus_data *data, struct pmbus_sensor *sensor)
#define MAX_MANTISSA	(1023 * 1000)
#define MIN_MANTISSA	(511 * 1000)
static u16 pmbus_data2reg_linear(struct pmbus_data *data,
enum pmbus_sensor_classes class, long val)
static u16 pmbus_data2reg_direct(struct pmbus_data *data,
enum pmbus_sensor_classes class, long val)
static u16 pmbus_data2reg(struct pmbus_data *data,
enum pmbus_sensor_classes class, long val)
static int pmbus_get_boolean(struct pmbus_data *data, int index, int *val)
static ssize_t pmbus_show_boolean(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t pmbus_show_sensor(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t pmbus_set_sensor(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t pmbus_show_label(struct device *dev,
struct device_attribute *da, char *buf)
#define PMBUS_ADD_ATTR(data, _name, _idx, _mode, _type, _show, _set)	\
do  while (0)
#define PMBUS_ADD_GET_ATTR(data, _name, _type, _idx)			\
PMBUS_ADD_ATTR(data, _name, _idx, S_IRUGO, _type,		\
pmbus_show_##_type,  NULL)
#define PMBUS_ADD_SET_ATTR(data, _name, _type, _idx)			\
PMBUS_ADD_ATTR(data, _name, _idx, S_IWUSR | S_IRUGO, _type,	\
pmbus_show_##_type, pmbus_set_##_type)
static void pmbus_add_boolean(struct pmbus_data *data,
const char *name, const char *type, int seq,
int idx)
static void pmbus_add_boolean_reg(struct pmbus_data *data,
const char *name, const char *type,
int seq, int reg, int bit)
static void pmbus_add_boolean_cmp(struct pmbus_data *data,
const char *name, const char *type,
int seq, int i1, int i2, int reg, int mask)
static void pmbus_add_sensor(struct pmbus_data *data,
const char *name, const char *type, int seq,
int page, int reg, enum pmbus_sensor_classes class,
bool update, bool readonly)
static void pmbus_add_label(struct pmbus_data *data,
const char *name, int seq,
const char *lstring, int index)
static void pmbus_find_max_attr(struct i2c_client *client,
struct pmbus_data *data)
struct pmbus_limit_attr ;
struct pmbus_sensor_attr ;
static bool pmbus_add_limit_attrs(struct i2c_client *client,
struct pmbus_data *data,
const struct pmbus_driver_info *info,
const char *name, int index, int page,
int cbase,
const struct pmbus_sensor_attr *attr)
static void pmbus_add_sensor_attrs_one(struct i2c_client *client,
struct pmbus_data *data,
const struct pmbus_driver_info *info,
const char *name,
int index, int page,
const struct pmbus_sensor_attr *attr)
static void pmbus_add_sensor_attrs(struct i2c_client *client,
struct pmbus_data *data,
const char *name,
const struct pmbus_sensor_attr *attrs,
int nattrs)
static const struct pmbus_limit_attr vin_limit_attrs[] = ;
static const struct pmbus_limit_attr vout_limit_attrs[] = ;
static const struct pmbus_sensor_attr voltage_attributes[] = ;
static const struct pmbus_limit_attr iin_limit_attrs[] = ;
static const struct pmbus_limit_attr iout_limit_attrs[] = ;
static const struct pmbus_sensor_attr current_attributes[] = ;
static const struct pmbus_limit_attr pin_limit_attrs[] = ;
static const struct pmbus_limit_attr pout_limit_attrs[] = ;
static const struct pmbus_sensor_attr power_attributes[] = ;
static const struct pmbus_limit_attr temp_limit_attrs[] = ;
static const struct pmbus_sensor_attr temp_attributes[] = ;
static const int pmbus_fan_registers[] = ;
static const int pmbus_fan_config_registers[] = ;
static const int pmbus_fan_status_registers[] = ;
static const u32 pmbus_fan_flags[] = ;
static const u32 pmbus_fan_status_flags[] = ;
static void pmbus_add_fan_attributes(struct i2c_client *client,
struct pmbus_data *data)
static void pmbus_find_attributes(struct i2c_client *client,
struct pmbus_data *data)
static int pmbus_identify_common(struct i2c_client *client,
struct pmbus_data *data)
int pmbus_do_probe(struct i2c_client *client, const struct i2c_device_id *id,
struct pmbus_driver_info *info)
EXPORT_SYMBOL_GPL(pmbus_do_probe);
int pmbus_do_remove(struct i2c_client *client)
EXPORT_SYMBOL_GPL(pmbus_do_remove);
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("PMBus core driver");
MODULE_LICENSE("GPL");
