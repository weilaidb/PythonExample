#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static unsigned short force_addr;
module_param(force_addr, ushort, 0);
MODULE_PARM_DESC(force_addr,
"Initialize the base address of the sensors");
static struct platform_device *pdev;
#define VIA686A_EXTENT		0x80
#define VIA686A_BASE_REG	0x70
#define VIA686A_ENABLE_REG	0x74
#define VIA686A_REG_IN_MAX(nr)	(0x2b + ((nr) * 2))
#define VIA686A_REG_IN_MIN(nr)	(0x2c + ((nr) * 2))
#define VIA686A_REG_IN(nr)	(0x22 + (nr))
#define VIA686A_REG_FAN_MIN(nr)	(0x3a + (nr))
#define VIA686A_REG_FAN(nr)	(0x28 + (nr))
static const u8 VIA686A_REG_TEMP[]	= ;
static const u8 VIA686A_REG_TEMP_OVER[]	= ;
static const u8 VIA686A_REG_TEMP_HYST[]	= ;
#define VIA686A_REG_TEMP_LOW1	0x4b
#define VIA686A_REG_TEMP_LOW23	0x49
#define VIA686A_REG_ALARM1	0x41
#define VIA686A_REG_ALARM2	0x42
#define VIA686A_REG_FANDIV	0x47
#define VIA686A_REG_CONFIG	0x40
#define VIA686A_REG_TEMP_MODE		0x4b
#define VIA686A_TEMP_MODE_MASK		0x3F
#define VIA686A_TEMP_MODE_CONTINUOUS	0x00
static inline u8 IN_TO_REG(long val, int inNum)
static inline long IN_FROM_REG(u8 val, int inNum)
static inline u8 FAN_TO_REG(long rpm, int div)
#define FAN_FROM_REG(val,div) ((val)==0?0:(val)==255?0:1350000/((val)*(div)))
static const s16 tempLUT[] =
;
static const u8 viaLUT[] =
;
static inline u8 TEMP_TO_REG(long val)
#define TEMP_FROM_REG(val)	((long)tempLUT[val] * 100)
static inline long TEMP_FROM_REG10(u16 val)
#define DIV_FROM_REG(val) (1 << (val))
#define DIV_TO_REG(val) ((val)==8?3:(val)==4?2:(val)==1?0:1)
struct via686a_data ;
static struct pci_dev *s_bridge;
static int via686a_probe(struct platform_device *pdev);
static int __devexit via686a_remove(struct platform_device *pdev);
static inline int via686a_read_value(struct via686a_data *data, u8 reg)
static inline void via686a_write_value(struct via686a_data *data, u8 reg,
u8 value)
static struct via686a_data *via686a_update_device(struct device *dev);
static void via686a_init_device(struct via686a_data *data);
static ssize_t show_in(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_in_max(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_in_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_in_max(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_in_offset(offset)					\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);				\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset);
show_in_offset(0);
show_in_offset(1);
show_in_offset(2);
show_in_offset(3);
show_in_offset(4);
static ssize_t show_temp(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_temp_over(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_temp_hyst(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_temp_over(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_temp_hyst(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_temp_offset(offset)					\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_over, set_temp_over, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_max_hyst, S_IRUGO | S_IWUSR,	\
show_temp_hyst, set_temp_hyst, offset - 1);
show_temp_offset(1);
show_temp_offset(2);
show_temp_offset(3);
static ssize_t show_fan(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *da,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *da,
const char *buf, size_t count)
#define show_fan_offset(offset)						\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
show_fan_div, set_fan_div, offset - 1);
show_fan_offset(1);
show_fan_offset(2);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 15);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *via686a_attributes[] = ;
static const struct attribute_group via686a_group = ;
static struct platform_driver via686a_driver = ;
static int __devinit via686a_probe(struct platform_device *pdev)
static int __devexit via686a_remove(struct platform_device *pdev)
static void via686a_update_fan_div(struct via686a_data *data)
static void __devinit via686a_init_device(struct via686a_data *data)
static struct via686a_data *via686a_update_device(struct device *dev)
static const struct pci_device_id via686a_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, via686a_pci_ids);
static int __devinit via686a_device_add(unsigned short address)
static int __devinit via686a_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static struct pci_driver via686a_pci_driver = ;
static int __init sm_via686a_init(void)
static void __exit sm_via686a_exit(void)
MODULE_AUTHOR("Kyösti Mälkki <kmalkki@cc.hut.fi>, "
"Mark Studebaker <mdsxyz123@yahoo.com> "
"and Bob Dougherty <bobd@stanford.edu>");
MODULE_DESCRIPTION("VIA 686A Sensor device");
MODULE_LICENSE("GPL");
module_init(sm_via686a_init);
module_exit(sm_via686a_exit);
