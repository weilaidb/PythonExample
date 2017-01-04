#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct platform_device *pdev;
static int force_start;
module_param(force_start, bool, 0);
MODULE_PARM_DESC(force_start, "Force the chip to start monitoring inputs");
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
static int probe_all_addr;
module_param(probe_all_addr, bool, 0);
MODULE_PARM_DESC(probe_all_addr, "Include probing of non-standard LPC "
"addresses");
static const unsigned short normal_i2c[] = ;
enum chips ;
#define	DME1737_REG_IN(ix)		((ix) < 5 ? 0x20 + (ix) : \
(ix) < 7 ? 0x94 + (ix) : \
0x1f)
#define	DME1737_REG_IN_MIN(ix)		((ix) < 5 ? 0x44 + (ix) * 2 \
: 0x91 + (ix) * 2)
#define	DME1737_REG_IN_MAX(ix)		((ix) < 5 ? 0x45 + (ix) * 2 \
: 0x92 + (ix) * 2)
#define DME1737_REG_TEMP(ix)		(0x25 + (ix))
#define DME1737_REG_TEMP_MIN(ix)	(0x4e + (ix) * 2)
#define DME1737_REG_TEMP_MAX(ix)	(0x4f + (ix) * 2)
#define DME1737_REG_TEMP_OFFSET(ix)	((ix) == 0 ? 0x1f \
: 0x1c + (ix))
#define DME1737_REG_IN_TEMP_LSB(ix)	(0x84 + (ix))
static const u8 DME1737_REG_IN_LSB[] = ;
static const u8 DME1737_REG_IN_LSB_SHL[] = ;
static const u8 DME1737_REG_TEMP_LSB[] = ;
static const u8 DME1737_REG_TEMP_LSB_SHL[] = ;
#define DME1737_REG_FAN(ix)		((ix) < 4 ? 0x28 + (ix) * 2 \
: 0xa1 + (ix) * 2)
#define DME1737_REG_FAN_MIN(ix)		((ix) < 4 ? 0x54 + (ix) * 2 \
: 0xa5 + (ix) * 2)
#define DME1737_REG_FAN_OPT(ix)		((ix) < 4 ? 0x90 + (ix) \
: 0xb2 + (ix))
#define DME1737_REG_FAN_MAX(ix)		(0xb4 + (ix))
#define DME1737_REG_PWM(ix)		((ix) < 3 ? 0x30 + (ix) \
: 0xa1 + (ix))
#define DME1737_REG_PWM_CONFIG(ix)	(0x5c + (ix))
#define DME1737_REG_PWM_MIN(ix)		(0x64 + (ix))
#define DME1737_REG_PWM_FREQ(ix)	((ix) < 3 ? 0x5f + (ix) \
: 0xa3 + (ix))
#define DME1737_REG_PWM_RR(ix)		(0x62 + (ix))
#define DME1737_REG_ZONE_LOW(ix)	(0x67 + (ix))
#define DME1737_REG_ZONE_ABS(ix)	(0x6a + (ix))
#define DME1737_REG_ZONE_HYST(ix)	(0x6d + (ix))
#define DME1737_REG_ALARM1		0x41
#define DME1737_REG_ALARM2		0x42
#define DME1737_REG_ALARM3		0x83
static const u8 DME1737_BIT_ALARM_IN[] = ;
static const u8 DME1737_BIT_ALARM_TEMP[] = ;
static const u8 DME1737_BIT_ALARM_FAN[] = ;
#define DME1737_REG_DEVICE		0x3d
#define DME1737_REG_COMPANY		0x3e
#define DME1737_REG_VERSTEP		0x3f
#define DME1737_REG_CONFIG		0x40
#define DME1737_REG_CONFIG2		0x7f
#define DME1737_REG_VID			0x43
#define DME1737_REG_TACH_PWM		0x81
#define DME1737_COMPANY_SMSC	0x5c
#define DME1737_VERSTEP		0x88
#define DME1737_VERSTEP_MASK	0xf8
#define SCH311X_DEVICE		0x8c
#define SCH5027_VERSTEP		0x69
#define SCH5127_DEVICE		0x8e
#define DME1737_ID_1	0x77
#define DME1737_ID_2	0x78
#define SCH3112_ID	0x7c
#define SCH3114_ID	0x7d
#define SCH3116_ID	0x7f
#define SCH5027_ID	0x89
#define SCH5127_ID	0x86
#define DME1737_EXTENT	2
#define HAS_TEMP_OFFSET		(1 << 0)
#define HAS_VID			(1 << 1)
#define HAS_ZONE3		(1 << 2)
#define HAS_ZONE_HYST		(1 << 3)
#define HAS_PWM_MIN		(1 << 4)
#define HAS_FAN(ix)		(1 << ((ix) + 5))
#define HAS_PWM(ix)		(1 << ((ix) + 11))
#define HAS_IN7			(1 << 17)
struct dme1737_data ;
static const int IN_NOMINAL_DME1737[] = ;
static const int IN_NOMINAL_SCH311x[] = ;
static const int IN_NOMINAL_SCH5027[] = ;
static const int IN_NOMINAL_SCH5127[] = ;
#define IN_NOMINAL(type)	((type) == sch311x ? IN_NOMINAL_SCH311x : \
(type) == sch5027 ? IN_NOMINAL_SCH5027 : \
(type) == sch5127 ? IN_NOMINAL_SCH5127 : \
IN_NOMINAL_DME1737)
static inline int IN_FROM_REG(int reg, int nominal, int res)
static inline int IN_TO_REG(int val, int nominal)
static inline int TEMP_FROM_REG(int reg, int res)
static inline int TEMP_TO_REG(int val)
static const int TEMP_RANGE[] = ;
static inline int TEMP_RANGE_FROM_REG(int reg)
static int TEMP_RANGE_TO_REG(int val, int reg)
static inline int TEMP_HYST_FROM_REG(int reg, int ix)
static inline int TEMP_HYST_TO_REG(int val, int ix, int reg)
static inline int FAN_FROM_REG(int reg, int tpc)
static inline int FAN_TO_REG(int val, int tpc)
static inline int FAN_TPC_FROM_REG(int reg)
static inline int FAN_TYPE_FROM_REG(int reg)
static inline int FAN_TYPE_TO_REG(int val, int reg)
static const int FAN_MAX[] = ;
static int FAN_MAX_FROM_REG(int reg)
static int FAN_MAX_TO_REG(int val)
static inline int PWM_EN_FROM_REG(int reg)
static inline int PWM_EN_TO_REG(int val, int reg)
static inline int PWM_ACZ_FROM_REG(int reg)
static inline int PWM_ACZ_TO_REG(int val, int reg)
static const int PWM_FREQ[] = ;
static inline int PWM_FREQ_FROM_REG(int reg)
static int PWM_FREQ_TO_REG(int val, int reg)
static const u8 PWM_RR[] = ;
static inline int PWM_RR_FROM_REG(int reg, int ix)
static int PWM_RR_TO_REG(int val, int ix, int reg)
static inline int PWM_RR_EN_FROM_REG(int reg, int ix)
static inline int PWM_RR_EN_TO_REG(int val, int ix, int reg)
static inline int PWM_OFF_FROM_REG(int reg, int ix)
static inline int PWM_OFF_TO_REG(int val, int ix, int reg)
static u8 dme1737_read(const struct dme1737_data *data, u8 reg)
static s32 dme1737_write(const struct dme1737_data *data, u8 reg, u8 val)
static struct dme1737_data *dme1737_update_device(struct device *dev)
#define SYS_IN_INPUT	0
#define SYS_IN_MIN	1
#define SYS_IN_MAX	2
#define SYS_IN_ALARM	3
static ssize_t show_in(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SYS_TEMP_INPUT			0
#define SYS_TEMP_MIN			1
#define SYS_TEMP_MAX			2
#define SYS_TEMP_OFFSET			3
#define SYS_TEMP_ALARM			4
#define SYS_TEMP_FAULT			5
static ssize_t show_temp(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SYS_ZONE_AUTO_CHANNELS_TEMP	0
#define SYS_ZONE_AUTO_POINT1_TEMP_HYST	1
#define SYS_ZONE_AUTO_POINT1_TEMP	2
#define SYS_ZONE_AUTO_POINT2_TEMP	3
#define SYS_ZONE_AUTO_POINT3_TEMP	4
static ssize_t show_zone(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_zone(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SYS_FAN_INPUT	0
#define SYS_FAN_MIN	1
#define SYS_FAN_MAX	2
#define SYS_FAN_ALARM	3
#define SYS_FAN_TYPE	4
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define SYS_PWM				0
#define SYS_PWM_FREQ			1
#define SYS_PWM_ENABLE			2
#define SYS_PWM_RAMP_RATE		3
#define SYS_PWM_AUTO_CHANNELS_ZONE	4
#define SYS_PWM_AUTO_PWM_MIN		5
#define SYS_PWM_AUTO_POINT1_PWM		6
#define SYS_PWM_AUTO_POINT2_PWM		7
static ssize_t show_pwm(struct device *dev, struct device_attribute *attr,
char *buf)
static struct attribute *dme1737_pwm_chmod_attr[];
static void dme1737_chmod_file(struct device*, struct attribute*, mode_t);
static ssize_t set_pwm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_vid(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_name(struct device *dev, struct device_attribute *attr,
char *buf)
#define SENSOR_DEVICE_ATTR_IN(ix) \
static SENSOR_DEVICE_ATTR_2(in##ix##_input, S_IRUGO, \
show_in, NULL, SYS_IN_INPUT, ix); \
static SENSOR_DEVICE_ATTR_2(in##ix##_min, S_IRUGO | S_IWUSR, \
show_in, set_in, SYS_IN_MIN, ix); \
static SENSOR_DEVICE_ATTR_2(in##ix##_max, S_IRUGO | S_IWUSR, \
show_in, set_in, SYS_IN_MAX, ix); \
static SENSOR_DEVICE_ATTR_2(in##ix##_alarm, S_IRUGO, \
show_in, NULL, SYS_IN_ALARM, ix)
SENSOR_DEVICE_ATTR_IN(0);
SENSOR_DEVICE_ATTR_IN(1);
SENSOR_DEVICE_ATTR_IN(2);
SENSOR_DEVICE_ATTR_IN(3);
SENSOR_DEVICE_ATTR_IN(4);
SENSOR_DEVICE_ATTR_IN(5);
SENSOR_DEVICE_ATTR_IN(6);
SENSOR_DEVICE_ATTR_IN(7);
#define SENSOR_DEVICE_ATTR_TEMP(ix) \
static SENSOR_DEVICE_ATTR_2(temp##ix##_input, S_IRUGO, \
show_temp, NULL, SYS_TEMP_INPUT, ix-1); \
static SENSOR_DEVICE_ATTR_2(temp##ix##_min, S_IRUGO | S_IWUSR, \
show_temp, set_temp, SYS_TEMP_MIN, ix-1); \
static SENSOR_DEVICE_ATTR_2(temp##ix##_max, S_IRUGO | S_IWUSR, \
show_temp, set_temp, SYS_TEMP_MAX, ix-1); \
static SENSOR_DEVICE_ATTR_2(temp##ix##_offset, S_IRUGO, \
show_temp, set_temp, SYS_TEMP_OFFSET, ix-1); \
static SENSOR_DEVICE_ATTR_2(temp##ix##_alarm, S_IRUGO, \
show_temp, NULL, SYS_TEMP_ALARM, ix-1); \
static SENSOR_DEVICE_ATTR_2(temp##ix##_fault, S_IRUGO, \
show_temp, NULL, SYS_TEMP_FAULT, ix-1)
SENSOR_DEVICE_ATTR_TEMP(1);
SENSOR_DEVICE_ATTR_TEMP(2);
SENSOR_DEVICE_ATTR_TEMP(3);
#define SENSOR_DEVICE_ATTR_ZONE(ix) \
static SENSOR_DEVICE_ATTR_2(zone##ix##_auto_channels_temp, S_IRUGO, \
show_zone, NULL, SYS_ZONE_AUTO_CHANNELS_TEMP, ix-1); \
static SENSOR_DEVICE_ATTR_2(zone##ix##_auto_point1_temp_hyst, S_IRUGO, \
show_zone, set_zone, SYS_ZONE_AUTO_POINT1_TEMP_HYST, ix-1); \
static SENSOR_DEVICE_ATTR_2(zone##ix##_auto_point1_temp, S_IRUGO, \
show_zone, set_zone, SYS_ZONE_AUTO_POINT1_TEMP, ix-1); \
static SENSOR_DEVICE_ATTR_2(zone##ix##_auto_point2_temp, S_IRUGO, \
show_zone, set_zone, SYS_ZONE_AUTO_POINT2_TEMP, ix-1); \
static SENSOR_DEVICE_ATTR_2(zone##ix##_auto_point3_temp, S_IRUGO, \
show_zone, set_zone, SYS_ZONE_AUTO_POINT3_TEMP, ix-1)
SENSOR_DEVICE_ATTR_ZONE(1);
SENSOR_DEVICE_ATTR_ZONE(2);
SENSOR_DEVICE_ATTR_ZONE(3);
#define SENSOR_DEVICE_ATTR_FAN_1TO4(ix) \
static SENSOR_DEVICE_ATTR_2(fan##ix##_input, S_IRUGO, \
show_fan, NULL, SYS_FAN_INPUT, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_min, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SYS_FAN_MIN, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_alarm, S_IRUGO, \
show_fan, NULL, SYS_FAN_ALARM, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_type, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SYS_FAN_TYPE, ix-1)
SENSOR_DEVICE_ATTR_FAN_1TO4(1);
SENSOR_DEVICE_ATTR_FAN_1TO4(2);
SENSOR_DEVICE_ATTR_FAN_1TO4(3);
SENSOR_DEVICE_ATTR_FAN_1TO4(4);
#define SENSOR_DEVICE_ATTR_FAN_5TO6(ix) \
static SENSOR_DEVICE_ATTR_2(fan##ix##_input, S_IRUGO, \
show_fan, NULL, SYS_FAN_INPUT, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_min, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SYS_FAN_MIN, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_alarm, S_IRUGO, \
show_fan, NULL, SYS_FAN_ALARM, ix-1); \
static SENSOR_DEVICE_ATTR_2(fan##ix##_max, S_IRUGO | S_IWUSR, \
show_fan, set_fan, SYS_FAN_MAX, ix-1)
SENSOR_DEVICE_ATTR_FAN_5TO6(5);
SENSOR_DEVICE_ATTR_FAN_5TO6(6);
#define SENSOR_DEVICE_ATTR_PWM_1TO3(ix) \
static SENSOR_DEVICE_ATTR_2(pwm##ix, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_freq, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_FREQ, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_enable, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_ENABLE, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_ramp_rate, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_RAMP_RATE, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_auto_channels_zone, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_AUTO_CHANNELS_ZONE, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_auto_pwm_min, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_AUTO_PWM_MIN, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_auto_point1_pwm, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_AUTO_POINT1_PWM, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_auto_point2_pwm, S_IRUGO, \
show_pwm, NULL, SYS_PWM_AUTO_POINT2_PWM, ix-1)
SENSOR_DEVICE_ATTR_PWM_1TO3(1);
SENSOR_DEVICE_ATTR_PWM_1TO3(2);
SENSOR_DEVICE_ATTR_PWM_1TO3(3);
#define SENSOR_DEVICE_ATTR_PWM_5TO6(ix) \
static SENSOR_DEVICE_ATTR_2(pwm##ix, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_freq, S_IRUGO, \
show_pwm, set_pwm, SYS_PWM_FREQ, ix-1); \
static SENSOR_DEVICE_ATTR_2(pwm##ix##_enable, S_IRUGO, \
show_pwm, NULL, SYS_PWM_ENABLE, ix-1)
SENSOR_DEVICE_ATTR_PWM_5TO6(5);
SENSOR_DEVICE_ATTR_PWM_5TO6(6);
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *dme1737_attr[] = ;
static const struct attribute_group dme1737_group = ;
static struct attribute *dme1737_temp_offset_attr[] = ;
static const struct attribute_group dme1737_temp_offset_group = ;
static struct attribute *dme1737_vid_attr[] = ;
static const struct attribute_group dme1737_vid_group = ;
static struct attribute *dme1737_zone3_attr[] = ;
static const struct attribute_group dme1737_zone3_group = ;
static struct attribute *dme1737_zone_hyst_attr[] = ;
static const struct attribute_group dme1737_zone_hyst_group = ;
static struct attribute *dme1737_in7_attr[] = ;
static const struct attribute_group dme1737_in7_group = ;
static struct attribute *dme1737_pwm1_attr[] = ;
static struct attribute *dme1737_pwm2_attr[] = ;
static struct attribute *dme1737_pwm3_attr[] = ;
static struct attribute *dme1737_pwm5_attr[] = ;
static struct attribute *dme1737_pwm6_attr[] = ;
static const struct attribute_group dme1737_pwm_group[] = ;
static struct attribute *dme1737_auto_pwm_min_attr[] = ;
static struct attribute *dme1737_fan1_attr[] = ;
static struct attribute *dme1737_fan2_attr[] = ;
static struct attribute *dme1737_fan3_attr[] = ;
static struct attribute *dme1737_fan4_attr[] = ;
static struct attribute *dme1737_fan5_attr[] = ;
static struct attribute *dme1737_fan6_attr[] = ;
static const struct attribute_group dme1737_fan_group[] = ;
static struct attribute *dme1737_zone_chmod_attr[] = ;
static const struct attribute_group dme1737_zone_chmod_group = ;
static struct attribute *dme1737_zone3_chmod_attr[] = ;
static const struct attribute_group dme1737_zone3_chmod_group = ;
static struct attribute *dme1737_pwm1_chmod_attr[] = ;
static struct attribute *dme1737_pwm2_chmod_attr[] = ;
static struct attribute *dme1737_pwm3_chmod_attr[] = ;
static struct attribute *dme1737_pwm5_chmod_attr[] = ;
static struct attribute *dme1737_pwm6_chmod_attr[] = ;
static const struct attribute_group dme1737_pwm_chmod_group[] = ;
static struct attribute *dme1737_pwm_chmod_attr[] = ;
static inline void dme1737_sio_enter(int sio_cip)
static inline void dme1737_sio_exit(int sio_cip)
static inline int dme1737_sio_inb(int sio_cip, int reg)
static inline void dme1737_sio_outb(int sio_cip, int reg, int val)
static int dme1737_i2c_get_features(int, struct dme1737_data*);
static void dme1737_chmod_file(struct device *dev,
struct attribute *attr, mode_t mode)
static void dme1737_chmod_group(struct device *dev,
const struct attribute_group *group,
mode_t mode)
static void dme1737_remove_files(struct device *dev)
static int dme1737_create_files(struct device *dev)
static int dme1737_init_device(struct device *dev)
static struct i2c_driver dme1737_i2c_driver;
static int dme1737_i2c_get_features(int sio_cip, struct dme1737_data *data)
static int dme1737_i2c_detect(struct i2c_client *client,
struct i2c_board_info *info)
static int dme1737_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int dme1737_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id dme1737_id[] = ;
MODULE_DEVICE_TABLE(i2c, dme1737_id);
static struct i2c_driver dme1737_i2c_driver = ;
static int __init dme1737_isa_detect(int sio_cip, unsigned short *addr)
static int __init dme1737_isa_device_add(unsigned short addr)
static int __devinit dme1737_isa_probe(struct platform_device *pdev)
static int __devexit dme1737_isa_remove(struct platform_device *pdev)
static struct platform_driver dme1737_isa_driver = ;
static int __init dme1737_init(void)
static void __exit dme1737_exit(void)
MODULE_AUTHOR("Juerg Haefliger <juergh@gmail.com>");
MODULE_DESCRIPTION("DME1737 sensors");
MODULE_LICENSE("GPL");
module_init(dme1737_init);
module_exit(dme1737_exit);
