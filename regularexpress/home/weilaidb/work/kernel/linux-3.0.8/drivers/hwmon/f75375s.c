static const unsigned short normal_i2c[] = ;
enum chips ;
#define F75375_REG_CONFIG0		0x0
#define F75375_REG_CONFIG1		0x1
#define F75375_REG_CONFIG2		0x2
#define F75375_REG_CONFIG3		0x3
#define F75375_REG_ADDR			0x4
#define F75375_REG_INTR			0x31
#define F75375_CHIP_ID			0x5A
#define F75375_REG_VERSION		0x5C
#define F75375_REG_VENDOR		0x5D
#define F75375_REG_FAN_TIMER		0x60
#define F75375_REG_VOLT(nr)		(0x10 + (nr))
#define F75375_REG_VOLT_HIGH(nr)	(0x20 + (nr) * 2)
#define F75375_REG_VOLT_LOW(nr)		(0x21 + (nr) * 2)
#define F75375_REG_TEMP(nr)		(0x14 + (nr))
#define F75375_REG_TEMP_HIGH(nr)	(0x28 + (nr) * 2)
#define F75375_REG_TEMP_HYST(nr)	(0x29 + (nr) * 2)
#define F75375_REG_FAN(nr)		(0x16 + (nr) * 2)
#define F75375_REG_FAN_MIN(nr)		(0x2C + (nr) * 2)
#define F75375_REG_FAN_FULL(nr)		(0x70 + (nr) * 0x10)
#define F75375_REG_FAN_PWM_DUTY(nr)	(0x76 + (nr) * 0x10)
#define F75375_REG_FAN_PWM_CLOCK(nr)	(0x7D + (nr) * 0x10)
#define F75375_REG_FAN_EXP(nr)		(0x74 + (nr) * 0x10)
#define F75375_REG_FAN_B_TEMP(nr, step)	((0xA0 + (nr) * 0x10) + (step))
#define F75375_REG_FAN_B_SPEED(nr, step) \
((0xA5 + (nr) * 0x10) + (step) * 2)
#define F75375_REG_PWM1_RAISE_DUTY	0x69
#define F75375_REG_PWM2_RAISE_DUTY	0x6A
#define F75375_REG_PWM1_DROP_DUTY	0x6B
#define F75375_REG_PWM2_DROP_DUTY	0x6C
#define FAN_CTRL_LINEAR(nr)		(4 + nr)
#define FAN_CTRL_MODE(nr)		(4 + ((nr) * 2))
struct f75375_data ;
static int f75375_detect(struct i2c_client *client,
struct i2c_board_info *info);
static int f75375_probe(struct i2c_client *client,
const struct i2c_device_id *id);
static int f75375_remove(struct i2c_client *client);
static const struct i2c_device_id f75375_id[] = ;
MODULE_DEVICE_TABLE(i2c, f75375_id);
static struct i2c_driver f75375_driver = ;
static inline int f75375_read8(struct i2c_client *client, u8 reg)
static inline u16 f75375_read16(struct i2c_client *client, u8 reg)
static inline void f75375_write8(struct i2c_client *client, u8 reg,
u8 value)
static inline void f75375_write16(struct i2c_client *client, u8 reg,
u16 value)
static struct f75375_data *f75375_update_device(struct device *dev)
static inline u16 rpm_from_reg(u16 reg)
static inline u16 rpm_to_reg(int rpm)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_exp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_enable(struct device *dev, struct device_attribute
*attr, char *buf)
static int set_pwm_enable_direct(struct i2c_client *client, int nr, int val)
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_pwm_mode(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm(struct device *dev, struct device_attribute
*attr, char *buf)
static ssize_t show_pwm_mode(struct device *dev, struct device_attribute
*attr, char *buf)
#define VOLT_FROM_REG(val) ((val) * 8)
#define VOLT_TO_REG(val) ((val) / 8)
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define TEMP_FROM_REG(val) ((val) * 1000)
#define TEMP_TO_REG(val) ((val) / 1000)
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_max_hyst(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_max_hyst(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define show_fan(thing) \
static ssize_t show_##thing(struct device *dev, struct device_attribute *attr, \
char *buf)\
show_fan(fan);
show_fan(fan_min);
show_fan(fan_full);
show_fan(fan_exp);
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_in, NULL, 0);
static SENSOR_DEVICE_ATTR(in0_max, S_IRUGO|S_IWUSR,
show_in_max, set_in_max, 0);
static SENSOR_DEVICE_ATTR(in0_min, S_IRUGO|S_IWUSR,
show_in_min, set_in_min, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in, NULL, 1);
static SENSOR_DEVICE_ATTR(in1_max, S_IRUGO|S_IWUSR,
show_in_max, set_in_max, 1);
static SENSOR_DEVICE_ATTR(in1_min, S_IRUGO|S_IWUSR,
show_in_min, set_in_min, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in, NULL, 2);
static SENSOR_DEVICE_ATTR(in2_max, S_IRUGO|S_IWUSR,
show_in_max, set_in_max, 2);
static SENSOR_DEVICE_ATTR(in2_min, S_IRUGO|S_IWUSR,
show_in_min, set_in_min, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in, NULL, 3);
static SENSOR_DEVICE_ATTR(in3_max, S_IRUGO|S_IWUSR,
show_in_max, set_in_max, 3);
static SENSOR_DEVICE_ATTR(in3_min, S_IRUGO|S_IWUSR,
show_in_min, set_in_min, 3);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IRUGO|S_IWUSR,
show_temp_max_hyst, set_temp_max_hyst, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO|S_IWUSR,
show_temp_max, set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_max_hyst, S_IRUGO|S_IWUSR,
show_temp_max_hyst, set_temp_max_hyst, 1);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO|S_IWUSR,
show_temp_max, set_temp_max, 1);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_full, S_IRUGO, show_fan_full, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO|S_IWUSR,
show_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan1_exp, S_IRUGO|S_IWUSR,
show_fan_exp, set_fan_exp, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_full, S_IRUGO, show_fan_full, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO|S_IWUSR,
show_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan2_exp, S_IRUGO|S_IWUSR,
show_fan_exp, set_fan_exp, 1);
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO|S_IWUSR,
show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IRUGO|S_IWUSR,
show_pwm_enable, set_pwm_enable, 0);
static SENSOR_DEVICE_ATTR(pwm1_mode, S_IRUGO,
show_pwm_mode, set_pwm_mode, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IRUGO | S_IWUSR,
show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IRUGO|S_IWUSR,
show_pwm_enable, set_pwm_enable, 1);
static SENSOR_DEVICE_ATTR(pwm2_mode, S_IRUGO,
show_pwm_mode, set_pwm_mode, 1);
static struct attribute *f75375_attributes[] = ;
static const struct attribute_group f75375_group = ;
static void f75375_init(struct i2c_client *client, struct f75375_data *data,
struct f75375s_platform_data *f75375s_pdata)
static int f75375_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int f75375_remove(struct i2c_client *client)
static int f75375_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int __init sensors_f75375_init(void)
static void __exit sensors_f75375_exit(void)
MODULE_AUTHOR("Riku Voipio");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("F75373/F75375 hardware monitoring driver");
module_init(sensors_f75375_init);
module_exit(sensors_f75375_exit);
