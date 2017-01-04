#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static u8 devid;
static struct platform_device *pdev;
static unsigned short extra_isa[3];
static u8 confreg[4];
static int init = 1;
module_param(init, int, 0);
MODULE_PARM_DESC(init,
"Chip initialization level:\n"
" 0: None\n"
"*1: Forcibly enable internal voltage and temperature channels, except in9\n"
" 2: Forcibly enable all voltage and temperature channels, except in9\n"
" 3: Forcibly enable all voltage and temperature channels, including in9");
static unsigned short force_id;
module_param(force_id, ushort, 0);
MODULE_PARM_DESC(force_id, "Override the detected device ID");
#define DEV	0x07
#define DEVID	0x20
#define ACT	0x30
#define BASE	0x60
#define FSCM	0x09
#define VLM	0x0d
#define TMS	0x0e
#define LDNI_MAX 3
static const u8 logdev[LDNI_MAX] = ;
#define LD_FAN		0
#define LD_IN		1
#define LD_TEMP		2
static inline void superio_outb(int sioaddr, int reg, int val)
static inline int superio_inb(int sioaddr, int reg)
static inline void superio_exit(int sioaddr)
#define PC87360_EXTENT		0x10
#define PC87365_REG_BANK	0x09
#define NO_BANK			0xff
#define PC87360_REG_PRESCALE(nr)	(0x00 + 2 * (nr))
#define PC87360_REG_PWM(nr)		(0x01 + 2 * (nr))
#define PC87360_REG_FAN_MIN(nr)		(0x06 + 3 * (nr))
#define PC87360_REG_FAN(nr)		(0x07 + 3 * (nr))
#define PC87360_REG_FAN_STATUS(nr)	(0x08 + 3 * (nr))
#define FAN_FROM_REG(val,div)		((val) == 0 ? 0: \
480000 / ((val)*(div)))
#define FAN_TO_REG(val,div)		((val) <= 100 ? 0 : \
480000 / ((val)*(div)))
#define FAN_DIV_FROM_REG(val)		(1 << ((val >> 5) & 0x03))
#define FAN_STATUS_FROM_REG(val)	((val) & 0x07)
#define FAN_CONFIG_MONITOR(val,nr)	(((val) >> (2 + nr * 3)) & 1)
#define FAN_CONFIG_CONTROL(val,nr)	(((val) >> (3 + nr * 3)) & 1)
#define FAN_CONFIG_INVERT(val,nr)	(((val) >> (4 + nr * 3)) & 1)
#define PWM_FROM_REG(val,inv)		((inv) ? 255 - (val) : (val))
static inline u8 PWM_TO_REG(int val, int inv)
#define PC87365_REG_IN_CONVRATE		0x07
#define PC87365_REG_IN_CONFIG		0x08
#define PC87365_REG_IN			0x0B
#define PC87365_REG_IN_MIN		0x0D
#define PC87365_REG_IN_MAX		0x0C
#define PC87365_REG_IN_STATUS		0x0A
#define PC87365_REG_IN_ALARMS1		0x00
#define PC87365_REG_IN_ALARMS2		0x01
#define PC87365_REG_VID			0x06
#define IN_FROM_REG(val,ref)		(((val) * (ref) + 128) / 256)
#define IN_TO_REG(val,ref)		((val) < 0 ? 0 : \
(val)*256 >= (ref)*255 ? 255: \
((val) * 256 + (ref)/2) / (ref))
#define PC87365_REG_TEMP_CONFIG		0x08
#define PC87365_REG_TEMP		0x0B
#define PC87365_REG_TEMP_MIN		0x0D
#define PC87365_REG_TEMP_MAX		0x0C
#define PC87365_REG_TEMP_CRIT		0x0E
#define PC87365_REG_TEMP_STATUS		0x0A
#define PC87365_REG_TEMP_ALARMS		0x00
#define TEMP_FROM_REG(val)		((val) * 1000)
#define TEMP_TO_REG(val)		((val) < -55000 ? -55 : \
(val) > 127000 ? 127 : \
(val) < 0 ? ((val) - 500) / 1000 : \
((val) + 500) / 1000)
struct pc87360_data ;
static int pc87360_probe(struct platform_device *pdev);
static int __devexit pc87360_remove(struct platform_device *pdev);
static int pc87360_read_value(struct pc87360_data *data, u8 ldi, u8 bank,
u8 reg);
static void pc87360_write_value(struct pc87360_data *data, u8 ldi, u8 bank,
u8 reg, u8 value);
static void pc87360_init_device(struct platform_device *pdev,
int use_thermistors);
static struct pc87360_data *pc87360_update_device(struct device *dev);
static struct platform_driver pc87360_driver = ;
static ssize_t show_fan_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_fan_status(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static struct sensor_device_attribute fan_input[] = ;
static struct sensor_device_attribute fan_status[] = ;
static struct sensor_device_attribute fan_div[] = ;
static struct sensor_device_attribute fan_min[] = ;
#define FAN_UNIT_ATTRS(X)	\
&fan_input[X].dev_attr.attr,	\
&fan_status[X].dev_attr.attr,	\
&fan_div[X].dev_attr.attr,	\
&fan_min[X].dev_attr.attr
static ssize_t show_pwm(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_pwm(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static struct sensor_device_attribute pwm[] = ;
static struct attribute * pc8736x_fan_attr_array[] = ;
static const struct attribute_group pc8736x_fan_group = ;
static ssize_t show_in_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_in_status(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static struct sensor_device_attribute in_input[] = ;
static struct sensor_device_attribute in_status[] = ;
static struct sensor_device_attribute in_min[] = ;
static struct sensor_device_attribute in_max[] = ;
#define CHAN_ALM_MIN	0x02
#define CHAN_ALM_MAX	0x04
#define TEMP_ALM_CRIT	0x08
static ssize_t show_in_min_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_in_max_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static struct sensor_device_attribute in_min_alarm[] = ;
static struct sensor_device_attribute in_max_alarm[] = ;
#define VIN_UNIT_ATTRS(X) \
&in_input[X].dev_attr.attr,	\
&in_status[X].dev_attr.attr,	\
&in_min[X].dev_attr.attr,	\
&in_max[X].dev_attr.attr,	\
&in_min_alarm[X].dev_attr.attr,	\
&in_max_alarm[X].dev_attr.attr
static ssize_t show_vid(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(cpu0_vid, S_IRUGO, show_vid, NULL);
static ssize_t show_vrm(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t set_vrm(struct device *dev, struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(vrm, S_IRUGO | S_IWUSR, show_vrm, set_vrm);
static ssize_t show_in_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms_in, S_IRUGO, show_in_alarms, NULL);
static struct attribute *pc8736x_vin_attr_array[] = ;
static const struct attribute_group pc8736x_vin_group = ;
static ssize_t show_therm_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_therm_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_therm_max(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_therm_crit(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_therm_status(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_therm_min(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t set_therm_max(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t set_therm_crit(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static struct sensor_device_attribute therm_input[] = ;
static struct sensor_device_attribute therm_status[] = ;
static struct sensor_device_attribute therm_min[] = ;
static struct sensor_device_attribute therm_max[] = ;
static struct sensor_device_attribute therm_crit[] = ;
static ssize_t show_therm_min_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_therm_max_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_therm_crit_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static struct sensor_device_attribute therm_min_alarm[] = ;
static struct sensor_device_attribute therm_max_alarm[] = ;
static struct sensor_device_attribute therm_crit_alarm[] = ;
#define THERM_UNIT_ATTRS(X) \
&therm_input[X].dev_attr.attr,	\
&therm_status[X].dev_attr.attr,	\
&therm_min[X].dev_attr.attr,	\
&therm_max[X].dev_attr.attr,	\
&therm_crit[X].dev_attr.attr,	\
&therm_min_alarm[X].dev_attr.attr, \
&therm_max_alarm[X].dev_attr.attr, \
&therm_crit_alarm[X].dev_attr.attr
static struct attribute * pc8736x_therm_attr_array[] = ;
static const struct attribute_group pc8736x_therm_group = ;
static ssize_t show_temp_input(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_temp_min(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_temp_max(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_temp_crit(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t show_temp_status(struct device *dev, struct device_attribute *devattr, char *buf)
static ssize_t set_temp_min(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t set_temp_max(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static ssize_t set_temp_crit(struct device *dev, struct device_attribute *devattr, const char *buf,
size_t count)
static struct sensor_device_attribute temp_input[] = ;
static struct sensor_device_attribute temp_status[] = ;
static struct sensor_device_attribute temp_min[] = ;
static struct sensor_device_attribute temp_max[] = ;
static struct sensor_device_attribute temp_crit[] = ;
static ssize_t show_temp_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms_temp, S_IRUGO, show_temp_alarms, NULL);
static ssize_t show_temp_min_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_max_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_temp_crit_alarm(struct device *dev,
struct device_attribute *devattr, char *buf)
static struct sensor_device_attribute temp_min_alarm[] = ;
static struct sensor_device_attribute temp_max_alarm[] = ;
static struct sensor_device_attribute temp_crit_alarm[] = ;
#define TEMP_FAULT	0x40
static ssize_t show_temp_fault(struct device *dev,
struct device_attribute *devattr, char *buf)
static struct sensor_device_attribute temp_fault[] = ;
#define TEMP_UNIT_ATTRS(X) \
&temp_input[X].dev_attr.attr,	\
&temp_status[X].dev_attr.attr,	\
&temp_min[X].dev_attr.attr,	\
&temp_max[X].dev_attr.attr,	\
&temp_crit[X].dev_attr.attr,	\
&temp_min_alarm[X].dev_attr.attr, \
&temp_max_alarm[X].dev_attr.attr, \
&temp_crit_alarm[X].dev_attr.attr, \
&temp_fault[X].dev_attr.attr
static struct attribute * pc8736x_temp_attr_array[] = ;
static const struct attribute_group pc8736x_temp_group = ;
static ssize_t show_name(struct device *dev,
struct device_attribute *devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static int __init pc87360_find(int sioaddr, u8 *devid, unsigned short *addresses)
static int __devinit pc87360_probe(struct platform_device *pdev)
static int __devexit pc87360_remove(struct platform_device *pdev)
static int pc87360_read_value(struct pc87360_data *data, u8 ldi, u8 bank,
u8 reg)
static void pc87360_write_value(struct pc87360_data *data, u8 ldi, u8 bank,
u8 reg, u8 value)
#define CHAN_CNVRTD	0x80
#define CHAN_ENA	0x01
#define CHAN_ALM_ENA	0x10
#define CHAN_READY	(CHAN_ENA|CHAN_CNVRTD)
#define TEMP_OTS_OE	0x20
#define VIN_RW1C_MASK	(CHAN_READY|CHAN_ALM_MAX|CHAN_ALM_MIN)
#define TEMP_RW1C_MASK	(VIN_RW1C_MASK|TEMP_ALM_CRIT|TEMP_FAULT)
static void pc87360_init_device(struct platform_device *pdev,
int use_thermistors)
static void pc87360_autodiv(struct device *dev, int nr)
static struct pc87360_data *pc87360_update_device(struct device *dev)
static int __init pc87360_device_add(unsigned short address)
static int __init pc87360_init(void)
static void __exit pc87360_exit(void)
MODULE_AUTHOR("Jean Delvare <khali@linux-fr.org>");
MODULE_DESCRIPTION("PC8736x hardware monitor");
MODULE_LICENSE("GPL");
module_init(pc87360_init);
module_exit(pc87360_exit);
