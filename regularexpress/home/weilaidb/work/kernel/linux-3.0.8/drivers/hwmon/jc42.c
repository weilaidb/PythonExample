static const unsigned short normal_i2c[] = ;
#define JC42_REG_CAP		0x00
#define JC42_REG_CONFIG		0x01
#define JC42_REG_TEMP_UPPER	0x02
#define JC42_REG_TEMP_LOWER	0x03
#define JC42_REG_TEMP_CRITICAL	0x04
#define JC42_REG_TEMP		0x05
#define JC42_REG_MANID		0x06
#define JC42_REG_DEVICEID	0x07
#define JC42_ALARM_CRIT_BIT	15
#define JC42_ALARM_MAX_BIT	14
#define JC42_ALARM_MIN_BIT	13
#define JC42_CFG_CRIT_ONLY	(1 << 2)
#define JC42_CFG_TCRIT_LOCK	(1 << 6)
#define JC42_CFG_EVENT_LOCK	(1 << 7)
#define JC42_CFG_SHUTDOWN	(1 << 8)
#define JC42_CFG_HYST_SHIFT	9
#define JC42_CFG_HYST_MASK	0x03
#define JC42_CAP_RANGE		(1 << 2)
#define ADT_MANID		0x11d4
#define MAX_MANID		0x004d
#define IDT_MANID		0x00b3
#define MCP_MANID		0x0054
#define NXP_MANID		0x1131
#define ONS_MANID		0x1b09
#define STM_MANID		0x104a
#define ADT7408_DEVID		0x0801
#define ADT7408_DEVID_MASK	0xffff
#define TS3000B3_DEVID		0x2903
#define TS3000B3_DEVID_MASK	0xffff
#define MAX6604_DEVID		0x3e00
#define MAX6604_DEVID_MASK	0xffff
#define MCP98242_DEVID		0x2000
#define MCP98242_DEVID_MASK	0xfffc
#define MCP98243_DEVID		0x2100
#define MCP98243_DEVID_MASK	0xfffc
#define MCP9843_DEVID		0x0000
#define MCP9843_DEVID_MASK	0xfffe
#define SE97_DEVID		0xa200
#define SE97_DEVID_MASK		0xfffc
#define SE98_DEVID		0xa100
#define SE98_DEVID_MASK		0xfffc
#define CAT6095_DEVID		0x0800
#define CAT6095_DEVID_MASK	0xffe0
#define STTS424_DEVID		0x0101
#define STTS424_DEVID_MASK	0xffff
#define STTS424E_DEVID		0x0000
#define STTS424E_DEVID_MASK	0xfffe
static u16 jc42_hysteresis[] = ;
struct jc42_chips ;
static struct jc42_chips jc42_chips[] = ;
struct jc42_data ;
static int jc42_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int jc42_detect(struct i2c_client *client, struct i2c_board_info *info);
static int jc42_remove(struct i2c_client *client);
static int jc42_read_value(struct i2c_client *client, u8 reg);
static int jc42_write_value(struct i2c_client *client, u8 reg, u16 value);
static struct jc42_data *jc42_update_device(struct device *dev);
static const struct i2c_device_id jc42_id[] = ;
MODULE_DEVICE_TABLE(i2c, jc42_id);
static int jc42_suspend(struct device *dev)
static int jc42_resume(struct device *dev)
static const struct dev_pm_ops jc42_dev_pm_ops = ;
#define JC42_DEV_PM_OPS (&jc42_dev_pm_ops)
#define JC42_DEV_PM_OPS NULL
static struct i2c_driver jc42_driver = ;
#define JC42_TEMP_MIN_EXTENDED	(-40000)
#define JC42_TEMP_MIN		0
#define JC42_TEMP_MAX		125000
static u16 jc42_temp_to_reg(int temp, bool extended)
static int jc42_temp_from_reg(s16 reg)
#define show(value)	\
static ssize_t show_##value(struct device *dev,				\
struct device_attribute *attr,		\
char *buf)					\
show(temp_input);
show(temp_crit);
show(temp_min);
show(temp_max);
static ssize_t show_temp_crit_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_max_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
#define set(value, reg)	\
static ssize_t set_##value(struct device *dev,				\
struct device_attribute *attr,		\
const char *buf, size_t count)		\
set(temp_min, JC42_REG_TEMP_LOWER);
set(temp_max, JC42_REG_TEMP_UPPER);
set(temp_crit, JC42_REG_TEMP_CRITICAL);
static ssize_t set_temp_crit_hyst(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO,
show_temp_input, NULL);
static DEVICE_ATTR(temp1_crit, S_IRUGO,
show_temp_crit, set_temp_crit);
static DEVICE_ATTR(temp1_min, S_IRUGO,
show_temp_min, set_temp_min);
static DEVICE_ATTR(temp1_max, S_IRUGO,
show_temp_max, set_temp_max);
static DEVICE_ATTR(temp1_crit_hyst, S_IRUGO,
show_temp_crit_hyst, set_temp_crit_hyst);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO,
show_temp_max_hyst, NULL);
static SENSOR_DEVICE_ATTR(temp1_crit_alarm, S_IRUGO, show_alarm, NULL,
JC42_ALARM_CRIT_BIT);
static SENSOR_DEVICE_ATTR(temp1_min_alarm, S_IRUGO, show_alarm, NULL,
JC42_ALARM_MIN_BIT);
static SENSOR_DEVICE_ATTR(temp1_max_alarm, S_IRUGO, show_alarm, NULL,
JC42_ALARM_MAX_BIT);
static struct attribute *jc42_attributes[] = ;
static mode_t jc42_attribute_mode(struct kobject *kobj,
struct attribute *attr, int index)
static const struct attribute_group jc42_group = ;
static int jc42_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int jc42_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int jc42_remove(struct i2c_client *client)
static int jc42_read_value(struct i2c_client *client, u8 reg)
static int jc42_write_value(struct i2c_client *client, u8 reg, u16 value)
static struct jc42_data *jc42_update_device(struct device *dev)
static int __init sensors_jc42_init(void)
static void __exit sensors_jc42_exit(void)
MODULE_AUTHOR("Guenter Roeck <guenter.roeck@ericsson.com>");
MODULE_DESCRIPTION("JC42 driver");
MODULE_LICENSE("GPL");
module_init(sensors_jc42_init);
module_exit(sensors_jc42_exit);
