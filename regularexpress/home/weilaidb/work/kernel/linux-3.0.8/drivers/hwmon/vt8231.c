#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int force_addr;
module_param(force_addr, int, 0);
MODULE_PARM_DESC(force_addr, "Initialize the base address of the sensors");
static struct platform_device *pdev;
#define VT8231_EXTENT 0x80
#define VT8231_BASE_REG 0x70
#define VT8231_ENABLE_REG 0x74
#define VT8231_REG_FAN_MIN(nr)	(0x3b + (nr))
#define VT8231_REG_FAN(nr)	(0x29 + (nr))
static const u8 regvolt[]    = ;
static const u8 regvoltmax[] = ;
static const u8 regvoltmin[] = ;
#define VT8231_REG_TEMP_LOW01	0x49
#define VT8231_REG_TEMP_LOW25	0x4d
static const u8 regtemp[]    = ;
static const u8 regtempmax[] = ;
static const u8 regtempmin[] = ;
#define TEMP_FROM_REG(reg)		(((253 * 4 - (reg)) * 550 + 105) / 210)
#define TEMP_MAXMIN_FROM_REG(reg)	(((253 - (reg)) * 2200 + 105) / 210)
#define TEMP_MAXMIN_TO_REG(val)		(253 - ((val) * 210 + 1100) / 2200)
#define VT8231_REG_CONFIG 0x40
#define VT8231_REG_ALARM1 0x41
#define VT8231_REG_ALARM2 0x42
#define VT8231_REG_FANDIV 0x47
#define VT8231_REG_UCH_CONFIG 0x4a
#define VT8231_REG_TEMP1_CONFIG 0x4b
#define VT8231_REG_TEMP2_CONFIG 0x4c
#define ISTEMP(i, ch_config) ((i) == 0 ? 1 : \
((ch_config) >> ((i)+1)) & 0x01)
#define ISVOLT(i, ch_config) ((i) == 5 ? 1 : \
!(((ch_config) >> ((i)+2)) & 0x01))
#define DIV_FROM_REG(val) (1 << (val))
static inline u8 FAN_TO_REG(long rpm, int div)
#define FAN_FROM_REG(val, div) ((val) == 0 ? 0 : 1310720 / ((val) * (div)))
struct vt8231_data ;
static struct pci_dev *s_bridge;
static int vt8231_probe(struct platform_device *pdev);
static int __devexit vt8231_remove(struct platform_device *pdev);
static struct vt8231_data *vt8231_update_device(struct device *dev);
static void vt8231_init_device(struct vt8231_data *data);
static inline int vt8231_read_value(struct vt8231_data *data, u8 reg)
static inline void vt8231_write_value(struct vt8231_data *data, u8 reg,
u8 value)
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
static ssize_t show_in5(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in5_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_in5_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_in5_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_in5_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define define_voltage_sysfs(offset)				\
static SENSOR_DEVICE_ATTR(in##offset##_input, S_IRUGO,		\
show_in, NULL, offset);				\
static SENSOR_DEVICE_ATTR(in##offset##_min, S_IRUGO | S_IWUSR,	\
show_in_min, set_in_min, offset);		\
static SENSOR_DEVICE_ATTR(in##offset##_max, S_IRUGO | S_IWUSR,	\
show_in_max, set_in_max, offset)
define_voltage_sysfs(0);
define_voltage_sysfs(1);
define_voltage_sysfs(2);
define_voltage_sysfs(3);
define_voltage_sysfs(4);
static DEVICE_ATTR(in5_input, S_IRUGO, show_in5, NULL);
static DEVICE_ATTR(in5_min, S_IRUGO | S_IWUSR, show_in5_min, set_in5_min);
static DEVICE_ATTR(in5_max, S_IRUGO | S_IWUSR, show_in5_max, set_in5_max);
static ssize_t show_temp0(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp0_max(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_temp0_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_temp0_max(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_temp0_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
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
#define define_temperature_sysfs(offset)				\
static SENSOR_DEVICE_ATTR(temp##offset##_input, S_IRUGO,		\
show_temp, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(temp##offset##_max, S_IRUGO | S_IWUSR,	\
show_temp_max, set_temp_max, offset - 1);		\
static SENSOR_DEVICE_ATTR(temp##offset##_max_hyst, S_IRUGO | S_IWUSR,	\
show_temp_min, set_temp_min, offset - 1)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp0, NULL);
static DEVICE_ATTR(temp1_max, S_IRUGO | S_IWUSR, show_temp0_max, set_temp0_max);
static DEVICE_ATTR(temp1_max_hyst, S_IRUGO | S_IWUSR, show_temp0_min, set_temp0_min);
define_temperature_sysfs(2);
define_temperature_sysfs(3);
define_temperature_sysfs(4);
define_temperature_sysfs(5);
define_temperature_sysfs(6);
static ssize_t show_fan(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_min(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_fan_div(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t set_fan_min(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t set_fan_div(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
#define define_fan_sysfs(offset)					\
static SENSOR_DEVICE_ATTR(fan##offset##_input, S_IRUGO,			\
show_fan, NULL, offset - 1);				\
static SENSOR_DEVICE_ATTR(fan##offset##_div, S_IRUGO | S_IWUSR,		\
show_fan_div, set_fan_div, offset - 1);			\
static SENSOR_DEVICE_ATTR(fan##offset##_min, S_IRUGO | S_IWUSR,		\
show_fan_min, set_fan_min, offset - 1)
define_fan_sysfs(1);
define_fan_sysfs(2);
static ssize_t show_alarms(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(alarms, S_IRUGO, show_alarms, NULL);
static ssize_t show_alarm(struct device *dev, struct device_attribute *attr,
char *buf)
static SENSOR_DEVICE_ATTR(temp1_alarm, S_IRUGO, show_alarm, NULL, 4);
static SENSOR_DEVICE_ATTR(temp2_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(temp3_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(temp4_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(temp5_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(temp6_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in0_alarm, S_IRUGO, show_alarm, NULL, 11);
static SENSOR_DEVICE_ATTR(in1_alarm, S_IRUGO, show_alarm, NULL, 0);
static SENSOR_DEVICE_ATTR(in2_alarm, S_IRUGO, show_alarm, NULL, 1);
static SENSOR_DEVICE_ATTR(in3_alarm, S_IRUGO, show_alarm, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_alarm, S_IRUGO, show_alarm, NULL, 8);
static SENSOR_DEVICE_ATTR(in5_alarm, S_IRUGO, show_alarm, NULL, 2);
static SENSOR_DEVICE_ATTR(fan1_alarm, S_IRUGO, show_alarm, NULL, 6);
static SENSOR_DEVICE_ATTR(fan2_alarm, S_IRUGO, show_alarm, NULL, 7);
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *vt8231_attributes_temps[6][5] = ;
static const struct attribute_group vt8231_group_temps[6] = ;
static struct attribute *vt8231_attributes_volts[6][5] = ;
static const struct attribute_group vt8231_group_volts[6] = ;
static struct attribute *vt8231_attributes[] = ;
static const struct attribute_group vt8231_group = ;
static struct platform_driver vt8231_driver = ;
static const struct pci_device_id vt8231_pci_ids[] = ;
MODULE_DEVICE_TABLE(pci, vt8231_pci_ids);
static int __devinit vt8231_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id);
static struct pci_driver vt8231_pci_driver = ;
static int vt8231_probe(struct platform_device *pdev)
static int __devexit vt8231_remove(struct platform_device *pdev)
static void vt8231_init_device(struct vt8231_data *data)
static struct vt8231_data *vt8231_update_device(struct device *dev)
static int __devinit vt8231_device_add(unsigned short address)
static int __devinit vt8231_pci_probe(struct pci_dev *dev,
const struct pci_device_id *id)
static int __init sm_vt8231_init(void)
static void __exit sm_vt8231_exit(void)
MODULE_AUTHOR("Roger Lucas <vt8231@hiddenengine.co.uk>");
MODULE_DESCRIPTION("VT8231 sensors");
MODULE_LICENSE("GPL");
module_init(sm_vt8231_init);
module_exit(sm_vt8231_exit);
