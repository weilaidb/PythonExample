#define WATCHDOG_TIMEOUT 2
static const unsigned short normal_i2c[] = ;
static unsigned short force_subclients[4];
module_param_array(force_subclients, short, NULL, 0);
MODULE_PARM_DESC(force_subclients, "List of subclient addresses: "
"");
static int reset;
module_param(reset, bool, 0);
MODULE_PARM_DESC(reset, "Set to 1 to reset chip, not recommended");
static int timeout = WATCHDOG_TIMEOUT;
module_param(timeout, int, 0);
MODULE_PARM_DESC(timeout,
"Watchdog timeout in minutes. 2<= timeout <=255 (default="
__MODULE_STRING(WATCHDOG_TIMEOUT) ")");
static int nowayout = WATCHDOG_NOWAYOUT;
module_param(nowayout, int, 0);
MODULE_PARM_DESC(nowayout,
"Watchdog cannot be stopped once started (default="
__MODULE_STRING(WATCHDOG_NOWAYOUT) ")");
#define W83793_REG_BANKSEL		0x00
#define W83793_REG_VENDORID		0x0d
#define W83793_REG_CHIPID		0x0e
#define W83793_REG_DEVICEID		0x0f
#define W83793_REG_CONFIG		0x40
#define W83793_REG_MFC			0x58
#define W83793_REG_FANIN_CTRL		0x5c
#define W83793_REG_FANIN_SEL		0x5d
#define W83793_REG_I2C_ADDR		0x0b
#define W83793_REG_I2C_SUBADDR		0x0c
#define W83793_REG_VID_INA		0x05
#define W83793_REG_VID_INB		0x06
#define W83793_REG_VID_LATCHA		0x07
#define W83793_REG_VID_LATCHB		0x08
#define W83793_REG_VID_CTRL		0x59
#define W83793_REG_WDT_LOCK		0x01
#define W83793_REG_WDT_ENABLE		0x02
#define W83793_REG_WDT_STATUS		0x03
#define W83793_REG_WDT_TIMEOUT		0x04
static u16 W83793_REG_TEMP_MODE[2] = ;
#define TEMP_READ	0
#define TEMP_CRIT	1
#define TEMP_CRIT_HYST	2
#define TEMP_WARN	3
#define TEMP_WARN_HYST	4
static u16 W83793_REG_TEMP[][5] = ;
#define W83793_REG_TEMP_LOW_BITS	0x22
#define W83793_REG_BEEP(index)		(0x53 + (index))
#define W83793_REG_ALARM(index)		(0x4b + (index))
#define W83793_REG_CLR_CHASSIS		0x4a
#define W83793_REG_IRQ_CTRL		0x50
#define W83793_REG_OVT_CTRL		0x51
#define W83793_REG_OVT_BEEP		0x52
#define IN_READ				0
#define IN_MAX				1
#define IN_LOW				2
static const u16 W83793_REG_IN[][3] = ;
static const u16 W83793_REG_IN_LOW_BITS[] = ;
static u8 scale_in[] = ;
static u8 scale_in_add[] = ;
#define W83793_REG_FAN(index)		(0x23 + 2 * (index))
#define W83793_REG_FAN_MIN(index)	(0x90 + 2 * (index))
#define W83793_REG_PWM_DEFAULT		0xb2
#define W83793_REG_PWM_ENABLE		0x207
#define W83793_REG_PWM_UPTIME		0xc3
#define W83793_REG_PWM_DOWNTIME		0xc4
#define W83793_REG_TEMP_CRITICAL	0xc5
#define PWM_DUTY			0
#define PWM_START			1
#define PWM_NONSTOP			2
#define PWM_STOP_TIME			3
#define W83793_REG_PWM(index, nr)	(((nr) == 0 ? 0xb3 : \
(nr) == 1 ? 0x220 : 0x218) + (index))
#define W83793_REG_TEMP_FAN_MAP(index)	(0x201 + (index))
#define W83793_REG_TEMP_TOL(index)	(0x208 + (index))
#define W83793_REG_TEMP_CRUISE(index)	(0x210 + (index))
#define W83793_REG_PWM_STOP_TIME(index)	(0x228 + (index))
#define W83793_REG_SF2_TEMP(index, nr)	(0x230 + ((index) << 4) + (nr))
#define W83793_REG_SF2_PWM(index, nr)	(0x238 + ((index) << 4) + (nr))
static inline unsigned long FAN_FROM_REG(u16 val)
static inline u16 FAN_TO_REG(long rpm)
static inline unsigned long TIME_FROM_REG(u8 reg)
static inline u8 TIME_TO_REG(unsigned long val)
static inline long TEMP_FROM_REG(s8 reg)
static inline s8 TEMP_TO_REG(long val, s8 min, s8 max)
struct w83793_data ;
static LIST_HEAD(watchdog_data_list);
static DEFINE_MUTEX(watchdog_data_mutex);
static void w83793_release_resources(struct kref *ref)
static u8 w83793_read_value(struct i2c_client *client, u16 reg);
static int w83793_write_value(struct i2c_client *client, u16 reg, u8 value);
static int w83793_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int w83793_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int w83793_remove(struct i2c_client *client);
static void w83793_init_client(struct i2c_client *client);
static void w83793_update_nonvolatile(struct device *dev);
static struct w83793_data *w83793_update_device(struct device *dev);
static const struct i2c_device_id w83793_id[] = ;
MODULE_DEVICE_TABLE(i2c, w83793_id);
static struct i2c_driver w83793_driver = ;
static ssize_t
show_vrm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
show_vid(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define ALARM_STATUS			0
#define BEEP_ENABLE			1
static ssize_t
show_alarm_beep(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_beep_enable(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
store_chassis_clear_legacy(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t
store_chassis_clear(struct device *dev,
struct device_attribute *attr, const char *buf,
size_t count)
#define FAN_INPUT			0
#define FAN_MIN				1
static ssize_t
show_fan(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_pwm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static u8 TO_TEMP_MODE[] = ;
static ssize_t
show_temp_mode(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_temp_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SETUP_PWM_DEFAULT		0
#define SETUP_PWM_UPTIME		1
#define SETUP_PWM_DOWNTIME		2
#define SETUP_TEMP_CRITICAL		3
static ssize_t
show_sf_setup(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf_setup(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define TEMP_FAN_MAP			0
#define TEMP_PWM_ENABLE			1
#define TEMP_CRUISE			2
#define TEMP_TOLERANCE			3
static ssize_t
show_sf_ctrl(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf_ctrl(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf2_pwm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf2_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_sf2_temp(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_sf2_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t
show_in(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_in(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define NOT_USED			-1
#define SENSOR_ATTR_IN(index)						\
SENSOR_ATTR_2(in##index##_input, S_IRUGO, show_in, NULL,	\
IN_READ, index),					\
SENSOR_ATTR_2(in##index##_max, S_IRUGO | S_IWUSR, show_in,	\
store_in, IN_MAX, index),				\
SENSOR_ATTR_2(in##index##_min, S_IRUGO | S_IWUSR, show_in,	\
store_in, IN_LOW, index),				\
SENSOR_ATTR_2(in##index##_alarm, S_IRUGO, show_alarm_beep,	\
NULL, ALARM_STATUS, index + ((index > 2) ? 1 : 0)),	\
SENSOR_ATTR_2(in##index##_beep, S_IWUSR | S_IRUGO,		\
show_alarm_beep, store_beep, BEEP_ENABLE,		\
index + ((index > 2) ? 1 : 0))
#define SENSOR_ATTR_FAN(index)						\
SENSOR_ATTR_2(fan##index##_alarm, S_IRUGO, show_alarm_beep,	\
NULL, ALARM_STATUS, index + 17),			\
SENSOR_ATTR_2(fan##index##_beep, S_IWUSR | S_IRUGO,		\
show_alarm_beep, store_beep, BEEP_ENABLE, index + 17),	\
SENSOR_ATTR_2(fan##index##_input, S_IRUGO, show_fan,		\
NULL, FAN_INPUT, index - 1),				\
SENSOR_ATTR_2(fan##index##_min, S_IWUSR | S_IRUGO,		\
show_fan, store_fan_min, FAN_MIN, index - 1)
#define SENSOR_ATTR_PWM(index)						\
SENSOR_ATTR_2(pwm##index, S_IWUSR | S_IRUGO, show_pwm,		\
store_pwm, PWM_DUTY, index - 1),			\
SENSOR_ATTR_2(pwm##index##_nonstop, S_IWUSR | S_IRUGO,		\
show_pwm, store_pwm, PWM_NONSTOP, index - 1),		\
SENSOR_ATTR_2(pwm##index##_start, S_IWUSR | S_IRUGO,		\
show_pwm, store_pwm, PWM_START, index - 1),		\
SENSOR_ATTR_2(pwm##index##_stop_time, S_IWUSR | S_IRUGO,	\
show_pwm, store_pwm, PWM_STOP_TIME, index - 1)
#define SENSOR_ATTR_TEMP(index)						\
SENSOR_ATTR_2(temp##index##_type, S_IRUGO | S_IWUSR,		\
show_temp_mode, store_temp_mode, NOT_USED, index - 1),	\
SENSOR_ATTR_2(temp##index##_input, S_IRUGO, show_temp,		\
NULL, TEMP_READ, index - 1),				\
SENSOR_ATTR_2(temp##index##_max, S_IRUGO | S_IWUSR, show_temp,	\
store_temp, TEMP_CRIT, index - 1),			\
SENSOR_ATTR_2(temp##index##_max_hyst, S_IRUGO | S_IWUSR,	\
show_temp, store_temp, TEMP_CRIT_HYST, index - 1),	\
SENSOR_ATTR_2(temp##index##_warn, S_IRUGO | S_IWUSR, show_temp,	\
store_temp, TEMP_WARN, index - 1),			\
SENSOR_ATTR_2(temp##index##_warn_hyst, S_IRUGO | S_IWUSR,	\
show_temp, store_temp, TEMP_WARN_HYST, index - 1),	\
SENSOR_ATTR_2(temp##index##_alarm, S_IRUGO,			\
show_alarm_beep, NULL, ALARM_STATUS, index + 11),	\
SENSOR_ATTR_2(temp##index##_beep, S_IWUSR | S_IRUGO,		\
show_alarm_beep, store_beep, BEEP_ENABLE, index + 11),	\
SENSOR_ATTR_2(temp##index##_auto_channels_pwm,			\
S_IRUGO | S_IWUSR, show_sf_ctrl, store_sf_ctrl,		\
TEMP_FAN_MAP, index - 1),				\
SENSOR_ATTR_2(temp##index##_pwm_enable, S_IWUSR | S_IRUGO,	\
show_sf_ctrl, store_sf_ctrl, TEMP_PWM_ENABLE,		\
index - 1),						\
SENSOR_ATTR_2(thermal_cruise##index, S_IRUGO | S_IWUSR,		\
show_sf_ctrl, store_sf_ctrl, TEMP_CRUISE, index - 1),	\
SENSOR_ATTR_2(tolerance##index, S_IRUGO | S_IWUSR, show_sf_ctrl,\
store_sf_ctrl, TEMP_TOLERANCE, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point1_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 0, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point2_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 1, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point3_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 2, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point4_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 3, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point5_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 4, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point6_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 5, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point7_pwm, S_IRUGO | S_IWUSR, \
show_sf2_pwm, store_sf2_pwm, 6, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point1_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 0, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point2_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 1, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point3_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 2, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point4_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 3, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point5_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 4, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point6_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 5, index - 1),		\
SENSOR_ATTR_2(temp##index##_auto_point7_temp, S_IRUGO | S_IWUSR,\
show_sf2_temp, store_sf2_temp, 6, index - 1)
static struct sensor_device_attribute_2 w83793_sensor_attr_2[] = ;
static struct sensor_device_attribute_2 w83793_temp[] = ;
static struct sensor_device_attribute_2 w83793_left_fan[] = ;
static struct sensor_device_attribute_2 w83793_left_pwm[] = ;
static struct sensor_device_attribute_2 w83793_vid[] = ;
static DEVICE_ATTR(vrm, S_IWUSR | S_IRUGO, show_vrm, store_vrm);
static struct sensor_device_attribute_2 sda_single_files[] = ;
static void w83793_init_client(struct i2c_client *client)
static int watchdog_set_timeout(struct w83793_data *data, int timeout)
static int watchdog_get_timeout(struct w83793_data *data)
static int watchdog_trigger(struct w83793_data *data)
static int watchdog_enable(struct w83793_data *data)
static int watchdog_disable(struct w83793_data *data)
static int watchdog_open(struct inode *inode, struct file *filp)
static int watchdog_close(struct inode *inode, struct file *filp)
static ssize_t watchdog_write(struct file *filp, const char __user *buf,
size_t count, loff_t *offset)
static long watchdog_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static const struct file_operations watchdog_fops = ;
static int watchdog_notify_sys(struct notifier_block *this, unsigned long code,
void *unused)
static struct notifier_block watchdog_notifier = ;
static int w83793_remove(struct i2c_client *client)
static int
w83793_detect_subclients(struct i2c_client *client)
static int w83793_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int w83793_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static void w83793_update_nonvolatile(struct device *dev)
static struct w83793_data *w83793_update_device(struct device *dev)
static u8 w83793_read_value(struct i2c_client *client, u16 reg)
static int w83793_write_value(struct i2c_client *client, u16 reg, u8 value)
static int __init sensors_w83793_init(void)
static void __exit sensors_w83793_exit(void)
MODULE_AUTHOR("Yuan Mu, Sven Anders");
MODULE_DESCRIPTION("w83793 driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83793_init);
module_exit(sensors_w83793_exit);
