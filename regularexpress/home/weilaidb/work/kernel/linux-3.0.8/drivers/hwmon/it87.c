#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRVNAME "it87"
enum chips ;
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define	REG	0x2e
#define	DEV	0x07
#define	VAL	0x2f
#define PME	0x04
#define GPIO	0x07
#define	DEVID	0x20
#define	DEVREV	0x22
static inline int superio_inb(int reg)
static inline void superio_outb(int reg, int val)
static int superio_inw(int reg)
static inline void superio_select(int ldn)
static inline int superio_enter(void)
static inline void superio_exit(void)
#define IT8712F_DEVID 0x8712
#define IT8705F_DEVID 0x8705
#define IT8716F_DEVID 0x8716
#define IT8718F_DEVID 0x8718
#define IT8720F_DEVID 0x8720
#define IT8721F_DEVID 0x8721
#define IT8726F_DEVID 0x8726
#define IT87_ACT_REG  0x30
#define IT87_BASE_REG 0x60
#define IT87_SIO_GPIO3_REG	0x27
#define IT87_SIO_GPIO5_REG	0x29
#define IT87_SIO_PINX2_REG	0x2c
#define IT87_SIO_VID_REG	0xfc
#define IT87_SIO_BEEP_PIN_REG	0xf6
static int update_vbat;
static int fix_pwm_polarity;
#define IT87_EXTENT 8
#define IT87_EC_EXTENT 2
#define IT87_EC_OFFSET 5
#define IT87_ADDR_REG_OFFSET 0
#define IT87_DATA_REG_OFFSET 1
#define IT87_REG_CONFIG        0x00
#define IT87_REG_ALARM1        0x01
#define IT87_REG_ALARM2        0x02
#define IT87_REG_ALARM3        0x03
#define IT87_REG_VID           0x0a
#define IT87_REG_FAN_DIV       0x0b
#define IT87_REG_FAN_16BIT     0x0c
static const u8 IT87_REG_FAN[]		= ;
static const u8 IT87_REG_FAN_MIN[]	= ;
static const u8 IT87_REG_FANX[]		= ;
static const u8 IT87_REG_FANX_MIN[]	= ;
#define IT87_REG_FAN_MAIN_CTRL 0x13
#define IT87_REG_FAN_CTL       0x14
#define IT87_REG_PWM(nr)       (0x15 + (nr))
#define IT87_REG_PWM_DUTY(nr)  (0x63 + (nr) * 8)
#define IT87_REG_VIN(nr)       (0x20 + (nr))
#define IT87_REG_TEMP(nr)      (0x29 + (nr))
#define IT87_REG_VIN_MAX(nr)   (0x30 + (nr) * 2)
#define IT87_REG_VIN_MIN(nr)   (0x31 + (nr) * 2)
#define IT87_REG_TEMP_HIGH(nr) (0x40 + (nr) * 2)
#define IT87_REG_TEMP_LOW(nr)  (0x41 + (nr) * 2)
#define IT87_REG_VIN_ENABLE    0x50
#define IT87_REG_TEMP_ENABLE   0x51
#define IT87_REG_BEEP_ENABLE   0x5c
#define IT87_REG_CHIPID        0x58
#define IT87_REG_AUTO_TEMP(nr, i) (0x60 + (nr) * 8 + (i))
#define IT87_REG_AUTO_PWM(nr, i)  (0x65 + (nr) * 8 + (i))
struct it87_sio_data ;
struct it87_data ;
static u8 in_to_reg(const struct it87_data *data, int nr, long val)
static int in_from_reg(const struct it87_data *data, int nr, int val)
static inline u8 FAN_TO_REG(long rpm, int div)
static inline u16 FAN16_TO_REG(long rpm)
#define FAN_FROM_REG(val, div) ((val) == 0 ? -1 : (val) == 255 ? 0 : \
1350000 / ((val) * (div)))
#define FAN16_FROM_REG(val) ((val) == 0 ? -1 : (val) == 0xffff ? 0 : \
1350000 / ((val) * 2))
#define TEMP_TO_REG(val) (SENSORS_LIMIT(((val) < 0 ? (((val) - 500) / 1000) : \
((val) + 500) / 1000), -128, 127))
#define TEMP_FROM_REG(val) ((val) * 1000)
static u8 pwm_to_reg(const struct it87_data *data, long val)
static int pwm_from_reg(const struct it87_data *data, u8 reg)
static int DIV_TO_REG(int val)
#define DIV_FROM_REG(val) (1 << (val))
static const unsigned int pwm_freq[8] = ;
static inline int has_16bit_fans(const struct it87_data *data)
static inline int has_old_autopwm(const struct it87_data *data)
static int it87_probe(struct platform_device *pdev);
static int __devexit it87_remove(struct platform_device *pdev);
static int it87_read_value(struct it87_data *data, u8 reg);
static void it87_write_value(struct it87_data *data, u8 reg, u8 value);
static struct it87_data *it87_update_device(struct device *dev);
static int it87_check_pwm(struct device *dev);
static void it87_init_device(struct platform_device *pdev);
static struct platform_driver it87_driver = ;
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);
#define limit_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
show_in_offset(0);
limit_in_offset(0);
show_in_offset(1);
limit_in_offset(1);
show_in_offset(2);
limit_in_offset(2);
show_in_offset(3);
limit_in_offset(3);
show_in_offset(4);
limit_in_offset(4);
show_in_offset(5);
limit_in_offset(5);
show_in_offset(6);
limit_in_offset(6);
show_in_offset(7);
limit_in_offset(7);
show_in_offset(8);
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_temp_offset(offset)					\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_min, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1);
show_temp_offset(1);
show_temp_offset(2);
show_temp_offset(3);
static ssize_t show_sensor(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_sensor(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_sensor_offset(offset)					\
static SENSOR_DEVICE_ATTR(temp##offset##_type, S_IRUGO | S_IWUSR,	\
show_sensor, set_sensor, offset - 1);
show_sensor_offset(1);
show_sensor_offset(2);
show_sensor_offset(3);
static int pwm_mode(const struct it87_data *data, int nr)
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_pwm_enable(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_pwm_freq(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static int check_trip_points(struct device *dev, int nr)
static ssize_t set_pwm_enable(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_pwm_freq(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_pwm_temp_map(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_pwm_temp_map(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_auto_pwm(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_auto_pwm(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static ssize_t show_auto_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t set_auto_temp(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
#define show_fan_offset(offset)					\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,		\
show_fan, NULL, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR, \
show_fan_min, set_fan_min, offset - 1);		\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR, \
show_fan_div, set_fan_div, offset - 1);
show_fan_offset(1);
show_fan_offset(2);
show_fan_offset(3);
#define show_pwm_offset(offset)						\
static SENSOR_DEVICE_ATTR(pwm##offset##_enable, S_IRUGO | S_IWUSR,	\
show_pwm_enable, set_pwm_enable, offset - 1);		\
static SENSOR_DEVICE_ATTR(pwm##offset, S_IRUGO | S_IWUSR,		\
show_pwm, set_pwm, offset - 1);				\
static DEVICE_ATTR(pwm##offset##_freq,					\
(offset == 1 ? S_IRUGO | S_IWUSR : S_IRUGO),		\
show_pwm_freq, (offset == 1 ? set_pwm_freq : NULL));	\
static SENSOR_DEVICE_ATTR(pwm##offset##_auto_channels_temp,		\
S_IRUGO | S_IWUSR, show_pwm_temp_map, set_pwm_temp_map,	\
offset - 1);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point1_pwm,		\
S_IRUGO | S_IWUSR, show_auto_pwm, set_auto_pwm,		\
offset - 1, 0);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point2_pwm,		\
S_IRUGO | S_IWUSR, show_auto_pwm, set_auto_pwm,		\
offset - 1, 1);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point3_pwm,		\
S_IRUGO | S_IWUSR, show_auto_pwm, set_auto_pwm,		\
offset - 1, 2);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point4_pwm,		\
S_IRUGO, show_auto_pwm, NULL, offset - 1, 3);		\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point1_temp,		\
S_IRUGO | S_IWUSR, show_auto_temp, set_auto_temp,	\
offset - 1, 1);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point1_temp_hyst,	\
S_IRUGO | S_IWUSR, show_auto_temp, set_auto_temp,	\
offset - 1, 0);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point2_temp,		\
S_IRUGO | S_IWUSR, show_auto_temp, set_auto_temp,	\
offset - 1, 2);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point3_temp,		\
S_IRUGO | S_IWUSR, show_auto_temp, set_auto_temp,	\
offset - 1, 3);						\
static SENSOR_DEVICE_ATTR_2(pwm##offset##_auto_point4_temp,		\
S_IRUGO | S_IWUSR, show_auto_temp, set_auto_temp,	\
offset - 1, 4);
show_pwm_offset(1);
show_pwm_offset(2);
show_pwm_offset(3);
static ssize_t show_fan16(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan16_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan16_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define show_fan16_offset(offset) \
static struct sensor_device_attribute sensor_dev_attr_fan##offset##_input16 \
= SENSOR_ATTR(fan##offset##_input, S_IRUGO,		\
show_fan16, NULL, offset - 1);			\
static struct sensor_device_attribute sensor_dev_attr_fan##offset##_min16 \
= SENSOR_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,	\
show_fan16_min, set_fan16_min, offset - 1)
show_fan16_offset(1);
show_fan16_offset(2);
show_fan16_offset(3);
show_fan16_offset(4);
show_fan16_offset(5);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 12);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 13);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 14);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(fan4_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(fan5_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 18);
static ssize_t show_beep(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in0_beep, S_IRUGO | S_IWUSR,
show_beep, set_beep, 1);
static SENSOR_DEVICE_ATTR(in1_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in4_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in5_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in6_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(in7_beep, S_IRUGO, show_beep, NULL, 1);
static SENSOR_DEVICE_ATTR(fan1_beep, S_IRUGO, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(fan2_beep, S_IRUGO, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(fan3_beep, S_IRUGO, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(fan4_beep, S_IRUGO, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(fan5_beep, S_IRUGO, show_beep, set_beep, 0);
static SENSOR_DEVICE_ATTR(temp1_beep, S_IRUGO | S_IWUSR,
show_beep, set_beep, 2);
static SENSOR_DEVICE_ATTR(temp2_beep, S_IRUGO, show_beep, NULL, 2);
static SENSOR_DEVICE_ATTR(temp3_beep, S_IRUGO, show_beep, NULL, 2);
static ssize_t show_vrm_reg(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t store_vrm_reg(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
static ssize_t show_vid_reg(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t show_label(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in3_label, S_IRUGO, show_label, NULL, 0);
static SENSOR_DEVICE_ATTR(in7_label, S_IRUGO, show_label, NULL, 1);
static SENSOR_DEVICE_ATTR(in8_label, S_IRUGO, show_label, NULL, 2);
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *it87_attributes[] = ;
static const struct attribute_group it87_group = ;
static struct attribute *it87_attributes_beep[] = ;
static const struct attribute_group it87_group_beep = ;
static struct attribute *it87_attributes_fan16[5][3+1] = ;
static const struct attribute_group it87_group_fan16[5] = ;
static struct attribute *it87_attributes_fan[3][4+1] = ;
static const struct attribute_group it87_group_fan[3] = ;
static const struct attribute_group *
it87_get_fan_group(const struct it87_data *data)
static struct attribute *it87_attributes_pwm[3][4+1] = ;
static const struct attribute_group it87_group_pwm[3] = ;
static struct attribute *it87_attributes_autopwm[3][9+1] = ;
static const struct attribute_group it87_group_autopwm[3] = ;
static struct attribute *it87_attributes_fan_beep[] = ;
static struct attribute *it87_attributes_vid[] = ;
static const struct attribute_group it87_group_vid = ;
static struct attribute *it87_attributes_label[] = ;
static const struct attribute_group it87_group_label = ;
static int __init it87_find(unsigned short *address,
struct it87_sio_data *sio_data)
static void it87_remove_files(struct device *dev)
static int __devinit it87_probe(struct platform_device *pdev)
static int __devexit it87_remove(struct platform_device *pdev)
static int it87_read_value(struct it87_data *data, u8 reg)
static void it87_write_value(struct it87_data *data, u8 reg, u8 value)
static int __devinit it87_check_pwm(struct device *dev)
static void __devinit it87_init_device(struct platform_device *pdev)
static void it87_update_pwm_ctrl(struct it87_data *data, int nr)
static struct it87_data *it87_update_device(struct device *dev)
static int __init it87_device_add(unsigned short address,
const struct it87_sio_data *sio_data)
static int __init sm_it87_init(void)
static void __exit sm_it87_exit(void)
MODULE_AUTHOR("Chris Gauthron, "
"Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("IT8705F/IT871xF/IT872xF hardware monitoring driver");
module_param(update_vbat, bool, 0);
MODULE_PARM_DESC(update_vbat, "Update vbat if set else return powerup value");
module_param(fix_pwm_polarity, bool, 0);
MODULE_PARM_DESC(fix_pwm_polarity,
"Force PWM polarity to active high (DANGEROUS)");
MODULE_LICENSE("GPL");
module_init(sm_it87_init);
module_exit(sm_it87_exit);
