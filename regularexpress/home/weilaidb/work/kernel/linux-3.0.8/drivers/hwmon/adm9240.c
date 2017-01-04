static const unsigned short normal_i2c[] = ;
enum chips ;
#define ADM9240_REG_MAN_ID		0x3e
#define ADM9240_REG_DIE_REV		0x3f
#define ADM9240_REG_CONFIG		0x40
#define ADM9240_REG_IN(nr)		(0x20 + (nr))
#define ADM9240_REG_IN_MAX(nr)		(0x2b + (nr) * 2)
#define ADM9240_REG_IN_MIN(nr)		(0x2c + (nr) * 2)
#define ADM9240_REG_FAN(nr)		(0x28 + (nr))
#define ADM9240_REG_FAN_MIN(nr)		(0x3b + (nr))
#define ADM9240_REG_INT(nr)		(0x41 + (nr))
#define ADM9240_REG_INT_MASK(nr)	(0x43 + (nr))
#define ADM9240_REG_TEMP		0x27
#define ADM9240_REG_TEMP_MAX(nr)	(0x39 + (nr))
#define ADM9240_REG_ANALOG_OUT		0x19
#define ADM9240_REG_CHASSIS_CLEAR	0x46
#define ADM9240_REG_VID_FAN_DIV		0x47
#define ADM9240_REG_I2C_ADDR		0x48
#define ADM9240_REG_VID4		0x49
#define ADM9240_REG_TEMP_CONF		0x4b
static inline int SCALE(long val, int mul, int div)
static const u16 nom_mv[] = ;
static inline unsigned int IN_FROM_REG(u8 reg, int n)
static inline u8 IN_TO_REG(unsigned long val, int n)
static inline s8 TEMP_TO_REG(long val)
static inline unsigned int FAN_FROM_REG(u8 reg, u8 div)
static inline u8 AOUT_TO_REG(unsigned long val)
static inline unsigned int AOUT_FROM_REG(u8 reg)
static int adm9240_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int adm9240_detect(struct i2c_client *client,
struct i2c_board_info *info);
static void adm9240_init_client(struct i2c_client *client);
static int adm9240_remove(struct i2c_client *client);
static struct adm9240_data *adm9240_update_device(struct device *dev);
static const struct i2c_device_id adm9240_id[] = ;
MODULE_DEVICE_TABLE(i2c, adm9240_id);
static struct i2c_driver adm9240_driver = ;
struct adm9240_data ;
static ssize_t show_temp(struct device *dev, struct device_attribute *dummy,
char *buf)
static ssize_t show_max(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t set_max(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL);
static SENSOR_DEVICE_ATTR(temp1_max, S_IWUSR | S_IRUGO,
show_max, set_max, 0);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IWUSR | S_IRUGO,
show_max, set_max, 1);
static ssize_t show_in(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_in_min(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_in_max(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t set_in_min(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
#define vin(nr)							\
static SENSOR_DEVICE_ATTR(in##nr##_input, S_IRUGO, 		\
show_in, NULL, nr);				\
static SENSOR_DEVICE_ATTR(in##nr##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, nr);			\
static SENSOR_DEVICE_ATTR(in##nr##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, nr);
vin(0);
vin(1);
vin(2);
vin(3);
vin(4);
vin(5);
static ssize_t show_fan(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_fan_min(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_fan_div(struct device *dev,
struct device_attribute *devattr, char *buf)
static void adm9240_write_fan_div(struct i2c_client *client, int nr,
u8 fan_div)
static ssize_t set_fan_min(struct device *dev,
struct device_attribute *devattr,
const char *buf, size_t count)
#define fan(nr)							\
static SENSOR_DEVICE_ATTR(fan##nr##_input, S_IRUGO,		\
show_fan, NULL, nr - 1);			\
static SENSOR_DEVICE_ATTR(fan##nr##_div, S_IRUGO,		\
show_fan_div, NULL, nr - 1);			\
static SENSOR_DEVICE_ATTR(fan##nr##_min, S_IRUGO | S_IWUSR,	\
show_fan_min, set_fan_min, nr - 1);
fan(1);
fan(2);
static ssize_t show_alarms(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev,
struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static ssize_t show_vid(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_aout(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_aout(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(aout_output, S_IRUGO | S_IWUSR, show_aout, set_aout);
static ssize_t chassis_clear_legacy(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(chassis_clear, S_IWUSR, NULL, chassis_clear_legacy);
static ssize_t chassis_clear(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(intrusion0_alarm, S_IRUGO | S_IWUSR, show_alarm,
chassis_clear, 12);
static struct attribute *adm9240_attributes[] = ;
static const struct attribute_group adm9240_group = ;
static int adm9240_detect(struct i2c_client *new_client,
struct i2c_board_info *info)
static int adm9240_probe(struct i2c_client *new_client,
const struct i2c_device_id *id)
static int adm9240_remove(struct i2c_client *client)
static void adm9240_init_client(struct i2c_client *client)
static struct adm9240_data *adm9240_update_device(struct device *dev)
static int __init sensors_adm9240_init(void)
static void __exit sensors_adm9240_exit(void)
MODULE_AUTHOR("Michiel Rook <michiel@grendelproject.nl>, "
"Grant Coady <gcoady.lk@gmail.com> and others");
MODULE_DESCRIPTION("ADM9240/DS1780/LM81 driver");
MODULE_LICENSE("GPL");
module_init(sensors_adm9240_init);
module_exit(sensors_adm9240_exit);
