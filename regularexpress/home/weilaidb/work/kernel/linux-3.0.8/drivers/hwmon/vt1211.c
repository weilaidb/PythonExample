#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int uch_config = -1;
module_param(uch_config, int, 0);
MODULE_PARM_DESC(uch_config, "Initialize the universal channel configuration");
static int int_mode = -1;
module_param(int_mode, int, 0);
MODULE_PARM_DESC(int_mode, "Force the temperature interrupt mode");
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static struct platform_device *pdev;
#define DRVNAME "vt1211"
#define VT1211_REG_IN(ix)		(0x21 + (ix))
#define VT1211_REG_IN_MIN(ix)		((ix) == 0 ? 0x3e : 0x2a + 2 * (ix))
#define VT1211_REG_IN_MAX(ix)		((ix) == 0 ? 0x3d : 0x29 + 2 * (ix))
static u8 regtemp[]	= ;
static u8 regtempmax[]	= ;
static u8 regtemphyst[]	= ;
#define VT1211_REG_FAN(ix)		(0x29 + (ix))
#define VT1211_REG_FAN_MIN(ix)		(0x3b + (ix))
#define VT1211_REG_FAN_DIV		 0x47
#define VT1211_REG_PWM(ix)		(0x60 + (ix))
#define VT1211_REG_PWM_CLK		 0x50
#define VT1211_REG_PWM_CTL		 0x51
#define VT1211_REG_PWM_AUTO_TEMP(ap)	(0x55 - (ap))
#define VT1211_REG_PWM_AUTO_PWM(ix, ap)	(0x58 + 2 * (ix) - (ap))
#define VT1211_REG_CONFIG		0x40
#define VT1211_REG_ALARM1		0x41
#define VT1211_REG_ALARM2		0x42
#define VT1211_REG_VID			0x45
#define VT1211_REG_UCH_CONFIG		0x4a
#define VT1211_REG_TEMP1_CONFIG		0x4b
#define VT1211_REG_TEMP2_CONFIG		0x4c
static const u8 bitalarmin[]	= ;
static const u8 bitalarmtemp[]	= ;
static const u8 bitalarmfan[]	= ;
struct vt1211_data ;
#define ISVOLT(ix, uch_config)	((ix) > 4 ? 1 : \
!(((uch_config) >> ((ix) + 2)) & 1))
#define ISTEMP(ix, uch_config)	((ix) < 2 ? 1 : \
((uch_config) >> (ix)) & 1)
#define IN_FROM_REG(ix, reg)	((reg) < 3 ? 0 : (ix) == 5 ? \
(((reg) - 3) * 15882 + 479) / 958 : \
(((reg) - 3) * 10000 + 479) / 958)
#define IN_TO_REG(ix, val)	(SENSORS_LIMIT((ix) == 5 ? \
((val) * 958 + 7941) / 15882 + 3 : \
((val) * 958 + 5000) / 10000 + 3, 0, 255))
#define TEMP_FROM_REG(ix, reg)	((ix) == 0 ? (reg) * 1000 : \
(ix) == 1 ? (reg) < 51 ? 0 : \
((reg) - 51) * 1000 : \
((253 - (reg)) * 2200 + 105) / 210)
#define TEMP_TO_REG(ix, val)	SENSORS_LIMIT( \
((ix) == 0 ? ((val) + 500) / 1000 : \
(ix) == 1 ? ((val) + 500) / 1000 + 51 : \
253 - ((val) * 210 + 1100) / 2200), 0, 255)
#define DIV_FROM_REG(reg)	(1 << (reg))
#define RPM_FROM_REG(reg, div)	(((reg) == 0) || ((reg) == 255) ? 0 : \
1310720 / (reg) / DIV_FROM_REG(div))
#define RPM_TO_REG(val, div)	((val) == 0 ? 255 : \
SENSORS_LIMIT((1310720 / (val) / \
DIV_FROM_REG(div)), 1, 254))
#define SIO_REG_CIP1		0x2e
#define SIO_REG_CIP2		0x4e
#define SIO_VT1211_LDN		0x07
#define SIO_VT1211_DEVID	0x20
#define SIO_VT1211_DEVREV	0x21
#define SIO_VT1211_ACTIVE	0x30
#define SIO_VT1211_BADDR	0x60
#define SIO_VT1211_ID		0x3c
#define SIO_VT1211_LDN_HWMON	0x0b
static inline void superio_outb(int sio_cip, int reg, int val)
static inline int superio_inb(int sio_cip, int reg)
static inline void superio_select(int sio_cip, int ldn)
static inline void superio_enter(int sio_cip)
static inline void superio_exit(int sio_cip)
static inline u8 vt1211_read8(struct vt1211_data *data, u8 reg)
static inline void vt1211_write8(struct vt1211_data *data, u8 reg, u8 val)
static struct vt1211_data *vt1211_update_device(struct device *dev)
#define SHOW_IN_INPUT	0
#define SHOW_SET_IN_MIN	1
#define SHOW_SET_IN_MAX	2
#define SHOW_IN_ALARM	3
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SHOW_TEMP_INPUT		0
#define SHOW_SET_TEMP_MAX	1
#define SHOW_SET_TEMP_MAX_HYST	2
#define SHOW_TEMP_ALARM		3
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SHOW_FAN_INPUT		0
#define SHOW_SET_FAN_MIN	1
#define SHOW_SET_FAN_DIV	2
#define SHOW_FAN_ALARM		3
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SHOW_PWM			0
#define SHOW_SET_PWM_ENABLE		1
#define SHOW_SET_PWM_FREQ		2
#define SHOW_SET_PWM_AUTO_CHANNELS_TEMP	3
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_auto_point_temp(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_pwm_auto_point_temp(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t set_pwm_auto_point_pwm(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_alarms(struct device *dev,
struct device_attribute *attr, char *buf)
#define SENSOR_ATTR_IN_INPUT(ix) \
SENSOR_ATTR_2(in##ix##_input, S_IRUGO, \
show_in, NULL, SHOW_IN_INPUT, ix)
static struct sensor_device_attribute_2 vt1211_sysfs_in_input[] = ;
#define SENSOR_ATTR_IN_MIN(ix) \
SENSOR_ATTR_2(in##ix##_min, S_IRUGO | S_IWUSR, \
show_in, set_in, SHOW_SET_IN_MIN, ix)
static struct sensor_device_attribute_2 vt1211_sysfs_in_min[] = ;
#define SENSOR_ATTR_IN_MAX(ix) \
SENSOR_ATTR_2(in##ix##_max, S_IRUGO | S_IWUSR, \
show_in, set_in, SHOW_SET_IN_MAX, ix)
static struct sensor_device_attribute_2 vt1211_sysfs_in_max[] = ;
#define SENSOR_ATTR_IN_ALARM(ix) \
SENSOR_ATTR_2(in##ix##_alarm, S_IRUGO, \
show_in, NULL, SHOW_IN_ALARM, ix)
static struct sensor_device_attribute_2 vt1211_sysfs_in_alarm[] = ;
#define SENSOR_ATTR_TEMP_INPUT(ix) \
SENSOR_ATTR_2(temp##ix##_input, S_IRUGO, \
show_temp, NULL, SHOW_TEMP_INPUT, ix-1)
static struct sensor_device_attribute_2 vt1211_sysfs_temp_input[] = ;
#define SENSOR_ATTR_TEMP_MAX(ix) \
SENSOR_ATTR_2(temp##ix##_max, S_IRUGO | S_IWUSR, \
show_temp, set_temp, SHOW_SET_TEMP_MAX, ix-1)
static struct sensor_device_attribute_2 vt1211_sysfs_temp_max[] = ;
#define SENSOR_ATTR_TEMP_MAX_HYST(ix) \
SENSOR_ATTR_2(temp##ix##_max_hyst, S_IRUGO | S_IWUSR, \
show_temp, set_temp, SHOW_SET_TEMP_MAX_HYST, ix-1)
static struct sensor_device_attribute_2 vt1211_sysfs_temp_max_hyst[] = ;
#define SENSOR_ATTR_TEMP_ALARM(ix) \
SENSOR_ATTR_2(temp##ix##_alarm, S_IRUGO, \
show_temp, NULL, SHOW_TEMP_ALARM, ix-1)
static struct sensor_device_attribute_2 vt1211_sysfs_temp_alarm[] = ;
#define SENSOR_ATTR_FAN(ix) \
SENSOR_ATTR_2(fan##ix##_input, S_IRUGO, \
show_fan, NULL, SHOW_FAN_INPUT, ix-1), \
SENSOR_ATTR_2(fan##ix##_min, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SHOW_SET_FAN_MIN, ix-1), \
SENSOR_ATTR_2(fan##ix##_div, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SHOW_SET_FAN_DIV, ix-1), \
SENSOR_ATTR_2(fan##ix##_alarm, S_IRUGO, \
show_fan, NULL, SHOW_FAN_ALARM, ix-1)
#define SENSOR_ATTR_PWM(ix) \
SENSOR_ATTR_2(pwm##ix, S_IRUGO, \
show_pwm, NULL, SHOW_PWM, ix-1), \
SENSOR_ATTR_2(pwm##ix##_enable, S_IRUGO | S_IWUSR, \
show_pwm, set_pwm, SHOW_SET_PWM_ENABLE, ix-1), \
SENSOR_ATTR_2(pwm##ix##_auto_channels_temp, S_IRUGO | S_IWUSR, \
show_pwm, set_pwm, SHOW_SET_PWM_AUTO_CHANNELS_TEMP, ix-1)
#define SENSOR_ATTR_PWM_FREQ(ix) \
SENSOR_ATTR_2(pwm##ix##_freq, S_IRUGO | S_IWUSR, \
show_pwm, set_pwm, SHOW_SET_PWM_FREQ, ix-1)
#define SENSOR_ATTR_PWM_FREQ_RO(ix) \
SENSOR_ATTR_2(pwm##ix##_freq, S_IRUGO, \
show_pwm, NULL, SHOW_SET_PWM_FREQ, ix-1)
#define SENSOR_ATTR_PWM_AUTO_POINT_TEMP(ix, ap) \
SENSOR_ATTR_2(pwm##ix##_auto_point##ap##_temp, S_IRUGO | S_IWUSR, \
show_pwm_auto_point_temp, set_pwm_auto_point_temp, \
ap-1, ix-1)
#define SENSOR_ATTR_PWM_AUTO_POINT_TEMP_RO(ix, ap) \
SENSOR_ATTR_2(pwm##ix##_auto_point##ap##_temp, S_IRUGO, \
show_pwm_auto_point_temp, NULL, \
ap-1, ix-1)
#define SENSOR_ATTR_PWM_AUTO_POINT_PWM(ix, ap) \
SENSOR_ATTR_2(pwm##ix##_auto_point##ap##_pwm, S_IRUGO | S_IWUSR, \
show_pwm_auto_point_pwm, set_pwm_auto_point_pwm, \
ap-1, ix-1)
#define SENSOR_ATTR_PWM_AUTO_POINT_PWM_RO(ix, ap) \
SENSOR_ATTR_2(pwm##ix##_auto_point##ap##_pwm, S_IRUGO, \
show_pwm_auto_point_pwm, NULL, \
ap-1, ix-1)
static struct sensor_device_attribute_2 vt1211_sysfs_fan_pwm[] = ;
static struct device_attribute vt1211_sysfs_misc[] = ;
static void __devinit vt1211_init_device(struct vt1211_data *data)
static void vt1211_remove_sysfs(struct platform_device *pdev)
static int __devinit vt1211_probe(struct platform_device *pdev)
static int __devexit vt1211_remove(struct platform_device *pdev)
static struct platform_driver vt1211_driver = ;
static int __init vt1211_device_add(unsigned short address)
static int __init vt1211_find(int sio_cip, unsigned short *address)
static int __init vt1211_init(void)
static void __exit vt1211_exit(void)
MODULE_AUTHOR("Juerg Haefliger <juergh@gmail.com>");
MODULE_DESCRIPTION("VT1211 sensors");
MODULE_LICENSE("GPL");
module_init(vt1211_init);
module_exit(vt1211_exit);
