#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define DRVNAME "f71805f"
enum kinds ;
#define F71805F_LD_HWM		0x04
#define SIO_REG_LDSEL		0x07
#define SIO_REG_DEVID		0x20
#define SIO_REG_DEVREV		0x22
#define SIO_REG_MANID		0x23
#define SIO_REG_FNSEL1		0x29
#define SIO_REG_ENABLE		0x30
#define SIO_REG_ADDR		0x60
#define SIO_FINTEK_ID		0x1934
#define SIO_F71805F_ID		0x0406
#define SIO_F71872F_ID		0x0341
static inline int
superio_inb(int base, int reg)
static int
superio_inw(int base, int reg)
static inline void
superio_select(int base, int ld)
static inline void
superio_enter(int base)
static inline void
superio_exit(int base)
#define REGION_LENGTH		8
#define ADDR_REG_OFFSET		5
#define DATA_REG_OFFSET		6
#define F71805F_REG_IN(nr)		(0x10 + (nr))
#define F71805F_REG_IN_HIGH(nr)		((nr) < 10 ? 0x40 + 2 * (nr) : 0x2E)
#define F71805F_REG_IN_LOW(nr)		((nr) < 10 ? 0x41 + 2 * (nr) : 0x2F)
#define F71805F_REG_FAN(nr)		(0x20 + 2 * (nr))
#define F71805F_REG_FAN_LOW(nr)		(0x28 + 2 * (nr))
#define F71805F_REG_FAN_TARGET(nr)	(0x69 + 16 * (nr))
#define F71805F_REG_FAN_CTRL(nr)	(0x60 + 16 * (nr))
#define F71805F_REG_PWM_FREQ(nr)	(0x63 + 16 * (nr))
#define F71805F_REG_PWM_DUTY(nr)	(0x6B + 16 * (nr))
#define F71805F_REG_TEMP(nr)		(0x1B + (nr))
#define F71805F_REG_TEMP_HIGH(nr)	(0x54 + 2 * (nr))
#define F71805F_REG_TEMP_HYST(nr)	(0x55 + 2 * (nr))
#define F71805F_REG_TEMP_MODE		0x01
#define F71805F_REG_PWM_AUTO_POINT_TEMP(pwmnr, apnr) \
(0xA0 + 0x10 * (pwmnr) + (2 - (apnr)))
#define F71805F_REG_PWM_AUTO_POINT_FAN(pwmnr, apnr) \
(0xA4 + 0x10 * (pwmnr) + \
2 * (2 - (apnr)))
#define F71805F_REG_START		0x00
#define F71805F_REG_STATUS(nr)		(0x36 + (nr))
#define FAN_CTRL_DC_MODE		0x10
#define FAN_CTRL_LATCH_FULL		0x08
#define FAN_CTRL_MODE_MASK		0x03
#define FAN_CTRL_MODE_SPEED		0x00
#define FAN_CTRL_MODE_TEMPERATURE	0x01
#define FAN_CTRL_MODE_MANUAL		0x02
struct f71805f_auto_point ;
struct f71805f_data ;
struct f71805f_sio_data ;
static inline long in_from_reg(u8 reg)
static inline u8 in_to_reg(long val)
static inline long in0_from_reg(u8 reg)
static inline u8 in0_to_reg(long val)
static inline long fan_from_reg(u16 reg)
static inline u16 fan_to_reg(long rpm)
static inline unsigned long pwm_freq_from_reg(u8 reg)
static inline u8 pwm_freq_to_reg(unsigned long val)
static inline int pwm_mode_from_reg(u8 reg)
static inline long temp_from_reg(u8 reg)
static inline u8 temp_to_reg(long val)
static u8 f71805f_read8(struct f71805f_data *data, u8 reg)
static void f71805f_write8(struct f71805f_data *data, u8 reg, u8 val)
static u16 f71805f_read16(struct f71805f_data *data, u8 reg)
static void f71805f_write16(struct f71805f_data *data, u8 reg, u16 val)
static struct f71805f_data *f71805f_update_device(struct device *dev)
static ssize_t show_in0(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_in0_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_in0_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_in0_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_in0_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_in(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_in_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_in_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_fan(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_fan_target(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_fan_target(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_pwm_enable(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_pwm_freq(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_pwm_mode(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static struct attribute *f71805f_attr_pwm[];
static ssize_t set_pwm_enable(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_pwm_freq(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr,
char* buf)
static ssize_t set_pwm_auto_point_temp(struct device *dev,
struct device_attribute *devattr,
const char* buf, size_t count)
static ssize_t show_pwm_auto_point_fan(struct device *dev,
struct device_attribute *devattr,
char* buf)
static ssize_t set_pwm_auto_point_fan(struct device *dev,
struct device_attribute *devattr,
const char* buf, size_t count)
static ssize_t show_temp(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_hyst(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp_type(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t set_temp_hyst(struct device *dev, struct device_attribute
*devattr, const char *buf, size_t count)
static ssize_t show_alarms_in(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_alarms_fan(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_alarms_temp(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_alarm(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_in0, NULL, 0);
static SENSOR_DEVICE_ATTR(in0_max, S_IRUGO| S_IWUSR,
show_in0_max, set_in0_max, 0);
static SENSOR_DEVICE_ATTR(in0_min, S_IRUGO| S_IWUSR,
show_in0_min, set_in0_min, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_in, NULL, 1);
static SENSOR_DEVICE_ATTR(in1_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 1);
static SENSOR_DEVICE_ATTR(in1_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_in, NULL, 2);
static SENSOR_DEVICE_ATTR(in2_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 2);
static SENSOR_DEVICE_ATTR(in2_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_in, NULL, 3);
static SENSOR_DEVICE_ATTR(in3_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 3);
static SENSOR_DEVICE_ATTR(in3_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_in, NULL, 4);
static SENSOR_DEVICE_ATTR(in4_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 4);
static SENSOR_DEVICE_ATTR(in4_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_in, NULL, 5);
static SENSOR_DEVICE_ATTR(in5_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 5);
static SENSOR_DEVICE_ATTR(in5_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_in, NULL, 6);
static SENSOR_DEVICE_ATTR(in6_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 6);
static SENSOR_DEVICE_ATTR(in6_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, show_in, NULL, 7);
static SENSOR_DEVICE_ATTR(in7_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 7);
static SENSOR_DEVICE_ATTR(in7_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 7);
static SENSOR_DEVICE_ATTR(in8_input, S_IRUGO, show_in, NULL, 8);
static SENSOR_DEVICE_ATTR(in8_max, S_IRUGO | S_IWUSR,
show_in_max, set_in_max, 8);
static SENSOR_DEVICE_ATTR(in8_min, S_IRUGO | S_IWUSR,
show_in_min, set_in_min, 8);
static SENSOR_DEVICE_ATTR(in9_input, S_IRUGO, show_in0, NULL, 9);
static SENSOR_DEVICE_ATTR(in9_max, S_IRUGO | S_IWUSR,
show_in0_max, set_in0_max, 9);
static SENSOR_DEVICE_ATTR(in9_min, S_IRUGO | S_IWUSR,
show_in0_min, set_in0_min, 9);
static SENSOR_DEVICE_ATTR(in10_input, S_IRUGO, show_in0, NULL, 10);
static SENSOR_DEVICE_ATTR(in10_max, S_IRUGO | S_IWUSR,
show_in0_max, set_in0_max, 10);
static SENSOR_DEVICE_ATTR(in10_min, S_IRUGO | S_IWUSR,
show_in0_min, set_in0_min, 10);
static SENSOR_DEVICE_ATTR(fan1_input, S_IRUGO, show_fan, NULL, 0);
static SENSOR_DEVICE_ATTR(fan1_min, S_IRUGO | S_IWUSR,
show_fan_min, set_fan_min, 0);
static SENSOR_DEVICE_ATTR(fan1_target, S_IRUGO | S_IWUSR,
show_fan_target, set_fan_target, 0);
static SENSOR_DEVICE_ATTR(fan2_input, S_IRUGO, show_fan, NULL, 1);
static SENSOR_DEVICE_ATTR(fan2_min, S_IRUGO | S_IWUSR,
show_fan_min, set_fan_min, 1);
static SENSOR_DEVICE_ATTR(fan2_target, S_IRUGO | S_IWUSR,
show_fan_target, set_fan_target, 1);
static SENSOR_DEVICE_ATTR(fan3_input, S_IRUGO, show_fan, NULL, 2);
static SENSOR_DEVICE_ATTR(fan3_min, S_IRUGO | S_IWUSR,
show_fan_min, set_fan_min, 2);
static SENSOR_DEVICE_ATTR(fan3_target, S_IRUGO | S_IWUSR,
show_fan_target, set_fan_target, 2);
static SENSOR_DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR,
show_temp_max, set_temp_max, 0);
static SENSOR_DEVICE_ATTR(temp1_max_hyst, S_IRUGO | S_IWUSR,
show_temp_hyst, set_temp_hyst, 0);
static SENSOR_DEVICE_ATTR(temp1_type, S_IRUGO, show_temp_type, NULL, 0);
static SENSOR_DEVICE_ATTR(temp2_input, S_IRUGO, show_temp, NULL, 1);
static SENSOR_DEVICE_ATTR(temp2_max, S_IRUGO | S_IWUSR,
show_temp_max, set_temp_max, 1);
static SENSOR_DEVICE_ATTR(temp2_max_hyst, S_IRUGO | S_IWUSR,
show_temp_hyst, set_temp_hyst, 1);
static SENSOR_DEVICE_ATTR(temp2_type, S_IRUGO, show_temp_type, NULL, 1);
static SENSOR_DEVICE_ATTR(temp3_input, S_IRUGO, show_temp, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_max, S_IRUGO | S_IWUSR,
show_temp_max, set_temp_max, 2);
static SENSOR_DEVICE_ATTR(temp3_max_hyst, S_IRUGO | S_IWUSR,
show_temp_hyst, set_temp_hyst, 2);
static SENSOR_DEVICE_ATTR(temp3_type, S_IRUGO, show_temp_type, NULL, 2);
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO, show_pwm, set_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IRUGO | S_IWUSR,
show_pwm_enable, set_pwm_enable, 0);
static SENSOR_DEVICE_ATTR(pwm1_freq, S_IRUGO | S_IWUSR,
show_pwm_freq, set_pwm_freq, 0);
static SENSOR_DEVICE_ATTR(pwm1_mode, S_IRUGO, show_pwm_mode, NULL, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IRUGO, show_pwm, set_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IRUGO | S_IWUSR,
show_pwm_enable, set_pwm_enable, 1);
static SENSOR_DEVICE_ATTR(pwm2_freq, S_IRUGO | S_IWUSR,
show_pwm_freq, set_pwm_freq, 1);
static SENSOR_DEVICE_ATTR(pwm2_mode, S_IRUGO, show_pwm_mode, NULL, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IRUGO, show_pwm, set_pwm, 2);
static SENSOR_DEVICE_ATTR(pwm3_enable, S_IRUGO | S_IWUSR,
show_pwm_enable, set_pwm_enable, 2);
static SENSOR_DEVICE_ATTR(pwm3_freq, S_IRUGO | S_IWUSR,
show_pwm_freq, set_pwm_freq, 2);
static SENSOR_DEVICE_ATTR(pwm3_mode, S_IRUGO, show_pwm_mode, NULL, 2);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point1_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
0, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point1_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
0, 0);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point2_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
0, 1);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point2_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
0, 1);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point3_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
0, 2);
static SENSOR_DEVICE_ATTR_2(pwm1_auto_point3_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
0, 2);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point1_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
1, 0);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point1_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
1, 0);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point2_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
1, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point2_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
1, 1);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point3_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
1, 2);
static SENSOR_DEVICE_ATTR_2(pwm2_auto_point3_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
1, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point1_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
2, 0);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point1_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
2, 0);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point2_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
2, 1);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point2_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
2, 1);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point3_temp, S_IRUGO | S_IWUSR,
show_pwm_auto_point_temp, set_pwm_auto_point_temp,
2, 2);
static SENSOR_DEVICE_ATTR_2(pwm3_auto_point3_fan, S_IRUGO | S_IWUSR,
show_pwm_auto_point_fan, set_pwm_auto_point_fan,
2, 2);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in9_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in10_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 13);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 18);
static DEVICE_ATTR(alarms_in, S_IRUGO, show_alarms_in, NULL);
static DEVICE_ATTR(alarms_fan, S_IRUGO, show_alarms_fan, NULL);
static DEVICE_ATTR(alarms_temp, S_IRUGO, show_alarms_temp, NULL);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *f71805f_attributes[] = ;
static const struct attribute_group f71805f_group = ;
static struct attribute *f71805f_attributes_optin[4][5] = ;
static const struct attribute_group f71805f_group_optin[4] = ;
static struct attribute *f71805f_attributes_pwm_freq[] = ;
static const struct attribute_group f71805f_group_pwm_freq = ;
static struct attribute *f71805f_attr_pwm[] = ;
static void __devinit f71805f_init_device(struct f71805f_data *data)
static int __devinit f71805f_probe(struct platform_device *pdev)
static int __devexit f71805f_remove(struct platform_device *pdev)
static struct platform_driver f71805f_driver = ;
static int __init f71805f_device_add(unsigned short address,
const struct f71805f_sio_data *sio_data)
static int __init f71805f_find(int sioaddr, unsigned short *address,
struct f71805f_sio_data *sio_data)
static int __init f71805f_init(void)
static void __exit f71805f_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("F71805F/F71872F hardware monitoring driver");
module_init(f71805f_init);
module_exit(f71805f_exit);
