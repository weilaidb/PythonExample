#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct platform_device *pdev;
#define DRVNAME "w83627hf"
enum chips ;
struct w83627hf_sio_data ;
static u8 force_i2c = 0x1f;
module_param(force_i2c, byte, 0);
MODULE_PARM_DESC(force_i2c,
"Initialize the i2c address of the sensors");
static int init = 1;
module_param(init, bool, 0);
MODULE_PARM_DESC(init, "Set to zero to bypass chip initialization");
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
#define	DEV	0x07
#define W83627HF_LD_FDC		0x00
#define W83627HF_LD_PRT		0x01
#define W83627HF_LD_UART1	0x02
#define W83627HF_LD_UART2	0x03
#define W83627HF_LD_KBC		0x05
#define W83627HF_LD_CIR		0x06
#define W83627HF_LD_GAME	0x07
#define W83627HF_LD_MIDI	0x07
#define W83627HF_LD_GPIO1	0x07
#define W83627HF_LD_GPIO5	0x07
#define W83627HF_LD_GPIO2	0x08
#define W83627HF_LD_GPIO3	0x09
#define W83627HF_LD_GPIO4	0x09
#define W83627HF_LD_ACPI	0x0a
#define W83627HF_LD_HWM		0x0b
#define	DEVID	0x20
#define W83627THF_GPIO5_EN	0x30
#define W83627THF_GPIO5_IOSR	0xf3
#define W83627THF_GPIO5_DR	0xf4
#define W83687THF_VID_EN	0x29
#define W83687THF_VID_CFG	0xF0
#define W83687THF_VID_DATA	0xF1
static inline void
superio_outb(struct w83627hf_sio_data *sio, int reg, int val)
static inline int
superio_inb(struct w83627hf_sio_data *sio, int reg)
static inline void
superio_select(struct w83627hf_sio_data *sio, int ld)
static inline void
superio_enter(struct w83627hf_sio_data *sio)
static inline void
superio_exit(struct w83627hf_sio_data *sio)
#define W627_DEVID 0x52
#define W627THF_DEVID 0x82
#define W697_DEVID 0x60
#define W637_DEVID 0x70
#define W687THF_DEVID 0x85
#define WINB_ACT_REG 0x30
#define WINB_BASE_REG 0x60
#define WINB_ALIGNMENT		~7
#define WINB_REGION_OFFSET	5
#define WINB_REGION_SIZE	2
#define W83781D_ADDR_REG_OFFSET 0
#define W83781D_DATA_REG_OFFSET 1
#define W83781D_REG_IN_MAX(nr) ((nr < 7) ? (0x2b + (nr) * 2) : \
(0x554 + (((nr) - 7) * 2)))
#define W83781D_REG_IN_MIN(nr) ((nr < 7) ? (0x2c + (nr) * 2) : \
(0x555 + (((nr) - 7) * 2)))
#define W83781D_REG_IN(nr)     ((nr < 7) ? (0x20 + (nr)) : \
(0x550 + (nr) - 7))
#define W83627HF_REG_FAN_MIN(nr)	(0x3b + (nr))
#define W83627HF_REG_FAN(nr)		(0x28 + (nr))
#define W83627HF_REG_TEMP2_CONFIG 0x152
#define W83627HF_REG_TEMP3_CONFIG 0x252
static const u16 w83627hf_reg_temp[]		= ;
static const u16 w83627hf_reg_temp_hyst[]	= ;
static const u16 w83627hf_reg_temp_over[]	= ;
#define W83781D_REG_BANK 0x4E
#define W83781D_REG_CONFIG 0x40
#define W83781D_REG_ALARM1 0x459
#define W83781D_REG_ALARM2 0x45A
#define W83781D_REG_ALARM3 0x45B
#define W83781D_REG_BEEP_CONFIG 0x4D
#define W83781D_REG_BEEP_INTS1 0x56
#define W83781D_REG_BEEP_INTS2 0x57
#define W83781D_REG_BEEP_INTS3 0x453
#define W83781D_REG_VID_FANDIV 0x47
#define W83781D_REG_CHIPID 0x49
#define W83781D_REG_WCHIPID 0x58
#define W83781D_REG_CHIPMAN 0x4F
#define W83781D_REG_PIN 0x4B
#define W83781D_REG_VBAT 0x5D
#define W83627HF_REG_PWM1 0x5A
#define W83627HF_REG_PWM2 0x5B
static const u8 W83627THF_REG_PWM_ENABLE[] = ;
static const u8 W83627THF_PWM_ENABLE_SHIFT[] = ;
#define W83627THF_REG_PWM1		0x01
#define W83627THF_REG_PWM2		0x03
#define W83627THF_REG_PWM3		0x11
#define W83627THF_REG_VRM_OVT_CFG 	0x18
static const u8 regpwm_627hf[] = ;
static const u8 regpwm[] = ;
#define W836X7HF_REG_PWM(type, nr) (((type) == w83627hf) ? \
regpwm_627hf[nr] : regpwm[nr])
#define W83627HF_REG_PWM_FREQ		0x5C
#define W83637HF_REG_PWM_FREQ1		0x00
#define W83637HF_REG_PWM_FREQ2		0x02
#define W83637HF_REG_PWM_FREQ3		0x10
static const u8 W83637HF_REG_PWM_FREQ[] = ;
#define W83627HF_BASE_PWM_FREQ	46870
#define W83781D_REG_I2C_ADDR 0x48
#define W83781D_REG_I2C_SUBADDR 0x4A
#define W83781D_REG_SCFG1 0x5D
static const u8 BIT_SCFG1[] = ;
#define W83781D_REG_SCFG2 0x59
static const u8 BIT_SCFG2[] = ;
#define W83781D_DEFAULT_BETA 3435
#define IN_TO_REG(val)  (SENSORS_LIMIT((((val) + 8)/16),0,255))
#define IN_FROM_REG(val) ((val) * 16)
static inline u8 FAN_TO_REG(long rpm, int div)
#define TEMP_MIN (-128000)
#define TEMP_MAX ( 127000)
static u8 TEMP_TO_REG(long temp)
static int TEMP_FROM_REG(u8 reg)
#define FAN_FROM_REG(val,div) ((val)==0?-1:(val)==255?0:1350000/((val)*(div)))
#define PWM_TO_REG(val) (SENSORS_LIMIT((val),0,255))
static inline unsigned long pwm_freq_from_reg_627hf(u8 reg)
static inline u8 pwm_freq_to_reg_627hf(unsigned long val)
static inline unsigned long pwm_freq_from_reg(u8 reg)
static inline u8 pwm_freq_to_reg(unsigned long val)
#define BEEP_MASK_FROM_REG(val)		((val) & 0xff7fff)
#define BEEP_MASK_TO_REG(val)		((val) & 0xff7fff)
#define DIV_FROM_REG(val) (1 << (val))
static inline u8 DIV_TO_REG(long val)
struct w83627hf_data ;
static int w83627hf_probe(struct platform_device *pdev);
static int __devexit w83627hf_remove(struct platform_device *pdev);
static int w83627hf_read_value(struct w83627hf_data *data, u16 reg);
static int w83627hf_write_value(struct w83627hf_data *data, u16 reg, u16 value);
static void w83627hf_update_fan_div(struct w83627hf_data *data);
static struct w83627hf_data *w83627hf_update_device(struct device *dev);
static void w83627hf_init_device(struct platform_device *pdev);
static struct platform_driver w83627hf_driver = ;
static ssize_t
show_in_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_in_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_in_max(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_in_min(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t
store_in_max(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
#define sysfs_vin_decl(offset) \
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in_input, NULL, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO|S_IWUSR,	\
show_in_min, store_in_min, offset);	\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO|S_IWUSR,	\
show_in_max, store_in_max, offset);
sysfs_vin_decl(1);
sysfs_vin_decl(2);
sysfs_vin_decl(3);
sysfs_vin_decl(4);
sysfs_vin_decl(5);
sysfs_vin_decl(6);
sysfs_vin_decl(7);
sysfs_vin_decl(8);
static ssize_t show_in_0(struct w83627hf_data *data, char *buf, u8 reg)
static ssize_t show_regs_in_0(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_regs_in_min0(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t show_regs_in_max0(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t store_regs_in_min0(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t store_regs_in_max0(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(in0_input, S_IRUGO, show_regs_in_0, NULL);
static DEVICE_ATTR(in0_min, S_IRUGO | S_IWUSR,
show_regs_in_min0, store_regs_in_min0);
static DEVICE_ATTR(in0_max, S_IRUGO | S_IWUSR,
show_regs_in_max0, store_regs_in_max0);
static ssize_t
show_fan_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_fan_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_fan_min(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
#define sysfs_fan_decl(offset)	\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan_input, NULL, offset - 1);		\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, store_fan_min, offset - 1);
sysfs_fan_decl(1);
sysfs_fan_decl(2);
sysfs_fan_decl(3);
static ssize_t
show_temp(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
show_temp_max(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t
show_temp_max_hyst(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t
store_temp_max(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static ssize_t
store_temp_max_hyst(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
#define sysfs_temp_decl(offset) \
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);			\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO|S_IWUSR,	 	\
show_temp_max, store_temp_max, offset - 1);	\
static SENSOR_DEVICE_ATTR(temp##offset##_max_hyst, S_IRUGO|S_IWUSR,	\
show_temp_max_hyst, store_temp_max_hyst, offset - 1);
sysfs_temp_decl(1);
sysfs_temp_decl(2);
sysfs_temp_decl(3);
static ssize_t
show_vid_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid_reg, NULL);
static ssize_t
show_vrm_reg(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_vrm_reg(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm_reg, store_vrm_reg);
static ssize_t
show_alarms_reg(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms_reg, NULL);
static ssize_t
show_alarm(struct device *dev, struct device_attribute *attr, char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 9);
static SENSOR_DEVICE_ATTR(in6_alarm, S_IRUGO, show_alarm, NULL, 10);
static SENSOR_DEVICE_ATTR(in7_alarm, S_IRUGO, show_alarm, NULL, 16);
static SENSOR_DEVICE_ATTR(in8_alarm, S_IRUGO, show_alarm, NULL, 17);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static SENSOR_DEVICE_ATTR(fan3_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 5);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 13);
static ssize_t
show_beep_mask(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep_mask(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(beep_mask, S_IRUGO | S_IWUSR,
show_beep_mask, store_beep_mask);
static ssize_t
show_beep(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
store_beep(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(in0_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 0);
static SENSOR_DEVICE_ATTR(in1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 1);
static SENSOR_DEVICE_ATTR(in2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 2);
static SENSOR_DEVICE_ATTR(in3_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 3);
static SENSOR_DEVICE_ATTR(in4_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 8);
static SENSOR_DEVICE_ATTR(in5_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 9);
static SENSOR_DEVICE_ATTR(in6_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 10);
static SENSOR_DEVICE_ATTR(in7_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 16);
static SENSOR_DEVICE_ATTR(in8_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 17);
static SENSOR_DEVICE_ATTR(fan1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 6);
static SENSOR_DEVICE_ATTR(fan2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 7);
static SENSOR_DEVICE_ATTR(fan3_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 11);
static SENSOR_DEVICE_ATTR(temp1_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 4);
static SENSOR_DEVICE_ATTR(temp2_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 5);
static SENSOR_DEVICE_ATTR(temp3_beep, S_IRUGO | S_IWUSR,
show_beep, store_beep, 13);
static SENSOR_DEVICE_ATTR(beep_enable, S_IRUGO | S_IWUSR,
show_beep, store_beep, 15);
static ssize_t
show_fan_div(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_fan_div(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(fan1_div, S_IRUGO|S_IWUSR,
show_fan_div, store_fan_div, 0);
static SENSOR_DEVICE_ATTR(fan2_div, S_IRUGO|S_IWUSR,
show_fan_div, store_fan_div, 1);
static SENSOR_DEVICE_ATTR(fan3_div, S_IRUGO|S_IWUSR,
show_fan_div, store_fan_div, 2);
static ssize_t
show_pwm(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_pwm(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1, S_IRUGO|S_IWUSR, show_pwm, store_pwm, 0);
static SENSOR_DEVICE_ATTR(pwm2, S_IRUGO|S_IWUSR, show_pwm, store_pwm, 1);
static SENSOR_DEVICE_ATTR(pwm3, S_IRUGO|S_IWUSR, show_pwm, store_pwm, 2);
static ssize_t
show_pwm_enable(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_pwm_enable(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_enable, S_IRUGO|S_IWUSR, show_pwm_enable,
store_pwm_enable, 0);
static SENSOR_DEVICE_ATTR(pwm2_enable, S_IRUGO|S_IWUSR, show_pwm_enable,
store_pwm_enable, 1);
static SENSOR_DEVICE_ATTR(pwm3_enable, S_IRUGO|S_IWUSR, show_pwm_enable,
store_pwm_enable, 2);
static ssize_t
show_pwm_freq(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t
store_pwm_freq(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
static SENSOR_DEVICE_ATTR(pwm1_freq, S_IRUGO|S_IWUSR,
show_pwm_freq, store_pwm_freq, 0);
static SENSOR_DEVICE_ATTR(pwm2_freq, S_IRUGO|S_IWUSR,
show_pwm_freq, store_pwm_freq, 1);
static SENSOR_DEVICE_ATTR(pwm3_freq, S_IRUGO|S_IWUSR,
show_pwm_freq, store_pwm_freq, 2);
static ssize_t
show_temp_type(struct device *dev, struct device_attribute *devattr,
char *buf)
static ssize_t
store_temp_type(struct device *dev, struct device_attribute *devattr,
const char *buf, size_t count)
#define sysfs_temp_type(offset) \
static SENSOR_DEVICE_ATTR(temp##offset##_type, S_IRUGO | S_IWUSR, \
show_temp_type, store_temp_type, offset - 1);
sysfs_temp_type(1);
sysfs_temp_type(2);
sysfs_temp_type(3);
static ssize_t
show_name(struct device *dev, struct device_attribute *devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static int __init w83627hf_find(int sioaddr, unsigned short *addr,
struct w83627hf_sio_data *sio_data)
#define VIN_UNIT_ATTRS(_X_)	\
&sensor_dev_attr_in##_X_##_input.dev_attr.attr,		\
&sensor_dev_attr_in##_X_##_min.dev_attr.attr,		\
&sensor_dev_attr_in##_X_##_max.dev_attr.attr,		\
&sensor_dev_attr_in##_X_##_alarm.dev_attr.attr,		\
&sensor_dev_attr_in##_X_##_beep.dev_attr.attr
#define FAN_UNIT_ATTRS(_X_)	\
&sensor_dev_attr_fan##_X_##_input.dev_attr.attr,	\
&sensor_dev_attr_fan##_X_##_min.dev_attr.attr,		\
&sensor_dev_attr_fan##_X_##_div.dev_attr.attr,		\
&sensor_dev_attr_fan##_X_##_alarm.dev_attr.attr,	\
&sensor_dev_attr_fan##_X_##_beep.dev_attr.attr
#define TEMP_UNIT_ATTRS(_X_)	\
&sensor_dev_attr_temp##_X_##_input.dev_attr.attr,	\
&sensor_dev_attr_temp##_X_##_max.dev_attr.attr,		\
&sensor_dev_attr_temp##_X_##_max_hyst.dev_attr.attr,	\
&sensor_dev_attr_temp##_X_##_type.dev_attr.attr,	\
&sensor_dev_attr_temp##_X_##_alarm.dev_attr.attr,	\
&sensor_dev_attr_temp##_X_##_beep.dev_attr.attr
static struct attribute *w83627hf_attributes[] = ;
static const struct attribute_group w83627hf_group = ;
static struct attribute *w83627hf_attributes_opt[] = ;
static const struct attribute_group w83627hf_group_opt = ;
static int __devinit w83627hf_probe(struct platform_device *pdev)
static int __devexit w83627hf_remove(struct platform_device *pdev)
static inline void w83627hf_set_bank(struct w83627hf_data *data, u16 reg)
static inline void w83627hf_reset_bank(struct w83627hf_data *data, u16 reg)
static int w83627hf_read_value(struct w83627hf_data *data, u16 reg)
static int __devinit w83627thf_read_gpio5(struct platform_device *pdev)
static int __devinit w83687thf_read_vid(struct platform_device *pdev)
static int w83627hf_write_value(struct w83627hf_data *data, u16 reg, u16 value)
static void __devinit w83627hf_init_device(struct platform_device *pdev)
static void w83627hf_update_fan_div(struct w83627hf_data *data)
static struct w83627hf_data *w83627hf_update_device(struct device *dev)
static int __init w83627hf_device_add(unsigned short address,
const struct w83627hf_sio_data *sio_data)
static int __init sensors_w83627hf_init(void)
static void __exit sensors_w83627hf_exit(void)
MODULE_AUTHOR("Frodo Looijaard <frodol@dds.nl>, "
"Philip Edelbrock <phil@netroedge.com>, "
"and Mark Studebaker <mdsxyz123@yahoo.com>");
MODULE_DESCRIPTION("W83627HF driver");
MODULE_LICENSE("GPL");
module_init(sensors_w83627hf_init);
module_exit(sensors_w83627hf_exit);
