#undef DEBUG
#define CONFIG_REG   0x40
#define MANUAL_MASK  0xe0
#define AUTO_MASK    0x20
#define INVERT_MASK  0x10
static u8 TEMP_REG[3]    = ;
static u8 LIMIT_REG[3]   = ;
static u8 MANUAL_MODE[2] = ;
static u8 REM_CONTROL[2] = ;
static u8 FAN_SPEED[2]   = ;
static u8 FAN_SPD_SET[2] = ;
static u8 default_limits_local[3] = ;
static u8 default_limits_chip[3] = ;
static const char *sensor_location[3];
static int limit_adjust;
static int fan_speed = -1;
static int verbose;
MODULE_AUTHOR("Colin Leroy <colin@colino.net>");
MODULE_DESCRIPTION("Driver for ADT746x thermostat in iBook G4 and "
"Powerbook G4 Alu");
MODULE_LICENSE("GPL");
module_param(limit_adjust, int, 0644);
MODULE_PARM_DESC(limit_adjust,"Adjust maximum temperatures (50 sensor1, 70 sensor2) "
"by N degrees.");
module_param(fan_speed, int, 0644);
MODULE_PARM_DESC(fan_speed,"Specify starting fan speed (0-255) "
"(default 64)");
module_param(verbose, bool, 0);
MODULE_PARM_DESC(verbose,"Verbose log operations "
"(default 0)");
struct thermostat ;
static enum  therm_type;
static int therm_bus, therm_address;
static struct platform_device * of_dev;
static struct thermostat* thermostat;
static struct task_struct *thread_therm = NULL;
static void write_both_fan_speed(struct thermostat *th, int speed);
static void write_fan_speed(struct thermostat *th, int speed, int fan);
static void thermostat_create_files(void);
static void thermostat_remove_files(void);
static int
write_reg(struct thermostat* th, int reg, u8 data)
static int
read_reg(struct thermostat* th, int reg)
static struct i2c_driver thermostat_driver;
static int
attach_thermostat(struct i2c_adapter *adapter)
static int
remove_thermostat(struct i2c_client *client)
static int read_fan_speed(struct thermostat *th, u8 addr)
static void write_both_fan_speed(struct thermostat *th, int speed)
static void write_fan_speed(struct thermostat *th, int speed, int fan)
static void read_sensors(struct thermostat *th)
static void display_stats(struct thermostat *th)
static void update_fans_speed (struct thermostat *th)
static int monitor_task(void *arg)
static void set_limit(struct thermostat *th, int i)
static int probe_thermostat(struct i2c_client *client,
const struct i2c_device_id *id)
static const struct i2c_device_id therm_adt746x_id[] = ;
static struct i2c_driver thermostat_driver = ;
#define BUILD_SHOW_FUNC_INT(name, data)				\
static ssize_t show_##name(struct device *dev, struct device_attribute *attr, char *buf)	\
#define BUILD_SHOW_FUNC_STR(name, data)				\
static ssize_t show_##name(struct device *dev, struct device_attribute *attr, char *buf)       \
#define BUILD_SHOW_FUNC_FAN(name, data)				\
static ssize_t show_##name(struct device *dev, struct device_attribute *attr, char *buf)       \
#define BUILD_STORE_FUNC_DEG(name, data)			\
static ssize_t store_##name(struct device *dev, struct device_attribute *attr, const char *buf, size_t n) \
#define BUILD_STORE_FUNC_INT(name, data)			\
static ssize_t store_##name(struct device *dev, struct device_attribute *attr, const char *buf, size_t n) \
BUILD_SHOW_FUNC_INT(sensor1_temperature,	 (read_reg(thermostat, TEMP_REG[1])))
BUILD_SHOW_FUNC_INT(sensor2_temperature,	 (read_reg(thermostat, TEMP_REG[2])))
BUILD_SHOW_FUNC_INT(sensor1_limit,		 thermostat->limits[1])
BUILD_SHOW_FUNC_INT(sensor2_limit,		 thermostat->limits[2])
BUILD_SHOW_FUNC_STR(sensor1_location,		 sensor_location[1])
BUILD_SHOW_FUNC_STR(sensor2_location,		 sensor_location[2])
BUILD_SHOW_FUNC_INT(specified_fan_speed, fan_speed)
BUILD_SHOW_FUNC_FAN(sensor1_fan_speed,	 0)
BUILD_SHOW_FUNC_FAN(sensor2_fan_speed,	 1)
BUILD_STORE_FUNC_INT(specified_fan_speed,fan_speed)
BUILD_SHOW_FUNC_INT(limit_adjust,	 limit_adjust)
BUILD_STORE_FUNC_DEG(limit_adjust,	 thermostat)
static DEVICE_ATTR(sensor1_temperature,	S_IRUGO,
show_sensor1_temperature,NULL);
static DEVICE_ATTR(sensor2_temperature,	S_IRUGO,
show_sensor2_temperature,NULL);
static DEVICE_ATTR(sensor1_limit, S_IRUGO,
show_sensor1_limit,	NULL);
static DEVICE_ATTR(sensor2_limit, S_IRUGO,
show_sensor2_limit,	NULL);
static DEVICE_ATTR(sensor1_location, S_IRUGO,
show_sensor1_location, NULL);
static DEVICE_ATTR(sensor2_location, S_IRUGO,
show_sensor2_location, NULL);
static DEVICE_ATTR(specified_fan_speed,	S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH,
show_specified_fan_speed,store_specified_fan_speed);
static DEVICE_ATTR(sensor1_fan_speed,	S_IRUGO,
show_sensor1_fan_speed,	NULL);
static DEVICE_ATTR(sensor2_fan_speed,	S_IRUGO,
show_sensor2_fan_speed,	NULL);
static DEVICE_ATTR(limit_adjust,	S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH,
show_limit_adjust,	store_limit_adjust);
static int __init
thermostat_init(void)
static void thermostat_create_files(void)
static void thermostat_remove_files(void)
static void __exit
thermostat_exit(void)
module_init(thermostat_init);
module_exit(thermostat_exit);
